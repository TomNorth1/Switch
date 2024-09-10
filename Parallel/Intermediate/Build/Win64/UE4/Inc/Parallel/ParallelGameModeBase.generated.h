// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARALLEL_ParallelGameModeBase_generated_h
#error "ParallelGameModeBase.generated.h already included, missing '#pragma once' in ParallelGameModeBase.h"
#endif
#define PARALLEL_ParallelGameModeBase_generated_h

#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_SPARSE_DATA
#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_RPC_WRAPPERS
#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParallelGameModeBase(); \
	friend struct Z_Construct_UClass_AParallelGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AParallelGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(AParallelGameModeBase)


#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAParallelGameModeBase(); \
	friend struct Z_Construct_UClass_AParallelGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AParallelGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(AParallelGameModeBase)


#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParallelGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParallelGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParallelGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParallelGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParallelGameModeBase(AParallelGameModeBase&&); \
	NO_API AParallelGameModeBase(const AParallelGameModeBase&); \
public:


#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParallelGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParallelGameModeBase(AParallelGameModeBase&&); \
	NO_API AParallelGameModeBase(const AParallelGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParallelGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParallelGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParallelGameModeBase)


#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Parallel_Source_Parallel_ParallelGameModeBase_h_12_PROLOG
#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_SPARSE_DATA \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_RPC_WRAPPERS \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_INCLASS \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parallel_Source_Parallel_ParallelGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_SPARSE_DATA \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Parallel_Source_Parallel_ParallelGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLEL_API UClass* StaticClass<class AParallelGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parallel_Source_Parallel_ParallelGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
