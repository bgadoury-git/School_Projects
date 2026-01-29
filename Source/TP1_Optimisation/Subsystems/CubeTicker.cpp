// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeTicker.h"

TStatId UCubeTicker::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UCubeTicker, STATGROUP_Tickables);
}

void UCubeTicker::RegisterCube(ACubes* Cube)
{
	if (Cube)
	{
		CubesArray.Add(Cube);
	}
}

void UCubeTicker::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (ACubes* Cube : CubesArray)
	{
		if (Cube && Cube->StaticMesh)
		{
			if (!Cube->WasRecentlyRendered()) continue;

			// Rotate around world origin
			const FVector CurrentLocation = Cube->GetActorLocation();
			const FRotator RotationAroundOrigin = FRotator(0, 10, 0) * DeltaTime; // Rotate around Z-axis
			const FVector RotatedLocation = RotationAroundOrigin.RotateVector(CurrentLocation);
			Cube->SetActorLocation(RotatedLocation);
			
			Cube->StaticMesh->AddWorldRotation(FRotator(15, 30, 45) * DeltaTime);
		}
	}
}

