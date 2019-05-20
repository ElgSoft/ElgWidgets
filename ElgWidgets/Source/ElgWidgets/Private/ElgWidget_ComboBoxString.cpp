// Copyright 2019 ElgSoft. All rights reserved. 
// Elg002.ElgWidgets - ElgSoft.com

#include "ElgWidget_ComboBoxString.h"



void UElgWidget_ComboBoxString::AddOptions(TArray<FString> InOptions, const bool bSort)
{
	
	if (bSort)
	{
		InOptions.Sort();
	}

	for (int i = 0; i < InOptions.Num(); i++)
	//for (FString* option : InOptions)
	{
		AddOption(InOptions[i]);
		//AddOption(*option);
	}

}


void UElgWidget_ComboBoxString::SortOptions()
{
	// get the selected item so we can reselect it later
	FString selected = GetSelectedOption();

	// get all the options as strings
	TArray<FString> tempOptions = GetOptions();
	tempOptions.Sort();

	// clear the old options
	Options.Empty();
		
	// add the sorted strings to the options
	for (int i = 0; i < tempOptions.Num(); i++)
	{
		Options.Add(MakeShareable(new FString(tempOptions[i])));
	}

	RefreshOptions();

	// reselect the options
	SetSelectedOption(selected);
}


TArray<FString> UElgWidget_ComboBoxString::GetOptions()
{
	TArray<FString> tempOptions;

	for (int i = 0; i < Options.Num(); i++)
	{
		tempOptions.Add(*(Options[i]));
	}
	return tempOptions; 
}


void UElgWidget_ComboBoxString::SetSelectedByIndex(int32 Index)
{
	if (Index >= 0 && Index < Options.Num())
	{
		FString option = *(Options[Index]);
		SetSelectedOption(option);
	}
}


void UElgWidget_ComboBoxString::AddOptionAtIndex(const FString& Option, int32 Index)
{
	// get the selected item so we can reselect it later
	FString selected = GetSelectedOption();

	TArray<FString> tempOptions = GetOptions();
	
	// clear the old options
	Options.Empty();

	// add the sorted strings to the options
	for (int i = 0; i < tempOptions.Num(); i++)
	{
		if (Index == i)
		{	
			// add the new option
			Options.Add(MakeShareable(new FString(Option)));
		} 
		Options.Add(MakeShareable(new FString(tempOptions[i])));		
	}

	RefreshOptions();

	// reselect the options
	SetSelectedOption(selected);

}


bool UElgWidget_ComboBoxString::IsOpen()
{
	if (MyComboBox.IsValid())
	{
		return MyComboBox->IsOpen();
	}
	return false;
}


void UElgWidget_ComboBoxString::ToggleOpen(const bool bFocusMenu /*= true*/, const int32 FocusUserIndex /*= 0*/)
{
	if (MyComboBox.IsValid())
	{
		if (!MyComboBox->IsOpen()) {
			MyComboBox->SetIsOpen(true, bFocusMenu, FocusUserIndex);
		}
		else {
			MyComboBox->SetIsOpen(false, bFocusMenu, FocusUserIndex);
		}
	}
}


void UElgWidget_ComboBoxString::Open(const bool bFocusMenu /*= true*/, const int32 FocusUserIndex /*= 0*/)
{
	if (MyComboBox.IsValid())
	{
		if (!MyComboBox->IsOpen()) {
			MyComboBox->SetIsOpen(true, bFocusMenu, FocusUserIndex);
		}		
	}
}


void UElgWidget_ComboBoxString::Close()
{
	if (MyComboBox.IsValid())
	{
		if (MyComboBox->IsOpen()) {
			MyComboBox->SetIsOpen(false, false, 0);
		}
	}
}
