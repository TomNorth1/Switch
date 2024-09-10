// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARALLEL_Crate_generated_h
#error "Crate.generated.h already included, missing '#pragma once' in Crate.h"
#endif
#define PARALLEL_Crate_generated_h

#define Parallel_Source_Parallel_Public_Crate_h_17_SPARSE_DATA
#define Parallel_Source_Parallel_Public_Crate_h_17_RPC_WRAPPERS
#define Parallel_Source_Parallel_Public_Crate_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Parallel_Source_Parallel_Public_Crate_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrate(); \
	friend struct Z_Construct_UClass_ACrate_Statics; \
public: \
	DECLARE_CLASS(ACrate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(ACrate)


#define Parallel_Source_Parallel_Public_Crate_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACrate(); \
	friend struct Z_Construct_UClass_ACrate_Statics; \
public: \
	DECLARE_CLASS(ACrate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Parallel"), NO_API) \
	DECLARE_SERIALIZER(ACrate)


#define Parallel_Source_Parallel_Public_Crate_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrate(ACrate&&); \
	NO_API ACrate(const ACrate&); \
public:


#define Parallel_Source_Parallel_Public_Crate_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrate(ACrate&&); \
	NO_API ACrate(const ACrate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrate)


#define Parallel_Source_Parallel_Public_Crate_h_17_PRIVATE_PROPERTY_OFFSET
#define Parallel_Source_Parallel_Public_Crate_h_14_PROLOG
#define Parallel_Source_Parallel_Public_Crate_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_Public_Crate_h_17_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_Public_Crate_h_17_SPARSE_DATA \
	Parallel_Source_Parallel_Public_Crate_h_17_RPC_WRAPPERS \
	Parallel_Source_Parallel_Public_Crate_h_17_INCLASS \
	Parallel_Source_Parallel_Public_Crate_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Parallel_Source_Parallel_Public_Crate_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Parallel_Source_Parallel_Public_Crate_h_17_PRIVATE_PROPERTY_OFFSET \
	Parallel_Source_Parallel_Public_Crate_h_17_SPARSE_DATA \
	Parallel_Source_Parallel_Public_Crate_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Parallel_Source_Parallel_Public_Crate_h_17_INCLASS_NO_PURE_DECLS \
	Parallel_Source_Parallel_Public_Crate_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARALLEL_API UClass* StaticClass<class ACrate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Parallel_Source_Parallel_Public_Crate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
