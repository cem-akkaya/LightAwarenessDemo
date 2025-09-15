// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightAwarenessComponent.h"

#ifdef LIGHTAWARENESS_LightAwarenessComponent_generated_h
#error "LightAwarenessComponent.generated.h already included, missing '#pragma once' in LightAwarenessComponent.h"
#endif
#define LIGHTAWARENESS_LightAwarenessComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ELightAwarenessSensitivity : uint8;
struct FColor;

// ********** Begin Delegate FOnLightAwarenessComponentUpdated *************************************
#define FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_DELEGATE \
LIGHTAWARENESS_API void FOnLightAwarenessComponentUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLightAwarenessComponentUpdated, float CurrentLightValue);


// ********** End Delegate FOnLightAwarenessComponentUpdated ***************************************

// ********** Begin Class ULightAwarenessComponent *************************************************
#define FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRenderingState); \
	DECLARE_FUNCTION(execSetLightSensitivity); \
	DECLARE_FUNCTION(execGetBufferPixels); \
	DECLARE_FUNCTION(execProcessLight); \
	DECLARE_FUNCTION(execShowLightDetector); \
	DECLARE_FUNCTION(execHideLightDetector);


LIGHTAWARENESS_API UClass* Z_Construct_UClass_ULightAwarenessComponent_NoRegister();

#define FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightAwarenessComponent(); \
	friend struct Z_Construct_UClass_ULightAwarenessComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LIGHTAWARENESS_API UClass* Z_Construct_UClass_ULightAwarenessComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(ULightAwarenessComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightAwareness"), Z_Construct_UClass_ULightAwarenessComponent_NoRegister) \
	DECLARE_SERIALIZER(ULightAwarenessComponent)


#define FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULightAwarenessComponent(ULightAwarenessComponent&&) = delete; \
	ULightAwarenessComponent(const ULightAwarenessComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightAwarenessComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightAwarenessComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightAwarenessComponent) \
	NO_API virtual ~ULightAwarenessComponent();


#define FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_66_PROLOG
#define FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_INCLASS_NO_PURE_DECLS \
	FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULightAwarenessComponent;

// ********** End Class ULightAwarenessComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LightAwarenessDemoFull_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h

// ********** Begin Enum ELightAwarenessSensitivity ************************************************
#define FOREACH_ENUM_ELIGHTAWARENESSSENSITIVITY(op) \
	op(ELightAwarenessSensitivity::Optimized) \
	op(ELightAwarenessSensitivity::Low) \
	op(ELightAwarenessSensitivity::High) 

enum class ELightAwarenessSensitivity : uint8;
template<> struct TIsUEnumClass<ELightAwarenessSensitivity> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessSensitivity>();
// ********** End Enum ELightAwarenessSensitivity **************************************************

// ********** Begin Enum ELightAwarenessDetectionMethod ********************************************
#define FOREACH_ENUM_ELIGHTAWARENESSDETECTIONMETHOD(op) \
	op(ELightAwarenessDetectionMethod::Top) \
	op(ELightAwarenessDetectionMethod::Both) \
	op(ELightAwarenessDetectionMethod::Bottom) 

enum class ELightAwarenessDetectionMethod : uint8;
template<> struct TIsUEnumClass<ELightAwarenessDetectionMethod> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessDetectionMethod>();
// ********** End Enum ELightAwarenessDetectionMethod **********************************************

// ********** Begin Enum ELightAwarenessGetMethod **************************************************
#define FOREACH_ENUM_ELIGHTAWARENESSGETMETHOD(op) \
	op(ELightAwarenessGetMethod::Manuel) \
	op(ELightAwarenessGetMethod::Distance) \
	op(ELightAwarenessGetMethod::EveryFrame) 

enum class ELightAwarenessGetMethod : uint8;
template<> struct TIsUEnumClass<ELightAwarenessGetMethod> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessGetMethod>();
// ********** End Enum ELightAwarenessGetMethod ****************************************************

// ********** Begin Enum ELightAwarenessCalculationMethod ******************************************
#define FOREACH_ENUM_ELIGHTAWARENESSCALCULATIONMETHOD(op) \
	op(ELightAwarenessCalculationMethod::Brightest) \
	op(ELightAwarenessCalculationMethod::Average) 

enum class ELightAwarenessCalculationMethod : uint8;
template<> struct TIsUEnumClass<ELightAwarenessCalculationMethod> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessCalculationMethod>();
// ********** End Enum ELightAwarenessCalculationMethod ********************************************

// ********** Begin Enum ELightAwarenessProcessing *************************************************
#define FOREACH_ENUM_ELIGHTAWARENESSPROCESSING(op) \
	op(ELightAwarenessProcessing::CPU) \
	op(ELightAwarenessProcessing::GPU) 

enum class ELightAwarenessProcessing : uint8;
template<> struct TIsUEnumClass<ELightAwarenessProcessing> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessProcessing>();
// ********** End Enum ELightAwarenessProcessing ***************************************************

// ********** Begin Enum ELightAwarenessState ******************************************************
#define FOREACH_ENUM_ELIGHTAWARENESSSTATE(op) \
	op(ELightAwarenessState::Inactive) \
	op(ELightAwarenessState::Active) \
	op(ELightAwarenessState::ActiveVisible) 

enum class ELightAwarenessState : uint8;
template<> struct TIsUEnumClass<ELightAwarenessState> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessState>();
// ********** End Enum ELightAwarenessState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
