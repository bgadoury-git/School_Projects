// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubes.h"
#include "../Subsystems/StructTicker.h"
#include "Engine/World.h"
#include "TP1_Optimisation/Subsystems/CubeTicker.h"

// Sets default values
ACubes::ACubes()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMesh;

	// Set default soft references
	CubeMesh = TSoftObjectPtr<UStaticMesh>(FSoftObjectPath(TEXT("/Engine/BasicShapes/Cube.Cube")));
	CubeMaterial = TSoftObjectPtr<UMaterial>(FSoftObjectPath(TEXT("/Engine/VREditor/Fonts/VRTextMaterial.VRTextMaterial")));

	// Disable collisions
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	// Initialize CubeID
	CubeID = -1;
}

void ACubes::BeginPlay()
{
	Super::BeginPlay();

	// Load assets from soft references
	if (!CubeMesh.IsNull())
	{
		if (UStaticMesh* LoadedMesh = CubeMesh.LoadSynchronous())
		{
			StaticMesh->SetStaticMesh(LoadedMesh);
		}
	}
	
	if (!CubeMaterial.IsNull())
	{
		if (UMaterial* LoadedMaterial = CubeMaterial.LoadSynchronous())
		{
			StaticMesh->SetMaterial(0, LoadedMaterial);
		}
	}

	SetActorTickEnabled(false);
	
	SelectTicker();
}

void ACubes::OnTransformsUpdated(const TArray<FTransform>& AllTransforms)
{
	if (!WasRecentlyRendered() || CubeID < 0 || CubeID >= AllTransforms.Num()) return;

	if (const FTransform& NewTransform = AllTransforms[CubeID]; !GetActorTransform().Equals(NewTransform))
	{
		SetActorTransform(NewTransform);
	}
}

void ACubes::ApplyTransformFromStructTicker()
{
	if (!WasRecentlyRendered() || CubeID < 0 || !StructTicker) return;

	if (const FTransform NewTransform = StructTicker->GetTransformByID(CubeID); !GetActorTransform().Equals(NewTransform))
	{
		SetActorTransform(NewTransform);
	}
}

void ACubes::SelectTicker()
{
	BackgroundTicker = GetWorld()->GetSubsystem<UBackgroundTicker>();
	if (BackgroundTicker)
	{
		CubeID = BackgroundTicker->AddTransformStructs(GetActorTransform());
		
		BackgroundTicker->OnDoneCalculatingBackgroundBatch.AddDynamic(this, &ACubes::OnTransformsUpdated);
		return;
	}
	
	StructTicker = GetWorld()->GetSubsystem<UStructTicker>();
	if (StructTicker)
	{
		CubeID = StructTicker->AddTransformStructs(GetActorTransform());
		
		StructTicker->OnDoneCalculatingBatch.AddDynamic(this, &ACubes::OnTransformsUpdated);
		//StructTicker->OnDoneCalculating.AddDynamic(this, &ACubes::ApplyTransformFromStructTicker);
		
		return;
	}
	
	if (GetWorld()->GetSubsystem<UCubeTicker>())
	{
		return;
	}
	
	SetActorTickEnabled(true);
}

void ACubes::Tick(const float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!WasRecentlyRendered()) return;
	
	// Rotate around world origin
	const FVector CurrentLocation = GetActorLocation();
	const FRotator RotationAroundOrigin = FRotator(0, 10, 0) * DeltaSeconds; // Rotate around Z-axis
	const FVector RotatedLocation = RotationAroundOrigin.RotateVector(CurrentLocation);
	SetActorLocation(RotatedLocation);
	
	// Rotate around own axis
	StaticMesh->AddWorldRotation(FRotator(15, 30, 45) * DeltaSeconds);
	
}
