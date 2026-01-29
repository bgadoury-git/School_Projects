// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TP1_Optimisation/Entities/Cubes.h"

#include "TP1_Optimisation/TP1WorldSettings.h"

#include "CubeTicker.generated.h"

/**
 * 
 */
UCLASS()
class TP1_OPTIMISATION_API UCubeTicker : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	/** Register a cube to be ticked by this subsystem */
	void RegisterCube(ACubes* Cube);

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

		// Only run in game/PIE worlds.
		if (World->WorldType != EWorldType::Game && World->WorldType != EWorldType::PIE)
		{
			return false;
		}

		const AWorldSettings* WS = World->GetWorldSettings(false);
		const ATP1WorldSettings* TP1WS = Cast<ATP1WorldSettings>(WS);
		return TP1WS ? TP1WS->bEnableCubeTicker : true;
	}

protected:
	UPROPERTY()
	TArray<ACubes*> CubesArray;
};
