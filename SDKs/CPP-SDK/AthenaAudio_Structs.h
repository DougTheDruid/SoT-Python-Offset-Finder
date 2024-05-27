#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x80
struct AthenaAudioBootflowEvents
{
public:
	TArray<class WwiseEvent*>                                    EventsToPlayOnLobbyStart;                          // 0x0(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnLobbyEnd;                            // 0x10(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnEngageStart;                         // 0x20(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnEngageEnd;                           // 0x30(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnLoadingStart;                        // 0x40(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnLoadingEnd;                          // 0x50(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnFrontEndOrLoadingStart;              // 0x60(0x10)
	TArray<class WwiseEvent*>                                    EventsToPlayOnFrontEndOrLoadingEnd;                // 0x70(0x10)
};


// Size 0x18
struct AnimNotify_SoundSwitch
{
public:
	struct                                                       SkeletalMeshReference;                             // 0x0(0x10)
	struct FName                                                 SkeletalMeshCategoryName;                          // 0x10(0x8)
};


// Size 0x20
struct AthenaAudioGameStateSettings
{
public:
	struct FName                                                 AudioGameStateGroupName;                           // 0x0(0x8)
	struct FName                                                 AudioGameStateFrontend;                            // 0x8(0x8)
	struct FName                                                 AudioGameStateLoading;                             // 0x10(0x8)
	struct FName                                                 AudioGameStateIngame;                              // 0x18(0x8)
};


// Size 0x18
struct StoryDrivenAudioPortalSetting
{
public:
	struct                                                       Story;                                             // 0x0(0x8)
	class AudioSpaceDataAsset*                                   AudioInsideSpace;                                  // 0x8(0x8)
	class AudioSpaceDataAsset*                                   AudioOutsideSpace;                                 // 0x10(0x8)
};


