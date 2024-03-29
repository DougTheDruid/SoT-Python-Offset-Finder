#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "AthenaAudio_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AudioPortalInterface: public Interface
{
public:
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class AudioPortalService: public Object
{
public:
	char                                                         pad0xb0_QHIRU[0xb0];                               // 0x28(0xb0)
};


// Size 0xb0 (Full Size[0x108] - InheritedSize[0x58]
class AthenaAudioConfig: public WwiseCoreAssets
{
public:
	class WwiseObjectPoolWrapper*                                ItemProxyPool;                                     // 0x58(0x8)
	class WwiseObjectPoolWrapper*                                AnimNotifyPool;                                    // 0x60(0x8)
	struct AthenaAudioGameStateSettings                          GameStateSettings;                                 // 0x68(0x20)
	struct AthenaAudioBootflowEvents                             BootflowEvents;                                    // 0x88(0x80)
};


// Size 0x60 (Full Size[0x340] - InheritedSize[0x2e0]
class AudioPortalComponent: public SceneComponent
{
public:
	float                                                        PortalTriggerDistance;                             // 0x2e0(0x4)
	float                                                        InsideRtpcUpdateDistance;                          // 0x2e4(0x4)
	float                                                        OutsideRtpcUpdateDistance;                         // 0x2e8(0x4)
	bool                                                         TrackAttachmentToActor;                            // 0x2ec(0x1)
	char                                                         pad0x3_T58NQ[0x3];                                 // 0x2ed(0x3)
	class AudioSpaceDataAsset*                                   AudioInsideSpace;                                  // 0x2f0(0x8)
	class AudioSpaceDataAsset*                                   AudioOutsideSpace;                                 // 0x2f8(0x8)
	class AudioSpaceDataAsset*                                   ActiveAudioInsideSpace;                            // 0x300(0x8)
	class AudioSpaceDataAsset*                                   ActiveAudioOutsideSpace;                           // 0x308(0x8)
	class StoryDrivenAudioPortalDataAsset*                       CollectionAsset;                                   // 0x310(0x8)
	char                                                         pad0x28_SATWE[0x28];                               // 0x318(0x28)
};


// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class MultiEmitter: public Actor
{
public:
	class MultiEmitterRootComponent*                             MultiEmitterRootComponent;                         // 0x3c8(0x8)
	char                                                         pad0x8_P6WSU[0x8];                                 // 0x3d0(0x8)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class StoryDrivenAudioPortalDataAsset: public DataAsset
{
public:
	struct FeatureFlag                                           Feature;                                           // 0x28(0xc)
	char                                                         pad0x4_C0WGL[0x4];                                 // 0x34(0x4)
	TArray<struct StoryDrivenAudioPortalSetting>                 StoryResponses;                                    // 0x38(0x10)
	TArray<class StoryDrivenAudioPortalDataAsset*>               AssetsList;                                        // 0x48(0x10)
};


// Size 0x90 (Full Size[0x370] - InheritedSize[0x2e0]
class WwiseEventsTriggerRegionComponent: public SceneComponent
{
public:
	class WwiseObjectPoolWrapper*                                TriggerRegionPool;                                 // 0x2e0(0x8)
	TArray<class WwiseEvent*>                                    TriggerRegionPlayEvents;                           // 0x2e8(0x10)
	TArray<class WwiseEvent*>                                    TriggerRegionStopEvents;                           // 0x2f8(0x10)
	float                                                        TriggerEnterRadiusInCms;                           // 0x308(0x4)
	float                                                        TriggerExitRadiusInCms;                            // 0x30c(0x4)
	struct Vector                                                EmitterOffset;                                     // 0x310(0xc)
	char                                                         pad0x14_9L72K[0x14];                               // 0x31c(0x14)
	class Character*                                             LocalPlayer;                                       // 0x330(0x8)
	char                                                         pad0x38_JVNBS[0x38];                               // 0x338(0x38)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class AudioSpaceTrackerComponent: public ActorComponent
{
public:
	TArray<class AudioSpaceComponent*>                           CurrentSpaces;                                     // 0xc8(0x10)
};


// Size 0x30 (Full Size[0x650] - InheritedSize[0x620]
class AudioSpaceComponent: public StaticMeshComponent
{
public:
	class AudioSpaceDataAsset*                                   AudioSpace;                                        // 0x620(0x8)
	class AudioSpaceDataAsset*                                   ActiveAudioSpace;                                  // 0x628(0x8)
	class StoryDrivenAudioPortalDataAsset*                       CollectionAsset;                                   // 0x630(0x8)
	char                                                         pad0x18_03YUJ[0x18];                               // 0x638(0x18)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class AthenaAudioModuleSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  AudioConfigAsset;                                  // 0x38(0x10)
};


