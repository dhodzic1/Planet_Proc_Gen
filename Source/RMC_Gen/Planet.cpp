// Fill out your copyright notice in the Description page of Project Settings.

#include "Planet.h"
#include "RMC_MeshPatch.h"

// Sets default values
APlanet::APlanet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APlanet::BeginPlay()
{
	Super::BeginPlay();
	GeneratePlanet();
}

// Called every frame
void APlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlanet::GeneratePlanet()
{
	TArray<FVector3f> Directions = {
		FVector3f::UpVector,
		FVector3f::DownVector,
		FVector3f::LeftVector,
		FVector3f::RightVector,
		FVector3f::ForwardVector,
		FVector3f::BackwardVector
	};

	TArray<ARMC_MeshPatch> 

	// Need six terrain faces and need to call generate terrain face function on each

	for (int i = 0; i < 6; i++) {
		ARMC_MeshPatch* TerrainFace = GetWorld()->SpawnActor<ARMC_MeshPatch>();
		if (TerrainFace != nullptr) {
			TerrainFace->InitializeMesh(Resolution, Scale, Directions[i]);
			TerrainFace->CreateMesh();
		}
	}
}