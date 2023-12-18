// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOptimizationWave : uint8;
#ifdef NPC_OPTIMIZATOR_OptimizationComponent_generated_h
#error "OptimizationComponent.generated.h already included, missing '#pragma once' in OptimizationComponent.h"
#endif
#define NPC_OPTIMIZATOR_OptimizationComponent_generated_h

#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_104_DELEGATE \
struct _Script_NPC_Optimizator_eventOptimizationChangeWave_Parms \
{ \
	EOptimizationWave NewWave; \
}; \
static inline void FOptimizationChangeWave_DelegateWrapper(const FMulticastScriptDelegate& OptimizationChangeWave, EOptimizationWave NewWave) \
{ \
	_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms Parms; \
	Parms.NewWave=NewWave; \
	OptimizationChangeWave.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_SPARSE_DATA
#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableOptimizations); \
	DECLARE_FUNCTION(execDisableAllOptimizations);


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableOptimizations); \
	DECLARE_FUNCTION(execDisableAllOptimizations);


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimizationProxyComponent(); \
	friend struct Z_Construct_UClass_UOptimizationProxyComponent_Statics; \
public: \
	DECLARE_CLASS(UOptimizationProxyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NPC_Optimizator"), NO_API) \
	DECLARE_SERIALIZER(UOptimizationProxyComponent)


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUOptimizationProxyComponent(); \
	friend struct Z_Construct_UClass_UOptimizationProxyComponent_Statics; \
public: \
	DECLARE_CLASS(UOptimizationProxyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NPC_Optimizator"), NO_API) \
	DECLARE_SERIALIZER(UOptimizationProxyComponent)


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimizationProxyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimizationProxyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimizationProxyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimizationProxyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimizationProxyComponent(UOptimizationProxyComponent&&); \
	NO_API UOptimizationProxyComponent(const UOptimizationProxyComponent&); \
public:


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimizationProxyComponent(UOptimizationProxyComponent&&); \
	NO_API UOptimizationProxyComponent(const UOptimizationProxyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimizationProxyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimizationProxyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimizationProxyComponent)


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_106_PROLOG
#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_SPARSE_DATA \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_RPC_WRAPPERS \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_INCLASS \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_SPARSE_DATA \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NPC_OPTIMIZATOR_API UClass* StaticClass<class UOptimizationProxyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NPC_Optimizator_Source_NPC_Optimizator_Public_OptimizationComponent_h


#define FOREACH_ENUM_EOPTIMIZATIONBASETYPE(op) \
	op(EOptimizationBaseType::PlayerPawn) \
	op(EOptimizationBaseType::PlayerCamera) 

enum class EOptimizationBaseType;
template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationBaseType>();

#define FOREACH_ENUM_EOPTIMIZATIONWAVE(op) \
	op(EOptimizationWave::Invisible) \
	op(EOptimizationWave::NoOptimization) \
	op(EOptimizationWave::FirstWave) \
	op(EOptimizationWave::SecondWave) \
	op(EOptimizationWave::ThirdWave) 

enum class EOptimizationWave : uint8;
template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationWave>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
