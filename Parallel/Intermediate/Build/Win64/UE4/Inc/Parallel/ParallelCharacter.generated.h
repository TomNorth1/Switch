// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
#ifdef PARALLEL_ParallelCharacter_generated_h
#error "ParallelCharacter.generated.h already included, missing '#pragma once' in ParallelCharacter.h"
#endif
#define PARALLEL_ParallelCharacter_generated_h

#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_SPARSE_DATA
#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveBattery); \
	DECLARE_FUNCTION(execAddBattery); \
	DECLARE_FUNCTION(execSwitchWorlds);


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveBattery); \
	DECLARE_FUNCTION(execAddBattery); \
	DECLARE_FUNCTION(execSwitchWorlds);


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_EVENT_PARMS \
	struct ParallelCharacter_eventGrab_Parms \
	{ \
		UPrimitiveComponent* Obj; \
	};


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_CALLBACK_WRAPPERS
#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParallelCharacter(); \
	friend struct Z_Construct_UClass_AParallelCharacter_Statics; \
public: \
	DECLARE_CLASS(AParallelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(AParallelCharacter)


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAParallelCharacter(); \
	friend struct Z_Construct_UClass_AParallelCharacter_Statics; \
public: \
	DECLARE_CLASS(AParallelCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(AParallelCharacter)


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParallelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParallelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParallelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParallelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParallelCharacter(AParallelCharacter&&); \
	NO_API AParallelCharacter(const AParallelCharacter&); \
public:


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParallelCharacter(AParallelCharacter&&); \
	NO_API AParallelCharacter(const AParallelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParallelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParallelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParallelCharacter)


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumOfBatteries() { return STRUCT_OFFSET(AParallelCharacter, NumOfBatteries); }


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_11_PROLOG \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_EVENT_PARMS


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_SPARSE_DATA \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_RPC_WRAPPERS \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_CALLBACK_WRAPPERS \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_INCLASS \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parallel_Source_Parallel_Public_ParallelCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_SPARSE_DATA \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_CALLBACK_WRAPPERS \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Parallel_Source_Parallel_Public_ParallelCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLEL_API UClass* StaticClass<class AParallelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parallel_Source_Parallel_Public_ParallelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
