// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HomingProjectileLauncher.generated.h"

class AHomingProjectile;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SPACIALNAVIGATIONAI_API UHomingProjectileLauncher : public USceneComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHomingProjectileLauncher();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Projectile")
	TSubclassOf<AHomingProjectile> HomingProjectileClass;

	
	FTimerHandle FireTimerHandle;
	
	UPROPERTY(EditAnywhere, Category = "Projectile")
	float FireTimerInterval = 2.0f;


public:
	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void LaunchHomingProjectile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	AActor* TargetActor;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
