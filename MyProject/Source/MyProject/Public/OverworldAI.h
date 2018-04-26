// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OverworldAI.generated.h"

UCLASS()
class MYPROJECT_API AOverworldAI : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AOverworldAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	FVector GetNextPathPoint();

	FVector NextPathPoint;

	UPROPERTY(EditDefaultsOnly, Category = "OverworldAI")
	float MovementForce;

	UPROPERTY(EditDefaultsOnly, Category = "OverworldAI")
	bool bUseVelocityChange;
	
	UPROPERTY(EditDefaultsOnly, Category = "OverworldAI")
	float RequiredDistanceToTarget;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
