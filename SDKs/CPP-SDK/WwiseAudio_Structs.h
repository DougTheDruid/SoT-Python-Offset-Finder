// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
struct WwiseAudioAcousticSurfaceParams
{
public:
	float                                                        Thickness;                                         // 0x0(0x4)
	float                                                        Reflectivity;                                      // 0x4(0x4)
};


// Size 0x18
struct WwiseEventParam
{
public:
	struct FName                                                 SourcePath;                                        // 0x8(0x8)
	struct FName                                                 SourceObj;                                         // 0x10(0x8)
};


// Size 0x28
struct MultiEmitterData
{
public:
	Class WwiseObjectPoolWrapper*                                PoolWrapper;                                       // 0x0(0x8)
	Class WwiseEvent*                                            PlayEvent;                                         // 0x8(0x8)
	struct FName                                                 Name;                                              // 0x10(0x8)
	Struct Vector                                                Offset;                                            // 0x18(0xc)
};


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
	char                                                         pad0x3_PC5VJ[0x3];                                 // 0x31(0x3)
	float                                                        MinSpaceSizeWindowForEarlyReflections;             // 0x34(0x4)
	float                                                        MaxSpaceSizeWindowforEarlyReflections;             // 0x38(0x4)
	Struct ReverbPresetControllerSettings                        SamplingSettings;                                  // 0x3c(0x28)
};


// Size 0x28
struct ReverbPresetControllerSettings
{
public:
	float                                                        HorizontalConeSegmentElevationAngle;               // 0xc(0x4)
	float                                                        UpwardsConeAngle;                                  // 0x10(0x4)
	float                                                        TraceVectorLength;                                 // 0x14(0x4)
	float                                                        TimeToDiscardSample;                               // 0x18(0x4)
	float                                                        DistanceToDiscardSample;                           // 0x1c(0x4)
	float                                                        BiasTowardsVerticalSegment;                        // 0x20(0x4)
};


// Size 0xa0
struct WwiseAudioGameStateSettings
{
public:
	struct FName                                                 AudioGameStateGroupName;                           // 0x0(0x8)
	struct FName                                                 AudioGameStateFrontend;                            // 0x8(0x8)
	struct FName                                                 AudioGameStateLoading;                             // 0x10(0x8)
	struct FName                                                 AudioGameStateIngame;                              // 0x18(0x8)
	TArray<Struct StringAssetReference>                          EventsToPlayOnLobbyStart;                          // 0x20(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnLobbyEnd;                            // 0x30(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnEngageStart;                         // 0x40(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnEngageEnd;                           // 0x50(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnLoadingStart;                        // 0x60(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnLoadingEnd;                          // 0x70(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnFrontEndOrLoadingStart;              // 0x80(0x10)
	TArray<Struct StringAssetReference>                          EventsToPlayOnFrontEndOrLoadingEnd;                // 0x90(0x10)
};


// Size 0x38
struct WwiseBinkSettings
{
public:
	Struct StringAssetReference                                  PlayEvent;                                         // 0x0(0x10)
	Struct StringAssetReference                                  StopEvent;                                         // 0x10(0x10)
	int                                                          PreBufferCount;                                    // 0x20(0x4)
	char                                                         pad0x4_QL6UI[0x4];                                 // 0x24(0x4)
	TArray<Struct WwiseBinkTrackMappings>                        Mappings;                                          // 0x28(0x10)
};


// Size 0x18
struct WwiseBinkTrackMappings
{
public:
	byte                                                         mLanguage;                                         // 0x0(0x1)
	char                                                         pad0x7_DAWS8[0x7];                                 // 0x1(0x7)
	TArray<Struct WwiseBinkTrackMapping>                         mChannels;                                         // 0x8(0x10)
};


// Size 0x8
struct WwiseBinkTrackMapping
{
public:
	byte                                                         mChannelMapping;                                   // 0x0(0x1)
	bool                                                         mRequired;                                         // 0x1(0x1)
	char                                                         pad0x2_91ZIZ[0x2];                                 // 0x2(0x2)
	float                                                        mVolumeDb;                                         // 0x4(0x4)
};


// Size 0x8
struct WwiseIOPriorityMappingConfig
{
public:
	int                                                          WwisePriority;                                     // 0x0(0x4)
	byte                                                         AsyncIOPriority;                                   // 0x4(0x1)
};


// Size 0x18
struct WwiseNetworkRelationship
{
public:
	struct FName                                                 SwitchGroupName;                                   // 0x0(0x8)
	struct FName                                                 RemotePlayerSwitchValue;                           // 0x8(0x8)
	struct FName                                                 LocalPlayerSwitchValue;                            // 0x10(0x8)
};


// Size 0x2
struct WwiseEmitterParams
{
public:
	bool                                                         bEnableObstructionAndOcclusion;                    // 0x0(0x1)
	bool                                                         bEnableAccoustics;                                 // 0x1(0x1)
};


// Size 0x3c
struct WwiseListenerInfo
{
public:
	Struct Vector                                                Position;                                          // 0x0(0xc)
	Struct Vector                                                Up;                                                // 0xc(0xc)
	Struct Vector                                                Right;                                             // 0x18(0xc)
	Struct Vector                                                Front;                                             // 0x24(0xc)
	Struct Vector                                                Velocity;                                          // 0x30(0xc)
};


// Size 0x28
struct WwiseNativeEmitterPoolDensityParams
{
public:
	bool                                                         PlayPoolDensityAudio;                              // 0x0(0x1)
	char                                                         pad0x7_VPNRN[0x7];                                 // 0x1(0x7)
	Class WwiseEvent*                                            PoolDensityAudioPlayEvent;                         // 0x8(0x8)
	Class WwiseEvent*                                            PoolDensityAudioStopEvent;                         // 0x10(0x8)
	struct FName                                                 DensityRtpcName;                                   // 0x18(0x8)
	int                                                          FullDensityAmount;                                 // 0x20(0x4)
	float                                                        DensityDistance;                                   // 0x24(0x4)
};


// Size 0x10
struct WwiseExternalSource
{
public:
	Struct FString                                               path;                                              // 0x0(0x10)
};


// Size 0x10
struct WwiseSubtitle
{
public:
	Struct FString                                               Subtitle;                                          // 0x0(0x10)
};


// Size 0x20
struct MovieSceneAkAudioEventTemplate
{
public:
	Class MovieSceneAkAudioEventSection*                         Section;                                           // 0x18(0x8)
};


// Size 0x20
struct MovieSceneAkAudioRTPCTemplate
{
public:
	Class MovieSceneAkAudioRTPCSection*                          Section;                                           // 0x18(0x8)
};


// Size 0x88
struct MovieSceneAkAudioRTPCSectionData
{
public:
	Struct FString                                               RTPCName;                                          // 0x0(0x10)
	Struct RichCurve                                             RTPCCurve;                                         // 0x10(0x78)
};


}