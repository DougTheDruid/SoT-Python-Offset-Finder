#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x1c
struct WidgetTransform
{
public:
	struct Vector2D                                              Translation;                                       // 0x0(0x8)
	struct Vector2D                                              Scale;                                             // 0x8(0x8)
	struct Vector2D                                              Shear;                                             // 0x10(0x8)
	float                                                        Angle;                                             // 0x18(0x4)
};


// Size 0x10
struct NamedSlotBinding
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	class Widget*                                                Content;                                           // 0x8(0x8)
};


// Size 0x218
struct MovieSceneMarginSectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct RichCurve                                             TopCurve;                                          // 0x38(0x78)
	struct RichCurve                                             LeftCurve;                                         // 0xb0(0x78)
	struct RichCurve                                             RightCurve;                                        // 0x128(0x78)
	struct RichCurve                                             BottomCurve;                                       // 0x1a0(0x78)
};


// Size 0x58
struct MovieSceneWidgetMaterialSectionTemplate
{
public:
	TArray<struct Name>                                          BrushPropertyNamePath;                             // 0x48(0x10)
};


// Size 0x28
struct AnchorData
{
public:
	struct Margin                                                Offsets;                                           // 0x0(0x10)
	struct Anchors                                               Anchors;                                           // 0x10(0x10)
	struct Vector2D                                              Alignment;                                         // 0x20(0x8)
};


// Size 0x14
struct WidgetNavigationData
{
public:
	char                                                         Rule;                                              // 0x0(0x1)
	struct FName                                                 WidgetToFocus;                                     // 0x4(0x8)
};


// Size 0x24
struct WidgetAnimationBinding
{
public:
	struct FName                                                 WidgetName;                                        // 0x0(0x8)
	struct FName                                                 SlotWidgetName;                                    // 0x8(0x8)
	struct Guid                                                  AnimationGuid;                                     // 0x10(0x10)
	bool                                                         bIsRootWidget;                                     // 0x20(0x1)
};


// Size 0x8
struct SlateChildSize
{
public:
	float                                                        Value;                                             // 0x0(0x4)
	char                                                         SizeRule;                                          // 0x4(0x1)
};


// Size 0x20
struct PropertyPathSegment
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
	int                                                          ArrayIndex;                                        // 0x8(0x4)
	class Struct*                                                Struct;                                            // 0x10(0x8)
	class Field*                                                 Field;                                             // 0x18(0x8)
};


// Size 0x380
struct MovieScene2DTransformSectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct RichCurve                                             Translation;                                       // 0x38(0x78)
	struct RichCurve                                             Rotation;                                          // 0x128(0x78)
	struct RichCurve                                             Scale;                                             // 0x1a0(0x78)
	struct RichCurve                                             Shear;                                             // 0x290(0x78)
};


// Size 0x10
struct DynamicPropertyPath
{
public:
	TArray<struct PropertyPathSegment>                           Segments;                                          // 0x0(0x10)
};


// Size 0x38
struct DelegateRuntimeBinding
{
public:
	struct FString                                               ObjectName;                                        // 0x0(0x10)
	struct FName                                                 PropertyName;                                      // 0x10(0x8)
	struct FName                                                 FunctionName;                                      // 0x18(0x8)
	struct DynamicPropertyPath                                   SourcePath;                                        // 0x20(0x10)
	char                                                         Kind;                                              // 0x30(0x1)
};


