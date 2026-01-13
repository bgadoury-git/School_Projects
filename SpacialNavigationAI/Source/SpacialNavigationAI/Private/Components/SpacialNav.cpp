// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/SpacialNav.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"


// Sets default values for this component's properties
USpacialNav::USpacialNav()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	OwnerMovementComponent = nullptr;
	CurrentWaypointIndex = 0;
	bIsFollowingPath = false;
	bWaitingToRetryPath = false;
	// ...
}


// Called when the game starts
void USpacialNav::BeginPlay()
{
	Super::BeginPlay();

	OwnerMovementComponent = GetOwner()->FindComponentByClass<UFloatingPawnMovement>();
}
// Called every frame
void USpacialNav::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (bIsFollowingPath)
	{
		SeekPath();
		return;
	}

	if (!AutoSeek || bWaitingToRetryPath) return;
	
	if (bUseDynamicGraph)
	{
		GenerateGraph();
	}
	else
	{
		if (!Graph)
		{
			UE_LOG(LogTemp, Warning, TEXT("SpacialNav: No Graph assigned for static pathfinding"));
			return;
		}
		Nodes = Graph->GetGraphNodes();
	}

	if (bUseRandomPathing) 
	{
		GetRandomDestination(Nodes);
	}
	else
	{
		if (!TryGeneratePathWithNextClosestPoint(Nodes))
		{
			// All closest points exhausted, wait 2 seconds before trying again
			bWaitingToRetryPath = true;
			TriedDestinationIndices.Empty(); // Reset for next attempt
			GetWorld()->GetTimerManager().SetTimer(RetryPathTimer, this, &USpacialNav::OnRetryPathTimer, 2.0f, false);
			UE_LOG(LogTemp, Warning, TEXT("Path generation failed for all candidate points, waiting 2 seconds before retry"));
		}
	}
}

void USpacialNav::GenerateGraph()
{
	AActor* Owner = GetOwner();
	if (!Owner) return;

	Nodes.Empty();

	const FVector CenterLocation = GetOwner()->GetActorLocation();
	const float SphereRadius = (NumberEdgeNodes - 1) * NodeSpacing / 2.0f;

	// Add the center node (owner's location) as the first node
	FSpacialNavNode CenterNode;
	CenterNode.Location = CenterLocation;
	CenterNode.bIsObstacle = false; // Center is always navigable
	Nodes.Add(CenterNode);

	// Generate nodes in a spherical pattern
	// Using spherical coordinates: radius, theta (azimuth), phi (elevation)
	const int32 RadialLayers = NumberEdgeNodes;
	const int32 AzimuthDivisions = NumberEdgeNodes * 2; // More divisions for smoother sphere
	const int32 ElevationDivisions = NumberEdgeNodes;

	TArray<AActor*> Ignore;
	Ignore.Add(Owner);

	for (int32 r = 0; r < RadialLayers; ++r)
	{
		float Radius = (r + 1) * (SphereRadius / RadialLayers);
		
		for (int32 t = 0; t < AzimuthDivisions; ++t)
		{
			float Theta = (t * 2.0f * PI) / AzimuthDivisions; // 0 to 2*PI
			
			for (int32 p = 0; p < ElevationDivisions; ++p)
			{
				float Phi = (p * PI) / (ElevationDivisions - 1); // 0 to PI
				
				// Convert spherical to cartesian coordinates
				float X = Radius * FMath::Sin(Phi) * FMath::Cos(Theta);
				float Y = Radius * FMath::Sin(Phi) * FMath::Sin(Theta);
				float Z = Radius * FMath::Cos(Phi);
				
				const FVector NodeLocation = CenterLocation + FVector(X, Y, Z);
				FSpacialNavNode NewNode;
				NewNode.Location = NodeLocation;

				FHitResult HitResult;
				
				const bool bHit = UKismetSystemLibrary::SphereTraceSingle(
					GetWorld(),
					NodeLocation,
					NodeLocation,
					NodeSpacing / 2.0f,
					UEngineTypes::ConvertToTraceType(ECC_WorldStatic),
					false,
					Ignore,
					bShowDebugTraces ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
					HitResult,
					true,
					FLinearColor::Green,
					FLinearColor::Red,
					1.0f
				);

				NewNode.bIsObstacle = bHit;

				Nodes.Add(NewNode);
			}
		}
	}

	// Connect neighbors with line-of-sight check
	int32 TotalConnections = 0;
	for (int32 i = 0; i < Nodes.Num(); ++i)
	{
		if (Nodes[i].bIsObstacle)
		{
			continue;
		}

		for (int32 j = i + 1; j < Nodes.Num(); ++j) // Start from i+1 to avoid duplicate checks
		{
			if (Nodes[j].bIsObstacle)
			{
				continue;
			}

			float DistSq = FVector::DistSquared(Nodes[i].Location, Nodes[j].Location);
			if (DistSq <= FMath::Square(NodeSpacing * 1.5f)) // Slightly increased range for better connectivity
			{
				// Check line of sight between nodes
				FHitResult HitResult;
				const bool bHit = UKismetSystemLibrary::LineTraceSingle(
					GetWorld(),
					Nodes[i].Location,
					Nodes[j].Location,
					UEngineTypes::ConvertToTraceType(ECC_WorldStatic),
					false,
					Ignore,
					EDrawDebugTrace::None,
					HitResult,
					true
				);

				// If no obstacle blocks the path, connect the nodes (bidirectional)
				if (!bHit)
				{
					Nodes[i].NeighborIndices.Add(j);
					Nodes[j].NeighborIndices.Add(i);
					TotalConnections++;
				}
			}
		}
	}

	UE_LOG(LogTemp, Log, TEXT("GenerateGraph: Created %d nodes with %d bidirectional connections"), 
		Nodes.Num(), TotalConnections);
	
	OnGraphGenerated.Broadcast();
}

bool USpacialNav::GeneratePath(TArray<FSpacialNavNode> InNodes, FVector OverrideDestination, bool bUseOverride)
{
	int32 StartingNodeIndex = -1;
	
	if (bUseDynamicGraph)
	{
		// Use the center node (owner's location) as starting point
		StartingNodeIndex = 0;
	}else
	{
		// Find the closest node to the owner's location
		const FVector OwnerLocation = GetOwner()->GetActorLocation();
		float MinDistSq = FLT_MAX;
		for (int32 i = 0; i < InNodes.Num(); ++i)
		{
			if (InNodes[i].bIsObstacle) continue;
			if (const float DistSq = FVector::DistSquared(InNodes[i].Location, OwnerLocation); DistSq < MinDistSq)
			{
				MinDistSq = DistSq;
				StartingNodeIndex = i;
			}
		}
	}

	const FSpacialNavNode StartingNode = InNodes[StartingNodeIndex];
	
	FSpacialNavNode EndingNode;
	int32 EndingNodeIndex = -1;
	float MinDistSq = FLT_MAX;
	
	// Determine which destination to use
	FVector TargetDestination;
	if (bUseOverride)
	{
		TargetDestination = OverrideDestination;
	}
	else if (DestinationActor)
	{
		TargetDestination = DestinationActor->GetActorLocation();
	}
	else
	{
		TargetDestination = DestinationPoint;
	}
	
	// Find the closest node to the target destination
	for (int32 i = 0; i < InNodes.Num(); ++i)
	{
		if (InNodes[i].bIsObstacle) continue;
		float DistSq = FVector::DistSquared(InNodes[i].Location, TargetDestination);
		if (DistSq < MinDistSq)
		{
			MinDistSq = DistSq;
			EndingNode = InNodes[i];
			EndingNodeIndex = i;
		}
	}

	if (StartingNodeIndex == -1 || EndingNodeIndex == -1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Could not find valid start or end node"));
		return false;
	}

	// Check if start and end nodes have neighbors (are connected to the graph)
	if (InNodes[StartingNodeIndex].NeighborIndices.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Starting node %d has no neighbors - isolated from graph"), StartingNodeIndex);
		return false;
	}
	
	if (InNodes[EndingNodeIndex].NeighborIndices.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Ending node %d at %s has no neighbors - isolated from graph (%.1f units from target)"), 
			EndingNodeIndex, *InNodes[EndingNodeIndex].Location.ToString(), 
			FVector::Dist(InNodes[EndingNodeIndex].Location, TargetDestination));
		return false;
	}
	
	UE_LOG(LogTemp, Log, TEXT("Pathfinding: Start node %d (%d neighbors) -> End node %d (%d neighbors), distance: %.1f"), 
		StartingNodeIndex, InNodes[StartingNodeIndex].NeighborIndices.Num(),
		EndingNodeIndex, InNodes[EndingNodeIndex].NeighborIndices.Num(),
		FVector::Dist(StartingNode.Location, EndingNode.Location));

	// A* implementation
	PathLocations.Empty();
	
	// Data structures for A*
	TArray<float> GScore; // Cost from start to node
	TArray<float> FScore; // GScore + heuristic
	TArray<int32> CameFrom; // For path reconstruction
	TArray<bool> InOpenSet;
	TArray<bool> InClosedSet;

	// Initialize arrays
	GScore.Init(FLT_MAX, InNodes.Num());
	FScore.Init(FLT_MAX, InNodes.Num());
	CameFrom.Init(-1, InNodes.Num());
	InOpenSet.Init(false, InNodes.Num());
	InClosedSet.Init(false, InNodes.Num());

	// Initialize start node
	GScore[StartingNodeIndex] = 0.0f;
	FScore[StartingNodeIndex] = FVector::Dist(StartingNode.Location, EndingNode.Location);
	InOpenSet[StartingNodeIndex] = true;

	// A* main loop
	int32 IterationCount = 0;
	const int32 MaxIterations = InNodes.Num() * 2; // Safety limit
	
	while (true)
	{
		IterationCount++;
		
		// Safety check to prevent infinite loops
		if (IterationCount > MaxIterations)
		{
			UE_LOG(LogTemp, Warning, TEXT("A* exceeded maximum iterations (%d)"), MaxIterations);
			return false;
		}
		
		// Find node in open set with lowest FScore
		int32 CurrentIndex = -1;
		float LowestFScore = FLT_MAX;
		for (int32 i = 0; i < InNodes.Num(); ++i)
		{
			if (InOpenSet[i] && FScore[i] < LowestFScore)
			{
				LowestFScore = FScore[i];
				CurrentIndex = i;
			}
		}

		// No path found - open set is empty
		if (CurrentIndex == -1)
		{
			// Count explored nodes for debugging
			int32 ExploredCount = 0;
			for (int32 i = 0; i < InNodes.Num(); ++i)
			{
				if (InClosedSet[i]) ExploredCount++;
			}
			
			UE_LOG(LogTemp, Warning, TEXT("No path found - A* exhausted open set after %d iterations, explored %d nodes"), 
				IterationCount, ExploredCount);
			return false;
		}

		// Goal reached
		if (CurrentIndex == EndingNodeIndex)
		{
			// Reconstruct path
			TArray<int32> PathIndices;
			int32 Current = EndingNodeIndex;
			while (Current != -1)
			{
				PathIndices.Insert(Current, 0);
				Current = CameFrom[Current];
			}

			// Convert to locations
			for (int32 Index : PathIndices)
			{
				PathLocations.Add(InNodes[Index].Location);
			}

			UE_LOG(LogTemp, Log, TEXT("Path found with %d nodes"), PathLocations.Num());
			
			// Apply Simple Stupid Funnel algorithm
			ApplyFunnelAlgorithm(PathLocations);
			
			// Draw debug path - raw A* path in blue
			if (bShowDebugTraces)
			{
				for (int32 i = 0; i < PathLocations.Num() - 1; ++i)
				{
					DrawDebugLine(GetWorld(), PathLocations[i], PathLocations[i + 1], 
						FColor::Blue, false, 30.0f, 0, 2.0f);
				}
			}
			
			// Draw debug path - smoothed funnel path in green
			if (bShowDebugTraces)
			{
				for (int32 i = 0; i < SmoothedPathLocations.Num() - 1; ++i)
				{
					DrawDebugLine(GetWorld(), SmoothedPathLocations[i], SmoothedPathLocations[i + 1], 
						FColor::Green, false, 30.0f, 0, 5.0f);
				}
			}

			if (AutoSeek)
			{
				CurrentWaypointIndex = 0;
				bIsFollowingPath = true;
			}
				
			OnPathGenerated.Broadcast();
			return  true;
		}

		// Move current from open to closed set
		InOpenSet[CurrentIndex] = false;
		InClosedSet[CurrentIndex] = true;

		// Examine neighbors
		for (int32 NeighborIndex : InNodes[CurrentIndex].NeighborIndices)
		{
			if (InClosedSet[NeighborIndex] || InNodes[NeighborIndex].bIsObstacle)
			{
				continue;
			}

			float TentativeGScore = GScore[CurrentIndex] + 
				FVector::Dist(InNodes[CurrentIndex].Location, InNodes[NeighborIndex].Location);

			if (!InOpenSet[NeighborIndex])
			{
				InOpenSet[NeighborIndex] = true;
			}
			else if (TentativeGScore >= GScore[NeighborIndex])
			{
				continue; // Not a better path
			}

			// This is the best path so far
			CameFrom[NeighborIndex] = CurrentIndex;
			GScore[NeighborIndex] = TentativeGScore;
			FScore[NeighborIndex] = GScore[NeighborIndex] + 
				FVector::Dist(InNodes[NeighborIndex].Location, EndingNode.Location);
		}
	}
}


void USpacialNav::ApplyFunnelAlgorithm(const TArray<FVector>& RawPath)
{
	SmoothedPathLocations.Empty();
	
	if (RawPath.Num() < 2)
	{
		SmoothedPathLocations = RawPath;
		return;
	}

	// Simple Stupid Funnel Algorithm
	// This is a simplified version that pulls the string tight through the path
	
	SmoothedPathLocations.Add(RawPath[0]); // Start point
	
	int32 CurrentApex = 0;
	
	for (int32 i = 1; i < RawPath.Num(); ++i)
	{
		// Try to find the furthest visible point from the current apex
		bool bFoundVisible = false;
		
		// Check from the furthest point backwards
		for (int32 j = RawPath.Num() - 1; j > CurrentApex; --j)
		{
			// Check if we can see point j from the current apex
			FVector Start = SmoothedPathLocations.Last();
			FVector End = RawPath[j];
			
			// Do a line trace to check visibility
			FHitResult HitResult;
			TArray<AActor*> Ignore;
			if (GetOwner())
			{
				Ignore.Add(GetOwner());
				
			}

			const bool bHit = UKismetSystemLibrary::LineTraceSingle(
				GetWorld(),
				Start,
				End,
				UEngineTypes::ConvertToTraceType(ECC_Visibility),
				false,
				Ignore,
				EDrawDebugTrace::None,
				HitResult,
				true
			);
			
			// If no hit, we can see this point
			if (!bHit)
			{
				// Check if this is the last point
				if (j == RawPath.Num() - 1)
				{
					SmoothedPathLocations.Add(RawPath[j]);
					CurrentApex = j;
					bFoundVisible = true;
					break;
				}
				else
				{
					// This is a waypoint we can reach
					SmoothedPathLocations.Add(RawPath[j]);
					CurrentApex = j;
					bFoundVisible = true;
					break;
				}
			}
		}
		
		// If we've reached the end, break
		if (CurrentApex >= RawPath.Num() - 1)
		{
			break;
		}
		
		// Safety check: if we couldn't find any visible point, add the next point in sequence
		if (!bFoundVisible && i > CurrentApex)
		{
			SmoothedPathLocations.Add(RawPath[CurrentApex + 1]);
			CurrentApex = CurrentApex + 1;
		}
	}
	
	// Ensure the last point is included
	if (SmoothedPathLocations.Last() != RawPath.Last())
	{
		SmoothedPathLocations.Add(RawPath.Last());
	}
	
	UE_LOG(LogTemp, Log, TEXT("Funnel algorithm reduced path from %d to %d nodes"), 
		RawPath.Num(), SmoothedPathLocations.Num());
}

void USpacialNav::StartMovingToNextWaypoint()
{
	// Start following the path
	CurrentWaypointIndex = 0;
	bIsFollowingPath = true;
}

void USpacialNav::StopMoving()
{
	bIsFollowingPath = false;
}


FVector USpacialNav::CalculateCollisionAvoidance() const
{
	if (!GetOwner() || !GetWorld())
	{
		return FVector::ZeroVector;
	}

	FVector AvoidanceForce = FVector::ZeroVector;
	FVector OwnerLocation = GetOwner()->GetActorLocation();

	// Perform sphere overlap to detect nearby obstacles
	TArray<FHitResult> HitResults;
	TArray<AActor*> IgnoreActors;
	IgnoreActors.Add(GetOwner());

	const bool bHit = UKismetSystemLibrary::SphereTraceMulti(
		GetWorld(),
		OwnerLocation,
		OwnerLocation,
		CollisionAvoidanceRadius,
		UEngineTypes::ConvertToTraceType(ECC_WorldStatic),
		false,
		IgnoreActors,
		bShowDebugTraces ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None,
		HitResults,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		0.0f
	);

	if (bHit && HitResults.Num() > 0)
	{
		// Calculate avoidance force for each collision
		for (const FHitResult& Hit : HitResults)
		{
			if (Hit.bBlockingHit)
			{
				FVector ToObstacle = Hit.ImpactPoint - OwnerLocation;
				float Distance = ToObstacle.Size();

				if (Distance > KINDA_SMALL_NUMBER && Distance < MinSafeDistance)
				{
					// Calculate repulsion force (inverse of distance)
					FVector AwayFromObstacle = -ToObstacle.GetSafeNormal();
					float ForceMagnitude = AvoidanceForceStrength * (1.0f - (Distance / MinSafeDistance));
					AvoidanceForce += AwayFromObstacle * ForceMagnitude;

					if (bShowDebugTraces)
					{
						// Debug visualization
						DrawDebugLine(GetWorld(), OwnerLocation, Hit.ImpactPoint, 
							FColor::Red, false, 0.0f, 0, 2.0f);
						DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 20.0f, 8, 
							FColor::Orange, false, 0.0f, 0, 1.0f);
					}
				}
			}
		}
	}

	return AvoidanceForce;
}


void USpacialNav::SeekPath()
{
	if (!OwnerMovementComponent || !GetOwner())
	{
		UE_LOG(LogTemp, Warning, TEXT("SeekPath: Missing movement component or owner"));
		bIsFollowingPath = false;
		return;
	}

	if (SmoothedPathLocations.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("SeekPath: No path to follow"));
		bIsFollowingPath = false;
		return;
	}

	// Check if we've reached the end of the path
	if (CurrentWaypointIndex >= SmoothedPathLocations.Num())
	{
		UE_LOG(LogTemp, Log, TEXT("SeekPath: Reached end of path"));
		bIsFollowingPath = false;
		OwnerMovementComponent->StopMovementImmediately();
		return;
	}

	// Get current waypoint
	FVector TargetLocation = SmoothedPathLocations[CurrentWaypointIndex];
	const FVector CurrentLocation = GetOwner()->GetActorLocation();
	
	// Calculate distance to current waypoint
	float DistanceToWaypoint = FVector::Dist(CurrentLocation, TargetLocation);
	
	// Check if we've reached the current waypoint
	if (DistanceToWaypoint <= AcceptanceRadius)
	{
		CurrentWaypointIndex++;
		
		// If we've reached the final waypoint
		if (CurrentWaypointIndex >= SmoothedPathLocations.Num())
		{
			UE_LOG(LogTemp, Log, TEXT("SeekPath: Reached final destination"));
			bIsFollowingPath = false;
			OwnerMovementComponent->StopMovementImmediately();
			OnPathSeeked.Broadcast();
			return;
		}
		
		// Move to next waypoint
		TargetLocation = SmoothedPathLocations[CurrentWaypointIndex];
		UE_LOG(LogTemp, Log, TEXT("SeekPath: Moving to waypoint %d/%d"), 
			CurrentWaypointIndex + 1, SmoothedPathLocations.Num());
	}
	
	// Calculate direction to target
	FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();
	
	// Calculate collision avoidance force
	const FVector AvoidanceForce = CalculateCollisionAvoidance();

	const float MaxSpeed = OwnerMovementComponent->GetMaxSpeed();
	
	// Set velocity towards target with avoidance
	FVector DesiredVelocity = Direction * MaxSpeed;
	
	// Apply avoidance force (normalized and scaled)
	if (!AvoidanceForce.IsNearlyZero())
	{
		// Blend the desired velocity with the avoidance force
		FVector AvoidanceVelocity = AvoidanceForce.GetSafeNormal() * MaxSpeed;
		DesiredVelocity = (DesiredVelocity * 0.5f) + (AvoidanceVelocity * 0.5f);
		
		// Normalize and apply speed
		DesiredVelocity = DesiredVelocity.GetSafeNormal() * MaxSpeed;
		
		if (bShowDebugTraces)
		{
			// Debug: Draw avoidance force vector
			DrawDebugLine(GetWorld(), CurrentLocation, CurrentLocation + AvoidanceForce, 
				FColor::Magenta, false, 0.0f, 0, 3.0f);
		}
	}
	
	OwnerMovementComponent->Velocity = DesiredVelocity;
	
	// Optional: Rotate owner to face movement direction
	if (!Direction.IsNearlyZero())
	{
		FRotator TargetRotation = Direction.Rotation();
		GetOwner()->SetActorRotation(FMath::RInterpTo(
			GetOwner()->GetActorRotation(), 
			TargetRotation, 
			GetWorld()->GetDeltaSeconds(), 
			5.0f
		));
	}
	
	if (bShowDebugTraces)
	{
		// Draw debug sphere at current target waypoint
		DrawDebugSphere(GetWorld(), TargetLocation, AcceptanceRadius, 12, 
			FColor::Yellow, false, -1.0f, 0, 2.0f);
	}
}

void USpacialNav::GetRandomDestination(TArray<FSpacialNavNode> ValidNodes)
{
	if (ValidNodes.Num() == 0 || !GetOwner())
	{
		UE_LOG(LogTemp, Warning, TEXT("GetRandomDestination: No valid nodes available"));
		return;
	}

	// Filter out obstacle nodes and nodes too close to current position
	TArray<int32> ValidIndices;
	const FVector OwnerLocation = GetOwner()->GetActorLocation();
	
	for (int32 i = 0; i < ValidNodes.Num(); ++i)
	{
		if (!ValidNodes[i].bIsObstacle)
		{
			float Distance = FVector::Dist(ValidNodes[i].Location, OwnerLocation);
			if (Distance >= MinimumRandomDestinationDistance)
			{
				ValidIndices.Add(i);
			}
		}
	}

	// If no valid nodes found at minimum distance, accept any non-obstacle node
	if (ValidIndices.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetRandomDestination: No nodes at minimum distance, using any valid node"));
		for (int32 i = 0; i < ValidNodes.Num(); ++i)
		{
			if (!ValidNodes[i].bIsObstacle)
			{
				ValidIndices.Add(i);
			}
		}
	}

	// Still no valid nodes? Give up
	if (ValidIndices.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetRandomDestination: No valid non-obstacle nodes available"));
		return;
	}

	constexpr int32 MaxRetries = 10;
	int32 RetryCount = 0;
	bool bPathFound;

	do
	{
		// Pick a random valid node
		const int32 RandomIndex = ValidIndices[FMath::RandRange(0, ValidIndices.Num() - 1)];
		const FSpacialNavNode RandomNode = ValidNodes[RandomIndex];

		// Set the destination point
		DestinationPoint = RandomNode.Location;
		DestinationActor = nullptr;

		UE_LOG(LogTemp, Log, TEXT("GetRandomDestination: Attempt %d - Selected destination at %s"), 
			RetryCount + 1, *DestinationPoint.ToString());

		bPathFound = GeneratePath(ValidNodes);
		RetryCount++;

	} while (!bPathFound && RetryCount < MaxRetries);

	if (!bPathFound)
	{
		UE_LOG(LogTemp, Warning, TEXT("GetRandomDestination: Failed to find path after %d attempts"), MaxRetries);
	}
}

void USpacialNav::OnRetryPathTimer()
{
	// Clear the waiting flag so path generation can try again
	bWaitingToRetryPath = false;
	UE_LOG(LogTemp, Log, TEXT("Retry timer expired, resuming path generation"));
}

bool USpacialNav::TryGeneratePathWithNextClosestPoint(TArray<FSpacialNavNode>& InNodes)
{
	if (InNodes.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("TryGeneratePathWithNextClosestPoint: No nodes available"));
		return false;
	}

	// Find the closest valid destination node that hasn't been tried yet
	// This is closest to the DESTINATION ACTOR, not the pawn
	FVector TargetDestination = DestinationActor ? DestinationActor->GetActorLocation() : DestinationPoint;
	
	UE_LOG(LogTemp, Log, TEXT("TryGeneratePathWithNextClosestPoint: Finding reachable nodes closest to destination at %s"), 
		*TargetDestination.ToString());
	
	// Build a sorted list of node indices by distance to destination actor/point
	TArray<TPair<int32, float>> NodeDistances;
	for (int32 i = 0; i < InNodes.Num(); ++i)
	{
		if (InNodes[i].bIsObstacle) continue;
		if (TriedDestinationIndices.Contains(i)) continue; // Skip already tried nodes
		
		float DistSq = FVector::DistSquared(InNodes[i].Location, TargetDestination);
		NodeDistances.Add(TPair<int32, float>(i, DistSq));
	}

	// Sort by distance (closest first)
	NodeDistances.Sort([](const TPair<int32, float>& A, const TPair<int32, float>& B)
	{
		return A.Value < B.Value;
	});

	// No more nodes to try
	if (NodeDistances.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("TryGeneratePathWithNextClosestPoint: No more valid destination nodes to try"));
		return false;
	}

	// Try the closest untried node to the destination
	int32 NextNodeIndex = NodeDistances[0].Key;
	float DistanceToDestination = FMath::Sqrt(NodeDistances[0].Value);
	TriedDestinationIndices.Add(NextNodeIndex);
	
	// Use the node location as an override destination (don't modify the stored destination)
	FVector AlternateDestination = InNodes[NextNodeIndex].Location;
	
	UE_LOG(LogTemp, Log, TEXT("TryGeneratePathWithNextClosestPoint: Trying node %d at %s (%.1f units from destination, attempt %d/%d)"),
		NextNodeIndex, *AlternateDestination.ToString(), DistanceToDestination, TriedDestinationIndices.Num(), NodeDistances.Num());

	// Try to generate path to this alternate destination
	bool bPathFound = GeneratePath(InNodes, AlternateDestination, true);
	
	if (bPathFound)
	{
		// Path found! Clear the tried indices for future pathfinding
		TriedDestinationIndices.Empty();
		UE_LOG(LogTemp, Log, TEXT("TryGeneratePathWithNextClosestPoint: Successfully found path to alternate destination"));
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TryGeneratePathWithNextClosestPoint: Failed to find path to node %d, will try next closest"), NextNodeIndex);
		return false;
	}
}


