#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "WwiseAudio_Structs.h"


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class WwiseCoreAssets: public DataAsset
{
public:
	class WwiseEvent*                                            PauseEventStart;                                   // 0x28(0x8)
	class WwiseEvent*                                            PauseEventRelease;                                 // 0x30(0x8)
	class WwiseEvent*                                            StopAllEvent;                                      // 0x38(0x8)
	class WwiseEvent*                                            WwiseMediaSoundComponentEvent;                     // 0x40(0x8)
	class WwiseNonShippingAudioRootAsset*                        NonShippingAudioRootAsset;                         // 0x48(0x8)
	class WwiseIDsDatabase*                                      WwiseIDsDatabase;                                  // 0x50(0x8)
};


// Size 0x90 (Full Size[0x128] - InheritedSize[0x98]
class MovieSceneAkAudioRTPCSection: public MovieSceneSection
{
public:
	struct FString                                               Name;                                              // 0xa0(0x10)
	struct RichCurve                                             FloatCurve;                                        // 0xb0(0x78)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class WwiseEvent: public Object
{
public:
	class WwiseBank*                                             RequiredBank;                                      // 0x28(0x8)
	bool                                                         WaitForBankToLoad;                                 // 0x30(0x1)
	uint32                                                       WwiseId;                                           // 0x34(0x4)
	float                                                        DurationMin;                                       // 0x38(0x4)
	float                                                        DurationMax;                                       // 0x3c(0x4)
	float                                                        MaxAttenuation;                                    // 0x40(0x4)
	char                                                         DurationType;                                      // 0x44(0x1)
	bool                                                         CookedIsStopEvent;                                 // 0x45(0x1)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WwiseNonShippingAudioRootAsset: public DataAsset
{
public:
	TArray<class WwiseNonShippingAudioAsset*>                    NonShippingAudioAssets;                            // 0x28(0x10)
};


// Size 0x10 (Full Size[0x320] - InheritedSize[0x310]
class MergedMultiEmitterComponent: public WwiseEmitterComponent
{
public:
	class WwiseObjectPoolWrapper*                                EmitterPool;                                       // 0x310(0x8)
	class WwiseEvent*                                            PlayEvent;                                         // 0x318(0x8)
};


// Size 0x18 (Full Size[0xa0] - InheritedSize[0x88]
class MovieSceneAkTrack: public MovieSceneTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
	bool                                                         bIsAMasterTrack;                                   // 0x98(0x1)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class WwiseBank: public Object
{
public:
	struct FString                                               path;                                              // 0x28(0x10)
	uint32                                                       WwiseId;                                           // 0x38(0x4)
	class WwiseBank*                                             InitBank;                                          // 0x40(0x8)
};


// Size 0x20 (Full Size[0x300] - InheritedSize[0x2e0]
class MultiEmitterRootComponent: public SceneComponent
{
public:
	TArray<struct MultiEmitterData>                              MultiEmitterDataArray;                             // 0x2e0(0x10)
	TArray<struct WwiseEmitter>                                  PlayingEmitters;                                   // 0x2f0(0x10)
};


// Size 0x80 (Full Size[0xa8] - InheritedSize[0x28]
class WwiseIDsDatabase: public DataAsset
{
public:
	TArray<int>                                                  StateGroupIDs;                                     // 0x28(0x10)
	TArray<struct Name>                                          StateGroupNames;                                   // 0x38(0x10)
	TArray<int>                                                  StateValueIDs;                                     // 0x48(0x10)
	TArray<struct Name>                                          StateValueNames;                                   // 0x58(0x10)
	TArray<int>                                                  SwitchGroupIDs;                                    // 0x68(0x10)
	TArray<struct Name>                                          SwitchGroupNames;                                  // 0x78(0x10)
	TArray<int>                                                  SwitchStateIDs;                                    // 0x88(0x10)
	TArray<struct Name>                                          SwitchStateNames;                                  // 0x98(0x10)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class MovieSceneAkAudioEventSection: public MovieSceneSection
{
public:
	class WwiseEvent*                                            Event;                                             // 0x98(0x8)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class WwiseNonShippingAudioAsset: public DataAsset
{
public:
	struct FString                                               CodeName;                                          // 0x28(0x10)
	struct FString                                               UAssetRelativePath;                                // 0x38(0x10)
	struct FString                                               StreamRelativePath;                                // 0x48(0x10)
};


// Size 0x10 (Full Size[0x60] - InheritedSize[0x50]
class WwiseDDSEvent: public WwiseEvent
{
public:
	TArray<int>                                                  DDSArgumentsGroupsIDs;                             // 0x50(0x10)
};


