#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "AthenaLoadingScreen_Structs.h"


// Size 0x30 (Full Size[0x68] - InheritedSize[0x38]
class AthenaLoadingScreenParams: public DeveloperSettings
{
public:
	struct                                                       BootLoadingScreen;                                 // 0x38(0x10)
	struct                                                       TeleportLoadingScreen;                             // 0x48(0x10)
	struct                                                       AdventureLoadingScreens;                           // 0x58(0x10)
};


// Size 0x210 (Full Size[0x238] - InheritedSize[0x28]
class SlateLoadingScreenParams: public DataAsset
{
public:
	bool                                                         DrawBackground;                                    // 0x28(0x1)
	bool                                                         DrawBackgroundImage;                               // 0x29(0x1)
	bool                                                         DrawTips;                                          // 0x2a(0x1)
	bool                                                         DrawSpinner;                                       // 0x2b(0x1)
	float                                                        ViewportWidth;                                     // 0x2c(0x4)
	float                                                        ViewportHeight;                                    // 0x30(0x4)
	float                                                        FooterHeight;                                      // 0x34(0x4)
	bool                                                         DrawSpinnerText;                                   // 0x38(0x1)
	struct                                                       PlaceholderSpinnerTexture;                         // 0x40(0x10)
	struct                                                       BackgroundColour;                                  // 0x50(0x10)
	struct                                                       PrimaryImage;                                      // 0x60(0x30)
	TArray<struct SlateLoadingScreenImageParams>                 RandomisedPrimaryImages;                           // 0x90(0x10)
	TArray<struct SlateLoadingScreenImageParams>                 CyclingImages;                                     // 0xa0(0x10)
	int                                                          MaxNumImagesPerLoad;                               // 0xb0(0x4)
	struct FText                                                 SpinnerText;                                       // 0xb8(0x38)
	struct                                                       SpinnerTextColour;                                 // 0xf0(0x30)
	struct                                                       SpinnerTextFont;                                   // 0x120(0x40)
	float                                                        SpinnerSize;                                       // 0x160(0x4)
	struct                                                       SpinnerMargin;                                     // 0x164(0x10)
	float                                                        SpinnerPadding;                                    // 0x174(0x4)
	struct                                                       SpinnerIcon;                                       // 0x178(0x10)
	struct                                                       TipsMargin;                                        // 0x188(0x10)
	float                                                        TipWrapLength;                                     // 0x198(0x4)
	float                                                        TipDisplayDuration;                                // 0x19c(0x4)
	float                                                        TipDurationBetweenTips;                            // 0x1a0(0x4)
	int                                                          NumTipsPerImage;                                   // 0x1a4(0x4)
	struct                                                       LoadingTipFont;                                    // 0x1a8(0x40)
	float                                                        LoadingTipFontLineHeightPercentage;                // 0x1e8(0x4)
	TArray<struct Text>                                          LoadingScreenTips;                                 // 0x1f0(0x10)
	struct                                                       LoadingScreenTipColour;                            // 0x200(0x30)
	bool                                                         AllowSyncronousAssetLoad;                          // 0x230(0x1)
};


