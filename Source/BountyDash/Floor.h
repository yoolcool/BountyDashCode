// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Floor.generated.h"

UCLASS()
class BOUNTYDASH_API AFloor : public AActor
{
	GENERATED_BODY()

public:
	// �� ������ �Ӽ� �⺻���� ������
	AFloor();

	// �� ������ ȣ���
	virtual void Tick(float DeltaSeconds) override;

	float GetKillPoint();
	float GetSpawnPoint();

protected:
	UPROPERTY(EditAnywhere)
		TArray<USceneComponent*> FloorMeshScenes;

	UPROPERTY(EditAnywhere)
		TArray<UStaticMeshComponent*> FloorMeshes;

	UPROPERTY(EditAnywhere)
		UBoxComponent* CollisionBox;

	int32 NumRepeatingMesh;
	float KillPoint;
	float SpawnPoint;
};
