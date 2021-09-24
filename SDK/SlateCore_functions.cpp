// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FMargin::AfterRead()
{
}

void FMargin::BeforeDelete()
{
}

void FSlateColor::AfterRead()
{
}

void FSlateColor::BeforeDelete()
{
}

void FSlateBrush::AfterRead()
{
	READ_PTR_FULL(ResourceObject, UObject);
}

void FSlateBrush::BeforeDelete()
{
	DELE_PTR_FULL(ResourceObject);
}

void FInputEvent::AfterRead()
{
}

void FInputEvent::BeforeDelete()
{
}

void FPointerEvent::AfterRead()
{
	FInputEvent::AfterRead();

}

void FPointerEvent::BeforeDelete()
{
	FInputEvent::BeforeDelete();

}

void FGeometry::AfterRead()
{
}

void FGeometry::BeforeDelete()
{
}

void FSlateWidgetStyle::AfterRead()
{
}

void FSlateWidgetStyle::BeforeDelete()
{
}

void FSlateSound::AfterRead()
{
	READ_PTR_FULL(ResourceObject, UObject);
}

void FSlateSound::BeforeDelete()
{
	DELE_PTR_FULL(ResourceObject);
}

void FButtonStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FButtonStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FComboButtonStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FComboButtonStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FComboBoxStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FComboBoxStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSlateFontInfo::AfterRead()
{
	READ_PTR_FULL(FontObject, UObject);
	READ_PTR_FULL(FontMaterial, UObject);
}

void FSlateFontInfo::BeforeDelete()
{
	DELE_PTR_FULL(FontObject);
	DELE_PTR_FULL(FontMaterial);
}

void FEditableTextStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FEditableTextStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FScrollBarStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FScrollBarStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FEditableTextBoxStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FEditableTextBoxStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FTextBlockStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FTextBlockStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSpinBoxStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSpinBoxStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FFontData::AfterRead()
{
	READ_PTR_FULL(BulkDataPtr, UFontBulkData);
}

void FFontData::BeforeDelete()
{
	DELE_PTR_FULL(BulkDataPtr);
}

void FTypefaceEntry::AfterRead()
{
}

void FTypefaceEntry::BeforeDelete()
{
}

void FTypeface::AfterRead()
{
}

void FTypeface::BeforeDelete()
{
}

void FCompositeSubFont::AfterRead()
{
}

void FCompositeSubFont::BeforeDelete()
{
}

void FCompositeFont::AfterRead()
{
}

void FCompositeFont::BeforeDelete()
{
}

void FWindowStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FWindowStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FScrollBorderStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FScrollBorderStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FScrollBoxStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FScrollBoxStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FDockTabStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FDockTabStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSplitterStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSplitterStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FTableColumnHeaderStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FTableColumnHeaderStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FHeaderRowStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FHeaderRowStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FTableRowStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FTableRowStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FInlineTextImageStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FInlineTextImageStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSliderStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSliderStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FVolumeControlStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FVolumeControlStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FSearchBoxStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FSearchBoxStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FExpandableAreaStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FExpandableAreaStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FProgressBarStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FProgressBarStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FInlineEditableTextBlockStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FInlineEditableTextBlockStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FHyperlinkStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FHyperlinkStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FCheckBoxStyle::AfterRead()
{
	FSlateWidgetStyle::AfterRead();

}

void FCheckBoxStyle::BeforeDelete()
{
	FSlateWidgetStyle::BeforeDelete();

}

void FNavigationEvent::AfterRead()
{
	FInputEvent::AfterRead();

}

void FNavigationEvent::BeforeDelete()
{
	FInputEvent::BeforeDelete();

}

void FMotionEvent::AfterRead()
{
	FInputEvent::AfterRead();

}

void FMotionEvent::BeforeDelete()
{
	FInputEvent::BeforeDelete();

}

void FControllerEvent::AfterRead()
{
	FInputEvent::AfterRead();

}

void FControllerEvent::BeforeDelete()
{
	FInputEvent::BeforeDelete();

}

void FCharacterEvent::AfterRead()
{
	FInputEvent::AfterRead();

}

void FCharacterEvent::BeforeDelete()
{
	FInputEvent::BeforeDelete();

}

void FKeyEvent::AfterRead()
{
	FInputEvent::AfterRead();

}

void FKeyEvent::BeforeDelete()
{
	FInputEvent::BeforeDelete();

}

void FAnalogInputEvent::AfterRead()
{
	FKeyEvent::AfterRead();

}

void FAnalogInputEvent::BeforeDelete()
{
	FKeyEvent::BeforeDelete();

}

void FFocusEvent::AfterRead()
{
}

void FFocusEvent::BeforeDelete()
{
}

void UFontBulkData::AfterRead()
{
	UObject::AfterRead();

}

void UFontBulkData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFontProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFontProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USlateTypes::AfterRead()
{
	UObject::AfterRead();

}

void USlateTypes::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USlateWidgetStyleContainerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USlateWidgetStyleContainerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USlateWidgetStyleContainerBase::AfterRead()
{
	UObject::AfterRead();

}

void USlateWidgetStyleContainerBase::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USlateWidgetStyleAsset::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CustomStyle, USlateWidgetStyleContainerBase);
}

void USlateWidgetStyleAsset::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CustomStyle);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
