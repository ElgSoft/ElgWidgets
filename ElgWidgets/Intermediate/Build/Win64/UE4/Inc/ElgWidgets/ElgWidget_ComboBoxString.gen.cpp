// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElgWidgets/Public/ElgWidget_ComboBoxString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElgWidget_ComboBoxString() {}
// Cross Module References
	ELGWIDGETS_API UClass* Z_Construct_UClass_UElgWidget_ComboBoxString_NoRegister();
	ELGWIDGETS_API UClass* Z_Construct_UClass_UElgWidget_ComboBoxString();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString();
	UPackage* Z_Construct_UPackage__Script_ElgWidgets();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_Close();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_Open();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions();
	ELGWIDGETS_API UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen();
// End Cross Module References
	void UElgWidget_ComboBoxString::StaticRegisterNativesUElgWidget_ComboBoxString()
	{
		UClass* Class = UElgWidget_ComboBoxString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOptionAtIndex", &UElgWidget_ComboBoxString::execAddOptionAtIndex },
			{ "AddOptions", &UElgWidget_ComboBoxString::execAddOptions },
			{ "Close", &UElgWidget_ComboBoxString::execClose },
			{ "GetOptions", &UElgWidget_ComboBoxString::execGetOptions },
			{ "IsOpen", &UElgWidget_ComboBoxString::execIsOpen },
			{ "Open", &UElgWidget_ComboBoxString::execOpen },
			{ "SetSelectedByIndex", &UElgWidget_ComboBoxString::execSetSelectedByIndex },
			{ "SortOptions", &UElgWidget_ComboBoxString::execSortOptions },
			{ "ToggleOpen", &UElgWidget_ComboBoxString::execToggleOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics
	{
		struct ElgWidget_ComboBoxString_eventAddOptionAtIndex_Parms
		{
			FString Option;
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventAddOptionAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventAddOptionAtIndex_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Add an option at a specific index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "AddOptionAtIndex", sizeof(ElgWidget_ComboBoxString_eventAddOptionAtIndex_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics
	{
		struct ElgWidget_ComboBoxString_eventAddOptions_Parms
		{
			TArray<FString> InOptions;
			bool bSort;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSort_MetaData[];
#endif
		static void NewProp_bSort_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSort;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InOptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort_SetBit(void* Obj)
	{
		((ElgWidget_ComboBoxString_eventAddOptions_Parms*)Obj)->bSort = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort = { "bSort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgWidget_ComboBoxString_eventAddOptions_Parms), &Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort_MetaData)) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventAddOptions_Parms, InOptions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_bSort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_InOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::NewProp_InOptions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::Function_MetaDataParams[] = {
		{ "bSort", "false" },
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Add the array of string to the options, sorted or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "AddOptions", sizeof(ElgWidget_ComboBoxString_eventAddOptions_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Close the popup\n              * @param bFocusMenu  Should we focus the popup as soon as it opens?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "Close", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_Close_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics
	{
		struct ElgWidget_ComboBoxString_eventGetOptions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventGetOptions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Return all the option as strings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "GetOptions", sizeof(ElgWidget_ComboBoxString_eventGetOptions_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics
	{
		struct ElgWidget_ComboBoxString_eventIsOpen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ElgWidget_ComboBoxString_eventIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgWidget_ComboBoxString_eventIsOpen_Parms), &Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "return true if the popup is open; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "IsOpen", sizeof(ElgWidget_ComboBoxString_eventIsOpen_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics
	{
		struct ElgWidget_ComboBoxString_eventOpen_Parms
		{
			bool bFocusMenu;
			int32 FocusUserIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusUserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FocusUserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFocusMenu_MetaData[];
#endif
		static void NewProp_bFocusMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_FocusUserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_FocusUserIndex = { "FocusUserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventOpen_Parms, FocusUserIndex), METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_FocusUserIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_FocusUserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu_SetBit(void* Obj)
	{
		((ElgWidget_ComboBoxString_eventOpen_Parms*)Obj)->bFocusMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu = { "bFocusMenu", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgWidget_ComboBoxString_eventOpen_Parms), &Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_FocusUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::NewProp_bFocusMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "CPP_Default_bFocusMenu", "true" },
		{ "CPP_Default_FocusUserIndex", "0" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Open the popup\n              * @param bFocusMenu  Should we focus the popup as soon as it opens?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "Open", sizeof(ElgWidget_ComboBoxString_eventOpen_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics
	{
		struct ElgWidget_ComboBoxString_eventSetSelectedByIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventSetSelectedByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Set the selected option by its index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "SetSelectedByIndex", sizeof(ElgWidget_ComboBoxString_eventSetSelectedByIndex_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Sort the list of options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "SortOptions", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics
	{
		struct ElgWidget_ComboBoxString_eventToggleOpen_Parms
		{
			bool bFocusMenu;
			int32 FocusUserIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusUserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FocusUserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFocusMenu_MetaData[];
#endif
		static void NewProp_bFocusMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFocusMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_FocusUserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_FocusUserIndex = { "FocusUserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ElgWidget_ComboBoxString_eventToggleOpen_Parms, FocusUserIndex), METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_FocusUserIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_FocusUserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu_SetBit(void* Obj)
	{
		((ElgWidget_ComboBoxString_eventToggleOpen_Parms*)Obj)->bFocusMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu = { "bFocusMenu", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ElgWidget_ComboBoxString_eventToggleOpen_Parms), &Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_FocusUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::NewProp_bFocusMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "CPP_Default_bFocusMenu", "true" },
		{ "CPP_Default_FocusUserIndex", "0" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
		{ "ToolTip", "Open or close the popup\n              * @param bFocusMenu  Should we focus the popup as soon as it opens?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElgWidget_ComboBoxString, nullptr, "ToggleOpen", sizeof(ElgWidget_ComboBoxString_eventToggleOpen_Parms), Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UElgWidget_ComboBoxString_NoRegister()
	{
		return UElgWidget_ComboBoxString::StaticClass();
	}
	struct Z_Construct_UClass_UElgWidget_ComboBoxString_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboBoxString,
		(UObject* (*)())Z_Construct_UPackage__Script_ElgWidgets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptionAtIndex, "AddOptionAtIndex" }, // 3000903670
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_AddOptions, "AddOptions" }, // 606489494
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_Close, "Close" }, // 2455610411
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_GetOptions, "GetOptions" }, // 732058500
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_IsOpen, "IsOpen" }, // 3066297302
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_Open, "Open" }, // 3628633331
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_SetSelectedByIndex, "SetSelectedByIndex" }, // 545163505
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_SortOptions, "SortOptions" }, // 1463399462
		{ &Z_Construct_UFunction_UElgWidget_ComboBoxString_ToggleOpen, "ToggleOpen" }, // 799840530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ComboBoxString (Elg)" },
		{ "IncludePath", "ElgWidget_ComboBoxString.h" },
		{ "ModuleRelativePath", "Public/ElgWidget_ComboBoxString.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElgWidget_ComboBoxString>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::ClassParams = {
		&UElgWidget_ComboBoxString::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElgWidget_ComboBoxString()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElgWidget_ComboBoxString_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElgWidget_ComboBoxString, 2599652175);
	template<> ELGWIDGETS_API UClass* StaticClass<UElgWidget_ComboBoxString>()
	{
		return UElgWidget_ComboBoxString::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElgWidget_ComboBoxString(Z_Construct_UClass_UElgWidget_ComboBoxString, &UElgWidget_ComboBoxString::StaticClass, TEXT("/Script/ElgWidgets"), TEXT("UElgWidget_ComboBoxString"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElgWidget_ComboBoxString);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
