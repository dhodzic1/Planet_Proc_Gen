// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RMC_Gen/Planet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	REALTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARealtimeMeshActor();
	RMC_GEN_API UClass* Z_Construct_UClass_APlanet();
	RMC_GEN_API UClass* Z_Construct_UClass_APlanet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RMC_Gen();
// End Cross Module References
	void APlanet::StaticRegisterNativesAPlanet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlanet);
	UClass* Z_Construct_UClass_APlanet_NoRegister()
	{
		return APlanet::StaticClass();
	}
	struct Z_Construct_UClass_APlanet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildActorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Octaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Octaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARealtimeMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RMC_Gen,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Planet.h" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_ChildActorComponent_MetaData[] = {
		{ "Category", "Planet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_ChildActorComponent = { "ChildActorComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, ChildActorComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_ChildActorComponent_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_ChildActorComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Resolution_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Resolution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Planet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Noise params\n" },
#endif
		{ "ModuleRelativePath", "Planet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noise params" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Seed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Seed_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Seed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Octaves_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Octaves = { "Octaves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Octaves), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Octaves_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Octaves_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Frequency_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Frequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Lacunarity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Lacunarity_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Lacunarity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanet_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanet_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlanet, Gain), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::NewProp_Gain_MetaData), Z_Construct_UClass_APlanet_Statics::NewProp_Gain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_ChildActorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Octaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanet_Statics::NewProp_Gain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlanet_Statics::ClassParams = {
		&APlanet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlanet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams), Z_Construct_UClass_APlanet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlanet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlanet()
	{
		if (!Z_Registration_Info_UClass_APlanet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlanet.OuterSingleton, Z_Construct_UClass_APlanet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlanet.OuterSingleton;
	}
	template<> RMC_GEN_API UClass* StaticClass<APlanet>()
	{
		return APlanet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanet);
	APlanet::~APlanet() {}
	struct Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_Planet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_Planet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlanet, APlanet::StaticClass, TEXT("APlanet"), &Z_Registration_Info_UClass_APlanet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlanet), 1326201549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_Planet_h_1604276739(TEXT("/Script/RMC_Gen"),
		Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_Planet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_daria_OneDrive_Documents_Unreal_Projects_RMC_Gen_Source_RMC_Gen_Planet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
