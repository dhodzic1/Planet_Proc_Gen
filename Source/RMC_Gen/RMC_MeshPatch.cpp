// Fill out your copyright notice in the Description page of Project Settings.

#include "RMC_MeshPatch.h"

#include "RealtimeMeshSimple.h"
#include "RealtimeMeshLibrary.h"

#include <Mesh/RealtimeMeshBuilder.h>
#include <Mesh/RealtimeMeshBasicShapeTools.h>
#include <Mesh/RealtimeMeshSimpleData.h>

// Sets default values
ARMC_MeshPatch::ARMC_MeshPatch()
{
}

void ARMC_MeshPatch::InitializeMeshDirection(FVector3f localUp)
{
	LocalUp = localUp;
	AxisA = FVector3f(LocalUp.Y, LocalUp.Z, LocalUp.X);
	AxisB = FVector3f::CrossProduct(LocalUp, AxisA);
}

int ARMC_MeshPatch::GetResolution() { return Resolution; }
void ARMC_MeshPatch::SetResolution(int res) { Resolution = res; }
int ARMC_MeshPatch::GetScale() { return Scale; }
void ARMC_MeshPatch::SetScale(int scale) { Scale = scale; }

// Called when the game starts or when spawned
void ARMC_MeshPatch::BeginPlay()
{
	Super::BeginPlay();
	GenerateCubeSphere();
}

void ARMC_MeshPatch::GenerateCubeSphere()
{
	TArray<FVector3f> Faces = {
		FVector3f::UpVector,
		FVector3f::DownVector,
		FVector3f::LeftVector,
		FVector3f::RightVector,
		FVector3f::ForwardVector,
		FVector3f::BackwardVector
	};

	for (int i = 0; i < 6; i++) {
		InitializeMeshDirection(Faces[i]);
		CreateMesh();
	}
}

void ARMC_MeshPatch::CreateMesh()
{

	float CellSize = 10;

	for (int y = 0; y <= Resolution; y++)
	{
		for (int x = 0; x <= Resolution; x++)
		{
			FVector2f Percent = FVector2f(x, y) / Resolution; // percentage of x and y we've completed in loop (range: 0, 1)
			FVector3f vert = LocalUp + (Percent.X - 0.5f) * 2 * AxisA + (Percent.Y - 0.5f) * 2 * AxisB;
			vert.Normalize();
			int vertIndex = Vertices.Num();
			Vertices.Add(vert * Scale);
			UV.Add(FVector2f(static_cast<float>(x) / CellSize, static_cast<float>(y) / CellSize));

			// If we're not on the last row or column, add a quad (two triangles)
			if (x < Resolution && y < Resolution)
			{
				Triangles.Add(vertIndex);
				Triangles.Add(vertIndex + Resolution+ 1);
				Triangles.Add(vertIndex + 1);

				Triangles.Add(vertIndex + 1);
				Triangles.Add(vertIndex + Resolution + 1);
				Triangles.Add(vertIndex + Resolution + 2);
			}
		}
	}

	// debug
	/*for (auto& v : Vertices) {
		DrawDebugSphere(GetWorld(), FVector(v.X, v.Y, v.Z), 5.0f, 16, FColor::White, true, -1.0f, 0U, 0.0f);
	}*/

	Tangents.SetNum(Vertices.Num());
	Normals.SetNum(Vertices.Num());

	GEngine->AddOnScreenDebugMessage(1, 2, FColor::Green, TEXT("Generating Tangents..."));

	RealtimeMeshAlgo::GenerateTangents(TConstArrayView<uint32>(Triangles), TConstArrayView<FVector3f>(Vertices),
		[&](const int Index) { return UV[Index]; },
		[&](const int Index, const FVector3f Tangent, const FVector3f Normal)
		{
			Tangents[Index] = Tangent;
			Normals[Index] = Normal;
		},
		true);

	URealtimeMeshSimple* Mesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();

	FRealtimeMeshStreamSet StreamSet;
	TRealtimeMeshBuilderLocal Builder(StreamSet);
	Builder.EnableColors();
	Builder.EnableTangents();
	Builder.EnableTexCoords();
	Builder.EnablePolyGroups();


	// Add Vertices to builder
	for (int i = 0; i < Vertices.Num(); i++)
	{
		Builder.AddVertex(Vertices[i]).SetNormalAndTangent(Normals[i], Tangents[i]).SetTexCoords(UV[i]);
	}
	// Add Triangles to buillder
	for (int t = 0; t < Triangles.Num(); t += 3)
	{
		Builder.AddTriangle(Triangles[t], Triangles[t + 1], Triangles[t + 2], 0);
	}

	const auto SecGrpKey = FRealtimeMeshSectionGroupKey::Create(0, FName("Patch"));
	auto SectionConfig = FRealtimeMeshSectionConfig(ERealtimeMeshSectionDrawType::Static, 0);
	SectionConfig.bIsVisible = true;

	Mesh->CreateSectionGroup(SecGrpKey, StreamSet);
	Mesh->UpdateSectionConfig(FRealtimeMeshSectionKey::CreateForPolyGroup(SecGrpKey, 0), SectionConfig, true);
}

// Called every frame
void ARMC_MeshPatch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}