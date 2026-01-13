// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/SpacialNavPawn.h"

#include "Components/CapsuleComponent.h"


// Sets default values
ASpacialNavPawn::ASpacialNavPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(RootComponent);

	ProjectileLauncher = CreateDefaultSubobject<UHomingProjectileLauncher>(TEXT("ProjectileLauncher"));
	ProjectileLauncher->SetupAttachment(RootComponent);
	
	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));
	MovementComponent->UpdatedComponent = RootComponent;
	MovementComponent->MaxSpeed = 100;

	SpacialNavComponent = CreateDefaultSubobject<USpacialNav>(TEXT("SpacialNavComponent"));
}

// Called when the game starts or when spawned
void ASpacialNavPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpacialNavPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ASpacialNavPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

