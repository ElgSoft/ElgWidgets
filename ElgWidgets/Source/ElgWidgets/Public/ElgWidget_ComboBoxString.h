// Copyright 2019 ElgSoft. All rights reserved. 
// Elg002.ElgWidgets - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "ElgWidget_ComboBoxString.generated.h"


/**
 * 
 */


UCLASS(meta = (DisplayName = "ComboBoxString (Elg)"))
class ELGWIDGETS_API UElgWidget_ComboBoxString : public UComboBoxString
{
	GENERATED_BODY()
	
	/* Add the array of string to the options, sorted or not */
	UFUNCTION(BlueprintCallable, Category = "ComboBox", meta =(bSort="false"))
		void AddOptions(TArray<FString> InOptions, const bool bSort);

	/* Sort the list of options */
	UFUNCTION(BlueprintCallable, Category = "ComboBox")
		void SortOptions();

	/* Return all the option as strings */
	UFUNCTION(BlueprintPure, Category = "ComboBox")
		TArray<FString> GetOptions();

	/* Set the selected option by its index */
	UFUNCTION(BlueprintCallable, Category = "ComboBox")
		void SetSelectedByIndex(int32 Index);

	/* Add an option at a specific index */
	UFUNCTION(BlueprintCallable, Category = "ComboBox")
		void AddOptionAtIndex(const FString& Option, int32 Index);



	/* Open or close the popup
		* @param bFocusMenu  Should we focus the popup as soon as it opens?
	*/
	UFUNCTION(BlueprintCallable, Category = "ComboBox")
		void ToggleOpen(const bool bFocusMenu = true, const int32 FocusUserIndex = 0);

	/* Open the popup
		* @param bFocusMenu  Should we focus the popup as soon as it opens?
	*/
	UFUNCTION(BlueprintCallable, Category = "ComboBox")
		void Open(const bool bFocusMenu = true, const int32 FocusUserIndex = 0);

	/* Close the popup
		* @param bFocusMenu  Should we focus the popup as soon as it opens?
	*/
	UFUNCTION(BlueprintCallable, Category = "ComboBox")
		void Close();
};
