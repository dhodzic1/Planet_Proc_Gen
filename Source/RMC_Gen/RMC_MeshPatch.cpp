// Fill out your copyright notice in the Description page of Project Settings.

#include "RMC_MeshPatch.h"

#include "RealtimeMeshSimple.h"
#include <Mesh/RealtimeMeshBuilder.h>
#include <Math/UnrealMathUtility.h>

// Sets default values
ARMC_MeshPatch::ARMC_MeshPatch()
{
	Resolution = 100;
	Scale = 100.0f;
}

void ARMC_MeshPatch::InitializeMeshDirection(FVector3f localUp)
{
	LocalUp = localUp;
	AxisA = FVector3f(LocalUp.Y, LocalUp.Z, LocalUp.X);
	AxisB = FVector3f::CrossProduct(LocalUp, AxisA);
}

int ARMC_MeshPatch::GetResolution() { return Resolution; }
void ARMC_MeshPatch::SetResolution(int res) { Resolution = res; }
float ARMC_MeshPatch::GetScale() { return Scale; }
void ARMC_MeshPatch::SetScale(float scale) { Scale = scale; }

// Initializes each mesh face with a local direction vector and renders it. 
// Note: Vertices are normalized within CreateMesh() to transform cube into sphere
void ARMC_MeshPatch::GenerateCubeSphere()
{
	// Clear TArrays on update of generated mesh
	Vertices.Empty();
	UV.Empty();
	Triangles.Empty();
	Tangents.Empty();
	Normals.Empty();

	for (int i = 0; i < 6; i++) {
		this->InitializeMeshDirection(Faces[i]);
		this->CreateMesh();
	}
}

// Draws tessellated mesh face based on a set resolution and scale
void ARMC_MeshPatch::CreateMesh()
{
	float CellSize = 10;

	for (int y = 0; y <= Resolution; y++) {
		for (int x = 0; x <= Resolution; x++) {
			FVector2f Percent = FVector2f(x, y) / Resolution; // percentage of x and y we've completed in loop (range: 0, 1)
			FVector3f vert = LocalUp + (Percent.X - 0.5f) * 2 * AxisA + (Percent.Y - 0.5f) * 2 * AxisB;
			vert.Normalize(); // Normalize vertices to be same distance from center (0, 0, 0)
			int vertIndex = Vertices.Num();
			Vertices.Add(vert * Scale);
			UV.Add(FVector2f(static_cast<float>(x) / CellSize, static_cast<float>(y) / CellSize));

			// If we're not on the last row or column, draw triangles
			if (x < Resolution && y < Resolution) {
				Triangles.Add(vertIndex);
				Triangles.Add(vertIndex + Resolution+ 1);
				Triangles.Add(vertIndex + 1);

				Triangles.Add(vertIndex + 1);
				Triangles.Add(vertIndex + Resolution + 1);
				Triangles.Add(vertIndex + Resolution + 2);
			}
		}
	}

	Tangents.SetNum(Vertices.Num());
	Normals.SetNum(Vertices.Num());

	// RMC built in function which generates normals and tangents for mesh face. 
	// Params are Tri and Vert TArrays and lambda functions for getting UV coord and setting Tangent/Normal TArrays.
	RealtimeMeshAlgo::GenerateTangents(TConstArrayView<uint32>(Triangles), TConstArrayView<FVector3f>(Vertices),
		[&](const int Index) { return UV[Index]; },
		[&](const int Index, const FVector3f Tangent, const FVector3f Normal)
		{
			Tangents[Index] = Tangent;
			Normals[Index] = Normal;
		},
		true); // Final param set to true for computing smooth normals (to avoid jarring lighting with cubesphere seams)

	// Initialize RealtimeMesh, StreamSet, and Builder
	URealtimeMeshSimple* Mesh = GetRealtimeMeshComponent()->InitializeRealtimeMesh<URealtimeMeshSimple>();
	
	FRealtimeMeshStreamSet StreamSet;
	TRealtimeMeshBuilderLocal Builder(StreamSet);
	Builder.EnableColors();
	Builder.EnableTangents();
	Builder.EnableTexCoords();
	Builder.EnablePolyGroups(); // must enable polygroups or mesh may not render


	// Add Vertices to builder
	for (int i = 0; i < Vertices.Num(); i++) {
		Builder.AddVertex(Vertices[i]).SetNormalAndTangent(Normals[i], Tangents[i]).SetTexCoords(UV[i]);
	}
	// Add Triangles to builder (Counter-Clockwise winding order)
	for (int t = 0; t < Triangles.Num(); t += 3) {
		Builder.AddTriangle(Triangles[t], Triangles[t + 1], Triangles[t + 2], 0);
	}

	const auto SecGrpKey = FRealtimeMeshSectionGroupKey::Create(0, FName("Patch"));
	auto SectionConfig = FRealtimeMeshSectionConfig(ERealtimeMeshSectionDrawType::Static, 0);
	SectionConfig.bIsVisible = true;

	Mesh->CreateSectionGroup(SecGrpKey, StreamSet);
	Mesh->UpdateSectionConfig(FRealtimeMeshSectionKey::CreateForPolyGroup(SecGrpKey, 0), SectionConfig, true);
}