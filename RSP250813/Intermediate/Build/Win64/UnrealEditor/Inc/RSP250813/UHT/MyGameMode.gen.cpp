// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RSP250813/MyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	RSP250813_API UClass* Z_Construct_UClass_AMyGameMode();
	RSP250813_API UClass* Z_Construct_UClass_AMyGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RSP250813();
// End Cross Module References
	DEFINE_FUNCTION(AMyGameMode::execRPSisEnd)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerHp);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPTHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RPSisEnd(Z_Param_PlayerHp,Z_Param_GPTHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameMode::execRPSHPResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_result);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerHp);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GPTHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RPSHPResult(Z_Param_result,Z_Param_Out_PlayerHp,Z_Param_Out_GPTHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyGameMode::execRPSResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPTIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RPSResult(Z_Param_PlayerIndex,Z_Param_GPTIndex);
		P_NATIVE_END;
	}
	void AMyGameMode::StaticRegisterNativesAMyGameMode()
	{
		UClass* Class = AMyGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RPSHPResult", &AMyGameMode::execRPSHPResult },
			{ "RPSisEnd", &AMyGameMode::execRPSisEnd },
			{ "RPSResult", &AMyGameMode::execRPSResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics
	{
		struct MyGameMode_eventRPSHPResult_Parms
		{
			int32 result;
			int32 PlayerHp;
			int32 GPTHp;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerHp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPTHp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSHPResult_Parms, result), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::NewProp_PlayerHp = { "PlayerHp", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSHPResult_Parms, PlayerHp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::NewProp_GPTHp = { "GPTHp", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSHPResult_Parms, GPTHp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::NewProp_result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::NewProp_PlayerHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::NewProp_GPTHp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "RPSHPResult", nullptr, nullptr, Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::MyGameMode_eventRPSHPResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::MyGameMode_eventRPSHPResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameMode_RPSHPResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameMode_RPSHPResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics
	{
		struct MyGameMode_eventRPSisEnd_Parms
		{
			int32 PlayerHp;
			int32 GPTHp;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerHp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPTHp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::NewProp_PlayerHp = { "PlayerHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSisEnd_Parms, PlayerHp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::NewProp_GPTHp = { "GPTHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSisEnd_Parms, GPTHp), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSisEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::NewProp_PlayerHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::NewProp_GPTHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "RPSisEnd", nullptr, nullptr, Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::MyGameMode_eventRPSisEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::MyGameMode_eventRPSisEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameMode_RPSisEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameMode_RPSisEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyGameMode_RPSResult_Statics
	{
		struct MyGameMode_eventRPSResult_Parms
		{
			int32 PlayerIndex;
			int32 GPTIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPTIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSResult_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::NewProp_GPTIndex = { "GPTIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSResult_Parms, GPTIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameMode_eventRPSResult_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::NewProp_GPTIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameMode, nullptr, "RPSResult", nullptr, nullptr, Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::MyGameMode_eventRPSResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::MyGameMode_eventRPSResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyGameMode_RPSResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameMode_RPSResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameMode);
	UClass* Z_Construct_UClass_AMyGameMode_NoRegister()
	{
		return AMyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_RSP250813,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameMode_RPSHPResult, "RPSHPResult" }, // 1854892685
		{ &Z_Construct_UFunction_AMyGameMode_RPSisEnd, "RPSisEnd" }, // 548559465
		{ &Z_Construct_UFunction_AMyGameMode_RPSResult, "RPSResult" }, // 2715273674
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameMode.h" },
		{ "ModuleRelativePath", "MyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameMode_Statics::ClassParams = {
		&AMyGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameMode.OuterSingleton, Z_Construct_UClass_AMyGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameMode.OuterSingleton;
	}
	template<> RSP250813_API UClass* StaticClass<AMyGameMode>()
	{
		return AMyGameMode::StaticClass();
	}
	AMyGameMode::AMyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameMode);
	AMyGameMode::~AMyGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_RSP250813_Source_RSP250813_MyGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_RSP250813_Source_RSP250813_MyGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameMode, AMyGameMode::StaticClass, TEXT("AMyGameMode"), &Z_Registration_Info_UClass_AMyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameMode), 118576374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_RSP250813_Source_RSP250813_MyGameMode_h_3409118893(TEXT("/Script/RSP250813"),
		Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_RSP250813_Source_RSP250813_MyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Jeon_Documents_KGA_RSP250813_Source_RSP250813_MyGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
