#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x14
struct CoherentUIGTViewInfo
{
public:
	int                                                          Width;                                             // 0x0(0x4)
	int                                                          Height;                                            // 0x4(0x4)
	bool                                                         IsTransparent;                                     // 0x8(0x1)
	float                                                        ClickThroughAlphaThreshold;                        // 0xc(0x4)
	float                                                        AnimationFrameDefer;                               // 0x10(0x4)
};


// Size 0x18
struct CoherentUIGTLoadingScreenSettings
{
public:
	float                                                        MinimumLoadingScreenDisplayTime;                   // 0x0(0x4)
	bool                                                         bAutoCompleteWhenLoadingCompletes;                 // 0x4(0x1)
	bool                                                         bWaitForManualStop;                                // 0x5(0x1)
	struct FString                                               URL;                                               // 0x8(0x10)
};


