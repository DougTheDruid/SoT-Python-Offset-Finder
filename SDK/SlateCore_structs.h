#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EFontLanguage
enum class SlateCore_EFontLanguage : uint8_t
{
	EFontLanguage__German          = 0,
	EFontLanguage__English         = 1,
	EFontLanguage__Spanish         = 2,
	EFontLanguage__Mexican         = 3,
	EFontLanguage__French          = 4,
	EFontLanguage__Italian         = 5,
	EFontLanguage__Korean          = 6,
	EFontLanguage__Polish          = 7,
	EFontLanguage__Portugese       = 8,
	EFontLanguage__Russian         = 9,
	EFontLanguage__SimplifiedChinese = 10,
	EFontLanguage__TraditionalChinese = 11,
	EFontLanguage__Japanese        = 12,
	EFontLanguage__Thai            = 13,
	EFontLanguage__Turkish         = 14,
	EFontLanguage__COUNT           = 15,
	EFontLanguage__EFontLanguage_MAX = 16,

};

// Enum SlateCore.EFontHinting
enum class SlateCore_EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5,

};

// Enum SlateCore.ESelectInfo
enum class SlateCore_ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4,

};

// Enum SlateCore.ETextCommit
enum class SlateCore_ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4,

};

// Enum SlateCore.EScrollDirection
enum class SlateCore_EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,

};

// Enum SlateCore.EOrientation
enum class SlateCore_EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,

};

// Enum SlateCore.EMenuPlacement
enum class SlateCore_EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_ComboBox         = 2,
	MenuPlacement_ComboBoxRight    = 3,
	MenuPlacement_MenuRight        = 4,
	MenuPlacement_AboveAnchor      = 5,
	MenuPlacement_CenteredAboveAnchor = 6,
	MenuPlacement_MenuLeft         = 7,
	MenuPlacement_MAX              = 8,

};

// Enum SlateCore.EVerticalAlignment
enum class SlateCore_EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,

};

// Enum SlateCore.EHorizontalAlignment
enum class SlateCore_EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,

};

// Enum SlateCore.EUINavigation
enum class SlateCore_EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8,

};

// Enum SlateCore.EButtonPressMethod
enum class SlateCore_EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3,

};

// Enum SlateCore.EButtonTouchMethod
enum class SlateCore_EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__PreciseTap = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 2,

};

// Enum SlateCore.EButtonClickMethod
enum class SlateCore_EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4,

};

// Enum SlateCore.ESlateColorStylingMode
enum class SlateCore_ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4,

};

// Enum SlateCore.ESlateBrushImageType
enum class SlateCore_ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3,

};

// Enum SlateCore.ESlateBrushMirrorType
enum class SlateCore_ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4,

};

// Enum SlateCore.ESlateBrushTileType
enum class SlateCore_ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4,

};

// Enum SlateCore.ESlateBrushDrawType
enum class SlateCore_ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4,

};

// Enum SlateCore.ECheckBoxState
enum class SlateCore_ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3,

};

// Enum SlateCore.ESlateCheckBoxType
enum class SlateCore_ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2,

};

// Enum SlateCore.EConsumeMouseWheel
enum class SlateCore_EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 2,

};

// Enum SlateCore.EFocusCause
enum class SlateCore_EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6,

};

// Enum SlateCore.EUINavigationRule
enum class SlateCore_EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__Invalid     = 5,
	EUINavigationRule__EUINavigationRule_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Top;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Right;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Bottom;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SlateColor
// 0x0030
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	TEnumAsByte<SlateCore_ESlateColorStylingMode>      ColorUseRule;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_21IV[0x1F];                                    // 0x0011(0x001F) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SlateBrush
// 0x0090
struct FSlateBrush
{
	struct FVector2D                                   ImageSize;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_ESlateBrushDrawType>         DrawAs;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B1LL[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Margin;                                                    // 0x000C(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                      // 0x001C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IUNS[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 TintColor;                                                 // 0x0030(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<SlateCore_ESlateBrushTileType>         Tiling;                                                    // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESlateBrushMirrorType>       Mirroring;                                                 // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESlateBrushImageType>        ImageType;                                                 // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WMS3[0x5];                                     // 0x0063(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     ResourceObject;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FName                                       ResourceName;                                              // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bIsDynamicallyLoaded;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bHasUObject;                                               // 0x0079(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_89MQ[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBox2D                                      UVRegion;                                                  // 0x007C(0x0014) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.InputEvent
// 0x0028
struct FInputEvent
{
	unsigned char                                      UnknownData_SL62[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.PointerEvent
// 0x0060 (0x0088 - 0x0028)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData_GU4B[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData_Q2HH[0x34];                                    // 0x0000(0x0034) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData_1MGK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_COGQ[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ButtonStyle
// 0x02A0 (0x02A8 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                    // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                   // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                   // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                  // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                             // 0x0248(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                            // 0x0258(0x0010) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x0268(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x0280(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                              // 0x0298(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HoveredSound;                                              // 0x02A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                               // 0x0008(0x02A8) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                            // 0x02B0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                           // 0x0340(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                         // 0x03D0(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0420 (0x0428 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                          // 0x0008(0x03E0) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                         // 0x03E8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                 // 0x0400(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                              // 0x0418(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SelectionChangeSound;                                      // 0x0420(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0040
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     FontMaterial;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MI76[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       TypefaceFontName;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Size;                                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FontName;                                                  // 0x0034(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EFontHinting>                Hinting;                                                   // 0x003C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X0WB[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0220 (0x0228 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                      // 0x0008(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0048(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                   // 0x0078(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                  // 0x0108(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                                // 0x0198(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0510 (0x0518 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                 // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                   // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalTopSlotImage;                                      // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                    // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                   // 0x0248(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                 // 0x02D8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x0368(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                         // 0x03F8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                         // 0x0488(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0858 (0x0860 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                     // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                    // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                    // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                   // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                   // 0x0248(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                      // 0x0258(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0298(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                           // 0x02C8(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                   // 0x02F8(0x0030) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                         // 0x0328(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                         // 0x0338(0x0010) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             ScrollBarStyle;                                            // 0x0348(0x0518) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0158 (0x0160 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                      // 0x0008(0x0040) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0048(0x0030) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                              // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateColor                                 SelectedBackgroundColor;                                   // 0x0090(0x0030) (Edit)
	struct FLinearColor                                HighlightColor;                                            // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FSlateBrush                                 HighlightShape;                                            // 0x00D0(0x0090) (Edit, BlueprintVisible, AdvancedDisplay)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0310 (0x0318 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                    // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                           // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                         // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                               // 0x0248(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                           // 0x02D8(0x0030)
	struct FMargin                                     TextPadding;                                               // 0x0308(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.FontData
// 0x0030
struct FFontData
{
	struct FString                                     FontFilename;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UFontBulkData*                               BulkDataPtr;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EFontHinting>                Hinting;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_91BX[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              FontData;                                                  // 0x0020(0x0010) (ZeroConstructor, Deprecated)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0038
struct FTypefaceEntry
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFontData                                   Font;                                                      // 0x0008(0x0030) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0038
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FInt32Range>                         CharacterRanges;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<SlateCore_EFontLanguage>>       Languages;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ScalingFactor;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A87K[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                           // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData_8I7E[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.WindowStyle
// 0x1020 (0x1028 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                       // 0x0008(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                       // 0x02B0(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                        // 0x0558(0x02A8) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                          // 0x0800(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                            // 0x0AA8(0x0160) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                          // 0x0C08(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                        // 0x0C98(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                           // 0x0D28(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                              // 0x0DB8(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                              // 0x0E48(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                               // 0x0E78(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0F08(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                      // 0x0F98(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0120 (0x0128 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                            // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                         // 0x0098(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0240 (0x0248 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                            // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                         // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                           // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                          // 0x01B8(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.DockTabStyle
// 0x06E0 (0x06E8 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                          // 0x0008(0x02A8) (Edit)
	struct FSlateBrush                                 NormalBrush;                                               // 0x02B0(0x0090) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                               // 0x0340(0x0090) (Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                         // 0x03D0(0x0090) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                           // 0x0460(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                              // 0x04F0(0x0090) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                          // 0x0580(0x0090) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                              // 0x0610(0x0090) (Edit)
	struct FMargin                                     TabPadding;                                                // 0x06A0(0x0010) (Edit)
	float                                              OverlapWidth;                                              // 0x06B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LARY[0x4];                                     // 0x06B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 FlashColor;                                                // 0x06B8(0x0030) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SplitterStyle
// 0x0120 (0x0128 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                         // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                      // 0x0098(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0510 (0x0518 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                 // 0x0008(0x0090) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                                // 0x0098(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                               // 0x0128(0x0090) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                              // 0x01B8(0x0090) (Edit)
	struct FSlateBrush                                 NormalBrush;                                               // 0x0248(0x0090) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                              // 0x02D8(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                         // 0x0368(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                             // 0x03F8(0x0090) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                            // 0x0488(0x0090) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0C18 (0x0C20 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                               // 0x0008(0x0518) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                           // 0x0520(0x0518) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                       // 0x0A38(0x0128) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                           // 0x0B60(0x0090) (Edit)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0BF0(0x0030) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.TableRowStyle
// 0x0720 (0x0728 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                      // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                        // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                               // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                      // 0x01B8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                             // 0x0248(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                             // 0x02D8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                    // 0x0368(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                              // 0x03F8(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                     // 0x0488(0x0090) (Edit, BlueprintVisible)
	struct FSlateColor                                 TextColor;                                                 // 0x0518(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                         // 0x0548(0x0030) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Above;                                       // 0x0578(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Onto;                                        // 0x0608(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DropIndicator_Below;                                       // 0x0698(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                     // 0x0008(0x0090) (Edit)
	int16_t                                            Baseline;                                                  // 0x0098(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1C01[0x6];                                     // 0x009A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SliderStyle
// 0x0240 (0x0248 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                            // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                          // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x0128(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                        // 0x01B8(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0518 (0x0520 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                               // 0x0008(0x0248) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                           // 0x0250(0x0090) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                            // 0x02E0(0x0090) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                            // 0x0370(0x0090) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                             // 0x0400(0x0090) (Edit)
	struct FSlateBrush                                 MutedImage;                                                // 0x0490(0x0090) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0AF8 (0x0B00 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                              // 0x0008(0x0860) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                            // 0x0868(0x0040) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                              // 0x08A8(0x0090) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                            // 0x0938(0x0090) (Edit)
	struct FSlateBrush                                 GlassImage;                                                // 0x09C8(0x0090) (Edit)
	struct FSlateBrush                                 ClearImage;                                                // 0x0A58(0x0090) (Edit)
	struct FMargin                                     ImagePadding;                                              // 0x0AE8(0x0010) (Edit)
	bool                                               bLeftAlignButtons;                                         // 0x0AF8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7B1A[0x7];                                     // 0x0AF9(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0120 (0x0128 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                            // 0x0008(0x0090) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                             // 0x0098(0x0090) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                           // 0x0008(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                 // 0x0098(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                              // 0x0128(0x0090) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x09C0 (0x09C8 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                      // 0x0008(0x0860) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0868(0x0160) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0418 (0x0420 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                            // 0x0008(0x02A8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x02B0(0x0160) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                   // 0x0410(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<SlateCore_ESlateCheckBoxType>          CheckBoxType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GLF9[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 UncheckedImage;                                            // 0x0010(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                     // 0x00A0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                     // 0x0130(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                              // 0x01C0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                       // 0x0250(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                       // 0x02E0(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                         // 0x0370(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                  // 0x0400(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                  // 0x0490(0x0090) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                   // 0x0520(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0530(0x0030) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x0560(0x0030) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                         // 0x0590(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                       // 0x05A8(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                         // 0x05C0(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CheckedSound;                                              // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       UncheckedSound;                                            // 0x05E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HoveredSound;                                              // 0x05E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0030 - 0x0028)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData_2YQ4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0058 - 0x0028)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData_Z650[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.ControllerEvent
// 0x0028 (0x0050 - 0x0028)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData_B9VR[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0030 - 0x0028)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData_CVPV[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.KeyEvent
// 0x0028 (0x0050 - 0x0028)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData_KNBH[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0058 - 0x0050)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData_9IXG[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData_IS63[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
