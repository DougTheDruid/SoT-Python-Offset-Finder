namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class WwiseAudioAcousticSurfaceParams: public None
{
public:
	float                                              Thickness                                          // 0x0(0x4)
	float                                              Reflectivity                                       // 0x4(0x4)
};


// Size 0x18
class AnimNotify_SoundSwitch: public None
{
public:
	Struct StringAssetReference                        SkeletalMeshReference                              // 0x0(0x10)
	struct FName                                       SkeletalMeshCategoryName                           // 0x10(0x8)
};


// Size 0x18
class WwiseEventParam: public None
{
public:
	struct FName                                       SourcePath                                         // 0x8(0x8)
	struct FName                                       SourceObj                                          // 0x10(0x8)
};


// Size 0x64
class WwiseAudioReverbPresets: public None
{
public:
	struct FName                                       ShortEarlyReflectionPresetName                     // 0x0(0x8)
	struct FName                                       LongEarlyReflectionPresetName                      // 0x8(0x8)
	struct FName                                       SpaceSizeRTPCName                                  // 0x10(0x8)
	struct FName                                       EnclosedRatioRTPCName                              // 0x18(0x8)
	struct FName                                       MaterialThicknessRTPCName                          // 0x20(0x8)
	struct FName                                       MaterialReflectivityRTPCName                       // 0x28(0x8)
	byte                                               EnvironmentTraceChannel                            // 0x30(0x1)
	float                                              MinSpaceSizeWindowForEarlyReflections              // 0x34(0x4)
	float                                              MaxSpaceSizeWindowforEarlyReflections              // 0x38(0x4)
	Struct ReverbPresetControllerSettings              SamplingSettings                                   // 0x3c(0x28)
};


// Size 0x28
class ReverbPresetControllerSettings: public None
{
public:
	float                                              HorizontalConeSegmentElevationAngle                // 0xc(0x4)
	float                                              UpwardsConeAngle                                   // 0x10(0x4)
	float                                              TraceVectorLength                                  // 0x14(0x4)
	float                                              TimeToDiscardSample                                // 0x18(0x4)
	float                                              DistanceToDiscardSample                            // 0x1c(0x4)
	float                                              BiasTowardsVerticalSegment                         // 0x20(0x4)
};


// Size 0xa0
class WwiseAudioGameStateSettings: public None
{
public:
	struct FName                                       AudioGameStateGroupName                            // 0x0(0x8)
	struct FName                                       AudioGameStateFrontend                             // 0x8(0x8)
	struct FName                                       AudioGameStateLoading                              // 0x10(0x8)
	struct FName                                       AudioGameStateIngame                               // 0x18(0x8)
	TArray<Struct AudioGameStateIngame>                EventsToPlayOnLobbyStart                           // 0x20(0x10)
	TArray<Struct EventsToPlayOnLobbyStart>            EventsToPlayOnLobbyEnd                             // 0x30(0x10)
	TArray<Struct EventsToPlayOnLobbyEnd>              EventsToPlayOnEngageStart                          // 0x40(0x10)
	TArray<Struct EventsToPlayOnEngageStart>           EventsToPlayOnEngageEnd                            // 0x50(0x10)
	TArray<Struct EventsToPlayOnEngageEnd>             EventsToPlayOnLoadingStart                         // 0x60(0x10)
	TArray<Struct EventsToPlayOnLoadingStart>          EventsToPlayOnLoadingEnd                           // 0x70(0x10)
	TArray<Struct EventsToPlayOnLoadingEnd>            EventsToPlayOnFrontEndOrLoadingStart               // 0x80(0x10)
	TArray<Struct EventsToPlayOnFrontEndOrLoadingStart> EventsToPlayOnFrontEndOrLoadingEnd                 // 0x90(0x10)
};


// Size 0x38
class WwiseBinkSettings: public None
{
public:
	Struct StringAssetReference                        PlayEvent                                          // 0x0(0x10)
	Struct StringAssetReference                        StopEvent                                          // 0x10(0x10)
	int                                                PreBufferCount                                     // 0x20(0x4)
	TArray<Struct WwiseBinkTrackMappings>              Mappings                                           // 0x28(0x10)
};


// Size 0x18
class WwiseBinkTrackMappings: public None
{
public:
	byte                                               mLanguage                                          // 0x0(0x1)
	TArray<Struct WwiseBinkTrackMapping>               mChannels                                          // 0x8(0x10)
};


// Size 0x8
class WwiseBinkTrackMapping: public None
{
public:
	byte                                               mChannelMapping                                    // 0x0(0x1)
	bool                                               mRequired                                          // 0x1(0x1)
	float                                              mVolumeDb                                          // 0x4(0x4)
};


// Size 0x8
class WwiseIOPriorityMappingConfig: public None
{
public:
	int                                                WwisePriority                                      // 0x0(0x4)
	byte                                               AsyncIOPriority                                    // 0x4(0x1)
};


// Size 0x18
class WwiseNetworkRelationship: public None
{
public:
	struct FName                                       SwitchGroupName                                    // 0x0(0x8)
	struct FName                                       RemotePlayerSwitchValue                            // 0x8(0x8)
	struct FName                                       LocalPlayerSwitchValue                             // 0x10(0x8)
};


// Size 0x2
class WwiseEmitterParams: public None
{
public:
	bool                                               bEnableObstructionAndOcclusion                     // 0x0(0x1)
	bool                                               bEnableAccoustics                                  // 0x1(0x1)
};


// Size 0x3c
class WwiseListenerInfo: public None
{
public:
	Struct Vector                                      Position                                           // 0x0(0xc)
	Struct Vector                                      Up                                                 // 0xc(0xc)
	Struct Vector                                      Right                                              // 0x18(0xc)
	Struct Vector                                      Front                                              // 0x24(0xc)
	Struct Vector                                      Velocity                                           // 0x30(0xc)
};


// Size 0x28
class WwiseNativeEmitterPoolDensityParams: public None
{
public:
	bool                                               PlayPoolDensityAudio                               // 0x0(0x1)
	Class WwiseEvent*                                  PoolDensityAudioPlayEvent                          // 0x8(0x8)
	Class WwiseEvent*                                  PoolDensityAudioStopEvent                          // 0x10(0x8)
	struct FName                                       DensityRtpcName                                    // 0x18(0x8)
	int                                                FullDensityAmount                                  // 0x20(0x4)
	float                                              DensityDistance                                    // 0x24(0x4)
};


// Size 0x10
class WwiseExternalSource: public None
{
public:
	Struct FString                                     path                                               // 0x0(0x10)
};


// Size 0x10
class WwiseSubtitle: public None
{
public:
	Struct FString                                     Subtitle                                           // 0x0(0x10)
};


// Size 0x20
class MovieSceneAkAudioEventTemplate: public None
{
public:
	Class MovieSceneAkAudioEventSection*               Section                                            // 0x18(0x8)
};


// Size 0x20
class MovieSceneAkAudioRTPCTemplate: public None
{
public:
	Class MovieSceneAkAudioRTPCSection*                Section                                            // 0x18(0x8)
};


// Size 0x88
class MovieSceneAkAudioRTPCSectionData: public None
{
public:
	Struct FString                                     RTPCName                                           // 0x0(0x10)
	Struct RichCurve                                   RTPCCurve                                          // 0x10(0x78)
};


}