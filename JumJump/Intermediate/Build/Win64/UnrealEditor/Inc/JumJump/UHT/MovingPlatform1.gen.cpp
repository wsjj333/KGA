// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumJump/Private/MovingPlatform1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform1() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JUMJUMP_API UClass* Z_Construct_UClass_AMovingPlatform1();
	JUMJUMP_API UClass* Z_Construct_UClass_AMovingPlatform1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumJump();
// End Cross Module References
	void AMovingPlatform1::StaticRegisterNativesAMovingPlatform1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform1);
	UClass* Z_Construct_UClass_AMovingPlatform1_NoRegister()
	{
		return AMovingPlatform1::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JumJump,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform1.h" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x86\x8d\xec\x84\xb1\xec\x9d\xb4\xeb\x9d\xbc\xea\xb3\xa0 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90 \xec\x95\x8c\xeb\xa0\xa4\xec\xa3\xbc\xeb\x8a\x94 \xeb\xa7\xa4\xed\x81\xac\xeb\xa1\x9c\n//\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x86\x8d\xec\x84\xb1\xec\x9d\xb4\xeb\x9d\xbc\xea\xb3\xa0 \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90 \xec\x95\x8c\xeb\xa0\xa4\xec\xa3\xbc\xeb\x8a\x94 \xeb\xa7\xa4\xed\x81\xac\xeb\xa1\x9c\n\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformVelocity_MetaData), Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveDistance_MetaData), Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformRotation_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "Private/MovingPlatform1.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformRotation = { "PlatformRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform1, PlatformRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformRotation_MetaData), Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform1_Statics::NewProp_PlatformRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform1_Statics::ClassParams = {
		&AMovingPlatform1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMovingPlatform1()
	{
		if (!Z_Registration_Info_UClass_AMovingPlatform1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform1.OuterSingleton, Z_Construct_UClass_AMovingPlatform1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlatform1.OuterSingleton;
	}
	template<> JUMJUMP_API UClass* StaticClass<AMovingPlatform1>()
	{
		return AMovingPlatform1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform1);
	AMovingPlatform1::~AMovingPlatform1() {}
	struct Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_Private_MovingPlatform1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_Private_MovingPlatform1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform1, AMovingPlatform1::StaticClass, TEXT("AMovingPlatform1"), &Z_Registration_Info_UClass_AMovingPlatform1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform1), 2768256165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_Private_MovingPlatform1_h_3897544447(TEXT("/Script/JumJump"),
		Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_Private_MovingPlatform1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_JumJump_Source_JumJump_Private_MovingPlatform1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
