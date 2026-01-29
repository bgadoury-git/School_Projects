// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundTicker.h"
#include "Engine/World.h"

TStatId UBackgroundTicker::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UStructTicker, STATGROUP_Tickables);
}

int UBackgroundTicker::AddTransformStructs(const FTransform& InitialTransform)
{
	return CubeTransforms.Add(InitialTransform);
}

TStatId FBackgroundRotateTransformsTask::GetStatId()
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FBackgroundRotateTransformsTask, STATGROUP_ThreadPoolAsyncTasks);
}

void UBackgroundTicker::BroadcastDoneOnGameThread()
{
	// We're on the game thread here.
	bTaskRunning = false;
	OnDoneCalculatingBackgroundBatch.Broadcast(CubeTransforms);
}

void UBackgroundTicker::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Avoid launching overlapping tasks; keep the game thread free.
	if (bTaskRunning.Exchange(true))
	{
		return;
	}

	const int32 Num = CubeTransforms.Num();
	if (Num <= 0)
	{
		bTaskRunning = false;
		return;
	}

	// Pre-calculate rotation quaternions once
	const FQuat DeltaQuat = FQuat(FRotator(15, 30, 45) * DeltaTime);
	const FRotator RotationAroundOrigin = FRotator(0, 10, 0) * DeltaTime;

	TWeakObjectPtr<UBackgroundTicker> WeakThis(this);

	// Use larger chunks to reduce task creation overhead
	// Optimal chunk size balances parallelism vs overhead
	const int32 MinChunkSize = 1000;
	const int32 MaxTasks = 4;
	const int32 ActualTasks = FMath::Min(MaxTasks, FMath::Max(1, Num / MinChunkSize));
	
	Remaining.Store(ActualTasks);

	TFunction<void()> SliceDone = [WeakThis]()
	{
		// Use member variable instead of heap-allocated shared state
		if (WeakThis.IsValid())
		{
			if (WeakThis->Remaining.DecrementExchange() == 1)
			{
				WeakThis->BroadcastDoneOnGameThread();
			}
		}
	};

	// Split work into optimal number of chunks
	const int32 ChunkSize = (Num + ActualTasks - 1) / ActualTasks;
	for (int32 Chunk = 0; Chunk < ActualTasks; ++Chunk)
	{
		const int32 Start = Chunk * ChunkSize;
		const int32 End = FMath::Min(Start + ChunkSize, Num);

		(new FAutoDeleteAsyncTask<FBackgroundRotateTransformsTask>(&CubeTransforms, Start, End, DeltaQuat, RotationAroundOrigin, TFunction<void()>(SliceDone)))
			->StartBackgroundTask();
	}
}

