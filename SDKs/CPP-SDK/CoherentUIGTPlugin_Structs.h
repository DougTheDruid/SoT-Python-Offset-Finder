// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct CoherentUIGTLoadingScreenSettings
{
public:
	float                                                        MinimumLoadingScreenDisplayTime;                   // 0x0(0x4)
	bool                                                         bAutoCompleteWhenLoadingCompletes;                 // 0x4(0x1)
	bool                                                         bWaitForManualStop;                                // 0x5(0x1)
	char                                                         pad0x2_P6J7Q[0x2];                                 // 0x6(0x2)
	Struct FString                                               URL;                                               // 0x8(0x10)
};


// Size 0x14
struct CoherentUIGTViewInfo
{
public:
	int                                                          Width;                                             // 0x0(0x4)
	int                                                          Height;                                            // 0x4(0x4)
	bool                                                         IsTransparent;                                     // 0x8(0x1)
	char                                                         pad0x3_K9U9Z[0x3];                                 // 0x9(0x3)
	float                                                        ClickThroughAlphaThreshold;                        // 0xc(0x4)
	float                                                        AnimationFrameDefer;                               // 0x10(0x4)
};


}