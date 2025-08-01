// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Base532/Base532GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBase532GameMode() {}
// Cross Module References
	BASE532_API UClass* Z_Construct_UClass_ABase532GameMode();
	BASE532_API UClass* Z_Construct_UClass_ABase532GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Base532();
// End Cross Module References
	void ABase532GameMode::StaticRegisterNativesABase532GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABase532GameMode);
	UClass* Z_Construct_UClass_ABase532GameMode_NoRegister()
	{
		return ABase532GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABase532GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABase532GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Base532,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABase532GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABase532GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Base532GameMode.h" },
		{ "ModuleRelativePath", "Base532GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABase532GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABase532GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABase532GameMode_Statics::ClassParams = {
		&ABase532GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABase532GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABase532GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABase532GameMode()
	{
		if (!Z_Registration_Info_UClass_ABase532GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABase532GameMode.OuterSingleton, Z_Construct_UClass_ABase532GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABase532GameMode.OuterSingleton;
	}
	template<> BASE532_API UClass* StaticClass<ABase532GameMode>()
	{
		return ABase532GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABase532GameMode);
	ABase532GameMode::~ABase532GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_Base532_Source_Base532_Base532GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_Base532_Source_Base532_Base532GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABase532GameMode, ABase532GameMode::StaticClass, TEXT("ABase532GameMode"), &Z_Registration_Info_UClass_ABase532GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABase532GameMode), 1654910018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_Base532_Source_Base532_Base532GameMode_h_1048032314(TEXT("/Script/Base532"),
		Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_Base532_Source_Base532_Base532GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_Base532_Source_Base532_Base532GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
