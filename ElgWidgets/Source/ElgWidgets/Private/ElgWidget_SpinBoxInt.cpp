// Copyright 2019 ElgSoft. All rights reserved. 
// Elg002.ElgWidgets - ElgSoft.com


#include "ElgWidget_SpinBoxInt.h"

#include "Components/SpinBox.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Font.h"

#define LOCTEXT_NAMESPACE "ElgWidget"

/////////////////////////////////////////////////////
// UElgWidget_SpinBoxInt

UElgWidget_SpinBoxInt::UElgWidget_SpinBoxInt(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (!IsRunningDedicatedServer())
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(*UWidget::GetDefaultFontName());
		Font = FSlateFontInfo(RobotoFontObj.Object, 12, FName("Bold"));
	}

	// Grab other defaults from slate arguments.
	SSpinBox<int32>::FArguments Defaults;

	Value = Defaults._Value.Get();
	MinValue = Defaults._MinValue.Get().Get(0.0f);
	MaxValue = Defaults._MaxValue.Get().Get(0.0f);
	MinSliderValue = Defaults._MinSliderValue.Get().Get(0.0f);
	MaxSliderValue = Defaults._MaxSliderValue.Get().Get(0.0f);
	Delta = Defaults._Delta.Get();
	SliderExponent = Defaults._SliderExponent.Get();
	MinDesiredWidth = Defaults._MinDesiredWidth.Get();
	ClearKeyboardFocusOnCommit = Defaults._ClearKeyboardFocusOnCommit.Get();
	SelectAllTextOnCommit = Defaults._SelectAllTextOnCommit.Get();

	WidgetStyle = *Defaults._Style;
	ForegroundColor = FSlateColor(FLinearColor::Black);
}

void UElgWidget_SpinBoxInt::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MySpinBox.Reset();
}

TSharedRef<SWidget> UElgWidget_SpinBoxInt::RebuildWidget()
{
	MySpinBox = SNew(SSpinBox<int32>)
		.Style(&WidgetStyle)
		.Font(Font)
		.ClearKeyboardFocusOnCommit(ClearKeyboardFocusOnCommit)
		.SelectAllTextOnCommit(SelectAllTextOnCommit)
		.Justification(Justification)
		.OnValueChanged(BIND_UOBJECT_DELEGATE(FOnInt32ValueChanged, HandleOnValueChanged))
		.OnValueCommitted(BIND_UOBJECT_DELEGATE(FOnInt32ValueCommitted, HandleOnValueCommitted))
		.OnBeginSliderMovement(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnBeginSliderMovement))
		.OnEndSliderMovement(BIND_UOBJECT_DELEGATE(FOnInt32ValueChanged, HandleOnEndSliderMovement))
		;

	return MySpinBox.ToSharedRef();
}

void UElgWidget_SpinBoxInt::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	MySpinBox->SetDelta(Delta);
	MySpinBox->SetSliderExponent(SliderExponent);
	MySpinBox->SetMinDesiredWidth(MinDesiredWidth);

	MySpinBox->SetForegroundColor(ForegroundColor);

	// Set optional values
	bOverride_MinValue ? SetMinValue(MinValue) : ClearMinValue();
	bOverride_MaxValue ? SetMaxValue(MaxValue) : ClearMaxValue();
	bOverride_MinSliderValue ? SetMinSliderValue(MinSliderValue) : ClearMinSliderValue();
	bOverride_MaxSliderValue ? SetMaxSliderValue(MaxSliderValue) : ClearMaxSliderValue();

	// Always set the value last so that the max/min values are taken into account.
	TAttribute<int32> ValueBinding = PROPERTY_BINDING(int32, Value);
	MySpinBox->SetValue(ValueBinding);
}

int32 UElgWidget_SpinBoxInt::GetValue() const
{
	if (MySpinBox.IsValid())
	{
		return MySpinBox->GetValue();
	}

	return Value;
}

void UElgWidget_SpinBoxInt::SetValue(int32 InValue)
{
	Value = InValue;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetValue(InValue);
	}
}

// MIN VALUE
int32 UElgWidget_SpinBoxInt::GetMinValue() const
{
	int32 ReturnVal = TNumericLimits<int32>::Lowest();

	if (MySpinBox.IsValid())
	{
		ReturnVal = MySpinBox->GetMinValue();
	}
	else if (bOverride_MinValue)
	{
		ReturnVal = MinValue;
	}

	return ReturnVal;
}

void UElgWidget_SpinBoxInt::SetMinValue(int32 InMinValue)
{
	bOverride_MinValue = true;
	MinValue = InMinValue;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMinValue(InMinValue);
	}
}

void UElgWidget_SpinBoxInt::ClearMinValue()
{
	bOverride_MinValue = false;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMinValue(TOptional<int32>());
	}
}

// MAX VALUE
int32 UElgWidget_SpinBoxInt::GetMaxValue() const
{
	int32 ReturnVal = TNumericLimits<int32>::Max();

	if (MySpinBox.IsValid())
	{
		ReturnVal = MySpinBox->GetMaxValue();
	}
	else if (bOverride_MaxValue)
	{
		ReturnVal = MaxValue;
	}

	return ReturnVal;
}

void UElgWidget_SpinBoxInt::SetMaxValue(int32 InMaxValue)
{
	bOverride_MaxValue = true;
	MaxValue = InMaxValue;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMaxValue(InMaxValue);
	}
}
void UElgWidget_SpinBoxInt::ClearMaxValue()
{
	bOverride_MaxValue = false;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMaxValue(TOptional<int32>());
	}
}

// MIN SLIDER VALUE
int32 UElgWidget_SpinBoxInt::GetMinSliderValue() const
{
	int32 ReturnVal = TNumericLimits<int32>::Min();

	if (MySpinBox.IsValid())
	{
		ReturnVal = MySpinBox->GetMinSliderValue();
	}
	else if (bOverride_MinSliderValue)
	{
		ReturnVal = MinSliderValue;
	}

	return ReturnVal;
}

void UElgWidget_SpinBoxInt::SetMinSliderValue(int32 InMinSliderValue)
{
	bOverride_MinSliderValue = true;
	MinSliderValue = InMinSliderValue;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMinSliderValue(InMinSliderValue);
	}
}

void UElgWidget_SpinBoxInt::ClearMinSliderValue()
{
	bOverride_MinSliderValue = false;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMinSliderValue(TOptional<int32>());
	}
}

// MAX SLIDER VALUE
int32 UElgWidget_SpinBoxInt::GetMaxSliderValue() const
{
	int32 ReturnVal = TNumericLimits<int32>::Max();

	if (MySpinBox.IsValid())
	{
		ReturnVal = MySpinBox->GetMaxSliderValue();
	}
	else if (bOverride_MaxSliderValue)
	{
		ReturnVal = MaxSliderValue;
	}

	return ReturnVal;
}

void UElgWidget_SpinBoxInt::SetMaxSliderValue(int32 InMaxSliderValue)
{
	bOverride_MaxSliderValue = true;
	MaxSliderValue = InMaxSliderValue;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMaxSliderValue(InMaxSliderValue);
	}
}

void UElgWidget_SpinBoxInt::ClearMaxSliderValue()
{
	bOverride_MaxSliderValue = false;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetMaxSliderValue(TOptional<int32>());
	}
}

void UElgWidget_SpinBoxInt::SetForegroundColor(FSlateColor InForegroundColor)
{
	ForegroundColor = InForegroundColor;
	if (MySpinBox.IsValid())
	{
		MySpinBox->SetForegroundColor(ForegroundColor);
	}
}



#pragma endregion

// Event handlers
void UElgWidget_SpinBoxInt::HandleOnValueChanged(int32 InValue)
{
	if (!IsDesignTime())
	{
		OnValueChanged.Broadcast(InValue);
	}
}

void UElgWidget_SpinBoxInt::HandleOnValueCommitted(int32 InValue, ETextCommit::Type CommitMethod)
{
	if (!IsDesignTime())
	{
		OnValueCommitted.Broadcast(InValue, CommitMethod);
	}
}

void UElgWidget_SpinBoxInt::HandleOnBeginSliderMovement()
{
	if (!IsDesignTime())
	{
		OnBeginSliderMovement.Broadcast();
	}
}

void UElgWidget_SpinBoxInt::HandleOnEndSliderMovement(int32 InValue)
{
	if (!IsDesignTime())
	{
		OnEndSliderMovement.Broadcast(InValue);
	}
}

void UElgWidget_SpinBoxInt::PostLoad()
{
	Super::PostLoad();
}


#if WITH_EDITOR

const FText UElgWidget_SpinBoxInt::GetPaletteCategory()
{
	return LOCTEXT("Input", "Input");
}

#endif

/////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
