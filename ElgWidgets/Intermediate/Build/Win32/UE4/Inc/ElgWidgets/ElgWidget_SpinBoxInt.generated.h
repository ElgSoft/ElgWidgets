// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateColor;
#ifdef ELGWIDGETS_ElgWidget_SpinBoxInt_generated_h
#error "ElgWidget_SpinBoxInt.generated.h already included, missing '#pragma once' in ElgWidget_SpinBoxInt.h"
#endif
#define ELGWIDGETS_ElgWidget_SpinBoxInt_generated_h

#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_28_DELEGATE \
static inline void FOnElgWidgetSpinBoxBeginSliderMovement_DelegateWrapper(const FMulticastScriptDelegate& OnElgWidgetSpinBoxBeginSliderMovement) \
{ \
	OnElgWidgetSpinBoxBeginSliderMovement.ProcessMulticastDelegate<UObject>(NULL); \
}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_27_DELEGATE \
struct ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueCommittedEvent_Parms \
{ \
	int32 InValue; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnElgWidgetSpinBoxValueCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnElgWidgetSpinBoxValueCommittedEvent, int32 InValue, ETextCommit::Type CommitMethod) \
{ \
	ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueCommittedEvent_Parms Parms; \
	Parms.InValue=InValue; \
	Parms.CommitMethod=CommitMethod; \
	OnElgWidgetSpinBoxValueCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_26_DELEGATE \
struct ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueChangedEvent_Parms \
{ \
	int32 InValue; \
}; \
static inline void FOnElgWidgetSpinBoxValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnElgWidgetSpinBoxValueChangedEvent, int32 InValue) \
{ \
	ElgWidget_SpinBoxInt_eventOnElgWidgetSpinBoxValueChangedEvent_Parms Parms; \
	Parms.InValue=InValue; \
	OnElgWidgetSpinBoxValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSliderValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinSliderValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForegroundColor) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForegroundColor(Z_Param_InForegroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxSliderValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinSliderValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinSliderValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinSliderValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMinSliderValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMinValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMinValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	}


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgWidget_SpinBoxInt(); \
	friend struct Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics; \
public: \
	DECLARE_CLASS(UElgWidget_SpinBoxInt, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgWidgets"), NO_API) \
	DECLARE_SERIALIZER(UElgWidget_SpinBoxInt)


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUElgWidget_SpinBoxInt(); \
	friend struct Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics; \
public: \
	DECLARE_CLASS(UElgWidget_SpinBoxInt, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgWidgets"), NO_API) \
	DECLARE_SERIALIZER(UElgWidget_SpinBoxInt)


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgWidget_SpinBoxInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgWidget_SpinBoxInt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgWidget_SpinBoxInt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgWidget_SpinBoxInt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgWidget_SpinBoxInt(UElgWidget_SpinBoxInt&&); \
	NO_API UElgWidget_SpinBoxInt(const UElgWidget_SpinBoxInt&); \
public:


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgWidget_SpinBoxInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgWidget_SpinBoxInt(UElgWidget_SpinBoxInt&&); \
	NO_API UElgWidget_SpinBoxInt(const UElgWidget_SpinBoxInt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgWidget_SpinBoxInt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgWidget_SpinBoxInt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgWidget_SpinBoxInt)


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MaxValue); } \
	FORCEINLINE static uint32 __PPO__MinSliderValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinSliderValue); } \
	FORCEINLINE static uint32 __PPO__MaxSliderValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MaxSliderValue); }


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_19_PROLOG
#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_PRIVATE_PROPERTY_OFFSET \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_PRIVATE_PROPERTY_OFFSET \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS_NO_PURE_DECLS \
	D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ElgWidget_SpinBoxInt."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGWIDGETS_API UClass* StaticClass<class UElgWidget_SpinBoxInt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D____github___ElgWidgets_HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
