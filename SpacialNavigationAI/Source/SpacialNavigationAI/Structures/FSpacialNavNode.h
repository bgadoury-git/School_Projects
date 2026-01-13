#pragma once

#include "CoreMinimal.h"
#include "FSpacialNavNode.generated.h"

USTRUCT(BlueprintType)
struct FSpacialNavNode
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	FVector Location;

	UPROPERTY(VisibleAnywhere)
	TArray<int32> NeighborIndices;

	UPROPERTY(VisibleAnywhere)
	bool bIsObstacle;

	FSpacialNavNode()
		: Location(FVector::ZeroVector), bIsObstacle(false)
	{
	}
};
