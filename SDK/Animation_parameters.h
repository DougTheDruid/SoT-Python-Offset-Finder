#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
struct UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params
{
	struct FAnimDataEntryStructWrapper                 Wrapper;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	class UScriptStruct*                               DestinationStruct;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGenericStruct                              Value;                                                     // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animation.AnimationDataFunctionLib.MakeAnimationData
struct UAnimationDataFunctionLib_MakeAnimationData_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimationData*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
struct UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params
{
	class UAnimationData*                              AnimationDataObject;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScriptStruct*                               TheClass;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimDataEntryStructWrapper                 ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
struct UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params
{
	class UClass*                                      InClass;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Animation.AnimationDataStoreAsset.LookupAnimationData
struct UAnimationDataStoreAsset_LookupAnimationData_Params
{
	class UClass*                                      AnimDataId;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimationData*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
struct UAnimationDataStoreAsset_GetAnimationDataClass_Params
{
	struct FAnimationDataStoreAssetEntry               Entry;                                                     // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
struct UAnimationDataStoreInterface_GetAnimationDataForId_Params
{
	class UClass*                                      AnimDataId;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAnimationData*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem
struct UCosmeticItemAnimationComponent_SpawnCosmeticItem_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ObjectToSpawn;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EWieldAnimationLocation>        SpawnLocation;                                             // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCosmeticItemAnimationSetDataAsset*          CosmeticData;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnHidden;                                               // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems
struct UCosmeticItemAnimationComponent_DestroyAllCosmeticItems_Params
{
};

// Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData
struct UCustomAnimationMontageComponent_OnRep_ReplicatedData_Params
{
	struct FCustomAnimationMontageComponentReplicatedData PriorData;                                                 // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
struct ULimbIKFunctionLibrary_SetTranslationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              InRotationStrength;                                        // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetTransform
struct ULimbIKFunctionLibrary_SetTransform_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	struct FTransform                                  InTransform;                                               // 0x0060(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
};

// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
struct ULimbIKFunctionLibrary_SetRotationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              InRotationStrength;                                        // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetParentBone
struct ULimbIKFunctionLibrary_SetParentBone_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	struct FName                                       Bone;                                                      // 0x0060(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetIKSpace
struct ULimbIKFunctionLibrary_SetIKSpace_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	TEnumAsByte<Animation_ELimbIKSpace>                IKSpace;                                                   // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetEnabled
struct ULimbIKFunctionLibrary_SetEnabled_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	bool                                               Enabled;                                                   // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Animation_ELimbIKSpace>                IKSpace;                                                   // 0x0061(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ParentBone;                                                // 0x0064(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
struct ULimbIKFunctionLibrary_SetBlendOutSpeed_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              BlendOutSpeed;                                             // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
struct ULimbIKFunctionLibrary_SetBlendInSpeed_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              BlendInSpeed;                                              // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
struct ULimbIKFunctionLibrary_SetAnimationOverride_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	bool                                               AnimationOverride;                                         // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
struct ULimbIKFunctionLibrary_SetAlphaTarget_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              AlphaTarget;                                               // 0x0060(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.IsEnabled
struct ULimbIKFunctionLibrary_IsEnabled_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
struct ULimbIKFunctionLibrary_GetTranslationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.GetTransform
struct ULimbIKFunctionLibrary_GetTransform_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                               // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
struct ULimbIKFunctionLibrary_GetRotationStrength_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.GetParentBone
struct ULimbIKFunctionLibrary_GetParentBone_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                               // 0x0060(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.GetIKSpace
struct ULimbIKFunctionLibrary_GetIKSpace_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	TEnumAsByte<Animation_ELimbIKSpace>                ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
struct ULimbIKFunctionLibrary_GetCurrentAlpha_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
struct ULimbIKFunctionLibrary_GetAnimationOverride_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
struct ULimbIKFunctionLibrary_GetAlphaTarget_Params
{
	struct FLimbIK                                     LimbIK;                                                    // 0x0000(0x0060)  (Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
struct ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
struct ULocomotionFunctionLib_UpdateControllerSpineRotation_Params
{
	struct FRotator                                    CharacterRotation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              AngleSpeedMax;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleSpeedMin;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
struct ULocomotionFunctionLib_UpdateCharacterSpeed_Params
{
	struct FVector                                     Velocity;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              CurrentMaxWalkSpeed;                                       // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WantedMovementSpeed;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseMaxWalkSpeed;                                          // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedBlendValue;                                           // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSwimming;                                                // 0x001C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DeadZone;                                                  // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorVelocityData                          ReturnValue;                                               // 0x0024(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
struct ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params
{
	struct FRotator                                    CharacterRotation;                                         // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              LargeRate;                                                 // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentCharacterYaw;                                       // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
struct UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params
{
};

// Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
struct UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params
{
};

// Function Animation.TurningFunctionLib.TurningUpdate
struct UTurningFunctionLib_TurningUpdate_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CharacterMoving;                                           // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DeadZone;                                                  // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              TurnRate;                                                  // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayedCounter;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CounterMax;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TurningLeft;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
struct UWaitForAnimationStateEntryProxy_OnEnteredState_Params
{
	struct FName                                       path;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
struct UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
struct UWaitForAnimationStateEntryProxy_CreateProxy_Params
{
	class UAnimInstance*                               AnimInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetPath;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaitForAnimationStateEntryProxy*            ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.WaitForAnimationStateExitProxy.OnExitState
struct UWaitForAnimationStateExitProxy_OnExitState_Params
{
	struct FName                                       path;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
struct UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params
{
};

// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
struct UWaitForAnimationStateExitProxy_CreateProxy_Params
{
	class UAnimInstance*                               AnimInstance;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetPath;                                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaitForAnimationStateExitProxy*             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise
struct UWeightedAnimSequenceLoadOnDemand_Initialise_Params
{
	class UWeightedAnimationLoadOnDemandDataAsset*     InAnimationData;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand
struct UWeightedAnimSequenceLoadOnDemand_CreateNewWeightedAnimSequenceLoadOnDemand_Params
{
	class UWeightedAnimSequenceLoadOnDemand*           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Animation.DockableInterface.HandleDestroy
struct UDockableInterface_HandleDestroy_Params
{
};

// Function Animation.DockableInterface.GetDockableInfo
struct UDockableInterface_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
