// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "TP1WorldSettings.generated.h"

/**
 * Per-level settings for TP1 subsystems.
 *
 * These toggles let you enable/disable tickable world subsystems per map.
 */
UCLASS()
class TP1_OPTIMISATION_API ATP1WorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:
	/** Enable/disable the object-based cube ticking subsystem (visual cubes). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TP1|Subsystems")
	bool bEnableCubeTicker = false;

	/** Enable/disable the struct-based transform ticking subsystem. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TP1|Subsystems")
	bool bEnableStructTicker = false;

	/** Enable/disable the background-thread transform ticking subsystem. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "TP1|Subsystems")
	bool bEnableBackgroundTicker = false;
};
