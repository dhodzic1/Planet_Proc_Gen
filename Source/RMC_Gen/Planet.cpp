// Fill out your copyright notice in the Description page of Project Settings.

#include "Planet.h"
#include "RMC_MeshPatch.h"

// Sets default values
APlanet::APlanet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create a new ARMC_MeshPatch as a component of APlanet
	Planet = CreateDefaultSubobject<ARMC_MeshPatch>(TEXT("PlanetMesh"));
	// Attach the Planet component to the RootComponent
    Planet->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void APlanet::OnGenerateMesh_Implementation()
{
	Super::OnGenerateMesh_Implementation();
	Planet = GetWorld()->SpawnActor<ARMC_MeshPatch>(ARMC_MeshPatch::StaticClass());
}

// Called when the game starts or when spawned
void APlanet::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlanet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
