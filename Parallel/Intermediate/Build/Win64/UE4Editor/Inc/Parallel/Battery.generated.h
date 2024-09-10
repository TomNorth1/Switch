// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARALLEL_Battery_generated_h
#error "Battery.generated.h already included, missing '#pragma once' in Battery.h"
#endif
#define PARALLEL_Battery_generated_h

#define Parallel_Source_Parallel_Public_Battery_h_15_SPARSE_DATA
#define Parallel_Source_Parallel_Public_Battery_h_15_RPC_WRAPPERS
#define Parallel_Source_Parallel_Public_Battery_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Parallel_Source_Parallel_Public_Battery_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattery(); \
	friend struct Z_Construct_UClass_ABattery_Statics; \
public: \
	DECLARE_CLASS(ABattery, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(ABattery)


#define Parallel_Source_Parallel_Public_Battery_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABattery(); \
	friend struct Z_Construct_UClass_ABattery_Statics; \
public: \
	DECLARE_CLASS(ABattery, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(ABattery)


#define Parallel_Source_Parallel_Public_Battery_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABattery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABattery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattery(ABattery&&); \
	NO_API ABattery(const ABattery&); \
public:


#define Parallel_Source_Parallel_Public_Battery_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABattery() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattery(ABattery&&); \
	NO_API ABattery(const ABattery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattery)


#define Parallel_Source_Parallel_Public_Battery_h_15_PRIVATE_PROPERTY_OFFSET
#define Parallel_Source_Parallel_Public_Battery_h_12_PROLOG
#define Parallel_Source_Parallel_Public_Battery_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_Public_Battery_h_15_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_Public_Battery_h_15_SPARSE_DATA \
	Parallel_Source_Parallel_Public_Battery_h_15_RPC_WRAPPERS \
	Parallel_Source_Parallel_Public_Battery_h_15_INCLASS \
	Parallel_Source_Parallel_Public_Battery_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parallel_Source_Parallel_Public_Battery_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_Public_Battery_h_15_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_Public_Battery_h_15_SPARSE_DATA \
	Parallel_Source_Parallel_Public_Battery_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Parallel_Source_Parallel_Public_Battery_h_15_INCLASS_NO_PURE_DECLS \
	Parallel_Source_Parallel_Public_Battery_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLEL_API UClass* StaticClass<class ABattery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parallel_Source_Parallel_Public_Battery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
