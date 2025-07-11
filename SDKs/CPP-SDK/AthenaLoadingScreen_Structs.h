#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0xc0
struct SlateLoadingScreenAdvancedTipDescription
{
public:
	struct FText                                                 Text;                                              // 0x0(0x38)
	float                                                        Centre;                                            // 0x38(0x4)
	float                                                        TopEdge;                                           // 0x3c(0x4)
	float                                                        Width;                                             // 0x40(0x4)
	float                                                        Footer;                                            // 0x44(0x4)
	struct SlateFontInfo                                         Font;                                              // 0x48(0x40)
	struct SlateColor                                            Colour;                                            // 0x88(0x30)
	float                                                        LineHeightPercentage;                              // 0xb8(0x4)
	char                                                         pad0x4_0FTZB[0x4];                                 // 0xbc(0x4)
};


// Size 0x10
struct EventAthenaLoadingScreenBlockUntilUIIntialisedClear
{
public:
	struct FString                                               Description;                                       // 0x0(0x10)
};


// Size 0x1
struct EventAthenaLoadingScreenOpen
{
public:
	char                                                         pad0x1_GCE7F[0x1];                                 // 0x0(0x1)
};


// Size 0x10
struct EventAthenaLoadingScreenBlockUntilUIIntialised
{
public:
	struct FString                                               Description;                                       // 0x0(0x10)
};


// Size 0x1
struct EventAthenaLoadingScreenStateResponse
{
public:
	bool                                                         IsVisible;                                         // 0x0(0x1)
};


// Size 0x1
struct EventAthenaLoadingScreenStateRequest
{
public:
	char                                                         pad0x1_BL0PW[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct EventAthenaLoadingScreenClose
{
public:
	char                                                         pad0x1_FRIWJ[0x1];                                 // 0x0(0x1)
};


// Size 0x10
struct SlateLoadingScreenAdvancedTipsParams
{
public:
	TArray<struct SlateLoadingScreenAdvancedTipDescription>      TipDescriptions;                                   // 0x0(0x10)
};


// Size 0x30
struct SlateLoadingScreenImageParams
{
public:
	struct StringAssetReference                                  ImageAsset;                                        // 0x0(0x10)
	TArray<struct Text>                                          ImageTips;                                         // 0x10(0x10)
	struct SlateLoadingScreenAdvancedTipsParams                  AdvancedTips;                                      // 0x20(0x10)
};


