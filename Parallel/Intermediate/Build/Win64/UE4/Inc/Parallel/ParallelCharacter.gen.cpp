// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parallel/Public/ParallelCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParallelCharacter() {}
// Cross Module References
	PARALLEL_API UClass* Z_Construct_UClass_AParallelCharacter_NoRegister();
	PARALLEL_API UClass* Z_Construct_UClass_AParallelCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Parallel();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AParallelCharacter::execRemoveBattery)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveBattery(Z_Param_NumToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParallelCharacter::execAddBattery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBattery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParallelCharacter::execSwitchWorlds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchWorlds();
		P_NATIVE_END;
	}
	static FName NAME_AParallelCharacter_Drop = FName(TEXT("Drop"));
	void AParallelCharacter::Drop()
	{
		ProcessEvent(FindFunctionChecked(NAME_AParallelCharacter_Drop),NULL);
	}
	static FName NAME_AParallelCharacter_Grab = FName(TEXT("Grab"));
	void AParallelCharacter::Grab(UPrimitiveComponent* Obj)
	{
		ParallelCharacter_eventGrab_Parms Parms;
		Parms.Obj=Obj;
		ProcessEvent(FindFunctionChecked(NAME_AParallelCharacter_Grab),&Parms);
	}
	void AParallelCharacter::StaticRegisterNativesAParallelCharacter()
	{
		UClass* Class = AParallelCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBattery", &AParallelCharacter::execAddBattery },
			{ "RemoveBattery", &AParallelCharacter::execRemoveBattery },
			{ "SwitchWorlds", &AParallelCharacter::execSwitchWorlds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParallelCharacter_AddBattery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParallelCharacter_AddBattery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParallelCharacter_AddBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParallelCharacter, nullptr, "AddBattery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParallelCharacter_AddBattery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_AddBattery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParallelCharacter_AddBattery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParallelCharacter_AddBattery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParallelCharacter_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParallelCharacter_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParallelCharacter_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParallelCharacter, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParallelCharacter_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParallelCharacter_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParallelCharacter_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParallelCharacter_Grab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Obj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParallelCharacter_Grab_Statics::NewProp_Obj_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParallelCharacter_Grab_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParallelCharacter_eventGrab_Parms, Obj), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AParallelCharacter_Grab_Statics::NewProp_Obj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_Grab_Statics::NewProp_Obj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParallelCharacter_Grab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParallelCharacter_Grab_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParallelCharacter_Grab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParallelCharacter_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParallelCharacter, nullptr, "Grab", nullptr, nullptr, sizeof(ParallelCharacter_eventGrab_Parms), Z_Construct_UFunction_AParallelCharacter_Grab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_Grab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParallelCharacter_Grab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_Grab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParallelCharacter_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParallelCharacter_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics
	{
		struct ParallelCharacter_eventRemoveBattery_Parms
		{
			int32 NumToRemove;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::NewProp_NumToRemove = { "NumToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParallelCharacter_eventRemoveBattery_Parms, NumToRemove), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParallelCharacter_eventRemoveBattery_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ParallelCharacter_eventRemoveBattery_Parms), &Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::NewProp_NumToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParallelCharacter, nullptr, "RemoveBattery", nullptr, nullptr, sizeof(ParallelCharacter_eventRemoveBattery_Parms), Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParallelCharacter_RemoveBattery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParallelCharacter_RemoveBattery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParallelCharacter_SwitchWorlds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParallelCharacter_SwitchWorlds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParallelCharacter_SwitchWorlds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParallelCharacter, nullptr, "SwitchWorlds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParallelCharacter_SwitchWorlds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AParallelCharacter_SwitchWorlds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParallelCharacter_SwitchWorlds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParallelCharacter_SwitchWorlds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParallelCharacter_NoRegister()
	{
		return AParallelCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AParallelCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlueWorld_MetaData[];
#endif
		static void NewProp_bBlueWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlueWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHoldingCrate_MetaData[];
#endif
		static void NewProp_bIsHoldingCrate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHoldingCrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfBatteries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfBatteries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParallelCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Parallel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParallelCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParallelCharacter_AddBattery, "AddBattery" }, // 3634473665
		{ &Z_Construct_UFunction_AParallelCharacter_Drop, "Drop" }, // 3897548768
		{ &Z_Construct_UFunction_AParallelCharacter_Grab, "Grab" }, // 1347352224
		{ &Z_Construct_UFunction_AParallelCharacter_RemoveBattery, "RemoveBattery" }, // 1399751662
		{ &Z_Construct_UFunction_AParallelCharacter_SwitchWorlds, "SwitchWorlds" }, // 4124045903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ParallelCharacter.h" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "ParallelCharacter" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParallelCharacter, MouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_MouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_MouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld_MetaData[] = {
		{ "Category", "ParallelCharacter" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld_SetBit(void* Obj)
	{
		((AParallelCharacter*)Obj)->bBlueWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld = { "bBlueWorld", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AParallelCharacter), &Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_FirstPersonCamera_MetaData[] = {
		{ "Category", "ParallelCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_FirstPersonCamera = { "FirstPersonCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParallelCharacter, FirstPersonCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_FirstPersonCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_FirstPersonCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParallelCharacter, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_PhysicsHandle_MetaData[] = {
		{ "Category", "ParallelCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_PhysicsHandle = { "PhysicsHandle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParallelCharacter, PhysicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_PhysicsHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_PhysicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate_MetaData[] = {
		{ "Category", "ParallelCharacter" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate_SetBit(void* Obj)
	{
		((AParallelCharacter*)Obj)->bIsHoldingCrate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate = { "bIsHoldingCrate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AParallelCharacter), &Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParallelCharacter_Statics::NewProp_NumOfBatteries_MetaData[] = {
		{ "Category", "ParallelCharacter" },
		{ "ModuleRelativePath", "Public/ParallelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParallelCharacter_Statics::NewProp_NumOfBatteries = { "NumOfBatteries", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParallelCharacter, NumOfBatteries), METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_NumOfBatteries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::NewProp_NumOfBatteries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParallelCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_MouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bBlueWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_FirstPersonCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_InteractionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_PhysicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_bIsHoldingCrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParallelCharacter_Statics::NewProp_NumOfBatteries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParallelCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParallelCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParallelCharacter_Statics::ClassParams = {
		&AParallelCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParallelCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AParallelCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParallelCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParallelCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParallelCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParallelCharacter, 2550330817);
	template<> PARALLEL_API UClass* StaticClass<AParallelCharacter>()
	{
		return AParallelCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParallelCharacter(Z_Construct_UClass_AParallelCharacter, &AParallelCharacter::StaticClass, TEXT("/Script/Parallel"), TEXT("AParallelCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParallelCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
