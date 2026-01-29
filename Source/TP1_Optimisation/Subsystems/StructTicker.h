// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"

#include "TP1_Optimisation/TP1WorldSettings.h"

#include "StructTicker.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoneCalculating);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoneCalculatingBatch, const TArray<FTransform>&, AllTransforms);

/**
 * 
 */
UCLASS()
class TP1_OPTIMISATION_API UStructTicker : public UTickableWorldSubsystem
{
	GENERATED_BODY()

	TArray<FTransform> CubeTransforms;

public:
	int AddTransformStructs(const FTransform& InitialTransform);

	FTransform GetTransformByID(int ID) const;

	FOnDoneCalculating OnDoneCalculating;
	FOnDoneCalculatingBatch OnDoneCalculatingBatch;

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
		return TP1WS ? TP1WS->bEnableStructTicker : true;
	}
};

