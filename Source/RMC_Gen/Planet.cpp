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
	ARMC_MeshPatch *TerrainFace = GetWorld()->SpawnActor<ARMC_MeshPatch>(ARMC_MeshPatch::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
	TerrainFace->Resolution = resolution;
	TerrainFace->Scale = scale;
	TerrainFace->GenerateCubeSphere();
	
}

// Called every frame
void APlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
