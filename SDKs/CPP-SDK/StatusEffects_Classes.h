#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "StatusEffects_Structs.h"


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class DebugMenuStatusDataAsset: public DataAsset
{
public:
	TArray<struct DebugMenuStatusDefinition>                     StatusDefinitions;                                 // 0x28(0x10)
	TArray<float>                                                Durations;                                         // 0x38(0x10)
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class DebugStatusTicketHolder: public Actor
{
public:
	class Actor*                                                 StatusRecipient;                                   // 0x3c8(0x8)
};


// Size 0x38 (Full Size[0x100] - InheritedSize[0xc8]
class LightWeightStatusEffectManagerComponent: public ActorComponent
{
public:
	class StatusRecipientResponseList*                           RecipientResponseList;                             // 0xe8(0x8)
	TArray<struct ActiveStatusEffect>                            ActiveEffects;                                     // 0xf0(0x10)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class StatusRecipientResponseList: public DataAsset
{
public:
	TArray<class StatusResponseAsset*>                           ResponseAssets;                                    // 0x28(0x10)
	TArray<struct FeatureToggledStatusResponseList>              FeatureToggledResponseLists;                       // 0x38(0x10)
	TArray<class StatusResponseAsset*>                           FinalResponseAssets;                               // 0x48(0x10)
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class MaterialStatusSusceptibilityComponent: public ActorComponent
{
public:
	class PhysicalMaterial*                                      CurrentSurfaceMaterial;                            // 0xd0(0x8)
	interface                                                    CurrentMaterialStatusZone;                         // 0xd8(0x10)
};


// Size 0x20 (Full Size[0x300] - InheritedSize[0x2e0]
class StatusEffectVolumeComponent: public SceneComponent
{
public:
	bool                                                         UseOverlapEventsFromParentComponent;               // 0x2e0(0x1)
	TArray<struct Status>                                        StatusEffectsToMaintain;                           // 0x2e8(0x10)
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class StatusApplicationMonitorComponent: public ActorComponent
{
public:
	class UClass*                                                StatusApplicationTrigger;                          // 0xc8(0x8)
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class StatusEffectManagerComponent: public ActorComponent
{
public:
	class StatusRecipientResponseList*                           RecipientResponseList;                             // 0xf0(0x8)
	TArray<struct ActiveStatusEffect>                            ActiveEffects;                                     // 0xf8(0x10)
};


// Size 0x20 (Full Size[0x4c0] - InheritedSize[0x4a0]
class StatusEffectOverlapZone: public SimpleOverlapZone
{
public:
	TArray<struct DelayedStatusEffect>                           StatusesToApplyOnOverlap;                          // 0x4a0(0x10)
};


// Size 0xc0 (Full Size[0x488] - InheritedSize[0x3c8]
class SphericalStatusEffectZone: public Actor
{
public:
	class ActorActivationComponent*                              ActorActivationComponent;                          // 0x3d0(0x8)
	class SphereComponent*                                       SphereComponent;                                   // 0x3d8(0x8)
	class StatusEffectVolumeComponent*                           StatusEffectVolumeComponent;                       // 0x3e0(0x8)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class BuffReceiverComponent: public ActorComponent
{
public:
	bool                                                         CanReceiveBuff;                                    // 0xd0(0x1)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class StatusEffectsSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  DebugMenuStatusDefinitionsDataAsset;               // 0x38(0x10)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class StatusResponseAsset: public DataAsset
{
public:
	struct FText                                                 HighFrequencyTriggerStatusHelper;                  // 0x28(0x38)
	TArray<class Class*>                                         TriggerStatus;                                     // 0x60(0x10)
	TArray<class StatusResponse*>                                Responses;                                         // 0x70(0x10)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class SetCanReceiveBuffStatusResponse: public StatusResponse
{
public:
	bool                                                         LockBuffReceiver;                                  // 0x30(0x1)
	bool                                                         RevertOnDeactivate;                                // 0x31(0x1)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class StatusApplicationDesc: public Object
{
public:
	struct EventAppliedStatusToTargets                           ApplicationEvent;                                  // 0x28(0x28)
};


// Size 0x18 (Full Size[0x48] - InheritedSize[0x30]
class AppliedStatusToSelfStatCondition: public TargetedStatCondition
{
public:
	TArray<class Class*>                                         Status;                                            // 0x30(0x10)
	char                                                         ComparisonMode;                                    // 0x40(0x1)
};


