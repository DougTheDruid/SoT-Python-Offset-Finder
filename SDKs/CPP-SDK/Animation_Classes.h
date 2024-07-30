#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Animation_Structs.h"


// Size 0xc0 (Full Size[0x500] - InheritedSize[0x440]
class CosmeticItemAnimationInstance: public AnimInstance
{
public:
	class CosmeticItemAnimationSetDataAsset*                     AnimationDataSet;                                  // 0x448(0x8)
	class AnimMontage*                                           ActiveMontage;                                     // 0x450(0x8)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class AnimationDataStore: public Object
{
public:
	TArray<struct AnimationDataStoreEntry>                       Data;                                              // 0x40(0x10)
	TArray<struct AnimationDataStoreLoadingEntry>                LoadingData;                                       // 0x50(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CustomAnimationMontageDefinitionListingDataAsset: public DataAsset
{
public:
	TArray<struct CustomAnimationMontageDefinitionEntry>         Entries;                                           // 0x28(0x10)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class AnimationEditorSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  CustomAnimationMontageIdListings;                  // 0x38(0x10)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class AnimNotify_ToggleIK: public AnimNotify
{
public:
	TArray<char>                                                 IKLimbsToAdjust;                                   // 0x38(0x10)
	bool                                                         Enabled;                                           // 0x48(0x1)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class AnimNotify_PlayAnimationForCosmetic: public AnimNotify
{
public:
	char                                                         CosmeticLocation;                                  // 0x38(0x1)
	class AnimSequenceBase*                                      CosmeticItemAnimation;                             // 0x40(0x8)
	bool                                                         Looping;                                           // 0x48(0x1)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WaitForAnimationStateExitProxy: public Object
{
public:
	multicastinlinedelegate                                      OnStateExit;                                       // 0x28(0x10)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_DestroyCosmeticItem: public AnimNotify
{
public:
	char                                                         DestroyLocation;                                   // 0x38(0x1)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class CosmeticItemAnimationDataAsset: public DataAsset
{
public:
	struct FName                                                 WieldSockets;                                      // 0x28(0x8)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_StateComplete: public AnimNotify
{
public:
	class UClass*                                                CompletedStateId;                                  // 0x38(0x8)
};


// Size 0x220 (Full Size[0x660] - InheritedSize[0x440]
class CharacterAnimationInstance: public AnimInstance
{
public:
	struct CharacterAnimationIKUpdateParams                      IKLeftHandUpdateParams;                            // 0x450(0x40)
	struct CharacterAnimationIKUpdateParams                      IKRightHandUpdateParams;                           // 0x490(0x40)
	struct FName                                                 RightHandIKSocketName;                             // 0x4d0(0x8)
	struct FName                                                 LeftHandIKSocketName;                              // 0x4d8(0x8)
	struct LimbIK                                                RightHandIK;                                       // 0x4e0(0x60)
	struct LimbIK                                                LeftHandIK;                                        // 0x540(0x60)
	struct LimbIK                                                RightFootIK;                                       // 0x5a0(0x60)
	struct LimbIK                                                LeftFootIK;                                        // 0x600(0x60)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AnimNotifyCondition_FeatureConfigValidation: public AnimNotifyCondition
{
public:
	struct FName                                                 Feature;                                           // 0x28(0x8)
	bool                                                         TriggerWhenDisabled;                               // 0x30(0x1)
};


// Size 0x48 (Full Size[0x110] - InheritedSize[0xc8]
class NetworkSyncedAnimationComponent: public ActorComponent
{
public:
	float                                                        PlayRateAdjustMaxTimeDelta;                        // 0xc8(0x4)
	float                                                        PlayRateAdjustMaxPercentageToSpeedUpPlayRate;      // 0xcc(0x4)
	float                                                        PlayRateAdjustMaxPercentageToSlowDownPlayRate;     // 0xd0(0x4)
	float                                                        ReplicatedAnimationProgression;                    // 0xd4(0x4)
	int                                                          ReplicatedPlayingAnimationIndex;                   // 0xd8(0x4)
	float                                                        ReplicatedPlayRate;                                // 0xdc(0x4)
	class AnimInstance*                                          AnimInstance;                                      // 0xe8(0x8)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_SwitchCosmeticItemAttachment: public AnimNotify
{
public:
	char                                                         PreviousLocation;                                  // 0x38(0x1)
	char                                                         NewLocation;                                       // 0x39(0x1)
};


// Size 0x68 (Full Size[0x98] - InheritedSize[0x30]
class AnimNotifyState_ToggleIK: public AnimNotifyState
{
public:
	TArray<char>                                                 IKLimbsToAdjust;                                   // 0x30(0x10)
	bool                                                         Enabled;                                           // 0x40(0x1)
};


// Size 0x28 (Full Size[0x58] - InheritedSize[0x30]
class AnimNotifyState_PropagateCurveValuesToMaterials: public AnimNotifyState
{
public:
	TArray<struct CurveUpdateValues>                             CurveValues;                                       // 0x30(0x10)
	bool                                                         DoNotPropagteCurveValues;                          // 0x40(0x1)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class WaitForAnimationStateEntryProxy: public Object
{
public:
	multicastinlinedelegate                                      OnReachedState;                                    // 0x28(0x10)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class AnimNotify_DetachAndMaintainWorldPosition: public AnimNotify
{
public:
	char                                                         CurrentLocation;                                   // 0x38(0x1)
	struct Vector                                                PreviewLocationOffset;                             // 0x3c(0xc)
	float                                                        PreviewScaleMultiplier;                            // 0x48(0x4)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_ReattachCosmeticItem: public AnimNotify
{
public:
	char                                                         CurrentLocation;                                   // 0x38(0x1)
	char                                                         NewLocation;                                       // 0x39(0x1)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AnimationDataStoreAsset: public DataAsset
{
public:
	TArray<struct AnimationDataStoreAssetEntry>                  AssetRefs;                                         // 0x28(0x10)
};


// Size 0x68 (Full Size[0x130] - InheritedSize[0xc8]
class CosmeticItemAnimationComponent: public ActorComponent
{
public:
	map                                                          CosmeticItems;                                     // 0xd0(0x50)
	class CosmeticItemAnimationDataAsset*                        DataAsset;                                         // 0x120(0x8)
};


// Size 0xc8 (Full Size[0x190] - InheritedSize[0xc8]
class AnimationDataStoreComponent: public ActorComponent
{
public:
	class AnimationDataStoreWeakReferenceAsset*                  AnimationDataStoreWeakReferences;                  // 0xd0(0x8)
};


// Size 0x508 (Full Size[0x5d0] - InheritedSize[0xc8]
class TransformBlendCurveComponent: public ActorComponent
{
public:
	struct TransformBlendCurve                                   Curve;                                             // 0xd0(0x500)
};


// Size 0x80 (Full Size[0x148] - InheritedSize[0xc8]
class CustomAnimationMontageComponent: public ActorComponent
{
public:
	struct CustomAnimationMontageComponentReplicatedData         ReplicatedData;                                    // 0xd0(0xc)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class WeightedAnimationLoadOnDemandDataAsset: public DataAsset
{
public:
	TArray<struct WeightedAnimationData>                         WeightedAnimationList;                             // 0x28(0x10)
	class AnimSequence*                                          FallBackAnimation;                                 // 0x38(0x8)
};


// Size 0x20 (Full Size[0x50] - InheritedSize[0x30]
class AnimNotifyState_SpawnCosmeticItem: public AnimNotifyState
{
public:
	class UClass*                                                CosmeticItemToSpawn;                               // 0x30(0x8)
	char                                                         SpawnLocation;                                     // 0x38(0x1)
	class CosmeticItemAnimationSetDataAsset*                     CosmeticItemAnimationDataSet;                      // 0x40(0x8)
	bool                                                         SpawnHidden;                                       // 0x48(0x1)
	bool                                                         DestroyOnEnd;                                      // 0x49(0x1)
	bool                                                         OverrideDestroyLocation;                           // 0x4a(0x1)
	char                                                         DestroyLocation;                                   // 0x4b(0x1)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_SetCosmeticItemVisibility: public AnimNotify
{
public:
	char                                                         ItemLocation;                                      // 0x38(0x1)
	bool                                                         Visible;                                           // 0x39(0x1)
	bool                                                         RenderShadow;                                      // 0x3a(0x1)
	bool                                                         RenderShadowWhenHidden;                            // 0x3b(0x1)
	bool                                                         UpdateForRole;                                     // 0x3c(0x1)
	char                                                         UpdateRole;                                        // 0x3d(0x1)
};


// Size 0xf8 (Full Size[0x120] - InheritedSize[0x28]
class WeightedAnimSequenceLoadOnDemand: public Object
{
public:
	class AnimSequence*                                          FallBackAnimation;                                 // 0x28(0x8)
	TArray<struct WeightedAnimationData>                         WeightedAnimationList;                             // 0x30(0x10)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_PlayMontage: public AnimNotify
{
public:
	class AnimMontage*                                           MontageToPlay;                                     // 0x38(0x8)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class SyncGroupAnimMetaData: public AnimMetaData
{
public:
	struct FName                                                 SyncGroup;                                         // 0x28(0x8)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class AnimNotifyState_HideMeshByBoneForDuration: public AnimNotifyState
{
public:
	struct FName                                                 BoneName;                                          // 0x30(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AnimationDataStoreWeakReferenceAsset: public DataAsset
{
public:
	TArray<struct AnimationDataStoreAssetWeakReferenceEntry>     AssetWeakRefs;                                     // 0x28(0x10)
};


// Size 0xb0 (Full Size[0x478] - InheritedSize[0x3c8]
class CosmeticItemActor: public Actor
{
public:
	class SkeletalMeshComponent*                                 MeshComponent;                                     // 0x3d0(0x8)
};


// Size 0x20 (Full Size[0x58] - InheritedSize[0x38]
class AnimNotify_SpawnCosmeticItem: public AnimNotify
{
public:
	class UClass*                                                ItemSpawnClass;                                    // 0x38(0x8)
	char                                                         SpawnLocation;                                     // 0x40(0x1)
	class CosmeticItemAnimationSetDataAsset*                     CosmeticItemAnimationDataSet;                      // 0x48(0x8)
	bool                                                         SpawnHidden;                                       // 0x50(0x1)
	bool                                                         SpawnForRole;                                      // 0x51(0x1)
	char                                                         SpawnRole;                                         // 0x52(0x1)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class CosmeticItemAnimationSetDataAsset: public DataAsset
{
public:
	struct CosmeticItemAnimationSetLoopData                      LoopData;                                          // 0x28(0x20)
	TArray<class AnimSequenceBase*>                              OneShotSequences;                                  // 0x48(0x10)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class AnimNotify_SetLookAtEnabled: public AnimNotify
{
public:
	bool                                                         Enabled;                                           // 0x38(0x1)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class CustomAnimationMontageIdListingDataAsset: public DataAsset
{
public:
	TArray<struct Name>                                          MontageIds;                                        // 0x28(0x10)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class CustomAnimationMontageDefinitionDataAsset: public DataAsset
{
public:
	struct FName                                                 MontageId;                                         // 0x28(0x8)
	char                                                         MontageType;                                       // 0x30(0x1)
	class AnimMontage*                                           MontageData;                                       // 0x38(0x8)
	struct CustomAnimationMontageStagedLoopingData               LoopingData;                                       // 0x40(0x28)
	bool                                                         Interrupts;                                        // 0x68(0x1)
};


// Size 0x90 (Full Size[0x6f0] - InheritedSize[0x660]
class PreviewCharacterAnimationInstance: public CharacterAnimationInstance
{
public:
	class AnimMontage*                                           ActiveMontage;                                     // 0x660(0x8)
};


