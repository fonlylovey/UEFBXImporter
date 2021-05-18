// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Engine/Engine.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Colors/SColorPicker.h"
#include "Widgets/Layout/SBorder.h"
#include "FBXColorPicker.generated.h"

/**
 * UMG Widget control which adds a Color Picker in Viewport
 */
UCLASS()
class RUNTIMEFBXIMPORT_API UFBXColorPicker : public UWidget
{
	GENERATED_BODY()
	

private:

	TSharedPtr<SBorder> MyColorPickerBorder;

	UFBXColorPicker();
protected:

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void OnBindingChanged(const FName& Property) override;

	virtual void SynchronizeProperties() override;

	void HandleOnValueChanged(FLinearColor newcolor);
	void HandleOnEyeDropperPickBegin();
	void HandleOnEyeDropperPickEnd();
	FLinearColor OnGetColor() const;

	
public:

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLinearColorChanged, const FLinearColor&, NewColor);

	
	/** Background color of the color picker. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Color")
		FLinearColor BorderColorAndOpacity;

	/** A delegate being called when the Color value is changed. */
	UPROPERTY(BlueprintAssignable, Category = "ColorPicker")
		FOnLinearColorChanged OnColorValueChanged;

	/**
	* Set Initial Color value of the Color Picker.
	* @param	InitialColor  The color to set.
	*/
	UFUNCTION(BlueprintCallable, Category = "ColorPicker")
		void SetColorPicker(FLinearColor InitialColor);

	
#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif

};
