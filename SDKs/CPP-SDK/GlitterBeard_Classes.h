#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "GlitterBeard_Structs.h"


// Size 0x50 (Full Size[0x118] - InheritedSize[0xc8]
class GlitterBeardTreeVisualFeedbackComponent: public ActorComponent
{
public:
	TArray<struct VisualFeedbackList>                            FeedbackActions;                                   // 0xc8(0x10)
	TArray<char>                                                 CurrentStates;                                     // 0xe8(0x10)
};


// Size 0x48 (Full Size[0x80] - InheritedSize[0x38]
class GlitterBeardLanternSoundEffect: public EffectBlendObjectBase
{
public:
	float                                                        TriggerThreshold;                                  // 0x38(0x4)
	class WwiseObjectPoolWrapper*                                WwisePool;                                         // 0x40(0x8)
	class WwiseEvent*                                            WwiseEvent;                                        // 0x48(0x8)
	struct WwiseEmitter                                          Emitter;                                           // 0x50(0x20)
};


// Size 0x328 (Full Size[0x6f0] - InheritedSize[0x3c8]
class GlitterBeardTree: public Actor
{
public:
	class ActionRulesComponent*                                  ActionRulesComponent;                              // 0x3f0(0x8)
	class ActionRulesInteractableComponent*                      InteractableComponent;                             // 0x3f8(0x8)
	float                                                        LanternLightDelay;                                 // 0x400(0x4)
	class GlitterBeardUnlockVFXCoordinatorComponent*             UnlockVFXCoordinatorComponent;                     // 0x408(0x8)
	class GlitterBeardTelemetryComponent*                        TelemetryComponent;                                // 0x410(0x8)
	class UClass*                                                VocalShanty;                                       // 0x418(0x8)
	class WwiseEvent*                                            VocalsFadeEvent;                                   // 0x420(0x8)
	float                                                        VocalsFadeDelay;                                   // 0x428(0x4)
	float                                                        UnlockDelay;                                       // 0x42c(0x4)
	class GlitterBeardFinaleCoordinatorComponent*                FinaleCoordinator;                                 // 0x430(0x8)
	class LandmarkReactionTriggerComponent*                      LandmarkReactionTrigger;                           // 0x438(0x8)
	float                                                        DistanceFromTreeToPauseAISpawn;                    // 0x440(0x4)
	class SlidingDoor*                                           HideoutDoor;                                       // 0x698(0x8)
	struct WwiseEmitter                                          SoundEmitter;                                      // 0x6a0(0x20)
};


// Size 0x8 (Full Size[0x540] - InheritedSize[0x538]
class GlitterbeardSlidingDoor: public SlidingDoor
{
public:
	class EffectBlendControllerComponent*                        DecalBlendComponent;                               // 0x538(0x8)
};


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class GlitterBeardUnlockVFXCoordinatorComponent: public ActorComponent
{
public:
	struct ActorComponentSelector                                TreeActor;                                         // 0xc8(0x10)
	class MaterialInstanceDynamic*                               TreeMaterialInstanceDynamic;                       // 0xd8(0x8)
	float                                                        TreeBlendTime;                                     // 0xe0(0x4)
};


// Size 0xa8 (Full Size[0x170] - InheritedSize[0xc8]
class GlitterBeardFinaleCoordinatorComponent: public ActorComponent
{
public:
	class WwiseEvent*                                            AudioEventToSynchronise;                           // 0xc8(0x8)
	struct FinaleReplicationState                                ReplicationState;                                  // 0xd0(0x10)
};


