#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Mysteries_Structs.h"


// Size 0x80 (Full Size[0x4e8] - InheritedSize[0x468]
class OneShotRewardableObjectBase: public InteractableObject
{
public:
	class InteractableComponent*                                 InteractableComponent;                             // 0x468(0x8)
	class StaticMeshComponent*                                   StaticMeshComponent;                               // 0x470(0x8)
	struct                                                       Reward;                                            // 0x478(0x8)
	class UClass*                                                RewardEntitlement;                                 // 0x480(0x8)
	float                                                        InteractionHoldTime;                               // 0x488(0x4)
	float                                                        InteractionRadius;                                 // 0x48c(0x4)
	struct FText                                                 DisplayName;                                       // 0x490(0x38)
};


// Size 0x20 (Full Size[0x168] - InheritedSize[0x148]
class PopUpNotificationOnItemWieldedComponent: public OnItemWieldedComponent
{
public:
	class PopUpMessageDesc*                                      PopUpDesc;                                         // 0x148(0x8)
};


// Size 0xe0 (Full Size[0x1a8] - InheritedSize[0xc8]
class AbandonedNoteWeightedTextSourceComponent: public ActorComponent
{
public:
	assetobject                                                  WeightedText;                                      // 0xe8(0x20)
	struct FText                                                 ClueText;                                          // 0x108(0x38)
	struct FText                                                 TitleText;                                         // 0x140(0x38)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AbandonedNoteWeightedTextDataAsset: public DataAsset
{
public:
	TArray<struct AbandonedNoteWeightedTextEntry>                Entries;                                           // 0x28(0x10)
};


// Size 0xf0 (Full Size[0x4b8] - InheritedSize[0x3c8]
class SirenPuzzleContext: public Actor
{
public:
	class SceneComponent*                                        Root;                                              // 0x3d0(0x8)
	TArray<struct SirenPuzzleLockState>                          PuzzleLocks;                                       // 0x3d8(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      UnlockCompleteReactions;                           // 0x3e8(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      ResetLocksReactions;                               // 0x3f8(0x10)
	TArray<char>                                                 LockStates;                                        // 0x408(0x10)
};


