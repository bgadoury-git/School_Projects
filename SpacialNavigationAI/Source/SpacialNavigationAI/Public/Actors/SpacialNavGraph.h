// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpacialNavigationAI/Structures/FSpacialNavNode.h"
#include "SpacialNavGraph.generated.h"

class UBoxComponent;

UCLASS()
class SPACIALNAVIGATIONAI_API ASpacialNavGraph : public AActor
{
	GENERATED_BODY()

public:
	
	// Sets default values for this actor's properties
	ASpacialNavGraph();

	UFUNCTION(BlueprintCallable)
	TArray<FSpacialNavNode> GetGraphNodes() { return GraphNodes; }

	UPROPERTY(EditAnywhere)
	bool bVisualizeTraces;

	UPROPERTY(EditAnywhere)
	float TraceDrawTime= 2.f;

	UFUNCTION(BlueprintCallable, CallInEditor)
	void RegenerateGraph() { GenerateGraphNodes(bVisualizeTraces, TraceDrawTime); }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere)
	int NodeDensity= 10;

	TArray<FSpacialNavNode> GraphNodes;

	void GenerateGraphNodes(bool bDrawTrace, float DrawTime);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
