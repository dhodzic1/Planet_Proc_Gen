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

	void SetResolution(int res);
	void SetScale(float scale);

	void SetSeed(int32 s);
	void SetOctaves(int32 o);
	void SetFrequency(float f);
	void SetLacunarity(float l);
	void SetGain(float g);

	void GeneratePlanet();
	void GenerateNoise();
	void RenderMesh();

	// Acts as parameterized constructor
	void InitializeMeshDirection(FVector3f localUp);
	void ComputeMeshData();

private:

	// Vectors corresponding to each face of cube
	const TArray<FVector3f> Faces = {
		FVector3f::UpVector,
		FVector3f::DownVector,
		FVector3f::LeftVector,
		FVector3f::RightVector,
		FVector3f::ForwardVector,
		FVector3f::BackwardVector
	};

	TArray<FVector3f> Vertices;
	TArray<uint32> Triangles;
	TArray<FVector2f> UV;
	TArray<FVector3f> Tangents;
	TArray<FVector3f> Normals;

	FVector3f LocalUp;
	FVector3f AxisA;
	FVector3f AxisB;

	class URealtimeMeshSimple* Mesh;
	class UFastNoiseWrapper* fastNoiseWrapper;

	int Resolution;
	float Scale;
	
	// Noise params
	int32 Seed;
	float Frequency;
	int32 Octaves;
	float Lacunarity;
	float Gain;
};
