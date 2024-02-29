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
	virtual void OnGenerateMesh_Implementation() override;

	UPROPERTY(VisibleAnywhere)
	UChildActorComponent* ChildActorComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	UPROPERTY(EditAnywhere, Category = "Planet")
	int Resolution = 100;
	UPROPERTY(EditAnywhere, Category = "Planet")
	float Scale = 100;

	// Noise params
	UPROPERTY(EditAnywhere, Category = "Planet")
	int32 Seed = 1337;
	UPROPERTY(EditAnywhere, Category = "Planet")
	int32 Octaves = 3;
	UPROPERTY(EditAnywhere, Category = "Planet")
	float Frequency = 0.01F;
	UPROPERTY(EditAnywhere, Category = "Planet")
	float Lacunarity = 2.5F;
	UPROPERTY(EditAnywhere, Category = "Planet")
	float Gain = 0.5F;
};