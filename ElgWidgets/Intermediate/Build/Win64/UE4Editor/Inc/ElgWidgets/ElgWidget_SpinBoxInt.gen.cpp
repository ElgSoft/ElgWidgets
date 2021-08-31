// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgWidgets/Public/ElgWidget_SpinBoxInt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgWidget_SpinBoxInt() {}
// Cross Module References
	ELGWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature();
	ELGWIDGETS_API UClass* Z_Construct_UClass_UElgWidget_SpinBoxInt();
	ELGWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	ELGWIDGETS_API UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature();
	ELGWIDGETS_API UClass* Z_Construct_UClass_UElgWidget_SpinBoxInt_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_ElgWidgets();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics
	{
		struct ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueCommittedEvent_Parms
		{
			int32 InValue;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueCommittedEvent_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_InValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueCommittedEvent_Parms), Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics
	{
		struct ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueChangedEvent_Parms
		{
			int32 InValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueChangedEvent_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueChangedEvent_Parms), Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execSetForegroundColor)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForegroundColor(Z_Param_InForegroundColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execClearMaxSliderValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxSliderValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execSetMaxSliderValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSliderValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execGetMaxSliderValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxSliderValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execClearMinSliderValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinSliderValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execSetMinSliderValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinSliderValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execGetMinSliderValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinSliderValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execClearMaxValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execSetMaxValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execGetMaxValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execClearMinValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execSetMinValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execGetMinValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execSetValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UElgWidget_SpinBoxInt::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	void UElgWidget_SpinBoxInt::StaticRegisterNativesUElgWidget_SpinBoxInt()
	{
		UClass* Class = UElgWidget_SpinBoxInt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMaxSliderValue", &UElgWidget_SpinBoxInt::execClearMaxSliderValue },
			{ "ClearMaxValue", &UElgWidget_SpinBoxInt::execClearMaxValue },
			{ "ClearMinSliderValue", &UElgWidget_SpinBoxInt::execClearMinSliderValue },
			{ "ClearMinValue", &UElgWidget_SpinBoxInt::execClearMinValue },
			{ "GetMaxSliderValue", &UElgWidget_SpinBoxInt::execGetMaxSliderValue },
			{ "GetMaxValue", &UElgWidget_SpinBoxInt::execGetMaxValue },
			{ "GetMinSliderValue", &UElgWidget_SpinBoxInt::execGetMinSliderValue },
			{ "GetMinValue", &UElgWidget_SpinBoxInt::execGetMinValue },
			{ "GetValue", &UElgWidget_SpinBoxInt::execGetValue },
			{ "SetForegroundColor", &UElgWidget_SpinBoxInt::execSetForegroundColor },
			{ "SetMaxSliderValue", &UElgWidget_SpinBoxInt::execSetMaxSliderValue },
			{ "SetMaxValue", &UElgWidget_SpinBoxInt::execSetMaxValue },
			{ "SetMinSliderValue", &UElgWidget_SpinBoxInt::execSetMinSliderValue },
			{ "SetMinValue", &UElgWidget_SpinBoxInt::execSetMinValue },
			{ "SetValue", &UElgWidget_SpinBoxInt::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the maximum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Clear the maximum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "ClearMaxSliderValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the maximum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Clear the maximum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "ClearMaxValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the minimum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Clear the minimum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "ClearMinSliderValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the minimum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Clear the minimum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "ClearMinValue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventGetMaxSliderValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventGetMaxSliderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current maximum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Get the current maximum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "GetMaxSliderValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventGetMaxSliderValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventGetMaxValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventGetMaxValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current maximum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Get the current maximum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "GetMaxValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventGetMaxValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventGetMinSliderValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventGetMinSliderValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current minimum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Get the current minimum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "GetMinSliderValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventGetMinSliderValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventGetMinValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventGetMinValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current minimum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Get the current minimum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "GetMinValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventGetMinValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventGetValue_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current value of the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Get the current value of the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "GetValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventGetValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics
	{
		struct ElgWidget_SpinBoxInt_eventSetForegroundColor_Parms
		{
			FSlateColor InForegroundColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InForegroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::NewProp_InForegroundColor = { "InForegroundColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventSetForegroundColor_Parms, InForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::NewProp_InForegroundColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "SetForegroundColor", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventSetForegroundColor_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventSetMaxSliderValue_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventSetMaxSliderValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the maximum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Set the maximum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "SetMaxSliderValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventSetMaxSliderValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventSetMaxValue_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventSetMaxValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the maximum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Set the maximum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "SetMaxValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventSetMaxValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventSetMinSliderValue_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventSetMinSliderValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the minimum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Set the minimum value that can be specified using the slider." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "SetMinSliderValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventSetMinSliderValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventSetMinValue_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventSetMinValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the minimum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Set the minimum value that can be manually set in the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "SetMinValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventSetMinValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics
	{
		struct ElgWidget_SpinBoxInt_eventSetValue_Parms
		{
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_SpinBoxInt_eventSetValue_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the value of the spin box. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Set the value of the spin box." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_SpinBoxInt, nullptr, "SetValue", nullptr, nullptr, sizeof(ElgWidget_SpinBoxInt_eventSetValue_Parms), Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgWidget_SpinBoxInt_NoRegister()
	{
		return UElgWidget_SpinBoxInt::StaticClass();
	}
	struct Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SliderExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Justification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[];
#endif
		static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[];
#endif
		static void NewProp_SelectAllTextOnCommit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnValueCommitted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueCommitted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBeginSliderMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginSliderMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndSliderMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndSliderMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinValue_MetaData[];
#endif
		static void NewProp_bOverride_MinValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxValue_MetaData[];
#endif
		static void NewProp_bOverride_MaxValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinSliderValue_MetaData[];
#endif
		static void NewProp_bOverride_MinSliderValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxSliderValue_MetaData[];
#endif
		static void NewProp_bOverride_MaxSliderValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxSliderValue, "ClearMaxSliderValue" }, // 1676634185
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMaxValue, "ClearMaxValue" }, // 3786235228
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinSliderValue, "ClearMinSliderValue" }, // 755883599
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_ClearMinValue, "ClearMinValue" }, // 2653127401
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxSliderValue, "GetMaxSliderValue" }, // 389316233
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMaxValue, "GetMaxValue" }, // 4288748274
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinSliderValue, "GetMinSliderValue" }, // 4017661196
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetMinValue, "GetMinValue" }, // 3847243592
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_GetValue, "GetValue" }, // 3001784259
		{ &Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature, "OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature" }, // 685647772
		{ &Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature, "OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature" }, // 2488384853
		{ &Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature, "OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature" }, // 2262331137
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetForegroundColor, "SetForegroundColor" }, // 1606410410
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxSliderValue, "SetMaxSliderValue" }, // 3869309681
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMaxValue, "SetMaxValue" }, // 992710978
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinSliderValue, "SetMinSliderValue" }, // 3045545421
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetMinValue, "SetMinValue" }, // 11628511
		{ &Z_Construct_UFunction_UElgWidget_SpinBoxInt_SetValue, "SetValue" }, // 1699228599
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A numerical (int) entry box that allows for direct entry of the number or allows the user to click and slide the number.\n */" },
		{ "DisplayName", "SpinBox (Int)" },
		{ "IncludePath", "ElgWidget_SpinBoxInt.h" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "A numerical (int) entry box that allows for direct entry of the number or allows the user to click and slide the number." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Value stored in this spin box */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Value stored in this spin box" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, Value), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetInt32__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ValueDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ValueDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The Style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The Style" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, WidgetStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Style_MetaData[] = {
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Slider" },
		{ "Comment", "/** The amount by which to change the spin box value as the slider moves. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The amount by which to change the spin box value as the slider moves." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, Delta), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SliderExponent_MetaData[] = {
		{ "Category", "Slider" },
		{ "Comment", "/** The exponent by which to increase the delta as the mouse moves. 1 is constant (never increases the delta). */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The exponent by which to increase the delta as the mouse moves. 1 is constant (never increases the delta)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SliderExponent = { "SliderExponent", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, SliderExponent), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SliderExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SliderExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Font color and opacity (overrides style) */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Font color and opacity (overrides style)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Justification_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The justification the value text should appear as. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The justification the value text should appear as." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Justification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The minimum width of the spin box */" },
		{ "DisplayName", "Minimum Desired Width" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The minimum width of the spin box" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Whether to remove the keyboard focus from the spin box when the value is committed */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Whether to remove the keyboard focus from the spin box when the value is committed" },
	};
#endif
	void Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
	{
		((UElgWidget_SpinBoxInt*)Obj)->ClearKeyboardFocusOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElgWidget_SpinBoxInt), &Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Whether to select the text in the spin box when the value is committed */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Whether to select the text in the spin box when the value is committed" },
	};
#endif
	void Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit_SetBit(void* Obj)
	{
		((UElgWidget_SpinBoxInt*)Obj)->SelectAllTextOnCommit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit = { "SelectAllTextOnCommit", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElgWidget_SpinBoxInt), &Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called when the value is changed interactively by the user */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Called when the value is changed interactively by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, OnValueChanged), Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueCommitted_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called when the value is committed. Occurs when the user presses Enter or the text box loses focus. */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Called when the value is committed. Occurs when the user presses Enter or the text box loses focus." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueCommitted = { "OnValueCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, OnValueCommitted), Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueCommittedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueCommitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueCommitted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnBeginSliderMovement_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called right before the slider begins to move */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Called right before the slider begins to move" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnBeginSliderMovement = { "OnBeginSliderMovement", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, OnBeginSliderMovement), Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxBeginSliderMovement__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnBeginSliderMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnBeginSliderMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnEndSliderMovement_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called right after the slider handle is released by the user */" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Called right after the slider handle is released by the user" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnEndSliderMovement = { "OnEndSliderMovement", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, OnEndSliderMovement), Z_Construct_UDelegateFunction_UElgWidget_SpinBoxInt_OnElgWidgetSpinBoxValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnEndSliderMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnEndSliderMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MinValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Whether the optional MinValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue_SetBit(void* Obj)
	{
		((UElgWidget_SpinBoxInt*)Obj)->bOverride_MinValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue = { "bOverride_MinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UElgWidget_SpinBoxInt), &Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MaxValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Whether the optional MaxValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue_SetBit(void* Obj)
	{
		((UElgWidget_SpinBoxInt*)Obj)->bOverride_MaxValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue = { "bOverride_MaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UElgWidget_SpinBoxInt), &Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MinSliderValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Whether the optional MinSliderValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue_SetBit(void* Obj)
	{
		((UElgWidget_SpinBoxInt*)Obj)->bOverride_MinSliderValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue = { "bOverride_MinSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UElgWidget_SpinBoxInt), &Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MaxSliderValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "Whether the optional MaxSliderValue attribute of the widget is set" },
	};
#endif
	void Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue_SetBit(void* Obj)
	{
		((UElgWidget_SpinBoxInt*)Obj)->bOverride_MaxSliderValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue = { "bOverride_MaxSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UElgWidget_SpinBoxInt), &Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The minimum allowable value that can be manually entered into the spin box */" },
		{ "DisplayName", "Minimum Value" },
		{ "editcondition", "bOverride_MinValue" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The minimum allowable value that can be manually entered into the spin box" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinValue), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The maximum allowable value that can be manually entered into the spin box */" },
		{ "DisplayName", "Maximum Value" },
		{ "editcondition", "bOverride_MaxValue" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The maximum allowable value that can be manually entered into the spin box" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, MaxValue), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The minimum allowable value that can be specified using the slider */" },
		{ "DisplayName", "Minimum Slider Value" },
		{ "editcondition", "bOverride_MinSliderValue" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The minimum allowable value that can be specified using the slider" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinSliderValue = { "MinSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinSliderValue), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinSliderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The maximum allowable value that can be specified using the slider */" },
		{ "DisplayName", "Maximum Slider Value" },
		{ "editcondition", "bOverride_MaxSliderValue" },
		{ "ModuleRelativePath", "Public/ElgWidget_SpinBoxInt.h" },
		{ "ToolTip", "The maximum allowable value that can be specified using the slider" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxSliderValue = { "MaxSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElgWidget_SpinBoxInt, MaxSliderValue), METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxSliderValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxSliderValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ValueDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SliderExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_Justification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinDesiredWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ClearKeyboardFocusOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_SelectAllTextOnCommit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_ForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnValueCommitted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnBeginSliderMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_OnEndSliderMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MinSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_bOverride_MaxSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MinSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::NewProp_MaxSliderValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgWidget_SpinBoxInt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::ClassParams = {
		&UElgWidget_SpinBoxInt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgWidget_SpinBoxInt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgWidget_SpinBoxInt, 2223519985);
	template<> ELGWIDGETS_API UClass* StaticClass<UElgWidget_SpinBoxInt>()
	{
		return UElgWidget_SpinBoxInt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgWidget_SpinBoxInt(Z_Construct_UClass_UElgWidget_SpinBoxInt, &UElgWidget_SpinBoxInt::StaticClass, TEXT("/Script/ElgWidgets"), TEXT("UElgWidget_SpinBoxInt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgWidget_SpinBoxInt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
