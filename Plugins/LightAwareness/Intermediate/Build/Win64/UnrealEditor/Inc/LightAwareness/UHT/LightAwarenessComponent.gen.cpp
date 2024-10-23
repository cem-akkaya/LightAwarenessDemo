// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightAwareness/Public/LightAwarenessComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightAwarenessComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LIGHTAWARENESS_API UClass* Z_Construct_UClass_ULightAwarenessComponent();
LIGHTAWARENESS_API UClass* Z_Construct_UClass_ULightAwarenessComponent_NoRegister();
LIGHTAWARENESS_API UEnum* Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod();
LIGHTAWARENESS_API UEnum* Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity();
LIGHTAWARENESS_API UEnum* Z_Construct_UEnum_LightAwareness_ELightAwarenessState();
UPackage* Z_Construct_UPackage__Script_LightAwareness();
// End Cross Module References

// Begin Enum ELightAwarenessSensitivity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightAwarenessSensitivity;
static UEnum* ELightAwarenessSensitivity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELightAwarenessSensitivity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELightAwarenessSensitivity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity, (UObject*)Z_Construct_UPackage__Script_LightAwareness(), TEXT("ELightAwarenessSensitivity"));
	}
	return Z_Registration_Info_UEnum_ELightAwarenessSensitivity.OuterSingleton;
}
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessSensitivity>()
{
	return ELightAwarenessSensitivity_StaticEnum();
}
struct Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "High.DisplayName", "High Sensitivity" },
		{ "High.Name", "ELightAwarenessSensitivity::High" },
		{ "Low.DisplayName", "Low Sensitivity" },
		{ "Low.Name", "ELightAwarenessSensitivity::Low" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
		{ "Optimized.DisplayName", "Optimized Sensitivity" },
		{ "Optimized.Name", "ELightAwarenessSensitivity::Optimized" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELightAwarenessSensitivity::Optimized", (int64)ELightAwarenessSensitivity::Optimized },
		{ "ELightAwarenessSensitivity::Low", (int64)ELightAwarenessSensitivity::Low },
		{ "ELightAwarenessSensitivity::High", (int64)ELightAwarenessSensitivity::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightAwareness,
	nullptr,
	"ELightAwarenessSensitivity",
	"ELightAwarenessSensitivity",
	Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity()
{
	if (!Z_Registration_Info_UEnum_ELightAwarenessSensitivity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightAwarenessSensitivity.InnerSingleton, Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELightAwarenessSensitivity.InnerSingleton;
}
// End Enum ELightAwarenessSensitivity

// Begin Enum ELightAwarenessDetectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod;
static UEnum* ELightAwarenessDetectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod, (UObject*)Z_Construct_UPackage__Script_LightAwareness(), TEXT("ELightAwarenessDetectionMethod"));
	}
	return Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod.OuterSingleton;
}
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessDetectionMethod>()
{
	return ELightAwarenessDetectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.DisplayName", "Top & Bottom Directional" },
		{ "Both.Name", "ELightAwarenessDetectionMethod::Both" },
		{ "Bottom.DisplayName", "Bottom Directional" },
		{ "Bottom.Name", "ELightAwarenessDetectionMethod::Bottom" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
		{ "Top.DisplayName", "Top Directional" },
		{ "Top.Name", "ELightAwarenessDetectionMethod::Top" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELightAwarenessDetectionMethod::Top", (int64)ELightAwarenessDetectionMethod::Top },
		{ "ELightAwarenessDetectionMethod::Both", (int64)ELightAwarenessDetectionMethod::Both },
		{ "ELightAwarenessDetectionMethod::Bottom", (int64)ELightAwarenessDetectionMethod::Bottom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightAwareness,
	nullptr,
	"ELightAwarenessDetectionMethod",
	"ELightAwarenessDetectionMethod",
	Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod()
{
	if (!Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod.InnerSingleton, Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod.InnerSingleton;
}
// End Enum ELightAwarenessDetectionMethod

// Begin Enum ELightAwarenessState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightAwarenessState;
static UEnum* ELightAwarenessState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELightAwarenessState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELightAwarenessState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LightAwareness_ELightAwarenessState, (UObject*)Z_Construct_UPackage__Script_LightAwareness(), TEXT("ELightAwarenessState"));
	}
	return Z_Registration_Info_UEnum_ELightAwarenessState.OuterSingleton;
}
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessState>()
{
	return ELightAwarenessState_StaticEnum();
}
struct Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "ELightAwarenessState::Active" },
		{ "ActiveVisible.DisplayName", "ActiveRendered" },
		{ "ActiveVisible.Name", "ELightAwarenessState::ActiveVisible" },
		{ "BlueprintType", "true" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "ELightAwarenessState::Inactive" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELightAwarenessState::Inactive", (int64)ELightAwarenessState::Inactive },
		{ "ELightAwarenessState::Active", (int64)ELightAwarenessState::Active },
		{ "ELightAwarenessState::ActiveVisible", (int64)ELightAwarenessState::ActiveVisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LightAwareness,
	nullptr,
	"ELightAwarenessState",
	"ELightAwarenessState",
	Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LightAwareness_ELightAwarenessState()
{
	if (!Z_Registration_Info_UEnum_ELightAwarenessState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightAwarenessState.InnerSingleton, Z_Construct_UEnum_LightAwareness_ELightAwarenessState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELightAwarenessState.InnerSingleton;
}
// End Enum ELightAwarenessState

// Begin Class ULightAwarenessComponent Function GetBufferPixels
struct Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics
{
	struct LightAwarenessComponent_eventGetBufferPixels_Parms
	{
		TArray<FColor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Get Light Buffer" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightAwarenessComponent_eventGetBufferPixels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightAwarenessComponent, nullptr, "GetBufferPixels", nullptr, nullptr, Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::LightAwarenessComponent_eventGetBufferPixels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::LightAwarenessComponent_eventGetBufferPixels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightAwarenessComponent::execGetBufferPixels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FColor>*)Z_Param__Result=P_THIS->GetBufferPixels();
	P_NATIVE_END;
}
// End Class ULightAwarenessComponent Function GetBufferPixels

// Begin Class ULightAwarenessComponent Function GetLightStatus
struct Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics
{
	struct LightAwarenessComponent_eventGetLightStatus_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Get Light Status" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightAwarenessComponent_eventGetLightStatus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightAwarenessComponent, nullptr, "GetLightStatus", nullptr, nullptr, Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::LightAwarenessComponent_eventGetLightStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::LightAwarenessComponent_eventGetLightStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightAwarenessComponent::execGetLightStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLightStatus();
	P_NATIVE_END;
}
// End Class ULightAwarenessComponent Function GetLightStatus

// Begin Class ULightAwarenessComponent Function GetRenderingState
struct Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Checks rendering state and sets components ELightAwarenessStatus\n" },
#endif
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks rendering state and sets components ELightAwarenessStatus" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightAwarenessComponent, nullptr, "GetRenderingState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightAwarenessComponent::execGetRenderingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRenderingState();
	P_NATIVE_END;
}
// End Class ULightAwarenessComponent Function GetRenderingState

// Begin Class ULightAwarenessComponent Function HideLightDetector
struct Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Hide Light Detector" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightAwarenessComponent, nullptr, "HideLightDetector", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightAwarenessComponent::execHideLightDetector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideLightDetector();
	P_NATIVE_END;
}
// End Class ULightAwarenessComponent Function HideLightDetector

// Begin Class ULightAwarenessComponent Function SetLightSensitivity
struct Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics
{
	struct LightAwarenessComponent_eventSetLightSensitivity_Parms
	{
		ELightAwarenessSensitivity Sensitivity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Set Light Sensivity" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Sensitivity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Sensitivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::NewProp_Sensitivity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightAwarenessComponent_eventSetLightSensitivity_Parms, Sensitivity), Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity, METADATA_PARAMS(0, nullptr) }; // 3282282239
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::NewProp_Sensitivity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::NewProp_Sensitivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightAwarenessComponent, nullptr, "SetLightSensitivity", nullptr, nullptr, Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::LightAwarenessComponent_eventSetLightSensitivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::LightAwarenessComponent_eventSetLightSensitivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightAwarenessComponent::execSetLightSensitivity)
{
	P_GET_ENUM(ELightAwarenessSensitivity,Z_Param_Sensitivity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightSensitivity(ELightAwarenessSensitivity(Z_Param_Sensitivity));
	P_NATIVE_END;
}
// End Class ULightAwarenessComponent Function SetLightSensitivity

// Begin Class ULightAwarenessComponent Function ShowLightDetector
struct Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Show Light Detector" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightAwarenessComponent, nullptr, "ShowLightDetector", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightAwarenessComponent::execShowLightDetector)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowLightDetector();
	P_NATIVE_END;
}
// End Class ULightAwarenessComponent Function ShowLightDetector

// Begin Class ULightAwarenessComponent
void ULightAwarenessComponent::StaticRegisterNativesULightAwarenessComponent()
{
	UClass* Class = ULightAwarenessComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBufferPixels", &ULightAwarenessComponent::execGetBufferPixels },
		{ "GetLightStatus", &ULightAwarenessComponent::execGetLightStatus },
		{ "GetRenderingState", &ULightAwarenessComponent::execGetRenderingState },
		{ "HideLightDetector", &ULightAwarenessComponent::execHideLightDetector },
		{ "SetLightSensitivity", &ULightAwarenessComponent::execSetLightSensitivity },
		{ "ShowLightDetector", &ULightAwarenessComponent::execShowLightDetector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightAwarenessComponent);
UClass* Z_Construct_UClass_ULightAwarenessComponent_NoRegister()
{
	return ULightAwarenessComponent::StaticClass();
}
struct Z_Construct_UClass_ULightAwarenessComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LightAwarenessComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessDetectorScale_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Light Detector Scale" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessDetectorOffset_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "ClampMax", "500" },
		{ "ClampMin", "-500" },
		{ "DisplayName", "Light Detector Offset" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
		{ "UIMax", "500" },
		{ "UIMin", "-500" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessSensitivity_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Light Detection Sensivity" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessMethod_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Light Detection Method" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessComponentState_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Light Awareness" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessGI_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Detect Global Illumination" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessFallback_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Engine Version Fallback" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessIsReplicatedRenderTargets_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "DisplayName", "Replicate Render Targets" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessMaterialSensitivity_MetaData[] = {
		{ "Category", "Light Awareness" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Light Global Threshold" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessMesh_MetaData[] = {
		{ "Category", "Light Awareness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sceneCaptureComponentTop_MetaData[] = {
		{ "Category", "Light Awareness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scene Capture Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Capture Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sceneCaptureComponentBottom_MetaData[] = {
		{ "Category", "Light Awareness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scene Capture Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Capture Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightAwarenessTagPrefix_MetaData[] = {
		{ "Category", "Light Awareness - Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scene Capture Component\n" },
#endif
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Capture Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingCheckRate_MetaData[] = {
		{ "Category", "Light Awareness - Variables" },
		{ "ModuleRelativePath", "Public/LightAwarenessComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightAwarenessDetectorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightAwarenessDetectorOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightAwarenessSensitivity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightAwarenessSensitivity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightAwarenessMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightAwarenessMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightAwarenessComponentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightAwarenessComponentState;
	static void NewProp_LightAwarenessGI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LightAwarenessGI;
	static void NewProp_LightAwarenessFallback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LightAwarenessFallback;
	static void NewProp_LightAwarenessIsReplicatedRenderTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LightAwarenessIsReplicatedRenderTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightAwarenessMaterialSensitivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAwarenessMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sceneCaptureComponentTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sceneCaptureComponentBottom;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LightAwarenessTagPrefix;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderingCheckRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightAwarenessComponent_GetBufferPixels, "GetBufferPixels" }, // 3686657332
		{ &Z_Construct_UFunction_ULightAwarenessComponent_GetLightStatus, "GetLightStatus" }, // 1850929438
		{ &Z_Construct_UFunction_ULightAwarenessComponent_GetRenderingState, "GetRenderingState" }, // 1613511324
		{ &Z_Construct_UFunction_ULightAwarenessComponent_HideLightDetector, "HideLightDetector" }, // 2365214700
		{ &Z_Construct_UFunction_ULightAwarenessComponent_SetLightSensitivity, "SetLightSensitivity" }, // 3368827171
		{ &Z_Construct_UFunction_ULightAwarenessComponent_ShowLightDetector, "ShowLightDetector" }, // 1602442774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightAwarenessComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessDetectorScale = { "LightAwarenessDetectorScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessDetectorScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessDetectorScale_MetaData), NewProp_LightAwarenessDetectorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessDetectorOffset = { "LightAwarenessDetectorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessDetectorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessDetectorOffset_MetaData), NewProp_LightAwarenessDetectorOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessSensitivity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessSensitivity = { "LightAwarenessSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessSensitivity), Z_Construct_UEnum_LightAwareness_ELightAwarenessSensitivity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessSensitivity_MetaData), NewProp_LightAwarenessSensitivity_MetaData) }; // 3282282239
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMethod = { "LightAwarenessMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessMethod), Z_Construct_UEnum_LightAwareness_ELightAwarenessDetectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessMethod_MetaData), NewProp_LightAwarenessMethod_MetaData) }; // 173715605
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessComponentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessComponentState = { "LightAwarenessComponentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessComponentState), Z_Construct_UEnum_LightAwareness_ELightAwarenessState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessComponentState_MetaData), NewProp_LightAwarenessComponentState_MetaData) }; // 3858684123
void Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessGI_SetBit(void* Obj)
{
	((ULightAwarenessComponent*)Obj)->LightAwarenessGI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessGI = { "LightAwarenessGI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULightAwarenessComponent), &Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessGI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessGI_MetaData), NewProp_LightAwarenessGI_MetaData) };
void Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessFallback_SetBit(void* Obj)
{
	((ULightAwarenessComponent*)Obj)->LightAwarenessFallback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessFallback = { "LightAwarenessFallback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULightAwarenessComponent), &Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessFallback_MetaData), NewProp_LightAwarenessFallback_MetaData) };
void Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessIsReplicatedRenderTargets_SetBit(void* Obj)
{
	((ULightAwarenessComponent*)Obj)->LightAwarenessIsReplicatedRenderTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessIsReplicatedRenderTargets = { "LightAwarenessIsReplicatedRenderTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULightAwarenessComponent), &Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessIsReplicatedRenderTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessIsReplicatedRenderTargets_MetaData), NewProp_LightAwarenessIsReplicatedRenderTargets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMaterialSensitivity = { "LightAwarenessMaterialSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessMaterialSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessMaterialSensitivity_MetaData), NewProp_LightAwarenessMaterialSensitivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMesh = { "LightAwarenessMesh", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessMesh_MetaData), NewProp_LightAwarenessMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_sceneCaptureComponentTop = { "sceneCaptureComponentTop", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, sceneCaptureComponentTop), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sceneCaptureComponentTop_MetaData), NewProp_sceneCaptureComponentTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_sceneCaptureComponentBottom = { "sceneCaptureComponentBottom", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, sceneCaptureComponentBottom), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sceneCaptureComponentBottom_MetaData), NewProp_sceneCaptureComponentBottom_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessTagPrefix = { "LightAwarenessTagPrefix", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, LightAwarenessTagPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightAwarenessTagPrefix_MetaData), NewProp_LightAwarenessTagPrefix_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_RenderingCheckRate = { "RenderingCheckRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightAwarenessComponent, RenderingCheckRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingCheckRate_MetaData), NewProp_RenderingCheckRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightAwarenessComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessDetectorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessDetectorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessSensitivity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessComponentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessComponentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessGI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessIsReplicatedRenderTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMaterialSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_sceneCaptureComponentTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_sceneCaptureComponentBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_LightAwarenessTagPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightAwarenessComponent_Statics::NewProp_RenderingCheckRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightAwarenessComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightAwarenessComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LightAwareness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightAwarenessComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightAwarenessComponent_Statics::ClassParams = {
	&ULightAwarenessComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULightAwarenessComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightAwarenessComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightAwarenessComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightAwarenessComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightAwarenessComponent()
{
	if (!Z_Registration_Info_UClass_ULightAwarenessComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightAwarenessComponent.OuterSingleton, Z_Construct_UClass_ULightAwarenessComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightAwarenessComponent.OuterSingleton;
}
template<> LIGHTAWARENESS_API UClass* StaticClass<ULightAwarenessComponent>()
{
	return ULightAwarenessComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightAwarenessComponent);
ULightAwarenessComponent::~ULightAwarenessComponent() {}
// End Class ULightAwarenessComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELightAwarenessSensitivity_StaticEnum, TEXT("ELightAwarenessSensitivity"), &Z_Registration_Info_UEnum_ELightAwarenessSensitivity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3282282239U) },
		{ ELightAwarenessDetectionMethod_StaticEnum, TEXT("ELightAwarenessDetectionMethod"), &Z_Registration_Info_UEnum_ELightAwarenessDetectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 173715605U) },
		{ ELightAwarenessState_StaticEnum, TEXT("ELightAwarenessState"), &Z_Registration_Info_UEnum_ELightAwarenessState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3858684123U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightAwarenessComponent, ULightAwarenessComponent::StaticClass, TEXT("ULightAwarenessComponent"), &Z_Registration_Info_UClass_ULightAwarenessComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightAwarenessComponent), 3182906531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_175900618(TEXT("/Script/LightAwareness"),
	Z_CompiledInDeferFile_FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
