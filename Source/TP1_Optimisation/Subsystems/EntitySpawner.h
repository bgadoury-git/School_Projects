// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EntitySpawner.generated.h"

class UCubeTicker;

/**
 * Subsystem responsible for spawning cubes in a sphere formation
 */
UCLASS()
class TP1_OPTIMISATION_API UEntitySpawner : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	/** Spawns cubes in a sphere formation at the specified center */
	void SpawnCubesInSphere(const FVector& Center, float Radius, int32 NumCubes, UCubeTicker* CubeTicker) const;

protected:
	/** Radius of the sphere formation */
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	float SphereRadius = 1000.0f;

	/** Number of cubes to spawn */
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	int32 NumberOfCubes = 30000;
	
	UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	float CubeScale = 0.1f;
};
