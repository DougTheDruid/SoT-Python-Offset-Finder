#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "EnchantedCompass_Structs.h"


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class TaleQuestMultiTargetCompassServiceDesc: public TaleQuestToolServiceDesc
{
public:
	class UClass*                                                CompassDesc;                                       // 0x30(0x8)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableActor                                    SplinePathActor;                                   // 0x80(0x30)
};


// Size 0xc0 (Full Size[0x120] - InheritedSize[0x60]
class TaleQuestRotatingCompassService: public TaleQuestService
{
public:
	class Actor*                                                 SplinePathActor;                                   // 0x78(0x8)
	class RotatingCompass*                                       RotatingCompass;                                   // 0x80(0x8)
};


// Size 0x90 (Full Size[0xa90] - InheritedSize[0xa00]
class RotatingCompass: public EnchantedCompass
{
public:
	class PickupableComponent*                                   PickupableComponent;                               // 0x9f8(0x8)
	class PoseableMeshMemoryConstraintComponent*                 PoseableStashedMeshComponent;                      // 0xa00(0x8)
	class WieldableInteractableComponent*                        WieldableInteractableComponent;                    // 0xa08(0x8)
	class Actor*                                                 SplinePathActor;                                   // 0xa10(0x8)
	class CurveFloat*                                            RotationSequenceCurve;                             // 0xa18(0x8)
	bool                                                         StartRotationSequenceCurve;                        // 0xa20(0x1)
	float                                                        SplineDistanceOffset;                              // 0xa24(0x4)
	float                                                        TargetYawAngleBeforeRotationSequence;              // 0xa28(0x4)
	struct RotatingCompassAudioParams                            AudioParams;                                       // 0xa30(0x48)
	float                                                        MaxSpeedToTriggerOneShotSfx;                       // 0xa78(0x4)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestSetRotationCurveForRotatingCompassStepDesc: public TaleQuestStepDesc
{
public:
	class CurveFloat*                                            RotationSequenceCurve;                             // 0x80(0x8)
};


// Size 0x30 (Full Size[0x940] - InheritedSize[0x910]
class MultiTargetEnchantedCompass: public Compass
{
public:
	TArray<struct Vector>                                        Locations;                                         // 0x908(0x10)
	TArray<struct Guid>                                          LocationIds;                                       // 0x918(0x10)
	class InventoryItemComponent*                                InventoryItem;                                     // 0x928(0x8)
	class EnchantedCompassProximityAnnouncementComponent*        ProximityAnnouncementComponent;                    // 0x930(0x8)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestSetCompassTargetBaseStepDesc: public TaleQuestStepDesc
{
public:
	char                                                         TargetUpdateReason;                                // 0x80(0x1)
};


// Size 0x148 (Full Size[0x210] - InheritedSize[0xc8]
class EnchantedCompassProximityAnnouncementComponent: public ActorComponent
{
public:
	class WwiseEvent*                                            StartAnnouncingEvent;                              // 0xc8(0x8)
	class WwiseEvent*                                            StopAnnouncingEvent;                               // 0xd0(0x8)
	float                                                        MaxFrequencyDistanceSquared;                       // 0xd8(0x4)
	interface                                                    WielderOrientation;                                // 0xe0(0x10)
	interface                                                    WielderWwiseEmitterInterface;                      // 0xf0(0x10)
	interface                                                    OwnerWieldableInterface;                           // 0x100(0x10)
	interface                                                    ObjectMessagingDispatcher;                         // 0x110(0x10)
	bool                                                         IsSettingEnabled;                                  // 0x120(0x1)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableGuid                                     TargetID;                                          // 0x80(0x30)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassAddTrackedLocationStep: public TaleQuestStep
{
public:
	class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                              // 0x98(0x8)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	struct QuestVariableGuid                                     TargetID;                                          // 0xb0(0x30)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToActorStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct QuestVariableActor                                    TargetActor;                                       // 0x88(0x30)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToPointStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct QuestVariableOrientedPoint                            TargetPoint;                                       // 0x88(0x30)
};


