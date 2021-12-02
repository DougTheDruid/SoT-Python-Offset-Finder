#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum WwiseAudio.EAnimNotify_WwiseSound_PerspectiveRestriction
enum class WwiseAudio_EAnimNotify_WwiseSound_PerspectiveRestriction : uint8_t
{
	EAnimNotify_WwiseSound_PerspectiveRestriction__NoRestriction = 0,
	EAnimNotify_WwiseSound_PerspectiveRestriction__FirstPersonOnly = 1,
	EAnimNotify_WwiseSound_PerspectiveRestriction__ThirdPersonOnly = 2,
	EAnimNotify_WwiseSound_PerspectiveRestriction__EAnimNotify_WwiseSound_MAX = 3,

};

// Enum WwiseAudio.EWwiseEventDurationType
enum class WwiseAudio_EWwiseEventDurationType : uint8_t
{
	EWwiseEventDurationType__OneShot = 0,
	EWwiseEventDurationType__Mixed = 1,
	EWwiseEventDurationType__Infinite = 2,
	EWwiseEventDurationType__Unknown = 3,
	EWwiseEventDurationType__EWwiseEventDurationType_MAX = 4,

};

// Enum WwiseAudio.EWwiseAsyncIOPriorityDisplay
enum class WwiseAudio_EWwiseAsyncIOPriorityDisplay : uint8_t
{
	EWwiseAsyncIOPriorityDisplay__Low = 0,
	EWwiseAsyncIOPriorityDisplay__BelowNormal = 1,
	EWwiseAsyncIOPriorityDisplay__Normal = 2,
	EWwiseAsyncIOPriorityDisplay__High = 3,
	EWwiseAsyncIOPriorityDisplay__EWwiseAsyncIOPriorityDisplay_MAX = 4,

};

// Enum WwiseAudio.EWwiseLanguageOrder
enum class WwiseAudio_EWwiseLanguageOrder : uint8_t
{
	EWwiseLanguageOrder__English   = 0,
	EWwiseLanguageOrder__French    = 1,
	EWwiseLanguageOrder__Italian   = 2,
	EWwiseLanguageOrder__German    = 3,
	EWwiseLanguageOrder__Spanish   = 4,
	EWwiseLanguageOrder__Mexican   = 5,
	EWwiseLanguageOrder__Brazil    = 6,
	EWwiseLanguageOrder__Russian   = 7,
	EWwiseLanguageOrder__Japanese  = 8,
	EWwiseLanguageOrder__EWwiseLanguageOrder_MAX = 9,

};

// Enum WwiseAudio.EWwise7Point1Order
enum class WwiseAudio_EWwise7Point1Order : uint8_t
{
	EWwise7Point1Order__Front_Left = 0,
	EWwise7Point1Order__Front_Right = 1,
	EWwise7Point1Order__Center     = 2,
	EWwise7Point1Order__Left_Surround = 3,
	EWwise7Point1Order__Right_Surround = 4,
	EWwise7Point1Order__Left_Side  = 5,
	EWwise7Point1Order__Right_Side = 6,
	EWwise7Point1Order__LFE        = 7,
	EWwise7Point1Order__Null_Channel = 8,
	EWwise7Point1Order__EWwise7Point1Order_MAX = 9,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WwiseAudio.ReverbPresetControllerSettings
// 0x0028
struct FReverbPresetControllerSettings
{
	uint32_t                                           VectorsPerSegment;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           TracesPerSegmentPerFrame;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           HorizontalSegments;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalConeSegmentElevationAngle;                       // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpwardsConeAngle;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceVectorLength;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeToDiscardSample;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToDiscardSample;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BiasTowardsVerticalSegment;                                // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint32_t                                           MaxNumSampleFramesInHistory;                               // 0x0024(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseBinkTrackMapping
// 0x0008
struct FWwiseBinkTrackMapping
{
	TEnumAsByte<WwiseAudio_EWwise7Point1Order>         mChannelMapping;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               mRequired;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QESF[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              mVolumeDb;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseIOPriorityMappingConfig
// 0x0008
struct FWwiseIOPriorityMappingConfig
{
	int                                                WwisePriority;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<WwiseAudio_EWwiseAsyncIOPriorityDisplay> AsyncIOPriority;                                           // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1KLO[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseNetworkRelationship
// 0x0018
struct FWwiseNetworkRelationship
{
	struct FName                                       SwitchGroupName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RemotePlayerSwitchValue;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LocalPlayerSwitchValue;                                    // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseAudioGameStateSettings
// 0x00A0
struct FWwiseAudioGameStateSettings
{
	struct FName                                       AudioGameStateGroupName;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AudioGameStateFrontend;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AudioGameStateLoading;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AudioGameStateIngame;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStringAssetReference>               EventsToPlayOnLobbyStart;                                  // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLobbyEnd;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnEngageStart;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnEngageEnd;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLoadingStart;                                // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnLoadingEnd;                                  // 0x0070(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnFrontEndOrLoadingStart;                      // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               EventsToPlayOnFrontEndOrLoadingEnd;                        // 0x0090(0x0010) (Edit, ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseBinkTrackMappings
// 0x0018
struct FWwiseBinkTrackMappings
{
	TEnumAsByte<WwiseAudio_EWwiseLanguageOrder>        mLanguage;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IGHC[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWwiseBinkTrackMapping>              mChannels;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseBinkSettings
// 0x0038
struct FWwiseBinkSettings
{
	struct FStringAssetReference                       PlayEvent;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       StopEvent;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	int                                                PreBufferCount;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KY1D[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWwiseBinkTrackMappings>             Mappings;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseAudioReverbPresets
// 0x0064
struct FWwiseAudioReverbPresets
{
	struct FName                                       ShortEarlyReflectionPresetName;                            // 0x0000(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LongEarlyReflectionPresetName;                             // 0x0008(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SpaceSizeRTPCName;                                         // 0x0010(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EnclosedRatioRTPCName;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MaterialThicknessRTPCName;                                 // 0x0020(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MaterialReflectivityRTPCName;                              // 0x0028(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionChannel>              EnvironmentTraceChannel;                                   // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LS7U[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSpaceSizeWindowForEarlyReflections;                     // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxSpaceSizeWindowforEarlyReflections;                     // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReverbPresetControllerSettings             SamplingSettings;                                          // 0x003C(0x0028) (Edit, Config)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseAudioAcousticSurfaceParams
// 0x0008
struct FWwiseAudioAcousticSurfaceParams
{
	float                                              Thickness;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Reflectivity;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.AnimNotify_SoundSwitch
// 0x0018
struct FAnimNotify_SoundSwitch
{
	struct FStringAssetReference                       SkeletalMeshReference;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SkeletalMeshCategoryName;                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseEventParam
// 0x0018
struct FWwiseEventParam
{
	TWeakObjectPtr<class UWwiseEvent>                  WwiseEvent;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FName                                       SourcePath;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SourceObj;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseEmitterParams
// 0x0002
struct FWwiseEmitterParams
{
	bool                                               bEnableObstructionAndOcclusion;                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bEnableAccoustics;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseListenerInfo
// 0x003C
struct FWwiseListenerInfo
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Up;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Right;                                                     // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Front;                                                     // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Velocity;                                                  // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseNativeEmitterPoolDensityParams
// 0x0028
struct FWwiseNativeEmitterPoolDensityParams
{
	bool                                               PlayPoolDensityAudio;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JYGK[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 PoolDensityAudioPlayEvent;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 PoolDensityAudioStopEvent;                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DensityRtpcName;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FullDensityAmount;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DensityDistance;                                           // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseExternalSource
// 0x0010
struct FWwiseExternalSource
{
	struct FString                                     path;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.WwiseSubtitle
// 0x0010
struct FWwiseSubtitle
{
	struct FString                                     Subtitle;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                   // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                   // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WwiseAudio.MovieSceneAkAudioRTPCSectionData
// 0x0088
struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FRichCurve                                  RTPCCurve;                                                 // 0x0010(0x0078)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
