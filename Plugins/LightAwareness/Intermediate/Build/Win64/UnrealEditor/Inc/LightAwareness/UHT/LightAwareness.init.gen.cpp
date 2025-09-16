// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightAwareness_init() {}
	LIGHTAWARENESS_API UFunction* Z_Construct_UDelegateFunction_LightAwareness_OnLightAwarenessComponentUpdated__DelegateSignature();
	LIGHTAWARENESS_API UFunction* Z_Construct_UDelegateFunction_LightAwareness_OnLightAwarenessSubsystemRegistration__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LightAwareness;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LightAwareness()
	{
		if (!Z_Registration_Info_UPackage__Script_LightAwareness.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LightAwareness_OnLightAwarenessComponentUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LightAwareness_OnLightAwarenessSubsystemRegistration__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LightAwareness",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF5CEB6C3,
				0xD763E70D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LightAwareness.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LightAwareness.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LightAwareness(Z_Construct_UPackage__Script_LightAwareness, TEXT("/Script/LightAwareness"), Z_Registration_Info_UPackage__Script_LightAwareness, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF5CEB6C3, 0xD763E70D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
