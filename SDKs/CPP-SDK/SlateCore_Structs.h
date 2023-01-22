// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90
struct SlateBrush
{
public:
	Struct Vector2D                                              ImageSize;                                         // 0x0(0x8)
	byte                                                         DrawAs;                                            // 0x8(0x1)
	char                                                         pad0x3_2LA51[0x3];                                 // 0x9(0x3)
	Struct Margin                                                Margin;                                            // 0xc(0x10)
	Struct LinearColor                                           Tint;                                              // 0x1c(0x10)
	char                                                         pad0x4_Z7R9I[0x4];                                 // 0x2c(0x4)
	Struct SlateColor                                            TintColor;                                         // 0x30(0x30)
	byte                                                         Tiling;                                            // 0x60(0x1)
	byte                                                         Mirroring;                                         // 0x61(0x1)
	byte                                                         ImageType;                                         // 0x62(0x1)
	char                                                         pad0x5_7PSH4[0x5];                                 // 0x63(0x5)
	Class Object*                                                ResourceObject;                                    // 0x68(0x8)
	struct FName                                                 ResourceName;                                      // 0x70(0x8)
	bool                                                         bIsDynamicallyLoaded;                              // 0x78(0x1)
	bool                                                         bHasUObject;                                       // 0x79(0x1)
	char                                                         pad0x2_LXG8T[0x2];                                 // 0x7a(0x2)
	Struct Box2D                                                 UVRegion;                                          // 0x7c(0x14)
};


// Size 0x30
struct SlateColor
{
public:
	Struct LinearColor                                           SpecifiedColor;                                    // 0x0(0x10)
	byte                                                         ColorUseRule;                                      // 0x10(0x1)
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


// Size 0x88
struct PointerEvent
{
public:
};


// Size 0x28
struct InputEvent
{
public:
};


// Size 0x34
struct Geometry
{
public:
};


// Size 0x428
struct ComboBoxStyle
{
public:
	Struct ComboButtonStyle                                      ComboButtonStyle;                                  // 0x8(0x3e0)
	Struct SlateSound                                            PressedSlateSound;                                 // 0x3e8(0x18)
	Struct SlateSound                                            SelectionChangeSlateSound;                         // 0x400(0x18)
	struct FName                                                 PressedSound;                                      // 0x418(0x8)
	struct FName                                                 SelectionChangeSound;                              // 0x420(0x8)
};


// Size 0x8
struct SlateWidgetStyle
{
public:
};


// Size 0x18
struct SlateSound
{
public:
	Class Object*                                                ResourceObject;                                    // 0x0(0x8)
};


// Size 0x3e0
struct ComboButtonStyle
{
public:
	Struct ButtonStyle                                           ButtonStyle;                                       // 0x8(0x2a8)
	Struct SlateBrush                                            DownArrowImage;                                    // 0x2b0(0x90)
	Struct SlateBrush                                            MenuBorderBrush;                                   // 0x340(0x90)
	Struct Margin                                                MenuBorderPadding;                                 // 0x3d0(0x10)
};


// Size 0x2a8
struct ButtonStyle
{
public:
	Struct SlateBrush                                            Normal;                                            // 0x8(0x90)
	Struct SlateBrush                                            Hovered;                                           // 0x98(0x90)
	Struct SlateBrush                                            Pressed;                                           // 0x128(0x90)
	Struct SlateBrush                                            Disabled;                                          // 0x1b8(0x90)
	Struct Margin                                                NormalPadding;                                     // 0x248(0x10)
	Struct Margin                                                PressedPadding;                                    // 0x258(0x10)
	Struct SlateSound                                            PressedSlateSound;                                 // 0x268(0x18)
	Struct SlateSound                                            HoveredSlateSound;                                 // 0x280(0x18)
	struct FName                                                 PressedSound;                                      // 0x298(0x8)
	struct FName                                                 HoveredSound;                                      // 0x2a0(0x8)
};


// Size 0x40
struct SlateFontInfo
{
public:
	Class Object*                                                FontObject;                                        // 0x0(0x8)
	Class Object*                                                FontMaterial;                                      // 0x8(0x8)
	char                                                         pad0x18_E5M3Q[0x18];                               // 0x10(0x18)
	struct FName                                                 TypefaceFontName;                                  // 0x28(0x8)
	int                                                          Size;                                              // 0x30(0x4)
	struct FName                                                 FontName;                                          // 0x34(0x8)
	byte                                                         Hinting;                                           // 0x3c(0x1)
};


// Size 0x228
struct EditableTextStyle
{
public:
	Struct SlateFontInfo                                         Font;                                              // 0x8(0x40)
	Struct SlateColor                                            ColorAndOpacity;                                   // 0x48(0x30)
	Struct SlateBrush                                            BackgroundImageSelected;                           // 0x78(0x90)
	Struct SlateBrush                                            BackgroundImageComposing;                          // 0x108(0x90)
	Struct SlateBrush                                            CaretImage;                                        // 0x198(0x90)
};


// Size 0x860
struct EditableTextBoxStyle
{
public:
	Struct SlateBrush                                            BackgroundImageNormal;                             // 0x8(0x90)
	Struct SlateBrush                                            BackgroundImageHovered;                            // 0x98(0x90)
	Struct SlateBrush                                            BackgroundImageFocused;                            // 0x128(0x90)
	Struct SlateBrush                                            BackgroundImageReadOnly;                           // 0x1b8(0x90)
	Struct Margin                                                Padding;                                           // 0x248(0x10)
	Struct SlateFontInfo                                         Font;                                              // 0x258(0x40)
	Struct SlateColor                                            ForegroundColor;                                   // 0x298(0x30)
	Struct SlateColor                                            BackgroundColor;                                   // 0x2c8(0x30)
	Struct SlateColor                                            ReadOnlyForegroundColor;                           // 0x2f8(0x30)
	Struct Margin                                                HScrollBarPadding;                                 // 0x328(0x10)
	Struct Margin                                                VScrollBarPadding;                                 // 0x338(0x10)
	Struct ScrollBarStyle                                        ScrollBarStyle;                                    // 0x348(0x518)
};


// Size 0x518
struct ScrollBarStyle
{
public:
	Struct SlateBrush                                            HorizontalBackgroundImage;                         // 0x8(0x90)
	Struct SlateBrush                                            VerticalBackgroundImage;                           // 0x98(0x90)
	Struct SlateBrush                                            VerticalTopSlotImage;                              // 0x128(0x90)
	Struct SlateBrush                                            HorizontalTopSlotImage;                            // 0x1b8(0x90)
	Struct SlateBrush                                            VerticalBottomSlotImage;                           // 0x248(0x90)
	Struct SlateBrush                                            HorizontalBottomSlotImage;                         // 0x2d8(0x90)
	Struct SlateBrush                                            NormalThumbImage;                                  // 0x368(0x90)
	Struct SlateBrush                                            HoveredThumbImage;                                 // 0x3f8(0x90)
	Struct SlateBrush                                            DraggedThumbImage;                                 // 0x488(0x90)
};


// Size 0x160
struct TextBlockStyle
{
public:
	Struct SlateFontInfo                                         Font;                                              // 0x8(0x40)
	Struct SlateColor                                            ColorAndOpacity;                                   // 0x48(0x30)
	Struct Vector2D                                              ShadowOffset;                                      // 0x78(0x8)
	Struct LinearColor                                           ShadowColorAndOpacity;                             // 0x80(0x10)
	Struct SlateColor                                            SelectedBackgroundColor;                           // 0x90(0x30)
	Struct LinearColor                                           HighlightColor;                                    // 0xc0(0x10)
	Struct SlateBrush                                            HighlightShape;                                    // 0xd0(0x90)
};


// Size 0x318
struct SpinBoxStyle
{
public:
	Struct SlateBrush                                            BackgroundBrush;                                   // 0x8(0x90)
	Struct SlateBrush                                            HoveredBackgroundBrush;                            // 0x98(0x90)
	Struct SlateBrush                                            ActiveFillBrush;                                   // 0x128(0x90)
	Struct SlateBrush                                            InactiveFillBrush;                                 // 0x1b8(0x90)
	Struct SlateBrush                                            ArrowsImage;                                       // 0x248(0x90)
	Struct SlateColor                                            ForegroundColor;                                   // 0x2d8(0x30)
	Struct Margin                                                TextPadding;                                       // 0x308(0x10)
};


// Size 0x28
struct CompositeFont
{
public:
	Struct Typeface                                              DefaultTypeface;                                   // 0x0(0x10)
	TArray<Struct CompositeSubFont>                              SubTypefaces;                                      // 0x10(0x10)
};


// Size 0x38
struct CompositeSubFont
{
public:
	Struct Typeface                                              Typeface;                                          // 0x0(0x10)
	TArray<Struct Int32Range>                                    CharacterRanges;                                   // 0x10(0x10)
	TArray<Byte Languages>                                       Languages;                                         // 0x20(0x10)
	float                                                        ScalingFactor;                                     // 0x30(0x4)
};


// Size 0x10
struct Typeface
{
public:
	TArray<Struct TypefaceEntry>                                 Fonts;                                             // 0x0(0x10)
};


// Size 0x38
struct TypefaceEntry
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	Struct FontData                                              Font;                                              // 0x8(0x30)
};


// Size 0x30
struct FontData
{
public:
	Struct FString                                               FontFilename;                                      // 0x0(0x10)
	Class FontBulkData*                                          BulkDataPtr;                                       // 0x10(0x8)
	byte                                                         Hinting;                                           // 0x18(0x1)
	char                                                         pad0x7_WHM4M[0x7];                                 // 0x19(0x7)
	TArray<Byte FontData>                                        FontData;                                          // 0x20(0x10)
};


// Size 0x1028
struct WindowStyle
{
public:
	Struct ButtonStyle                                           MinimizeButtonStyle;                               // 0x8(0x2a8)
	Struct ButtonStyle                                           MaximizeButtonStyle;                               // 0x2b0(0x2a8)
	Struct ButtonStyle                                           RestoreButtonStyle;                                // 0x558(0x2a8)
	Struct ButtonStyle                                           CloseButtonStyle;                                  // 0x800(0x2a8)
	Struct TextBlockStyle                                        TitleTextStyle;                                    // 0xaa8(0x160)
	Struct SlateBrush                                            ActiveTitleBrush;                                  // 0xc08(0x90)
	Struct SlateBrush                                            InactiveTitleBrush;                                // 0xc98(0x90)
	Struct SlateBrush                                            FlashTitleBrush;                                   // 0xd28(0x90)
	Struct SlateBrush                                            OutlineBrush;                                      // 0xdb8(0x90)
	Struct SlateColor                                            OutlineColor;                                      // 0xe48(0x30)
	Struct SlateBrush                                            BorderBrush;                                       // 0xe78(0x90)
	Struct SlateBrush                                            BackgroundBrush;                                   // 0xf08(0x90)
	Struct SlateBrush                                            ChildBackgroundBrush;                              // 0xf98(0x90)
};


// Size 0x128
struct ScrollBorderStyle
{
public:
	Struct SlateBrush                                            TopShadowBrush;                                    // 0x8(0x90)
	Struct SlateBrush                                            BottomShadowBrush;                                 // 0x98(0x90)
};


// Size 0x248
struct ScrollBoxStyle
{
public:
	Struct SlateBrush                                            TopShadowBrush;                                    // 0x8(0x90)
	Struct SlateBrush                                            BottomShadowBrush;                                 // 0x98(0x90)
	Struct SlateBrush                                            LeftShadowBrush;                                   // 0x128(0x90)
	Struct SlateBrush                                            RightShadowBrush;                                  // 0x1b8(0x90)
};


// Size 0x6e8
struct DockTabStyle
{
public:
	Struct ButtonStyle                                           CloseButtonStyle;                                  // 0x8(0x2a8)
	Struct SlateBrush                                            NormalBrush;                                       // 0x2b0(0x90)
	Struct SlateBrush                                            ActiveBrush;                                       // 0x340(0x90)
	Struct SlateBrush                                            ColorOverlayBrush;                                 // 0x3d0(0x90)
	Struct SlateBrush                                            ForegroundBrush;                                   // 0x460(0x90)
	Struct SlateBrush                                            HoveredBrush;                                      // 0x4f0(0x90)
	Struct SlateBrush                                            ContentAreaBrush;                                  // 0x580(0x90)
	Struct SlateBrush                                            TabWellBrush;                                      // 0x610(0x90)
	Struct Margin                                                TabPadding;                                        // 0x6a0(0x10)
	float                                                        OverlapWidth;                                      // 0x6b0(0x4)
	char                                                         pad0x4_YQA04[0x4];                                 // 0x6b4(0x4)
	Struct SlateColor                                            FlashColor;                                        // 0x6b8(0x30)
};


// Size 0xc20
struct HeaderRowStyle
{
public:
	Struct TableColumnHeaderStyle                                ColumnStyle;                                       // 0x8(0x518)
	Struct TableColumnHeaderStyle                                LastColumnStyle;                                   // 0x520(0x518)
	Struct SplitterStyle                                         ColumnSplitterStyle;                               // 0xa38(0x128)
	Struct SlateBrush                                            BackgroundBrush;                                   // 0xb60(0x90)
	Struct SlateColor                                            ForegroundColor;                                   // 0xbf0(0x30)
};


// Size 0x128
struct SplitterStyle
{
public:
	Struct SlateBrush                                            HandleNormalBrush;                                 // 0x8(0x90)
	Struct SlateBrush                                            HandleHighlightBrush;                              // 0x98(0x90)
};


// Size 0x518
struct TableColumnHeaderStyle
{
public:
	Struct SlateBrush                                            SortPrimaryAscendingImage;                         // 0x8(0x90)
	Struct SlateBrush                                            SortPrimaryDescendingImage;                        // 0x98(0x90)
	Struct SlateBrush                                            SortSecondaryAscendingImage;                       // 0x128(0x90)
	Struct SlateBrush                                            SortSecondaryDescendingImage;                      // 0x1b8(0x90)
	Struct SlateBrush                                            NormalBrush;                                       // 0x248(0x90)
	Struct SlateBrush                                            HoveredBrush;                                      // 0x2d8(0x90)
	Struct SlateBrush                                            MenuDropdownImage;                                 // 0x368(0x90)
	Struct SlateBrush                                            MenuDropdownNormalBorderBrush;                     // 0x3f8(0x90)
	Struct SlateBrush                                            MenuDropdownHoveredBorderBrush;                    // 0x488(0x90)
};


// Size 0x728
struct TableRowStyle
{
public:
	Struct SlateBrush                                            SelectorFocusedBrush;                              // 0x8(0x90)
	Struct SlateBrush                                            ActiveHoveredBrush;                                // 0x98(0x90)
	Struct SlateBrush                                            ActiveBrush;                                       // 0x128(0x90)
	Struct SlateBrush                                            InactiveHoveredBrush;                              // 0x1b8(0x90)
	Struct SlateBrush                                            InactiveBrush;                                     // 0x248(0x90)
	Struct SlateBrush                                            EvenRowBackgroundHoveredBrush;                     // 0x2d8(0x90)
	Struct SlateBrush                                            EvenRowBackgroundBrush;                            // 0x368(0x90)
	Struct SlateBrush                                            OddRowBackgroundHoveredBrush;                      // 0x3f8(0x90)
	Struct SlateBrush                                            OddRowBackgroundBrush;                             // 0x488(0x90)
	Struct SlateColor                                            TextColor;                                         // 0x518(0x30)
	Struct SlateColor                                            SelectedTextColor;                                 // 0x548(0x30)
	Struct SlateBrush                                            DropIndicator_Above;                               // 0x578(0x90)
	Struct SlateBrush                                            DropIndicator_Onto;                                // 0x608(0x90)
	Struct SlateBrush                                            DropIndicator_Below;                               // 0x698(0x90)
};


// Size 0xa0
struct InlineTextImageStyle
{
public:
	Struct SlateBrush                                            Image;                                             // 0x8(0x90)
};


// Size 0x520
struct VolumeControlStyle
{
public:
	Struct SliderStyle                                           SliderStyle;                                       // 0x8(0x248)
	Struct SlateBrush                                            HighVolumeImage;                                   // 0x250(0x90)
	Struct SlateBrush                                            MidVolumeImage;                                    // 0x2e0(0x90)
	Struct SlateBrush                                            LowVolumeImage;                                    // 0x370(0x90)
	Struct SlateBrush                                            NoVolumeImage;                                     // 0x400(0x90)
	Struct SlateBrush                                            MutedImage;                                        // 0x490(0x90)
};


// Size 0x248
struct SliderStyle
{
public:
	Struct SlateBrush                                            NormalBarImage;                                    // 0x8(0x90)
	Struct SlateBrush                                            DisabledBarImage;                                  // 0x98(0x90)
	Struct SlateBrush                                            NormalThumbImage;                                  // 0x128(0x90)
	Struct SlateBrush                                            DisabledThumbImage;                                // 0x1b8(0x90)
};


// Size 0xb00
struct SearchBoxStyle
{
public:
	Struct EditableTextBoxStyle                                  TextBoxStyle;                                      // 0x8(0x860)
	Struct SlateFontInfo                                         ActiveFontInfo;                                    // 0x868(0x40)
	Struct SlateBrush                                            UpArrowImage;                                      // 0x8a8(0x90)
	Struct SlateBrush                                            DownArrowImage;                                    // 0x938(0x90)
	Struct SlateBrush                                            GlassImage;                                        // 0x9c8(0x90)
	Struct SlateBrush                                            ClearImage;                                        // 0xa58(0x90)
	Struct Margin                                                ImagePadding;                                      // 0xae8(0x10)
	bool                                                         bLeftAlignButtons;                                 // 0xaf8(0x1)
};


// Size 0x128
struct ExpandableAreaStyle
{
public:
	Struct SlateBrush                                            CollapsedImage;                                    // 0x8(0x90)
	Struct SlateBrush                                            ExpandedImage;                                     // 0x98(0x90)
};


// Size 0x1b8
struct ProgressBarStyle
{
public:
	Struct SlateBrush                                            BackgroundImage;                                   // 0x8(0x90)
	Struct SlateBrush                                            FillImage;                                         // 0x98(0x90)
	Struct SlateBrush                                            MarqueeImage;                                      // 0x128(0x90)
};


// Size 0x9c8
struct InlineEditableTextBlockStyle
{
public:
	Struct EditableTextBoxStyle                                  EditableTextBoxStyle;                              // 0x8(0x860)
	Struct TextBlockStyle                                        TextStyle;                                         // 0x868(0x160)
};


// Size 0x420
struct HyperlinkStyle
{
public:
	Struct ButtonStyle                                           UnderlineStyle;                                    // 0x8(0x2a8)
	Struct TextBlockStyle                                        TextStyle;                                         // 0x2b0(0x160)
	Struct Margin                                                Padding;                                           // 0x410(0x10)
};


// Size 0x5f0
struct CheckBoxStyle
{
public:
	byte                                                         CheckBoxType;                                      // 0x8(0x1)
	char                                                         pad0x7_N7M3Y[0x7];                                 // 0x9(0x7)
	Struct SlateBrush                                            UncheckedImage;                                    // 0x10(0x90)
	Struct SlateBrush                                            UncheckedHoveredImage;                             // 0xa0(0x90)
	Struct SlateBrush                                            UncheckedPressedImage;                             // 0x130(0x90)
	Struct SlateBrush                                            CheckedImage;                                      // 0x1c0(0x90)
	Struct SlateBrush                                            CheckedHoveredImage;                               // 0x250(0x90)
	Struct SlateBrush                                            CheckedPressedImage;                               // 0x2e0(0x90)
	Struct SlateBrush                                            UndeterminedImage;                                 // 0x370(0x90)
	Struct SlateBrush                                            UndeterminedHoveredImage;                          // 0x400(0x90)
	Struct SlateBrush                                            UndeterminedPressedImage;                          // 0x490(0x90)
	Struct Margin                                                Padding;                                           // 0x520(0x10)
	Struct SlateColor                                            ForegroundColor;                                   // 0x530(0x30)
	Struct SlateColor                                            BorderBackgroundColor;                             // 0x560(0x30)
	Struct SlateSound                                            CheckedSlateSound;                                 // 0x590(0x18)
	Struct SlateSound                                            UncheckedSlateSound;                               // 0x5a8(0x18)
	Struct SlateSound                                            HoveredSlateSound;                                 // 0x5c0(0x18)
	struct FName                                                 CheckedSound;                                      // 0x5d8(0x8)
	struct FName                                                 UncheckedSound;                                    // 0x5e0(0x8)
	struct FName                                                 HoveredSound;                                      // 0x5e8(0x8)
};


// Size 0x30
struct NavigationEvent
{
public:
};


// Size 0x58
struct MotionEvent
{
public:
};


// Size 0x50
struct ControllerEvent
{
public:
};


// Size 0x30
struct CharacterEvent
{
public:
};


// Size 0x58
struct AnalogInputEvent
{
public:
};


// Size 0x50
struct KeyEvent
{
public:
};


// Size 0x8
struct FocusEvent
{
public:
};


}