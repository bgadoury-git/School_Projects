// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"

// Background worker support
#include "Async/Async.h"
#include "Async/AsyncWork.h"

#include "TP1_Optimisation/TP1WorldSettings.h"

#include "BackgroundTicker.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoneCalculatingBackgroundBatch, const TArray<FTransform>&, AllTransforms);

/**
 * Background task that rotates transforms in-place for a [StartIndex, EndIndex) slice,
 * then schedules a game-thread callback.
 *
 * IMPORTANT: The owner must guarantee the array won't be resized while tasks are running.
 */
class FBackgroundRotateTransformsTask final : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FBackgroundRotateTransformsTask>;

	TArray<FTransform>* TransformsPtr = nullptr;
	int32 StartIndex = 0;
	int32 EndIndex = 0; // exclusive
	FQuat DeltaQuat;
	FQuat OriginQuat;
	TFunction<void()> GameThreadOnDone;

public:
	FBackgroundRotateTransformsTask(
		TArray<FTransform>* InTransformsPtr,
		const int32 InStartIndex,
		const int32 InEndIndex,
		const FQuat& InDeltaQuat,
		const FRotator& InRotationAroundOrigin,
		TFunction<void()>&& InGameThreadOnDone)
		: TransformsPtr(InTransformsPtr)
		, StartIndex(InStartIndex)
		, EndIndex(InEndIndex)
		, DeltaQuat(InDeltaQuat)
		, OriginQuat(InRotationAroundOrigin)
		, GameThreadOnDone(MoveTemp(InGameThreadOnDone))
	{
	}

	void DoWork()
	{
		if (!TransformsPtr || EndIndex <= StartIndex)
		{
			AsyncTask(ENamedThreads::GameThread, [OnDone = MoveTemp(GameThreadOnDone)]() mutable
			{
				if (OnDone)
				{
					OnDone();
				}
			});
			return;
		}

		const int32 SafeStart = FMath::Clamp(StartIndex, 0, TransformsPtr->Num());
		const int32 SafeEnd = FMath::Clamp(EndIndex, SafeStart, TransformsPtr->Num());

		// Use direct pointer access for better performance
		FTransform* TransformData = TransformsPtr->GetData();

		for (int32 ID = SafeStart; ID < SafeEnd; ++ID)
		{
			FTransform& Transform = TransformData[ID];
			
			// Rotate around world origin using quaternion (faster than FRotator)
			const FVector RotatedLocation = OriginQuat.RotateVector(Transform.GetLocation());
			Transform.SetLocation(RotatedLocation);
			
			// Rotate around own axis
			Transform.SetRotation(Transform.GetRotation() * DeltaQuat);
		}

		AsyncTask(ENamedThreads::GameThread, [OnDone = MoveTemp(GameThreadOnDone)]() mutable
		{
			if (OnDone)
			{
				OnDone();
			}
		});
	}

	static TStatId GetStatId();
};

/**
 * 
 */
UCLASS()
class TP1_OPTIMISATION_API UBackgroundTicker : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	
	TArray<FTransform> CubeTransforms;
	TAtomic<bool> bTaskRunning{ false };
	TAtomic<int32> Remaining{ 0 };

	void BroadcastDoneOnGameThread();

public:
	int AddTransformStructs(const FTransform& InitialTransform);
	
	FOnDoneCalculatingBackgroundBatch OnDoneCalculatingBackgroundBatch;

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	
	/** Enable/disable this subsystem via TP1 world settings. */
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override
	{
		if (!Super::ShouldCreateSubsystem(Outer))
		{
			return false;
		}

		const UWorld* World = Cast<UWorld>(Outer);
		if (!World)
		{
			return false;
		}

		if (World->WorldType != EWorldType::Game && World->WorldType != EWorldType::PIE)
		{
			return false;
		}

		const AWorldSettings* WS = World->GetWorldSettings(false);
		const ATP1WorldSettings* TP1WS = Cast<ATP1WorldSettings>(WS);
		return TP1WS ? TP1WS->bEnableBackgroundTicker : true;
	}
};
