// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/SpacialNavGraph.h"
#include "Components/ActorComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "SpacialNavigationAI/Structures/FSpacialNavNode.h"
#include "SpacialNav.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGraphGenerated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPathGenerated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPathSeeked);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class SPACIALNAVIGATIONAI_API USpacialNav : public UActorComponent
{
	GENERATED_BODY()


public:
	// Sets default values for this component's properties
	USpacialNav();

	UPROPERTY(VisibleAnywhere, Category = "Data | Graphs")
	TArray<FSpacialNavNode> Nodes;

	UPROPERTY(VisibleAnywhere, Category = "Data | Graphs")
	TArray<FVector> PathLocations;

	UPROPERTY(VisibleAnywhere, Category = "Data | Graphs")
	TArray<FVector> SmoothedPathLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Graph Generation")
	float NodeSpacing = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Graph Generation")
	int NumberEdgeNodes = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Static Graph")
	ASpacialNavGraph* Graph;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Destination")
	AActor* DestinationActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Destination")
	FVector DestinationPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Destination")
	float AcceptanceRadius = 50.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Destination")
	float MinimumRandomDestinationDistance = 500.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Collision Avoidance")
	float CollisionAvoidanceRadius = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Collision Avoidance")
	float AvoidanceForceStrength = 1000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Collision Avoidance")
	float MinSafeDistance = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Utility")
	bool bUseDynamicGraph = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Utility")
	bool bUseRandomPathing = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Utility")
	bool AutoSeek = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters | Utility")
	bool bShowDebugTraces = false;

	FOnPathGenerated OnPathGenerated;
	FOnPathSeeked OnPathSeeked;
	FOnGraphGenerated OnGraphGenerated;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	UFloatingPawnMovement* OwnerMovementComponent;

	int32 CurrentWaypointIndex;
	bool bIsFollowingPath;
	
	FTimerHandle RetryPathTimer;
	bool bWaitingToRetryPath;
	
	TArray<int32> TriedDestinationIndices;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Spatial Navigation")
	void GetRandomDestination(TArray<FSpacialNavNode> ValidNodes);

	UFUNCTION(BlueprintCallable, Category = "Spatial Navigation")
	void GenerateGraph();

	UFUNCTION(BlueprintCallable, Category = "Spatial Navigation")
	bool GeneratePath(TArray<FSpacialNavNode> InNodes, FVector OverrideDestination = FVector::ZeroVector, bool bUseOverride = false);

	UFUNCTION(BlueprintCallable, Category = "Spatial Navigation")
	void StartMovingToNextWaypoint();

	UFUNCTION(BlueprintCallable, Category = "Spatial Navigation")
	void StopMoving();


private:
	
	void ApplyFunnelAlgorithm(const TArray<FVector>& RawPath);
	
	void SeekPath();

	FVector CalculateCollisionAvoidance() const;
	
	void OnRetryPathTimer();
	
	bool TryGeneratePathWithNextClosestPoint(TArray<FSpacialNavNode>& InNodes);
	
};
