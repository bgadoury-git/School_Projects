// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HomingProjectileLauncher.h"
#include "Actors/HomingProjectile.h"

// Sets default values for this component's properties
UHomingProjectileLauncher::UHomingProjectileLauncher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHomingProjectileLauncher::BeginPlay()
{
	Super::BeginPlay();

	// ...

	GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &UHomingProjectileLauncher::LaunchHomingProjectile, FireTimerInterval, true);
}


void UHomingProjectileLauncher::LaunchHomingProjectile()
{
	if (TargetActor && HomingProjectileClass)
	{
		const FVector SpawnLocation = GetOwner()->GetActorLocation();
		const FRotator SpawnRotation = GetOwner()->GetActorRotation();

		const FTransform SpawnTransform(SpawnRotation, SpawnLocation);
		if (AHomingProjectile* Projectile = GetWorld()->SpawnActorDeferred<AHomingProjectile>(
			HomingProjectileClass, SpawnTransform, GetOwner(), nullptr,
			ESpawnActorCollisionHandlingMethod::AlwaysSpawn))
		{
			Projectile->TargetActor = TargetActor;
			Projectile->FinishSpawning(SpawnTransform);
		}
	}
}

// Called every frame
void UHomingProjectileLauncher::TickComponent(float DeltaTime, ELevelTick TickType,
                                              FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
