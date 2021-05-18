// Copyright 2018-2019, Athian Games. All Rights Reserved. 

#include "Widgets/FBXColorPicker.h"

#define LOCTEXT_NAMESPACE "UMG"

UFBXColorPicker::UFBXColorPicker()
{
	BorderColorAndOpacity = FLinearColor(0.3 , 0.3 , 0.3 , 0.8);
}

FLinearColor UFBXColorPicker::OnGetColor() const
{
	return BorderColorAndOpacity;
}

void UFBXColorPicker::OnBindingChanged(const FName& property)
{
	Super::OnBindingChanged(property);

}

TSharedRef<SWidget> UFBXColorPicker::RebuildWidget()
{
	MyColorPickerBorder = SNew(SBorder);
	
	return MyColorPickerBorder.ToSharedRef();
}

void UFBXColorPicker::SetColorPicker(FLinearColor InitialColor)
{
	TSharedPtr<SColorPicker> MyColorPicker = SNew(SColorPicker)
		.TargetColorAttribute(InitialColor)
		.UseAlpha(true)
		.OnlyRefreshOnMouseUp(false).OnInteractivePickBegin(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnEyeDropperPickBegin))
		.OnInteractivePickEnd(BIND_UOBJECT_DELEGATE(FSimpleDelegate, HandleOnEyeDropperPickEnd))
		.OnlyRefreshOnOk(false)
		.ExpandAdvancedSection(true)
		.OnColorCommitted(BIND_UOBJECT_DELEGATE(FOnLinearColorValueChanged, HandleOnValueChanged));

	if (MyColorPickerBorder.IsValid())
	{
		MyColorPickerBorder->SetContent(MyColorPicker.ToSharedRef());
	}
}


void UFBXColorPicker::HandleOnValueChanged(FLinearColor newcolor)
{
	SynchronizeProperties();
	OnColorValueChanged.Broadcast(newcolor);
	
}


void UFBXColorPicker::HandleOnEyeDropperPickBegin()
{
}

void UFBXColorPicker::HandleOnEyeDropperPickEnd()
{

}


 void UFBXColorPicker::SynchronizeProperties()
 {
	 Super::SynchronizeProperties();

	 MyColorPickerBorder->SetBorderBackgroundColor(BorderColorAndOpacity);
 }

#if WITH_EDITOR

const FText UFBXColorPicker::GetPaletteCategory()
{
	return LOCTEXT("ColoPicker", "ColoPicker");
}

#endif


#undef LOCTEXT_NAMESPACE
