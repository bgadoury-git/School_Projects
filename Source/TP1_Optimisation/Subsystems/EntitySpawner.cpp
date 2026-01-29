// Fill out your copyright notice in the Description page of Project Settings.


#include "EntitySpawner.h"
#include "CubeTicker.h"
#include "TP1_Optimisation/Entities/Cubes.h"

void UEntitySpawner::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	// Get the tickable subsystem CubeTicker
	UCubeTicker* CubeTicker = InWorld.GetSubsystem<UCubeTicker>();

	// Spawn cubes in a sphere formation at the world origin (0, 0, 0)
	SpawnCubesInSphere(FVector::ZeroVector, SphereRadius, NumberOfCubes, CubeTicker);
}

void UEntitySpawner::SpawnCubesInSphere(const FVector& Center, const float Radius, const int32 NumCubes, UCubeTicker* CubeTicker) const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// Use the golden ratio to distribute points evenly on a sphere surface
	const float GoldenRatio = (1.0f + FMath::Sqrt(5.0f)) / 2.0f;
	const float AngleIncrement = PI * 2.0f * GoldenRatio;

	for (int32 i = 0; i < NumCubes; ++i)
	{
		// Calculate position inside a ball (filled sphere) using Fibonacci distribution
		const float T = static_cast<float>(i) / static_cast<float>(NumCubes);
		const float Inclination = FMath::Acos(1.0f - 2.0f * T);
		const float Azimuth = AngleIncrement * i;

		// Random radius for volume distribution (cube root for uniform volume distribution)
		const float RandomRadius = Radius * FMath::Pow(FMath::FRand(), 1.0f / 3.0f);

		// Convert spherical coordinates to Cartesian
		const float X = FMath::Sin(Inclination) * FMath::Cos(Azimuth);
		const float Y = FMath::Sin(Inclination) * FMath::Sin(Azimuth);
		const float Z = FMath::Cos(Inclination);

		FVector SpawnLocation = Center + FVector(X, Y, Z) * RandomRadius;

		// Spawn the cube actor
		ACubes* SpawnedCube = World->SpawnActor<ACubes>(ACubes::StaticClass(), SpawnLocation, FRotator::ZeroRotator, SpawnParams);
		
		//reduce the scale of the cube
		if (SpawnedCube)
		{
			SpawnedCube->SetActorScale3D(FVector(CubeScale));
		}

		// Register the cube with the CubeTicker subsystem
		if (CubeTicker && SpawnedCube)
		{
			CubeTicker->RegisterCube(SpawnedCube);
		}
	}
}
