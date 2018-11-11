// Fill out your copyright notice in the Description page of Project Settings.

#include "BountyDashPowerUp.h"
#include "PowerUpObject.h"
#include "Obstacle.h"
#include "BountyDashCharacter.h"

#include "ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

// �⺻ �� ����
ABountyDashPowerUp::ABountyDashPowerUp()
{
	// �� ���Ͱ� Tick()�� �� �����Ӹ��� �θ����� �Ѵ�. �ʿ���ٸ� ���� ����� ���� �� ���� �ִ�.
	PrimaryActorTick.bCanEverTick = true;

	PowerUp = CreateDefaultSubobject<UPowerUpObject>(TEXT("PowerUp"));
	check(PowerUp);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	check(Mesh);

	Mesh->AttachTo(RootComponent);
	Mesh->SetCollisionProfileName("OverlapAllDynamic");


	FString AssetName;
	switch (PowerUp->GetType())
	{
	case EPowerUp::SPEED:
		AssetName = "/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid";
		break;

	case EPowerUp::SMASH:
		AssetName = "/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule";
		break;

	case EPowerUp::MAGNET:
		AssetName = "/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180";
		break;

	default:
		break;
	}

	ConstructorHelpers::FObjectFinder<UStaticMesh> myMesh(&AssetName.GetCharArray()[0]);

	if (myMesh.Succeeded())
	{
		Mesh->SetStaticMesh(myMesh.Object);
	}
} // <- ABountyDashPowerUp::ABountyDashPowerUp() �ݱ�


void ABountyDashPowerUp::MyOnActorOverlap(AActor* OverlappedActor, AActor* otherActor)
{

}