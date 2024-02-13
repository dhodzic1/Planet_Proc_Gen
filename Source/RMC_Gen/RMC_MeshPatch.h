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
	void InitializeMesh(int res, int scale, FVector3f localUp);
	void CreateMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	TArray<FVector3f> Vertices;
	TArray<uint32> Triangles;
	TArray<FVector2f> UV;
	TArray<FVector3f> Tangents;
	TArray<FVector3f> Normals;

	int Resolution;
	int Scale;

	FVector3f LocalUp;
	FVector3f AxisA;
	FVector3f AxisB;
};
