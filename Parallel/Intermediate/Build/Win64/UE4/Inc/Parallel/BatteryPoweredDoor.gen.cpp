// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parallel/Public/BatteryPoweredDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPoweredDoor() {}
// Cross Module References
	PARALLEL_API UClass* Z_Construct_UClass_ABatteryPoweredDoor_NoRegister();
	PARALLEL_API UClass* Z_Construct_UClass_ABatteryPoweredDoor();
	PARALLEL_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_Parallel();
// End Cross Module References
	static FName NAME_ABatteryPoweredDoor_OpenDoor = FName(TEXT("OpenDoor"));
	void ABatteryPoweredDoor::OpenDoor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABatteryPoweredDoor_OpenDoor),NULL);
	}
	void ABatteryPoweredDoor::StaticRegisterNativesABatteryPoweredDoor()
	{
	}
	struct Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BatteryPoweredDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryPoweredDoor, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryPoweredDoor_NoRegister()
	{
		return ABatteryPoweredDoor::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryPoweredDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryCost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BatteryCost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryPoweredDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Parallel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatteryPoweredDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryPoweredDoor_OpenDoor, "OpenDoor" }, // 631893804
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPoweredDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BatteryPoweredDoor.h" },
		{ "ModuleRelativePath", "Public/BatteryPoweredDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "Category", "BatteryPoweredDoor" },
		{ "ModuleRelativePath", "Public/BatteryPoweredDoor.h" },
	};
#endif
	void Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((ABatteryPoweredDoor*)Obj)->bIsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABatteryPoweredDoor), &Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_BatteryCost_MetaData[] = {
		{ "Category", "BatteryPoweredDoor" },
		{ "ModuleRelativePath", "Public/BatteryPoweredDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_BatteryCost = { "BatteryCost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryPoweredDoor, BatteryCost), METADATA_PARAMS(Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_BatteryCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_BatteryCost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryPoweredDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_bIsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryPoweredDoor_Statics::NewProp_BatteryCost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryPoweredDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryPoweredDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryPoweredDoor_Statics::ClassParams = {
		&ABatteryPoweredDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatteryPoweredDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPoweredDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryPoweredDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryPoweredDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryPoweredDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryPoweredDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryPoweredDoor, 2881040743);
	template<> PARALLEL_API UClass* StaticClass<ABatteryPoweredDoor>()
	{
		return ABatteryPoweredDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPoweredDoor(Z_Construct_UClass_ABatteryPoweredDoor, &ABatteryPoweredDoor::StaticClass, TEXT("/Script/Parallel"), TEXT("ABatteryPoweredDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPoweredDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
