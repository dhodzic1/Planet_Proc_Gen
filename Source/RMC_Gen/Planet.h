// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RealtimeMeshActor.h"
#include "Planet.generated.h"

UCLASS()
class RMC_GEN_API APlanet : public ARealtimeMeshActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Planet")
	int Resolution;
	UPROPERTY(EditAnywhere, Category = "Planet")
	int Scale;

	void GeneratePlanet();
};