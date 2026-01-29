// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP1_Optimisation/Subsystems/BackgroundTicker.h"
#include "TP1_Optimisation/Subsystems/StructTicker.h"
#include "Cubes.generated.h"

UCLASS()
class TP1_OPTIMISATION_API ACubes : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACubes();

	int CubeID;
	
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnTransformsUpdated(const TArray<FTransform>& AllTransforms);

	UFUNCTION()
	void ApplyTransformFromStructTicker();

	UPROPERTY()
	UStructTicker* StructTicker;
	
	UPROPERTY()
	UBackgroundTicker* BackgroundTicker;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TSoftObjectPtr<UStaticMesh> CubeMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Material")
	TSoftObjectPtr<UMaterial> CubeMaterial;
	
	void SelectTicker();
	
	virtual void Tick(float DeltaSeconds) override;
};
