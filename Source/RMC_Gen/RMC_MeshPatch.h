// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RealtimeMeshSimple.h"
#include "RealtimeMeshActor.h"
#include "RMC_MeshPatch.generated.h"

UCLASS()
class RMC_GEN_API ARMC_MeshPatch : public ARealtimeMeshActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ARMC_MeshPatch();
	friend class APlanet;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void InitializeMeshDirection(FVector3f localUp);
	void CreateMesh();
	void GenerateCubeSphere();
	void SetResolution(int res);
	void SetScale(int scale);

	int GetResolution();
	int GetScale();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Planet")
	int Resolution;
	UPROPERTY(EditAnywhere, Category = "Planet")
	int Scale;

private:

	TArray<FVector3f> Vertices;
	TArray<uint32> Triangles;
	TArray<FVector2f> UV;
	TArray<FVector3f> Tangents;
	TArray<FVector3f> Normals;

	FVector3f LocalUp;
	FVector3f AxisA;
	FVector3f AxisB;
};
