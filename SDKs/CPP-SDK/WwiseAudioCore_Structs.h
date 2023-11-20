// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x64
struct WwiseAudioReverbPresets
{
public:
	struct FName                                                 ShortEarlyReflectionPresetName;                    // 0x0(0x8)
	struct FName                                                 LongEarlyReflectionPresetName;                     // 0x8(0x8)
	struct FName                                                 SpaceSizeRTPCName;                                 // 0x10(0x8)
	struct FName                                                 EnclosedRatioRTPCName;                             // 0x18(0x8)
	struct FName                                                 MaterialThicknessRTPCName;                         // 0x20(0x8)
	struct FName                                                 MaterialReflectivityRTPCName;                      // 0x28(0x8)
	byte                                                         EnvironmentTraceChannel;                           // 0x30(0x1)
	char                                                         pad0x3_JQHOL[0x3];                                 // 0x31(0x3)
	float                                                        MinSpaceSizeWindowForEarlyReflections;             // 0x34(0x4)
	float                                                        MaxSpaceSizeWindowforEarlyReflections;             // 0x38(0x4)
	struct ReverbPresetControllerSettings                        SamplingSettings;                                  // 0x3c(0x28)
};


// Size 0x28
struct ReverbPresetControllerSettings
{
public:
	char                                                         pad0xc_4W311[0xc];                                 // 0x0(0xc)
	float                                                        HorizontalConeSegmentElevationAngle;               // 0xc(0x4)
	float                                                        UpwardsConeAngle;                                  // 0x10(0x4)
	float                                                        TraceVectorLength;                                 // 0x14(0x4)
	float                                                        TimeToDiscardSample;                               // 0x18(0x4)
	float                                                        DistanceToDiscardSample;                           // 0x1c(0x4)
	float                                                        BiasTowardsVerticalSegment;                        // 0x20(0x4)
	char                                                         pad0x4_JO7TB[0x4];                                 // 0x24(0x4)
};


// Size 0x18
struct WwiseEventParam
{
public:
	char                                                         pad0x8_2B4FN[0x8];                                 // 0x0(0x8)
	struct FName                                                 SourcePath;                                        // 0x8(0x8)
	struct FName                                                 SourceObj;                                         // 0x10(0x8)
};


// Size 0x8
struct WwiseIOPriorityMappingConfig
{
public:
	int                                                          WwisePriority;                                     // 0x0(0x4)
	byte                                                         AsyncIOPriority;                                   // 0x4(0x1)
	char                                                         pad0x3_IER2J[0x3];                                 // 0x5(0x3)
};


// Size 0x18
struct WwiseNetworkRelationship
{
public:
	struct FName                                                 SwitchGroupName;                                   // 0x0(0x8)
	struct FName                                                 RemotePlayerSwitchValue;                           // 0x8(0x8)
	struct FName                                                 LocalPlayerSwitchValue;                            // 0x10(0x8)
};


// Size 0x20
struct WwisePlatformMappings
{
public:
	struct FString                                               DefaultWwisePlatform;                              // 0x0(0x10)
	TArray<struct WwisePlatformMapping>                          Mappings;                                          // 0x10(0x10)
};


// Size 0x20
struct WwisePlatformMapping
{
public:
	struct FString                                               UnrealPlatform;                                    // 0x0(0x10)
	struct FString                                               WwisePlatform;                                     // 0x10(0x10)
};


}