// Copyright Epic Games, Inc. All Rights Reserved.
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

#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_28_DELEGATE \
static inline void FOnElgWidgetSpinBoxBeginSliderMovement_DelegateWrapper(const FMulticastScriptDelegate& OnElgWidgetSpinBoxBeginSliderMovement) \
{ \
	OnElgWidgetSpinBoxBeginSliderMovement.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_27_DELEGATE \
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


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_26_DELEGATE \
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


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_SPARSE_DATA
#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execClearMaxSliderValue); \
	DECLARE_FUNCTION(execSetMaxSliderValue); \
	DECLARE_FUNCTION(execGetMaxSliderValue); \
	DECLARE_FUNCTION(execClearMinSliderValue); \
	DECLARE_FUNCTION(execSetMinSliderValue); \
	DECLARE_FUNCTION(execGetMinSliderValue); \
	DECLARE_FUNCTION(execClearMaxValue); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execClearMinValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execClearMaxSliderValue); \
	DECLARE_FUNCTION(execSetMaxSliderValue); \
	DECLARE_FUNCTION(execGetMaxSliderValue); \
	DECLARE_FUNCTION(execClearMinSliderValue); \
	DECLARE_FUNCTION(execSetMinSliderValue); \
	DECLARE_FUNCTION(execGetMinSliderValue); \
	DECLARE_FUNCTION(execClearMaxValue); \
	DECLARE_FUNCTION(execSetMaxValue); \
	DECLARE_FUNCTION(execGetMaxValue); \
	DECLARE_FUNCTION(execClearMinValue); \
	DECLARE_FUNCTION(execSetMinValue); \
	DECLARE_FUNCTION(execGetMinValue); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgWidget_SpinBoxInt(); \
	friend struct Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics; \
public: \
	DECLARE_CLASS(UElgWidget_SpinBoxInt, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgWidgets"), NO_API) \
	DECLARE_SERIALIZER(UElgWidget_SpinBoxInt)


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUElgWidget_SpinBoxInt(); \
	friend struct Z_Construct_UClass_UElgWidget_SpinBoxInt_Statics; \
public: \
	DECLARE_CLASS(UElgWidget_SpinBoxInt, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgWidgets"), NO_API) \
	DECLARE_SERIALIZER(UElgWidget_SpinBoxInt)


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_STANDARD_CONSTRUCTORS \
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


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_ENHANCED_CONSTRUCTORS \
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


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinValue); } \
	FORCEINLINE static uint32 __PPO__MaxValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MaxValue); } \
	FORCEINLINE static uint32 __PPO__MinSliderValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MinSliderValue); } \
	FORCEINLINE static uint32 __PPO__MaxSliderValue() { return STRUCT_OFFSET(UElgWidget_SpinBoxInt, MaxSliderValue); }


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_19_PROLOG
#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_SPARSE_DATA \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_SPARSE_DATA \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ElgWidget_SpinBoxInt."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGWIDGETS_API UClass* StaticClass<class UElgWidget_SpinBoxInt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ElgWidgets_Source_ElgWidgets_Public_ElgWidget_SpinBoxInt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
