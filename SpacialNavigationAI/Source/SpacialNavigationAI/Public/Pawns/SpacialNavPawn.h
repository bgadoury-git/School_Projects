// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HomingProjectileLauncher.h"
#include "Components/SpacialNav.h"
#include "Components/SphereComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/Pawn.h"
#include "SpacialNavPawn.generated.h"


UCLASS()
class SPACIALNAVIGATIONAI_API ASpacialNavPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASpacialNavPawn();

	UPROPERTY(EditDefaultsOnly)
	UCapsuleComponent* CollisionComponent;
	
	UPROPERTY(EditDefaultsOnly)
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UHomingProjectileLauncher* ProjectileLauncher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UFloatingPawnMovement* MovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpacialNav* SpacialNavComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
