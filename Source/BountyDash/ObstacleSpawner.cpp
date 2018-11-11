// Fill out your copyright notice in the Description page of Project Settings.

#include "ObstacleSpawner.h"
#include "BountyDash.h" 
#include "BountyDashGameMode.h" 
#include "Engine/TargetPoint.h" 
#include "Floor.h" 
#include "Obstacle.h" 

#include "EngineUtils.h"


// Sets default values
AObstacleSpawner::AObstacleSpawner()
{
	// �� ���Ͱ� Tick()�� �� �����Ӹ��� �θ����� �Ѵ�. �ʿ���ٸ� ���� ����� ���� �� ���� �ִ�.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	check(Scene);
	RootComponent = Scene;

	SpawnTimer = 1.5f;
}

// Called when the game starts or when spawned
void AObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	for (TActorIterator<ATargetPoint> TargetIter(GetWorld()); TargetIter; ++TargetIter)
	{
		SpawnTargets.Add(*TargetIter);
	}
	for (TActorIterator<AFloor> FloorIter(GetWorld()); FloorIter; ++FloorIter)
	{
		if (FloorIter->GetWorld() == GetWorld())
		{
			KillPoint = FloorIter->GetKillPoint();
			SpawnPoint = FloorIter->GetSpawnPoint();
		}
	}
	TimeSinceLastSpawn = SpawnTimer;
	
}

// Called every frame
void AObstacleSpawner::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TimeSinceLastSpawn += DeltaSeconds;

	float trueSpawnTime = SpawnTimer / (float)GetCustomGameMode <ABountyDashGameMode>(GetWorld())->GetGameLevel();

	if (TimeSinceLastSpawn > trueSpawnTime)
	{
		TimeSinceLastSpawn = 0.0f;
		SpawnObstacle();
	}

}

void AObstacleSpawner::SpawnObstacle()
{
	if (SpawnTargets.Num() > 0 && ObstaclesToSpawn.Num() > 0)
	{
		short Spawner = FMath::Rand() % SpawnTargets.Num();
		short Obstical = FMath::Rand() % ObstaclesToSpawn.Num();
		float CapsuleOffset = 0.0f;

		FActorSpawnParameters SpawnInfo;

		FTransform myTrans = SpawnTargets[Spawner]->GetTransform();
		myTrans.SetLocation(FVector(SpawnPoint, myTrans.GetLocation().Y, myTrans.GetLocation().Z));

		AObstacle* newObs = GetWorld()->SpawnActor<AObstacle>(ObstaclesToSpawn[Obstical], myTrans, SpawnInfo);

		if (newObs)
		{
			newObs->SetKillPoint(KillPoint);

			USphereComponent* obsSphere = Cast<USphereComponent>(newObs->GetComponentByClass(USphereComponent::StaticClass()));

			if (obsSphere)
			{
				newObs->AddActorLocalOffset(FVector(0.0f, 0.0f, obsSphere->GetUnscaledSphereRadius()));
			}
		}//<-- if(newObs) �ݱ�
	}//<-- if(SpawnTargets.Num() > 0 && obstacleToSpawn.Num() > 0) �ݱ�
}