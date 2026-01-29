// Fill out your copyright notice in the Description page of Project Settings.


#include "StructTicker.h"
#include "Engine/World.h"

TStatId UStructTicker::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UStructTicker, STATGROUP_Tickables);
}

int UStructTicker::AddTransformStructs(const FTransform& InitialTransform)
{
	return CubeTransforms.Add(InitialTransform);
}

FTransform UStructTicker::GetTransformByID(const int ID) const
{
	if (CubeTransforms.IsValidIndex(ID))
	{
		return CubeTransforms[ID];
	}
	return FTransform();
}

void UStructTicker::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Pre-calculate rotation quaternions once outside the loop
	const FQuat DeltaQuat = FQuat(FRotator(15, 30, 45) * DeltaTime);
	const FQuat OriginQuat = FQuat(FRotator(0, 10, 0) * DeltaTime);

	// Use direct array access for better performance
	const int32 Num = CubeTransforms.Num();
	FTransform* TransformData = CubeTransforms.GetData();

	for (int32 ID = 0; ID < Num; ++ID)
	{
		FTransform& Transform = TransformData[ID];
		
		// Rotate around world origin using quaternion (faster than FRotator)
		const FVector RotatedLocation = OriginQuat.RotateVector(Transform.GetLocation());
		Transform.SetLocation(RotatedLocation);
		
		// Rotate around own axis
		Transform.SetRotation(Transform.GetRotation() * DeltaQuat);
	}
	
	OnDoneCalculatingBatch.Broadcast(CubeTransforms);
}


