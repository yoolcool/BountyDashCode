// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstacle.h"

#include "Components/StaticMeshComponent.h"

// �⺻ �� ����
AObstacle::AObstacle()
{
	// �� ���Ͱ� Tick()�� �� �����Ӹ��� �θ����� �Ѵ�. �ʿ���ٸ� ���� ����� ���� �� ���� �ִ�.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UDestructibleComponent>(TEXT("Mesh"));
	check(Mesh);

	Mesh->AttachTo(Collider);
	Mesh->SetCollisionResponseToAllChannels(ECR_Ignore);
}

UDestructibleComponent* AObstacle::GetDestructable()
{
	return Mesh;
}