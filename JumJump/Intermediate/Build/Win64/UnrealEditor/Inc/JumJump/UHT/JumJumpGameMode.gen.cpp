// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumJump/JumJumpGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumJumpGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	JUMJUMP_API UClass* Z_Construct_UClass_AJumJumpGameMode();
	JUMJUMP_API UClass* Z_Construct_UClass_AJumJumpGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumJump();
// End Cross Module References
	void AJumJumpGameMode::StaticRegisterNativesAJumJumpGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumJumpGameMode);
	UClass* Z_Construct_UClass_AJumJumpGameMode_NoRegister()
	{
		return AJumJumpGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJumJumpGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJumJumpGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JumJump,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumJumpGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumJumpGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "JumJumpGameMode.h" },
		{ "ModuleRelativePath", "JumJumpGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJumJumpGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumJumpGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumJumpGameMode_Statics::ClassParams = {
		&AJumJumpGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumJumpGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumJumpGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AJumJumpGameMode()
	{
		if (!Z_Registration_Info_UClass_AJumJumpGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumJumpGameMode.OuterSingleton, Z_Construct_UClass_AJumJumpGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJumJumpGameMode.OuterSingleton;
	}
	template<> JUMJUMP_API UClass* StaticClass<AJumJumpGameMode>()
	{
		return AJumJumpGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumJumpGameMode);
	AJumJumpGameMode::~AJumJumpGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_JumJumpGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_JumJumpGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJumJumpGameMode, AJumJumpGameMode::StaticClass, TEXT("AJumJumpGameMode"), &Z_Registration_Info_UClass_AJumJumpGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumJumpGameMode), 3873892849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_JumJumpGameMode_h_1954987601(TEXT("/Script/JumJump"),
		Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_JumJumpGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_JumJumpGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
