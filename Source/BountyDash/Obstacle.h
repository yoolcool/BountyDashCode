// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BountyDashObject.h"
#include "DestructibleComponent.h"
#include "Obstacle.generated.h"

UCLASS()
class BOUNTYDASH_API AObstacle : public ABountyDashObject
{
	GENERATED_BODY()
public:
	// �� ������ �Ӽ� �⺻���� ������
	AObstacle();
	UDestructibleComponent* GetDestructable();

protected:
	UPROPERTY(EditAnywhere)
	UDestructibleComponent* Mesh;
};