// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RMC_Gen/RMC_MeshPatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRMC_MeshPatch() {}
// Cross Module References
	REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
	RMC_GEN_API UClass* Z_Construct_UClass_ARMC_MeshPatch();
	RMC_GEN_API UClass* Z_Construct_UClass_ARMC_MeshPatch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RMC_Gen();
// End Cross Module References
	void ARMC_MeshPatch::StaticRegisterNativesARMC_MeshPatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARMC_MeshPatch);
	UClass* Z_Construct_UClass_ARMC_MeshPatch_NoRegister()
	{
		return ARMC_MeshPatch::StaticClass();
	}
	struct Z_Construct_UClass_ARMC_MeshPatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARMC_MeshPatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RMC_Gen,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARMC_MeshPatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RMC_MeshPatch.h" },
		{ "ModuleRelativePath", "RMC_MeshPatch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARMC_MeshPatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARMC_MeshPatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARMC_MeshPatch_Statics::ClassParams = {
		&ARMC_MeshPatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::Class_MetaDataParams), Z_Construct_UClass_ARMC_MeshPatch_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARMC_MeshPatch()
	{
		if (!Z_Registration_Info_UClass_ARMC_MeshPatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARMC_MeshPatch.OuterSingleton, Z_Construct_UClass_ARMC_MeshPatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARMC_MeshPatch.OuterSingleton;
	}
	template<> RMC_GEN_API UClass* StaticClass<ARMC_MeshPatch>()
	{
		return ARMC_MeshPatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARMC_MeshPatch);
	ARMC_MeshPatch::~ARMC_MeshPatch() {}
	struct Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARMC_MeshPatch, ARMC_MeshPatch::StaticClass, TEXT("ARMC_MeshPatch"), &Z_Registration_Info_UClass_ARMC_MeshPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARMC_MeshPatch), 3780310550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_907535432(TEXT("/Script/RMC_Gen"),
		Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
