// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NPC_Optimizator/Public/OptimizationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimizationComponent() {}
// Cross Module References
	NPC_OPTIMIZATOR_API UFunction* Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NPC_Optimizator();
	NPC_OPTIMIZATOR_API UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave();
	NPC_OPTIMIZATOR_API UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType();
	NPC_OPTIMIZATOR_API UClass* Z_Construct_UClass_UOptimizationProxyComponent_NoRegister();
	NPC_OPTIMIZATOR_API UClass* Z_Construct_UClass_UOptimizationProxyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics
	{
		struct _Script_NPC_Optimizator_eventOptimizationChangeWave_Parms
		{
			EOptimizationWave NewWave;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewWave_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave = { "NewWave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms, NewWave), Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::NewProp_NewWave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NPC_Optimizator, nullptr, "OptimizationChangeWave__DelegateSignature", nullptr, nullptr, sizeof(_Script_NPC_Optimizator_eventOptimizationChangeWave_Parms), Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EOptimizationBaseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType, Z_Construct_UPackage__Script_NPC_Optimizator(), TEXT("EOptimizationBaseType"));
		}
		return Singleton;
	}
	template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationBaseType>()
	{
		return EOptimizationBaseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOptimizationBaseType(EOptimizationBaseType_StaticEnum, TEXT("/Script/NPC_Optimizator"), TEXT("EOptimizationBaseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Hash() { return 3381060770U; }
	UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NPC_Optimizator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOptimizationBaseType"), 0, Get_Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOptimizationBaseType::PlayerPawn", (int64)EOptimizationBaseType::PlayerPawn },
				{ "EOptimizationBaseType::PlayerCamera", (int64)EOptimizationBaseType::PlayerCamera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
				{ "PlayerCamera.DisplayName", "Based on player camera position" },
				{ "PlayerCamera.Name", "EOptimizationBaseType::PlayerCamera" },
				{ "PlayerPawn.DisplayName", "Based on player pawn position" },
				{ "PlayerPawn.Name", "EOptimizationBaseType::PlayerPawn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NPC_Optimizator,
				nullptr,
				"EOptimizationBaseType",
				"EOptimizationBaseType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOptimizationWave_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave, Z_Construct_UPackage__Script_NPC_Optimizator(), TEXT("EOptimizationWave"));
		}
		return Singleton;
	}
	template<> NPC_OPTIMIZATOR_API UEnum* StaticEnum<EOptimizationWave>()
	{
		return EOptimizationWave_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOptimizationWave(EOptimizationWave_StaticEnum, TEXT("/Script/NPC_Optimizator"), TEXT("EOptimizationWave"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Hash() { return 242784158U; }
	UEnum* Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NPC_Optimizator();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOptimizationWave"), 0, Get_Z_Construct_UEnum_NPC_Optimizator_EOptimizationWave_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOptimizationWave::Invisible", (int64)EOptimizationWave::Invisible },
				{ "EOptimizationWave::NoOptimization", (int64)EOptimizationWave::NoOptimization },
				{ "EOptimizationWave::FirstWave", (int64)EOptimizationWave::FirstWave },
				{ "EOptimizationWave::SecondWave", (int64)EOptimizationWave::SecondWave },
				{ "EOptimizationWave::ThirdWave", (int64)EOptimizationWave::ThirdWave },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FirstWave.DisplayName", "First wave" },
				{ "FirstWave.Name", "EOptimizationWave::FirstWave" },
				{ "Invisible.DisplayName", "Invisible" },
				{ "Invisible.Name", "EOptimizationWave::Invisible" },
				{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
				{ "NoOptimization.DisplayName", "No optimization" },
				{ "NoOptimization.Name", "EOptimizationWave::NoOptimization" },
				{ "SecondWave.DisplayName", "Second wave" },
				{ "SecondWave.Name", "EOptimizationWave::SecondWave" },
				{ "ThirdWave.DisplayName", "Third wave" },
				{ "ThirdWave.Name", "EOptimizationWave::ThirdWave" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NPC_Optimizator,
				nullptr,
				"EOptimizationWave",
				"EOptimizationWave",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UOptimizationProxyComponent::execEnableOptimizations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableOptimizations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimizationProxyComponent::execDisableAllOptimizations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAllOptimizations();
		P_NATIVE_END;
	}
	void UOptimizationProxyComponent::StaticRegisterNativesUOptimizationProxyComponent()
	{
		UClass* Class = UOptimizationProxyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableAllOptimizations", &UOptimizationProxyComponent::execDisableAllOptimizations },
			{ "EnableOptimizations", &UOptimizationProxyComponent::execEnableOptimizations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Optimizator" },
		{ "Comment", "// Execute this function for disable all optimization for current owner\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Execute this function for disable all optimization for current owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimizationProxyComponent, nullptr, "DisableAllOptimizations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Optimizator" },
		{ "Comment", "// Execute this function for enable optimization after disabling it\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Execute this function for enable optimization after disabling it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimizationProxyComponent, nullptr, "EnableOptimizations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOptimizationProxyComponent_NoRegister()
	{
		return UOptimizationProxyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOptimizationProxyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToFirstOptimization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToFirstOptimization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToSecondOptimization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToSecondOptimization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToThirdOptimization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToThirdOptimization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVisibleDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxVisibleDistance;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OptimizationBasedOn_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationBasedOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OptimizationBasedOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOptimizationByTag_MetaData[];
#endif
		static void NewProp_UseOptimizationByTag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOptimizationByTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OptimizationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreOptimizationTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IgnoreOptimizationTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableMovementWhenNotVisible_MetaData[];
#endif
		static void NewProp_DisableMovementWhenNotVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableMovementWhenNotVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreCameraSight_MetaData[];
#endif
		static void NewProp_IgnoreCameraSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreCameraSight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreCameraSightOnSmallDistance_MetaData[];
#endif
		static void NewProp_IgnoreCameraSightOnSmallDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreCameraSightOnSmallDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData[];
#endif
		static void NewProp_DisableSkeletalMeshTickWhenNotVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSkeletalMeshTickWhenNotVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideAllStaticMeshes_MetaData[];
#endif
		static void NewProp_HideAllStaticMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideAllStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_AlwaysCheckFloor_MetaData[];
#endif
		static void NewProp_FirstWave_AlwaysCheckFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_AlwaysCheckFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_EnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_FirstWave_EnablePhysicsInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_EnablePhysicsInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_MaxSimulationTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstWave_MaxSimulationTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_MaxSimulationIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstWave_MaxSimulationIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_RunPhysicsWithNoController_MetaData[];
#endif
		static void NewProp_FirstWave_RunPhysicsWithNoController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_RunPhysicsWithNoController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FirstWave_MovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_SweepWhileNavWalking_MetaData[];
#endif
		static void NewProp_FirstWave_SweepWhileNavWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_SweepWhileNavWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_OptimizatedMovementTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstWave_OptimizatedMovementTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_OptimizatedMovementTickMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstWave_OptimizatedMovementTickMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_OptimizatedMovementTickMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstWave_OptimizatedMovementTickMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData[];
#endif
		static void NewProp_FirstWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_UseRandomOptimizationTickForMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_HideShadows_MetaData[];
#endif
		static void NewProp_FirstWave_HideShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_HideShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DisableMeshCollision_MetaData[];
#endif
		static void NewProp_FirstWave_DisableMeshCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DisableMeshCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_NeedHideStaticMeshes_MetaData[];
#endif
		static void NewProp_FirstWave_NeedHideStaticMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_NeedHideStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_UseUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_FirstWave_UseUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_UseUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_UsePerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_FirstWave_UsePerBoneMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_UsePerBoneMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DisableClothSimulation_MetaData[];
#endif
		static void NewProp_FirstWave_DisableClothSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DisableClothSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DisableMorphTarget_MetaData[];
#endif
		static void NewProp_FirstWave_DisableMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DisableMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData[];
#endif
		static void NewProp_FirstWave_AllowRigidBodyAnimNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_AllowRigidBodyAnimNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_GenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_FirstWave_GenerateOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_GenerateOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_AlwaysCheckFloor_MetaData[];
#endif
		static void NewProp_SecondWave_AlwaysCheckFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_AlwaysCheckFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_EnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_SecondWave_EnablePhysicsInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_EnablePhysicsInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_MaxSimulationTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondWave_MaxSimulationTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_MaxSimulationIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondWave_MaxSimulationIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_RunPhysicsWithNoController_MetaData[];
#endif
		static void NewProp_SecondWave_RunPhysicsWithNoController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_RunPhysicsWithNoController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondWave_MovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_SweepWhileNavWalking_MetaData[];
#endif
		static void NewProp_SecondWave_SweepWhileNavWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_SweepWhileNavWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_OptimizatedMovementTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondWave_OptimizatedMovementTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_OptimizatedMovementTickMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondWave_OptimizatedMovementTickMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_OptimizatedMovementTickMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondWave_OptimizatedMovementTickMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData[];
#endif
		static void NewProp_SecondWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_UseRandomOptimizationTickForMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_HideShadows_MetaData[];
#endif
		static void NewProp_SecondWave_HideShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_HideShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DisableMeshCollision_MetaData[];
#endif
		static void NewProp_SecondWave_DisableMeshCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DisableMeshCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_NeedHideStaticMeshes_MetaData[];
#endif
		static void NewProp_SecondWave_NeedHideStaticMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_NeedHideStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_UseUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_SecondWave_UseUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_UseUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_UsePerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_SecondWave_UsePerBoneMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_UsePerBoneMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DisableClothSimulation_MetaData[];
#endif
		static void NewProp_SecondWave_DisableClothSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DisableClothSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DisableMorphTarget_MetaData[];
#endif
		static void NewProp_SecondWave_DisableMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DisableMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData[];
#endif
		static void NewProp_SecondWave_AllowRigidBodyAnimNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_AllowRigidBodyAnimNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_GenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_SecondWave_GenerateOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_GenerateOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_AlwaysCheckFloor_MetaData[];
#endif
		static void NewProp_ThirdWave_AlwaysCheckFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_AlwaysCheckFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_EnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_ThirdWave_EnablePhysicsInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_EnablePhysicsInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_MaxSimulationTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_MaxSimulationTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_MaxSimulationIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThirdWave_MaxSimulationIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_RunPhysicsWithNoController_MetaData[];
#endif
		static void NewProp_ThirdWave_RunPhysicsWithNoController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_RunPhysicsWithNoController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThirdWave_MovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_SweepWhileNavWalking_MetaData[];
#endif
		static void NewProp_ThirdWave_SweepWhileNavWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_SweepWhileNavWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_OptimizatedMovementTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_OptimizatedMovementTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_OptimizatedMovementTickMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdWave_OptimizatedMovementTickMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData[];
#endif
		static void NewProp_ThirdWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_UseRandomOptimizationTickForMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_HideShadows_MetaData[];
#endif
		static void NewProp_ThirdWave_HideShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_HideShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DisableMeshCollision_MetaData[];
#endif
		static void NewProp_ThirdWave_DisableMeshCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DisableMeshCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_NeedHideStaticMeshes_MetaData[];
#endif
		static void NewProp_ThirdWave_NeedHideStaticMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_NeedHideStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_ThirdWave_UseUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_UseUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_ThirdWave_UsePerBoneMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_UsePerBoneMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DisableClothSimulation_MetaData[];
#endif
		static void NewProp_ThirdWave_DisableClothSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DisableClothSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DisableMorphTarget_MetaData[];
#endif
		static void NewProp_ThirdWave_DisableMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DisableMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData[];
#endif
		static void NewProp_ThirdWave_AllowRigidBodyAnimNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_AllowRigidBodyAnimNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_GenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_ThirdWave_GenerateOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_GenerateOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_AlwaysCheckFloor_MetaData[];
#endif
		static void NewProp_Invisible_AlwaysCheckFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_AlwaysCheckFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_EnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_Invisible_EnablePhysicsInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_EnablePhysicsInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_MaxSimulationTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Invisible_MaxSimulationTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_MaxSimulationIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Invisible_MaxSimulationIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_RunPhysicsWithNoController_MetaData[];
#endif
		static void NewProp_Invisible_RunPhysicsWithNoController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_RunPhysicsWithNoController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_MovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Invisible_MovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_SweepWhileNavWalking_MetaData[];
#endif
		static void NewProp_Invisible_SweepWhileNavWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_SweepWhileNavWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_OptimizatedMovementTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Invisible_OptimizatedMovementTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_OptimizatedMovementTickMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Invisible_OptimizatedMovementTickMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_OptimizatedMovementTickMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Invisible_OptimizatedMovementTickMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData[];
#endif
		static void NewProp_Invisible_UseRandomOptimizationTickForMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_UseRandomOptimizationTickForMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_HideSkeletalMesh_MetaData[];
#endif
		static void NewProp_Invisible_HideSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_HideSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_HideShadows_MetaData[];
#endif
		static void NewProp_Invisible_HideShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_HideShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_DisableMeshCollision_MetaData[];
#endif
		static void NewProp_Invisible_DisableMeshCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_DisableMeshCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_NeedHideStaticMeshes_MetaData[];
#endif
		static void NewProp_Invisible_NeedHideStaticMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_NeedHideStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_UseUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_Invisible_UseUpdateRateOptimizations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_UseUpdateRateOptimizations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_UsePerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_Invisible_UsePerBoneMotionBlur_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_UsePerBoneMotionBlur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_DisableClothSimulation_MetaData[];
#endif
		static void NewProp_Invisible_DisableClothSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_DisableClothSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_DisableMorphTarget_MetaData[];
#endif
		static void NewProp_Invisible_DisableMorphTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_DisableMorphTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_SkipKinematicUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_SkipBoundsUpdateWhenInterpolating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_AllowRigidBodyAnimNode_MetaData[];
#endif
		static void NewProp_Invisible_AllowRigidBodyAnimNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_AllowRigidBodyAnimNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_GenerateOverlapEvents_MetaData[];
#endif
		static void NewProp_Invisible_GenerateOverlapEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_GenerateOverlapEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoOptimization_DrawDebug_MetaData[];
#endif
		static void NewProp_NoOptimization_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NoOptimization_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWave_DrawDebug_MetaData[];
#endif
		static void NewProp_FirstWave_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstWave_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondWave_DrawDebug_MetaData[];
#endif
		static void NewProp_SecondWave_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SecondWave_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThirdWave_DrawDebug_MetaData[];
#endif
		static void NewProp_ThirdWave_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThirdWave_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invisible_DrawDebug_MetaData[];
#endif
		static void NewProp_Invisible_DrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Invisible_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChangeWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangeWave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimizationProxyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NPC_Optimizator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimizationProxyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimizationProxyComponent_DisableAllOptimizations, "DisableAllOptimizations" }, // 2865919923
		{ &Z_Construct_UFunction_UOptimizationProxyComponent_EnableOptimizations, "EnableOptimizations" }, // 1011564926
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OptimizationComponent.h" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// The distance from the player to the bots at which the first optimization level is enabled. \n// Bots closer than this distance are not optimized\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "The distance from the player to the bots at which the first optimization level is enabled.\nBots closer than this distance are not optimized" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization = { "DistanceToFirstOptimization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, DistanceToFirstOptimization), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// The distance from the player to the bots at which the second level of optimizations is enabled.\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "The distance from the player to the bots at which the second level of optimizations is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization = { "DistanceToSecondOptimization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, DistanceToSecondOptimization), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// The distance from the player to the bots at which the third level of optimizations is enabled.\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "The distance from the player to the bots at which the third level of optimizations is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization = { "DistanceToThirdOptimization", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, DistanceToThirdOptimization), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Bots outside this distance will be hidden and simplified as much as possible\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Bots outside this distance will be hidden and simplified as much as possible" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance = { "MaxVisibleDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, MaxVisibleDistance), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Optimization is based on the distance from the player's pawn or camera\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Optimization is based on the distance from the player's pawn or camera" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn = { "OptimizationBasedOn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, OptimizationBasedOn), Z_Construct_UEnum_NPC_Optimizator_EOptimizationBaseType, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// If you want optimize only component with special tag - enable it\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "If you want optimize only component with special tag - enable it" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->UseOptimizationByTag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag = { "UseOptimizationByTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Special tag for component needed for optimization it\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Special tag for component needed for optimization it" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag = { "OptimizationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, OptimizationTag), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Special tag to ignore any component optimizations\n" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Special tag to ignore any component optimizations" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag = { "IgnoreOptimizationTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, IgnoreOptimizationTag), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// If you want stop NPC movement when it not visible\n" },
		{ "DisplayName", "Disable movement when invisible" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "If you want stop NPC movement when it not visible" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->DisableMovementWhenNotVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible = { "DisableMovementWhenNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Enable this setting in order to ignore the calculation of the visibility of NPCs by the camera and calculate only by distance.\n" },
		{ "DisplayName", "Ignore camera sight" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable this setting in order to ignore the calculation of the visibility of NPCs by the camera and calculate only by distance." },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->IgnoreCameraSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight = { "IgnoreCameraSight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Ignore camera visibility when bots are close to the player\n" },
		{ "DisplayName", "Ignore camera sight in no optimization distance" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Ignore camera visibility when bots are close to the player" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->IgnoreCameraSightOnSmallDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance = { "IgnoreCameraSightOnSmallDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// Enabling this setting gives you more frames per second, but when mesh switch from invisibility back to visibility, the number of frames may drop slightly\n" },
		{ "DisplayName", "Disable skeletal mesh tick when invisible" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enabling this setting gives you more frames per second, but when mesh switch from invisibility back to visibility, the number of frames may drop slightly" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->DisableSkeletalMeshTickWhenNotVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible = { "DisableSkeletalMeshTickWhenNotVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "// If you want hide all static meshes attached to skeletal meshes\n// If you need hide only special static meshes use Optimization Tag for it\n" },
		{ "DisplayName", "Hide all attached static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "If you want hide all static meshes attached to skeletal meshes\nIf you need hide only special static meshes use Optimization Tag for it" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->HideAllStaticMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes = { "HideAllStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_AlwaysCheckFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor = { "FirstWave_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_EnablePhysicsInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction = { "FirstWave_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep = { "FirstWave_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_MaxSimulationTimeStep), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations = { "FirstWave_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_MaxSimulationIterations), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_RunPhysicsWithNoController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController = { "FirstWave_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode = { "FirstWave_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_SweepWhileNavWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking = { "FirstWave_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick = { "FirstWave_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_OptimizatedMovementTick), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin = { "FirstWave_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_OptimizatedMovementTickMin), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax = { "FirstWave_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, FirstWave_OptimizatedMovementTickMax), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|First wave|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_UseRandomOptimizationTickForMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement = { "FirstWave_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_HideShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows = { "FirstWave_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_DisableMeshCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision = { "FirstWave_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_NeedHideStaticMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes = { "FirstWave_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_UseUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations = { "FirstWave_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_UsePerBoneMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur = { "FirstWave_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal meshes on this wave\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_DisableClothSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation = { "FirstWave_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal meshes on this wave\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_DisableMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget = { "FirstWave_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_SkipKinematicUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating = { "FirstWave_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_SkipBoundsUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating = { "FirstWave_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_AllowRigidBodyAnimNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode = { "FirstWave_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|First wave|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_GenerateOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents = { "FirstWave_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_AlwaysCheckFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor = { "SecondWave_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_EnablePhysicsInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction = { "SecondWave_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep = { "SecondWave_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_MaxSimulationTimeStep), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations = { "SecondWave_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_MaxSimulationIterations), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_RunPhysicsWithNoController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController = { "SecondWave_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode = { "SecondWave_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_SweepWhileNavWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking = { "SecondWave_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick = { "SecondWave_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_OptimizatedMovementTick), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin = { "SecondWave_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_OptimizatedMovementTickMin), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax = { "SecondWave_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, SecondWave_OptimizatedMovementTickMax), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|Second wave|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_UseRandomOptimizationTickForMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement = { "SecondWave_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_HideShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows = { "SecondWave_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_DisableMeshCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision = { "SecondWave_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_NeedHideStaticMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes = { "SecondWave_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_UseUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations = { "SecondWave_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_UsePerBoneMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur = { "SecondWave_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_DisableClothSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation = { "SecondWave_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_DisableMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget = { "SecondWave_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_SkipKinematicUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating = { "SecondWave_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_SkipBoundsUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating = { "SecondWave_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_AllowRigidBodyAnimNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode = { "SecondWave_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Second wave|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_GenerateOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents = { "SecondWave_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_AlwaysCheckFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor = { "ThirdWave_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_EnablePhysicsInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction = { "ThirdWave_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep = { "ThirdWave_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_MaxSimulationTimeStep), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations = { "ThirdWave_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_MaxSimulationIterations), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_RunPhysicsWithNoController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController = { "ThirdWave_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode = { "ThirdWave_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_SweepWhileNavWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking = { "ThirdWave_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick = { "ThirdWave_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_OptimizatedMovementTick), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin = { "ThirdWave_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_OptimizatedMovementTickMin), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax = { "ThirdWave_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, ThirdWave_OptimizatedMovementTickMax), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|Third wave|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_UseRandomOptimizationTickForMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement = { "ThirdWave_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_HideShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows = { "ThirdWave_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_DisableMeshCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision = { "ThirdWave_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_NeedHideStaticMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes = { "ThirdWave_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_UseUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations = { "ThirdWave_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_UsePerBoneMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur = { "ThirdWave_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_DisableClothSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation = { "ThirdWave_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_DisableMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget = { "ThirdWave_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_SkipKinematicUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating = { "ThirdWave_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_SkipBoundsUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating = { "ThirdWave_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_AllowRigidBodyAnimNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode = { "ThirdWave_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Third wave|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_GenerateOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents = { "ThirdWave_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component need always check floor on this wave?\n" },
		{ "DisplayName", "Always check floor" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component need always check floor on this wave?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_AlwaysCheckFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor = { "Invisible_AlwaysCheckFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Enable physics interaction on this wave\n" },
		{ "DisplayName", "Enable physics interaction" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Enable physics interaction on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_EnablePhysicsInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction = { "Invisible_EnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Max simulation time step\n" },
		{ "DisplayName", "Max simulation time step" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation time step" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep = { "Invisible_MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_MaxSimulationTimeStep), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Max simulation iterations\n" },
		{ "DisplayName", "Max simulation iterations" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Max simulation iterations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations = { "Invisible_MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_MaxSimulationIterations), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Run physics with no controller\n" },
		{ "DisplayName", "Run physics with no controller" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Run physics with no controller" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_RunPhysicsWithNoController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController = { "Invisible_RunPhysicsWithNoController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement mode on this wave\n" },
		{ "DisplayName", "Movement mode" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement mode on this wave" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode = { "Invisible_MovementMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Whether or not the character should sweep for collision geometry while walking\n" },
		{ "DisplayName", "Sweep while nav walking" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should sweep for collision geometry while walking" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_SweepWhileNavWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking = { "Invisible_SweepWhileNavWalking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component tick rate when random tick not used\n" },
		{ "DisplayName", "Fixed movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component tick rate when random tick not used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick = { "Invisible_OptimizatedMovementTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_OptimizatedMovementTick), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component min tick rate when random tick enabled\n" },
		{ "DisplayName", "Min movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component min tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin = { "Invisible_OptimizatedMovementTickMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_OptimizatedMovementTickMin), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Movement component max tick rate when random tick enabled\n" },
		{ "DisplayName", "Max movement random tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Movement component max tick rate when random tick enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax = { "Invisible_OptimizatedMovementTickMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, Invisible_OptimizatedMovementTickMax), METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData[] = {
		{ "Category", "Optimization|Invisible|Movement" },
		{ "Comment", "// Use random tick for movement\n" },
		{ "DisplayName", "Use random movement tick" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use random tick for movement" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_UseRandomOptimizationTickForMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement = { "Invisible_UseRandomOptimizationTickForMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Hide skeletal mesh when it not visible for player\n" },
		{ "DisplayName", "Hide skeletal mesh" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide skeletal mesh when it not visible for player" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_HideSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh = { "Invisible_HideSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Hide shadows from skeletal mesh on this wave\n" },
		{ "DisplayName", "Hide shadows" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Hide shadows from skeletal mesh on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_HideShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows = { "Invisible_HideShadows", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Disable skeletal meshes collision on this wave\n" },
		{ "DisplayName", "Disable mesh collision" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable skeletal meshes collision on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_DisableMeshCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision = { "Invisible_DisableMeshCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Whether or not the character should hide attached static meshes on this wave\n" },
		{ "DisplayName", "Need hide static meshes" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Whether or not the character should hide attached static meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_NeedHideStaticMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes = { "Invisible_NeedHideStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Use update rate optimizations for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use URO" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use update rate optimizations for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_UseUpdateRateOptimizations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations = { "Invisible_UseUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Use per bone motion blur for skeletal meshes on this wave\n" },
		{ "DisplayName", "Use per bone motion blur" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Use per bone motion blur for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_UsePerBoneMotionBlur = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur = { "Invisible_UsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Disable cloth simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable cloth simulation" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable cloth simulation for skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_DisableClothSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation = { "Invisible_DisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Disable morph target simulation for skeletal mesh\n" },
		{ "DisplayName", "Disable morph target" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Disable morph target simulation for skeletal mesh" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_DisableMorphTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget = { "Invisible_DisableMorphTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Skip kinematic update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip kinematic update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip kinematic update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_SkipKinematicUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating = { "Invisible_SkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Skip bounds update when interpolating for skeletal meshes on this wave\n" },
		{ "DisplayName", "Skip bounds update when interpolating" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Skip bounds update when interpolating for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_SkipBoundsUpdateWhenInterpolating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating = { "Invisible_SkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Allow rigid body anim node for skeletal meshes on this wave\n" },
		{ "DisplayName", "Allow rigid body anim node" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Allow rigid body anim node for skeletal meshes on this wave" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_AllowRigidBodyAnimNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode = { "Invisible_AllowRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_MetaData[] = {
		{ "Category", "Optimization|Invisible|Skeletal meshes" },
		{ "Comment", "// Generate overlap events?\n" },
		{ "DisplayName", "Generate overlap events" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Generate overlap events?" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_GenerateOverlapEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents = { "Invisible_GenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->NoOptimization_DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug = { "NoOptimization_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->FirstWave_DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug = { "FirstWave_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->SecondWave_DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug = { "SecondWave_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->ThirdWave_DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug = { "ThirdWave_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_MetaData[] = {
		{ "Category", "Optimization|Debug draw" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_SetBit(void* Obj)
	{
		((UOptimizationProxyComponent*)Obj)->Invisible_DrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug = { "Invisible_DrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOptimizationProxyComponent), &Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Called when component going to new optimization wave */" },
		{ "ModuleRelativePath", "Public/OptimizationComponent.h" },
		{ "ToolTip", "Called when component going to new optimization wave" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave = { "OnChangeWave", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOptimizationProxyComponent, OnChangeWave), Z_Construct_UDelegateFunction_NPC_Optimizator_OptimizationChangeWave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToFirstOptimization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToSecondOptimization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DistanceToThirdOptimization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_MaxVisibleDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationBasedOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_UseOptimizationByTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OptimizationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreOptimizationTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableMovementWhenNotVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_IgnoreCameraSightOnSmallDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_DisableSkeletalMeshTickWhenNotVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_HideAllStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AlwaysCheckFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_EnablePhysicsInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MaxSimulationIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_RunPhysicsWithNoController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SweepWhileNavWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_OptimizatedMovementTickMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseRandomOptimizationTickForMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_HideShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMeshCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_NeedHideStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UseUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_UsePerBoneMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableClothSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DisableMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipKinematicUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_SkipBoundsUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_AllowRigidBodyAnimNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_GenerateOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AlwaysCheckFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_EnablePhysicsInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MaxSimulationIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_RunPhysicsWithNoController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SweepWhileNavWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_OptimizatedMovementTickMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseRandomOptimizationTickForMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_HideShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMeshCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_NeedHideStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UseUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_UsePerBoneMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableClothSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DisableMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipKinematicUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_SkipBoundsUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_AllowRigidBodyAnimNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_GenerateOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AlwaysCheckFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_EnablePhysicsInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MaxSimulationIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_RunPhysicsWithNoController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SweepWhileNavWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_OptimizatedMovementTickMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseRandomOptimizationTickForMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_HideShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMeshCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_NeedHideStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UseUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_UsePerBoneMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableClothSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DisableMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipKinematicUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_SkipBoundsUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_AllowRigidBodyAnimNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_GenerateOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AlwaysCheckFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_EnablePhysicsInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MaxSimulationIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_RunPhysicsWithNoController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_MovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SweepWhileNavWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_OptimizatedMovementTickMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseRandomOptimizationTickForMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_HideShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMeshCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_NeedHideStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UseUpdateRateOptimizations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_UsePerBoneMotionBlur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableClothSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DisableMorphTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipKinematicUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_SkipBoundsUpdateWhenInterpolating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_AllowRigidBodyAnimNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_GenerateOverlapEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_NoOptimization_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_FirstWave_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_SecondWave_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_ThirdWave_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_Invisible_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimizationProxyComponent_Statics::NewProp_OnChangeWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimizationProxyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimizationProxyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOptimizationProxyComponent_Statics::ClassParams = {
		&UOptimizationProxyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimizationProxyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimizationProxyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimizationProxyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOptimizationProxyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOptimizationProxyComponent, 1146876345);
	template<> NPC_OPTIMIZATOR_API UClass* StaticClass<UOptimizationProxyComponent>()
	{
		return UOptimizationProxyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOptimizationProxyComponent(Z_Construct_UClass_UOptimizationProxyComponent, &UOptimizationProxyComponent::StaticClass, TEXT("/Script/NPC_Optimizator"), TEXT("UOptimizationProxyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimizationProxyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
