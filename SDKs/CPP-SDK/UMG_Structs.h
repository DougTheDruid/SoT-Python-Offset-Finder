// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xe8
struct EventReply
{
public:
};


// Size 0x1c
struct WidgetTransform
{
public:
	Struct Vector2D                                              Translation;                                       // 0x0(0x8)
	Struct Vector2D                                              Scale;                                             // 0x8(0x8)
	Struct Vector2D                                              Shear;                                             // 0x10(0x8)
	float                                                        Angle;                                             // 0x18(0x4)
};


// Size 0x10
struct DynamicPropertyPath
{
public:
	TArray<Struct PropertyPathSegment>                           Segments;                                          // 0x0(0x10)
};


// Size 0x20
struct PropertyPathSegment
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	int                                                          ArrayIndex;                                        // 0x8(0x4)
	char                                                         pad0x4_9ZWUU[0x4];                                 // 0xc(0x4)
	Class Struct*                                                Struct;                                            // 0x10(0x8)
	Class Field*                                                 Field;                                             // 0x18(0x8)
};


// Size 0x8
struct SlateChildSize
{
public:
	float                                                        Value;                                             // 0x0(0x4)
	byte                                                         SizeRule;                                          // 0x4(0x1)
};


// Size 0x10
struct NamedSlotBinding
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	Class Widget*                                                Content;                                           // 0x8(0x8)
};


// Size 0x30
struct PaintContext
{
public:
};


// Size 0x28
struct AnchorData
{
public:
	Struct Margin                                                Offsets;                                           // 0x0(0x10)
	Struct Anchors                                               Anchors;                                           // 0x10(0x10)
	Struct Vector2D                                              Alignment;                                         // 0x20(0x8)
};


// Size 0x24
struct WidgetAnimationBinding
{
public:
	struct FName                                                 WidgetName;                                        // 0x0(0x8)
	struct FName                                                 SlotWidgetName;                                    // 0x8(0x8)
	Struct Guid                                                  AnimationGuid;                                     // 0x10(0x10)
	bool                                                         bIsRootWidget;                                     // 0x20(0x1)
};


// Size 0x38
struct DelegateRuntimeBinding
{
public:
	Struct FString                                               ObjectName;                                        // 0x0(0x10)
	struct FName                                                 PropertyName;                                      // 0x10(0x8)
	struct FName                                                 FunctionName;                                      // 0x18(0x8)
	Struct DynamicPropertyPath                                   SourcePath;                                        // 0x20(0x10)
	byte                                                         Kind;                                              // 0x30(0x1)
};


// Size 0x14
struct WidgetNavigationData
{
public:
	byte                                                         Rule;                                              // 0x0(0x1)
	char                                                         pad0x3_ITPAZ[0x3];                                 // 0x1(0x3)
	struct FName                                                 WidgetToFocus;                                     // 0x4(0x8)
};


// Size 0x380
struct MovieScene2DTransformSectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct RichCurve                                             Translation;                                       // 0x38(0x78)
	char                                                         pad0x78_U5BLS[0x78];                               // 0xb0(0x78)
	Struct RichCurve                                             Rotation;                                          // 0x128(0x78)
	Struct RichCurve                                             Scale;                                             // 0x1a0(0x78)
	char                                                         pad0x78_6QB92[0x78];                               // 0x218(0x78)
	Struct RichCurve                                             Shear;                                             // 0x290(0x78)
};


// Size 0x218
struct MovieSceneMarginSectionTemplate
{
public:
	Struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	Struct RichCurve                                             TopCurve;                                          // 0x38(0x78)
	Struct RichCurve                                             LeftCurve;                                         // 0xb0(0x78)
	Struct RichCurve                                             RightCurve;                                        // 0x128(0x78)
	Struct RichCurve                                             BottomCurve;                                       // 0x1a0(0x78)
};


// Size 0x58
struct MovieSceneWidgetMaterialSectionTemplate
{
public:
	TArray<Struct FName>                                         BrushPropertyNamePath;                             // 0x48(0x10)
};


}