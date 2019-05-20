// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELGWIDGETS_ElgWidget_ComboBoxString_generated_h
#error "ElgWidget_ComboBoxString.generated.h already included, missing '#pragma once' in ElgWidget_ComboBoxString.h"
#endif
#define ELGWIDGETS_ElgWidget_ComboBoxString_generated_h

#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_GET_UBOOL(Z_Param_bFocusMenu); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FocusUserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open(Z_Param_bFocusMenu,Z_Param_FocusUserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleOpen) \
	{ \
		P_GET_UBOOL(Z_Param_bFocusMenu); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FocusUserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleOpen(Z_Param_bFocusMenu,Z_Param_FocusUserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOptionAtIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOptionAtIndex(Z_Param_Option,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOptions) \
	{ \
		P_GET_TARRAY(FString,Z_Param_InOptions); \
		P_GET_UBOOL(Z_Param_bSort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOptions(Z_Param_InOptions,Z_Param_bSort); \
		P_NATIVE_END; \
	}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClose) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Close(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_GET_UBOOL(Z_Param_bFocusMenu); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FocusUserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open(Z_Param_bFocusMenu,Z_Param_FocusUserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleOpen) \
	{ \
		P_GET_UBOOL(Z_Param_bFocusMenu); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FocusUserIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleOpen(Z_Param_bFocusMenu,Z_Param_FocusUserIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOpen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOptionAtIndex) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Option); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOptionAtIndex(Z_Param_Option,Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSelectedByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSelectedByIndex(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortOptions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortOptions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddOptions) \
	{ \
		P_GET_TARRAY(FString,Z_Param_InOptions); \
		P_GET_UBOOL(Z_Param_bSort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddOptions(Z_Param_InOptions,Z_Param_bSort); \
		P_NATIVE_END; \
	}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgWidget_ComboBoxString(); \
	friend struct Z_Construct_UClass_UElgWidget_ComboBoxString_Statics; \
public: \
	DECLARE_CLASS(UElgWidget_ComboBoxString, UComboBoxString, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgWidgets"), NO_API) \
	DECLARE_SERIALIZER(UElgWidget_ComboBoxString)


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUElgWidget_ComboBoxString(); \
	friend struct Z_Construct_UClass_UElgWidget_ComboBoxString_Statics; \
public: \
	DECLARE_CLASS(UElgWidget_ComboBoxString, UComboBoxString, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgWidgets"), NO_API) \
	DECLARE_SERIALIZER(UElgWidget_ComboBoxString)


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgWidget_ComboBoxString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgWidget_ComboBoxString) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgWidget_ComboBoxString); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgWidget_ComboBoxString); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgWidget_ComboBoxString(UElgWidget_ComboBoxString&&); \
	NO_API UElgWidget_ComboBoxString(const UElgWidget_ComboBoxString&); \
public:


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgWidget_ComboBoxString(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgWidget_ComboBoxString(UElgWidget_ComboBoxString&&); \
	NO_API UElgWidget_ComboBoxString(const UElgWidget_ComboBoxString&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgWidget_ComboBoxString); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgWidget_ComboBoxString); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgWidget_ComboBoxString)


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_PRIVATE_PROPERTY_OFFSET
#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_16_PROLOG
#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_PRIVATE_PROPERTY_OFFSET \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_RPC_WRAPPERS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_INCLASS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_PRIVATE_PROPERTY_OFFSET \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_INCLASS_NO_PURE_DECLS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGWIDGETS_API UClass* StaticClass<class UElgWidget_ComboBoxString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_ComboBoxString_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
