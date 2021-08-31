// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgWidgets_init() {}
	ELGWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature();
	ELGWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature();
	ELGWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ElgWidgets()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ElgWidgets",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB7B78BEF,
				0x66905118,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
