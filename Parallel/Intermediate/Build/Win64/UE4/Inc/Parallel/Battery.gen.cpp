// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parallel/Public/Battery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattery() {}
// Cross Module References
	PARALLEL_API UClass* Z_Construct_UClass_ABattery_NoRegister();
	PARALLEL_API UClass* Z_Construct_UClass_ABattery();
	PARALLEL_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_Parallel();
// End Cross Module References
	void ABattery::StaticRegisterNativesABattery()
	{
	}
	UClass* Z_Construct_UClass_ABattery_NoRegister()
	{
		return ABattery::StaticClass();
	}
	struct Z_Construct_UClass_ABattery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Parallel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Battery.h" },
		{ "ModuleRelativePath", "Public/Battery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattery_Statics::ClassParams = {
		&ABattery::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABattery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattery, 1188159362);
	template<> PARALLEL_API UClass* StaticClass<ABattery>()
	{
		return ABattery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattery(Z_Construct_UClass_ABattery, &ABattery::StaticClass, TEXT("/Script/Parallel"), TEXT("ABattery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
