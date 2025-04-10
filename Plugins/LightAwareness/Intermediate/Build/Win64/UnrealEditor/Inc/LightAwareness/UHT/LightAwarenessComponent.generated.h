// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LightAwarenessComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELightAwarenessSensitivity : uint8;
struct FColor;
#ifdef LIGHTAWARENESS_LightAwarenessComponent_generated_h
#error "LightAwarenessComponent.generated.h already included, missing '#pragma once' in LightAwarenessComponent.h"
#endif
#define LIGHTAWARENESS_LightAwarenessComponent_generated_h

#define FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_59_DELEGATE \
LIGHTAWARENESS_API void FOnLightAwarenessComponentUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLightAwarenessComponentUpdated, float CurrentLightValue);


#define FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRenderingState); \
	DECLARE_FUNCTION(execSetLightSensitivity); \
	DECLARE_FUNCTION(execGetBufferPixels); \
	DECLARE_FUNCTION(execGetLightStatusDeferred); \
	DECLARE_FUNCTION(execGetLightStatus); \
	DECLARE_FUNCTION(execShowLightDetector); \
	DECLARE_FUNCTION(execHideLightDetector);


#define FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULightAwarenessComponent(); \
	friend struct Z_Construct_UClass_ULightAwarenessComponent_Statics; \
public: \
	DECLARE_CLASS(ULightAwarenessComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LightAwareness"), NO_API) \
	DECLARE_SERIALIZER(ULightAwarenessComponent)


#define FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightAwarenessComponent(ULightAwarenessComponent&&); \
	ULightAwarenessComponent(const ULightAwarenessComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULightAwarenessComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightAwarenessComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightAwarenessComponent) \
	NO_API virtual ~ULightAwarenessComponent();


#define FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_61_PROLOG
#define FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIGHTAWARENESS_API UClass* StaticClass<class ULightAwarenessComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LightAwarenessDemo_Plugins_LightAwareness_Source_LightAwareness_Public_LightAwarenessComponent_h


#define FOREACH_ENUM_ELIGHTAWARENESSSENSITIVITY(op) \
	op(ELightAwarenessSensitivity::Optimized) \
	op(ELightAwarenessSensitivity::Low) \
	op(ELightAwarenessSensitivity::High) 

enum class ELightAwarenessSensitivity : uint8;
template<> struct TIsUEnumClass<ELightAwarenessSensitivity> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessSensitivity>();

#define FOREACH_ENUM_ELIGHTAWARENESSDETECTIONMETHOD(op) \
	op(ELightAwarenessDetectionMethod::Top) \
	op(ELightAwarenessDetectionMethod::Both) \
	op(ELightAwarenessDetectionMethod::Bottom) 

enum class ELightAwarenessDetectionMethod : uint8;
template<> struct TIsUEnumClass<ELightAwarenessDetectionMethod> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessDetectionMethod>();

#define FOREACH_ENUM_ELIGHTAWARENESSGETMETHOD(op) \
	op(ELightAwarenessGetMethod::Manuel) \
	op(ELightAwarenessGetMethod::Distance) \
	op(ELightAwarenessGetMethod::EveryFrame) 

enum class ELightAwarenessGetMethod : uint8;
template<> struct TIsUEnumClass<ELightAwarenessGetMethod> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessGetMethod>();

#define FOREACH_ENUM_ELIGHTAWARENESSCALCULATIONMETHOD(op) \
	op(ELightAwarenessCalculationMethod::Brightest) \
	op(ELightAwarenessCalculationMethod::Average) 

enum class ELightAwarenessCalculationMethod : uint8;
template<> struct TIsUEnumClass<ELightAwarenessCalculationMethod> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessCalculationMethod>();

#define FOREACH_ENUM_ELIGHTAWARENESSSTATE(op) \
	op(ELightAwarenessState::Inactive) \
	op(ELightAwarenessState::Active) \
	op(ELightAwarenessState::ActiveVisible) 

enum class ELightAwarenessState : uint8;
template<> struct TIsUEnumClass<ELightAwarenessState> { enum { Value = true }; };
template<> LIGHTAWARENESS_API UEnum* StaticEnum<ELightAwarenessState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
