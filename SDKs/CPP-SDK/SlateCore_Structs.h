#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x30
struct SlateColor
{
public:
	struct LinearColor                                           SpecifiedColor;                                    // 0x0(0x10)
	char                                                         ColorUseRule;                                      // 0x10(0x1)
};


// Size 0x40
struct SlateFontInfo
{
public:
	class Object*                                                FontObject;                                        // 0x0(0x8)
	class Object*                                                FontMaterial;                                      // 0x8(0x8)
	struct FName                                                 TypefaceFontName;                                  // 0x28(0x8)
	int                                                          Size;                                              // 0x30(0x4)
	struct FName                                                 FontName;                                          // 0x34(0x8)
	char                                                         Hinting;                                           // 0x3c(0x1)
};


// Size 0x30
struct FontData
{
public:
	struct FString                                               FontFilename;                                      // 0x0(0x10)
	class FontBulkData*                                          BulkDataPtr;                                       // 0x10(0x8)
	char                                                         Hinting;                                           // 0x18(0x1)
	TArray<char>                                                 FontData;                                          // 0x20(0x10)
};


// Size 0x10
struct Margin
{
public:
	float                                                        Left;                                              // 0x0(0x4)
	float                                                        Top;                                               // 0x4(0x4)
	float                                                        Right;                                             // 0x8(0x4)
	float                                                        Bottom;                                            // 0xc(0x4)
};


// Size 0x18
struct SlateSound
{
public:
	class Object*                                                ResourceObject;                                    // 0x0(0x8)
};


// Size 0x90
struct SlateBrush
{
public:
	struct Vector2D                                              ImageSize;                                         // 0x0(0x8)
	char                                                         DrawAs;                                            // 0x8(0x1)
	struct Margin                                                Margin;                                            // 0xc(0x10)
	struct LinearColor                                           Tint;                                              // 0x1c(0x10)
	struct SlateColor                                            TintColor;                                         // 0x30(0x30)
	char                                                         Tiling;                                            // 0x60(0x1)
	char                                                         Mirroring;                                         // 0x61(0x1)
	char                                                         ImageType;                                         // 0x62(0x1)
	class Object*                                                ResourceObject;                                    // 0x68(0x8)
	struct FName                                                 ResourceName;                                      // 0x70(0x8)
	bool                                                         bIsDynamicallyLoaded;                              // 0x78(0x1)
	bool                                                         bHasUObject;                                       // 0x79(0x1)
	struct Box2D                                                 UVRegion;                                          // 0x7c(0x14)
};


// Size 0x38
struct TypefaceEntry
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	struct FontData                                              Font;                                              // 0x8(0x30)
};


// Size 0x10
struct Typeface
{
public:
	TArray<struct TypefaceEntry>                                 Fonts;                                             // 0x0(0x10)
};


// Size 0x128
struct SplitterStyle
{
public:
	struct SlateBrush                                            HandleNormalBrush;                                 // 0x8(0x90)
	struct SlateBrush                                            HandleHighlightBrush;                              // 0x98(0x90)
};


// Size 0x518
struct TableColumnHeaderStyle
{
public:
	struct SlateBrush                                            SortPrimaryAscendingImage;                         // 0x8(0x90)
	struct SlateBrush                                            SortPrimaryDescendingImage;                        // 0x98(0x90)
	struct SlateBrush                                            SortSecondaryAscendingImage;                       // 0x128(0x90)
	struct SlateBrush                                            SortSecondaryDescendingImage;                      // 0x1b8(0x90)
	struct SlateBrush                                            NormalBrush;                                       // 0x248(0x90)
	struct SlateBrush                                            HoveredBrush;                                      // 0x2d8(0x90)
	struct SlateBrush                                            MenuDropdownImage;                                 // 0x368(0x90)
	struct SlateBrush                                            MenuDropdownNormalBorderBrush;                     // 0x3f8(0x90)
	struct SlateBrush                                            MenuDropdownHoveredBorderBrush;                    // 0x488(0x90)
};


// Size 0x1b8
struct ProgressBarStyle
{
public:
	struct SlateBrush                                            BackgroundImage;                                   // 0x8(0x90)
	struct SlateBrush                                            FillImage;                                         // 0x98(0x90)
	struct SlateBrush                                            MarqueeImage;                                      // 0x128(0x90)
};


// Size 0x128
struct ScrollBorderStyle
{
public:
	struct SlateBrush                                            TopShadowBrush;                                    // 0x8(0x90)
	struct SlateBrush                                            BottomShadowBrush;                                 // 0x98(0x90)
};


// Size 0x5f0
struct CheckBoxStyle
{
public:
	char                                                         CheckBoxType;                                      // 0x8(0x1)
	struct SlateBrush                                            UncheckedImage;                                    // 0x10(0x90)
	struct SlateBrush                                            UncheckedHoveredImage;                             // 0xa0(0x90)
	struct SlateBrush                                            UncheckedPressedImage;                             // 0x130(0x90)
	struct SlateBrush                                            CheckedImage;                                      // 0x1c0(0x90)
	struct SlateBrush                                            CheckedHoveredImage;                               // 0x250(0x90)
	struct SlateBrush                                            CheckedPressedImage;                               // 0x2e0(0x90)
	struct SlateBrush                                            UndeterminedImage;                                 // 0x370(0x90)
	struct SlateBrush                                            UndeterminedHoveredImage;                          // 0x400(0x90)
	struct SlateBrush                                            UndeterminedPressedImage;                          // 0x490(0x90)
	struct Margin                                                Padding;                                           // 0x520(0x10)
	struct SlateColor                                            ForegroundColor;                                   // 0x530(0x30)
	struct SlateColor                                            BorderBackgroundColor;                             // 0x560(0x30)
	struct SlateSound                                            CheckedSlateSound;                                 // 0x590(0x18)
	struct SlateSound                                            UncheckedSlateSound;                               // 0x5a8(0x18)
	struct SlateSound                                            HoveredSlateSound;                                 // 0x5c0(0x18)
	struct FName                                                 CheckedSound;                                      // 0x5d8(0x8)
	struct FName                                                 UncheckedSound;                                    // 0x5e0(0x8)
	struct FName                                                 HoveredSound;                                      // 0x5e8(0x8)
};


// Size 0x128
struct ExpandableAreaStyle
{
public:
	struct SlateBrush                                            CollapsedImage;                                    // 0x8(0x90)
	struct SlateBrush                                            ExpandedImage;                                     // 0x98(0x90)
};


// Size 0x728
struct TableRowStyle
{
public:
	struct SlateBrush                                            SelectorFocusedBrush;                              // 0x8(0x90)
	struct SlateBrush                                            ActiveHoveredBrush;                                // 0x98(0x90)
	struct SlateBrush                                            ActiveBrush;                                       // 0x128(0x90)
	struct SlateBrush                                            InactiveHoveredBrush;                              // 0x1b8(0x90)
	struct SlateBrush                                            InactiveBrush;                                     // 0x248(0x90)
	struct SlateBrush                                            EvenRowBackgroundHoveredBrush;                     // 0x2d8(0x90)
	struct SlateBrush                                            EvenRowBackgroundBrush;                            // 0x368(0x90)
	struct SlateBrush                                            OddRowBackgroundHoveredBrush;                      // 0x3f8(0x90)
	struct SlateBrush                                            OddRowBackgroundBrush;                             // 0x488(0x90)
	struct SlateColor                                            TextColor;                                         // 0x518(0x30)
	struct SlateColor                                            SelectedTextColor;                                 // 0x548(0x30)
	struct SlateBrush                                            DropIndicator_Above;                               // 0x578(0x90)
	struct SlateBrush                                            DropIndicator_Onto;                                // 0x608(0x90)
	struct SlateBrush                                            DropIndicator_Below;                               // 0x698(0x90)
};


// Size 0xa0
struct InlineTextImageStyle
{
public:
	struct SlateBrush                                            Image;                                             // 0x8(0x90)
	int16                                                        Baseline;                                          // 0x98(0x2)
};


// Size 0x228
struct EditableTextStyle
{
public:
	struct SlateFontInfo                                         Font;                                              // 0x8(0x40)
	struct SlateColor                                            ColorAndOpacity;                                   // 0x48(0x30)
	struct SlateBrush                                            BackgroundImageSelected;                           // 0x78(0x90)
	struct SlateBrush                                            BackgroundImageComposing;                          // 0x108(0x90)
	struct SlateBrush                                            CaretImage;                                        // 0x198(0x90)
};


// Size 0x248
struct ScrollBoxStyle
{
public:
	struct SlateBrush                                            TopShadowBrush;                                    // 0x8(0x90)
	struct SlateBrush                                            BottomShadowBrush;                                 // 0x98(0x90)
	struct SlateBrush                                            LeftShadowBrush;                                   // 0x128(0x90)
	struct SlateBrush                                            RightShadowBrush;                                  // 0x1b8(0x90)
};


// Size 0x160
struct TextBlockStyle
{
public:
	struct SlateFontInfo                                         Font;                                              // 0x8(0x40)
	struct SlateColor                                            ColorAndOpacity;                                   // 0x48(0x30)
	struct Vector2D                                              ShadowOffset;                                      // 0x78(0x8)
	struct LinearColor                                           ShadowColorAndOpacity;                             // 0x80(0x10)
	struct SlateColor                                            SelectedBackgroundColor;                           // 0x90(0x30)
	struct LinearColor                                           HighlightColor;                                    // 0xc0(0x10)
	struct SlateBrush                                            HighlightShape;                                    // 0xd0(0x90)
};


// Size 0x318
struct SpinBoxStyle
{
public:
	struct SlateBrush                                            BackgroundBrush;                                   // 0x8(0x90)
	struct SlateBrush                                            HoveredBackgroundBrush;                            // 0x98(0x90)
	struct SlateBrush                                            ActiveFillBrush;                                   // 0x128(0x90)
	struct SlateBrush                                            InactiveFillBrush;                                 // 0x1b8(0x90)
	struct SlateBrush                                            ArrowsImage;                                       // 0x248(0x90)
	struct SlateColor                                            ForegroundColor;                                   // 0x2d8(0x30)
	struct Margin                                                TextPadding;                                       // 0x308(0x10)
};


// Size 0x2a8
struct ButtonStyle
{
public:
	struct SlateBrush                                            Normal;                                            // 0x8(0x90)
	struct SlateBrush                                            Hovered;                                           // 0x98(0x90)
	struct SlateBrush                                            Pressed;                                           // 0x128(0x90)
	struct SlateBrush                                            Disabled;                                          // 0x1b8(0x90)
	struct Margin                                                NormalPadding;                                     // 0x248(0x10)
	struct Margin                                                PressedPadding;                                    // 0x258(0x10)
	struct SlateSound                                            PressedSlateSound;                                 // 0x268(0x18)
	struct SlateSound                                            HoveredSlateSound;                                 // 0x280(0x18)
	struct FName                                                 PressedSound;                                      // 0x298(0x8)
	struct FName                                                 HoveredSound;                                      // 0x2a0(0x8)
};


// Size 0x248
struct SliderStyle
{
public:
	struct SlateBrush                                            NormalBarImage;                                    // 0x8(0x90)
	struct SlateBrush                                            DisabledBarImage;                                  // 0x98(0x90)
	struct SlateBrush                                            NormalThumbImage;                                  // 0x128(0x90)
	struct SlateBrush                                            DisabledThumbImage;                                // 0x1b8(0x90)
};


// Size 0x518
struct ScrollBarStyle
{
public:
	struct SlateBrush                                            HorizontalBackgroundImage;                         // 0x8(0x90)
	struct SlateBrush                                            VerticalBackgroundImage;                           // 0x98(0x90)
	struct SlateBrush                                            VerticalTopSlotImage;                              // 0x128(0x90)
	struct SlateBrush                                            HorizontalTopSlotImage;                            // 0x1b8(0x90)
	struct SlateBrush                                            VerticalBottomSlotImage;                           // 0x248(0x90)
	struct SlateBrush                                            HorizontalBottomSlotImage;                         // 0x2d8(0x90)
	struct SlateBrush                                            NormalThumbImage;                                  // 0x368(0x90)
	struct SlateBrush                                            HoveredThumbImage;                                 // 0x3f8(0x90)
	struct SlateBrush                                            DraggedThumbImage;                                 // 0x488(0x90)
};


// Size 0x38
struct CompositeSubFont
{
public:
	struct Typeface                                              Typeface;                                          // 0x0(0x10)
	TArray<struct Int32Range>                                    CharacterRanges;                                   // 0x10(0x10)
	TArray<char>                                                 Languages;                                         // 0x20(0x10)
	float                                                        ScalingFactor;                                     // 0x30(0x4)
};


// Size 0x1028
struct WindowStyle
{
public:
	struct ButtonStyle                                           MinimizeButtonStyle;                               // 0x8(0x2a8)
	struct ButtonStyle                                           MaximizeButtonStyle;                               // 0x2b0(0x2a8)
	struct ButtonStyle                                           RestoreButtonStyle;                                // 0x558(0x2a8)
	struct ButtonStyle                                           CloseButtonStyle;                                  // 0x800(0x2a8)
	struct TextBlockStyle                                        TitleTextStyle;                                    // 0xaa8(0x160)
	struct SlateBrush                                            ActiveTitleBrush;                                  // 0xc08(0x90)
	struct SlateBrush                                            InactiveTitleBrush;                                // 0xc98(0x90)
	struct SlateBrush                                            FlashTitleBrush;                                   // 0xd28(0x90)
	struct SlateBrush                                            OutlineBrush;                                      // 0xdb8(0x90)
	struct SlateColor                                            OutlineColor;                                      // 0xe48(0x30)
	struct SlateBrush                                            BorderBrush;                                       // 0xe78(0x90)
	struct SlateBrush                                            BackgroundBrush;                                   // 0xf08(0x90)
	struct SlateBrush                                            ChildBackgroundBrush;                              // 0xf98(0x90)
};


// Size 0x6e8
struct DockTabStyle
{
public:
	struct ButtonStyle                                           CloseButtonStyle;                                  // 0x8(0x2a8)
	struct SlateBrush                                            NormalBrush;                                       // 0x2b0(0x90)
	struct SlateBrush                                            ActiveBrush;                                       // 0x340(0x90)
	struct SlateBrush                                            ColorOverlayBrush;                                 // 0x3d0(0x90)
	struct SlateBrush                                            ForegroundBrush;                                   // 0x460(0x90)
	struct SlateBrush                                            HoveredBrush;                                      // 0x4f0(0x90)
	struct SlateBrush                                            ContentAreaBrush;                                  // 0x580(0x90)
	struct SlateBrush                                            TabWellBrush;                                      // 0x610(0x90)
	struct Margin                                                TabPadding;                                        // 0x6a0(0x10)
	float                                                        OverlapWidth;                                      // 0x6b0(0x4)
	struct SlateColor                                            FlashColor;                                        // 0x6b8(0x30)
};


// Size 0x3e0
struct ComboButtonStyle
{
public:
	struct ButtonStyle                                           ButtonStyle;                                       // 0x8(0x2a8)
	struct SlateBrush                                            DownArrowImage;                                    // 0x2b0(0x90)
	struct SlateBrush                                            MenuBorderBrush;                                   // 0x340(0x90)
	struct Margin                                                MenuBorderPadding;                                 // 0x3d0(0x10)
};


// Size 0x420
struct HyperlinkStyle
{
public:
	struct ButtonStyle                                           UnderlineStyle;                                    // 0x8(0x2a8)
	struct TextBlockStyle                                        TextStyle;                                         // 0x2b0(0x160)
	struct Margin                                                Padding;                                           // 0x410(0x10)
};


// Size 0x520
struct VolumeControlStyle
{
public:
	struct SliderStyle                                           SliderStyle;                                       // 0x8(0x248)
	struct SlateBrush                                            HighVolumeImage;                                   // 0x250(0x90)
	struct SlateBrush                                            MidVolumeImage;                                    // 0x2e0(0x90)
	struct SlateBrush                                            LowVolumeImage;                                    // 0x370(0x90)
	struct SlateBrush                                            NoVolumeImage;                                     // 0x400(0x90)
	struct SlateBrush                                            MutedImage;                                        // 0x490(0x90)
};


// Size 0x860
struct EditableTextBoxStyle
{
public:
	struct SlateBrush                                            BackgroundImageNormal;                             // 0x8(0x90)
	struct SlateBrush                                            BackgroundImageHovered;                            // 0x98(0x90)
	struct SlateBrush                                            BackgroundImageFocused;                            // 0x128(0x90)
	struct SlateBrush                                            BackgroundImageReadOnly;                           // 0x1b8(0x90)
	struct Margin                                                Padding;                                           // 0x248(0x10)
	struct SlateFontInfo                                         Font;                                              // 0x258(0x40)
	struct SlateColor                                            ForegroundColor;                                   // 0x298(0x30)
	struct SlateColor                                            BackgroundColor;                                   // 0x2c8(0x30)
	struct SlateColor                                            ReadOnlyForegroundColor;                           // 0x2f8(0x30)
	struct Margin                                                HScrollBarPadding;                                 // 0x328(0x10)
	struct Margin                                                VScrollBarPadding;                                 // 0x338(0x10)
	struct ScrollBarStyle                                        ScrollBarStyle;                                    // 0x348(0x518)
};


// Size 0xc20
struct HeaderRowStyle
{
public:
	struct TableColumnHeaderStyle                                ColumnStyle;                                       // 0x8(0x518)
	struct TableColumnHeaderStyle                                LastColumnStyle;                                   // 0x520(0x518)
	struct SplitterStyle                                         ColumnSplitterStyle;                               // 0xa38(0x128)
	struct SlateBrush                                            BackgroundBrush;                                   // 0xb60(0x90)
	struct SlateColor                                            ForegroundColor;                                   // 0xbf0(0x30)
};


// Size 0x428
struct ComboBoxStyle
{
public:
	struct ComboButtonStyle                                      ComboButtonStyle;                                  // 0x8(0x3e0)
	struct SlateSound                                            PressedSlateSound;                                 // 0x3e8(0x18)
	struct SlateSound                                            SelectionChangeSlateSound;                         // 0x400(0x18)
	struct FName                                                 PressedSound;                                      // 0x418(0x8)
	struct FName                                                 SelectionChangeSound;                              // 0x420(0x8)
};


// Size 0x9c8
struct InlineEditableTextBlockStyle
{
public:
	struct EditableTextBoxStyle                                  EditableTextBoxStyle;                              // 0x8(0x860)
	struct TextBlockStyle                                        TextStyle;                                         // 0x868(0x160)
};


// Size 0x28
struct CompositeFont
{
public:
	struct Typeface                                              DefaultTypeface;                                   // 0x0(0x10)
	TArray<struct CompositeSubFont>                              SubTypefaces;                                      // 0x10(0x10)
};


// Size 0xb00
struct SearchBoxStyle
{
public:
	struct EditableTextBoxStyle                                  TextBoxStyle;                                      // 0x8(0x860)
	struct SlateFontInfo                                         ActiveFontInfo;                                    // 0x868(0x40)
	struct SlateBrush                                            UpArrowImage;                                      // 0x8a8(0x90)
	struct SlateBrush                                            DownArrowImage;                                    // 0x938(0x90)
	struct SlateBrush                                            GlassImage;                                        // 0x9c8(0x90)
	struct SlateBrush                                            ClearImage;                                        // 0xa58(0x90)
	struct Margin                                                ImagePadding;                                      // 0xae8(0x10)
	bool                                                         bLeftAlignButtons;                                 // 0xaf8(0x1)
};


