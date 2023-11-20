// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class AudioReportReaction: public Object
{
public:
	char                                                         pad0x8_DWBM9[0x8];                                 // 0x28(0x8)
};


// Size 0x178 (Full Size[0x240] - InheritedSize[0xc8]
class AudioReportingComponent: public ActorComponent
{
public:
	class PlayerController*                                      CachedOwningController;                            // 0xc8(0x8)
	char                                                         pad0x170_0SYHA[0x170];                             // 0xd0(0x170)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class AudioReportingConfig: public DeveloperSettings
{
public:
	struct StringAssetReference                                  AudioReportingSettings;                            // 0x38(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AudioReportingDebugMenuGenerator: public DebugMenuEntryGenerator
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EventReactionsDataAsset: public DataAsset
{
public:
	TArray<struct EventReactionDesc>                             Reactions;                                         // 0x28(0x10)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class AudioReportingSettings: public DataAsset
{
public:
	int                                                          MaxReactionCount;                                  // 0x28(0x4)
	float                                                        AudioVeryCloseThresholdDistance;                   // 0x2c(0x4)
	float                                                        AttenuationFilterScaler;                           // 0x30(0x4)
	char                                                         pad0x4_HBI2H[0x4];                                 // 0x34(0x4)
	TArray<class EventReactionsDataAsset*>                       EventReactionDataAssets;                           // 0x38(0x10)
};


}