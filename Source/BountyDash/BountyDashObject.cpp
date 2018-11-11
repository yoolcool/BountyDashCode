// Fill out your copyright notice in the Description page of Project Settings.

#include "BountyDashObject.h"
#include "BountyDash.h"
#include "BountyDashGameMode.h"

ABountyDashObject::ABountyDashObject()
{
	// �� ���Ͱ� Tick()�� �� �����Ӹ��� �θ����� �Ѵ�. �ʿ���ٸ� ���� ����� ���� �� ���� �ִ�.
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	check(Collider);

	RootComponent = Collider;
	Collider->SetCollisionProfileName("OverlapAllDynamic");

	OnActorBeginOverlap.AddDynamic(this, &ABountyDashObject::MyOnActorOverlap);
	OnActorBeginOverlap.AddDynamic(this, &ABountyDashObject::MyOnActorEndOverlap);
}

// ������ ���۵ǰų� �����Ǿ��� �� ȣ��� 
void ABountyDashObject::BeginPlay()
{
	Super::BeginPlay();
}

// �� ������ ȣ���
void ABountyDashObject::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	float gameSpeed = GetCustomGameMode<ABountyDashGameMode>(GetWorld())->GetInvGameSpeed();

	AddActorWorldOffset(FVector(gameSpeed, 0.0f, 0.0f));

	if (GetActorLocation().X < KillPoint)
	{
		Destroy();
	}
}

void ABountyDashObject::MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{
}

void ABountyDashObject::MyOnActorEndOverlap(AActor* OverlappedActor, AActor* otherActor)
{
}

void ABountyDashObject::SetKillPoint(float point)
{
	KillPoint = point;
}

float ABountyDashObject::GetKillPoint()
{
	return KillPoint;
}