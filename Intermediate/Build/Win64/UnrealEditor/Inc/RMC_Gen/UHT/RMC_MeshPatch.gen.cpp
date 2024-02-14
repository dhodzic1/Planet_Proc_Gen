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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "RMC_MeshPatch.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARMC_MeshPatch, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Resolution_MetaData), Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Resolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "RMC_MeshPatch.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARMC_MeshPatch, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARMC_MeshPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARMC_MeshPatch_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARMC_MeshPatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARMC_MeshPatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARMC_MeshPatch_Statics::ClassParams = {
		&ARMC_MeshPatch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARMC_MeshPatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::Class_MetaDataParams), Z_Construct_UClass_ARMC_MeshPatch_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARMC_MeshPatch_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ARMC_MeshPatch, ARMC_MeshPatch::StaticClass, TEXT("ARMC_MeshPatch"), &Z_Registration_Info_UClass_ARMC_MeshPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARMC_MeshPatch), 3444968757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_1042260958(TEXT("/Script/RMC_Gen"),
		Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_RMC_MeshPatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
