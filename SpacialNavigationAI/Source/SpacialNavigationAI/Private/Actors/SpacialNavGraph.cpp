// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/SpacialNavGraph.h"

#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"


// Sets default values
ASpacialNavGraph::ASpacialNavGraph()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	RootComponent = BoxComp;

	BoxComp->SetBoxExtent(FVector(500.f, 500.f, 500.f));
}

// Called when the game starts or when spawned
void ASpacialNavGraph::BeginPlay()
{
	Super::BeginPlay();
	
	GenerateGraphNodes(bVisualizeTraces,  TraceDrawTime);
}

void ASpacialNavGraph::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	GenerateGraphNodes(true,  0.1f);
}

void ASpacialNavGraph::GenerateGraphNodes(bool bDrawTrace, float DrawTime)
{
	GraphNodes.Empty();

	if (!BoxComp || NodeDensity <= 0)
	{
		return;
	}

	// Get box bounds
	FVector BoxExtent = BoxComp->GetScaledBoxExtent();
	FVector BoxCenter = GetActorLocation();

	// Calculate spacing between nodes
	float Spacing = (BoxExtent.X * 2.0f) / NodeDensity;

	// Calculate number of nodes in each dimension
	int32 NodesX = FMath::CeilToInt((BoxExtent.X * 2.0f) / Spacing) + 1;
	int32 NodesY = FMath::CeilToInt((BoxExtent.Y * 2.0f) / Spacing) + 1;
	int32 NodesZ = FMath::CeilToInt((BoxExtent.Z * 2.0f) / Spacing) + 1;

	// Generate nodes in a 3D grid
	TArray<FVector> NodePositions;
	for (int32 x = 0; x < NodesX; x++)
	{
		for (int32 y = 0; y < NodesY; y++)
		{
			for (int32 z = 0; z < NodesZ; z++)
			{
				// Calculate world position
				FVector LocalPos = FVector(
					-BoxExtent.X + (x * Spacing),
					-BoxExtent.Y + (y * Spacing),
					-BoxExtent.Z + (z * Spacing)
				);
				FVector WorldPos = BoxCenter + GetActorRotation().RotateVector(LocalPos);

				FSpacialNavNode NewNode;
				NewNode.Location = WorldPos;
				NewNode.bIsObstacle = false;

				GraphNodes.Add(NewNode);
				NodePositions.Add(WorldPos);
			}
		}
	}

	// Calculate total nodes and link them in cross pattern
	int32 NodesPerSliceXY = NodesY * NodesZ; // Number of nodes in one XY slice
	int32 NodesPerRow = NodesZ; // Number of nodes in one row (Z direction)

	for (int32 x = 0; x < NodesX; x++)
	{
		for (int32 y = 0; y < NodesY; y++)
		{
			for (int32 z = 0; z < NodesZ; z++)
			{
				int32 CurrentIndex = x * NodesPerSliceXY + y * NodesPerRow + z;

				// Link to +X neighbor
				if (x < NodesX - 1)
				{
					int32 NeighborIndex = (x + 1) * NodesPerSliceXY + y * NodesPerRow + z;
					GraphNodes[CurrentIndex].NeighborIndices.Add(NeighborIndex);
				}

				// Link to -X neighbor
				if (x > 0)
				{
					int32 NeighborIndex = (x - 1) * NodesPerSliceXY + y * NodesPerRow + z;
					GraphNodes[CurrentIndex].NeighborIndices.Add(NeighborIndex);
				}

				// Link to +Y neighbor
				if (y < NodesY - 1)
				{
					int32 NeighborIndex = x * NodesPerSliceXY + (y + 1) * NodesPerRow + z;
					GraphNodes[CurrentIndex].NeighborIndices.Add(NeighborIndex);
				}

				// Link to -Y neighbor
				if (y > 0)
				{
					int32 NeighborIndex = x * NodesPerSliceXY + (y - 1) * NodesPerRow + z;
					GraphNodes[CurrentIndex].NeighborIndices.Add(NeighborIndex);
				}

				// Link to +Z neighbor
				if (z < NodesZ - 1)
				{
					int32 NeighborIndex = x * NodesPerSliceXY + y * NodesPerRow + (z + 1);
					GraphNodes[CurrentIndex].NeighborIndices.Add(NeighborIndex);
				}

				// Link to -Z neighbor
				if (z > 0)
				{
					int32 NeighborIndex = x * NodesPerSliceXY + y * NodesPerRow + (z - 1);
					GraphNodes[CurrentIndex].NeighborIndices.Add(NeighborIndex);
				}
			}
		}
	}

	// Perform box traces to check for obstacles
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	FVector TraceExtent = FVector(Spacing * 0.4f); // 40% of spacing for trace box size

	for (int32 i = 0; i < GraphNodes.Num(); i++)
	{
		FHitResult HitResult;
		bool bHit = GetWorld()->SweepSingleByChannel(
			HitResult,
			GraphNodes[i].Location,
			GraphNodes[i].Location,
			FQuat::Identity,
			ECC_Visibility,
			FCollisionShape::MakeBox(TraceExtent),
			QueryParams
		);

		if (bHit)
		{
			GraphNodes[i].bIsObstacle = true;
		}

		
		if (!bDrawTrace)
		{
			continue;
		}
		//add a debug box to visualize the traces
		DrawDebugBox(
			GetWorld(),
			GraphNodes[i].Location,
			TraceExtent,
			bHit ? FColor::Red : FColor::Green,
			false,
			DrawTime,
			0, 2.f
		);
	}

	// Remove connections to and from obstacle nodes
	for (int32 i = 0; i < GraphNodes.Num(); i++)
	{
		if (GraphNodes[i].bIsObstacle)
		{
			// For each neighbor of the obstacle node, remove the obstacle node from their neighbor list
			for (const int32 NeighborIndex : GraphNodes[i].NeighborIndices)
			{
				if (GraphNodes.IsValidIndex(NeighborIndex))
				{
					GraphNodes[NeighborIndex].NeighborIndices.Remove(i);
				}
			}
			// Clear all neighbors from the obstacle node itself
			GraphNodes[i].NeighborIndices.Empty();
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Generated %d nodes in spatial navigation graph"), GraphNodes.Num());
}

// Called every frame
void ASpacialNavGraph::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
