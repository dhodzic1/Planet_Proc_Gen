// Fill out your copyright notice in the Description page of Project Settings.

#include "Planet.h"
#include "RMC_MeshPatch.h"

// Sets default values
APlanet::APlanet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActorComponent"));
	ChildActorComponent->SetChildActorClass(ARMC_MeshPatch::StaticClass());
	ChildActorComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

	Resolution = 100;
	Scale = 100.0f;
}

void APlanet::OnGenerateMesh_Implementation()
{
	Super::OnGenerateMesh_Implementation();
	auto ChildActor = ChildActorComponent->GetChildActor();
	ARMC_MeshPatch* MeshPatch = Cast<ARMC_MeshPatch>(ChildActor);
	if (MeshPatch != nullptr) {
		MeshPatch->SetResolution(Resolution);
		MeshPatch->SetScale(Scale);
		MeshPatch->GenerateCubeSphere();
	}
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
