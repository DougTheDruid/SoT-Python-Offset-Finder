// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FLimbIK::AfterRead()
{
}

void FLimbIK::BeforeDelete()
{
}

void FCharacterAnimationIKUpdateParams::AfterRead()
{
}

void FCharacterAnimationIKUpdateParams::BeforeDelete()
{
}

void FAnimDataEntryStructWrapper::AfterRead()
{
}

void FAnimDataEntryStructWrapper::BeforeDelete()
{
}

void FAnimationDataStoreEntry::AfterRead()
{
	READ_PTR_FULL(AnimDataId, UClass);
	READ_PTR_FULL(AnimData, UAnimationData);
	READ_PTR_FULL(AnimServerData, UAnimationServerData);
}

void FAnimationDataStoreEntry::BeforeDelete()
{
	DELE_PTR_FULL(AnimDataId);
	DELE_PTR_FULL(AnimData);
	DELE_PTR_FULL(AnimServerData);
}

void FAnimationDataStoreLoadingEntry::AfterRead()
{
	READ_PTR_FULL(AnimDataId, UClass);
}

void FAnimationDataStoreLoadingEntry::BeforeDelete()
{
	DELE_PTR_FULL(AnimDataId);
}

void FAnimationDataStoreAssetEntry::AfterRead()
{
	READ_PTR_FULL(AnimDataId, UClass);
	READ_PTR_FULL(AnimDataTypeCooked, UClass);
	READ_PTR_FULL(AnimServerData, UAnimationServerData);
}

void FAnimationDataStoreAssetEntry::BeforeDelete()
{
	DELE_PTR_FULL(AnimDataId);
	DELE_PTR_FULL(AnimDataTypeCooked);
	DELE_PTR_FULL(AnimServerData);
}

void FAnimationDataStoreAssetWeakReferenceEntry::AfterRead()
{
	READ_PTR_FULL(AnimDataId, UClass);
}

void FAnimationDataStoreAssetWeakReferenceEntry::BeforeDelete()
{
	DELE_PTR_FULL(AnimDataId);
}

void FCurveUpdateValues::AfterRead()
{
}

void FCurveUpdateValues::BeforeDelete()
{
}

void FCosmeticItems::AfterRead()
{
}

void FCosmeticItems::BeforeDelete()
{
}

void FCosmeticItemAnimationSetLoopData::AfterRead()
{
	READ_PTR_FULL(Into, UAnimSequenceBase);
	READ_PTR_FULL(Loop, UAnimSequenceBase);
}

void FCosmeticItemAnimationSetLoopData::BeforeDelete()
{
	DELE_PTR_FULL(Into);
	DELE_PTR_FULL(Loop);
}

void FCustomAnimationMontageId::AfterRead()
{
}

void FCustomAnimationMontageId::BeforeDelete()
{
}

void FCustomAnimationMontageComponentReplicatedData::AfterRead()
{
}

void FCustomAnimationMontageComponentReplicatedData::BeforeDelete()
{
}

void FCustomAnimationMontageStagedLoopingData::AfterRead()
{
	READ_PTR_FULL(Into, UAnimMontage);
}

void FCustomAnimationMontageStagedLoopingData::BeforeDelete()
{
	DELE_PTR_FULL(Into);
}

void FCustomAnimationMontageDefinitionEntry::AfterRead()
{
}

void FCustomAnimationMontageDefinitionEntry::BeforeDelete()
{
}

void FDockableInfo::AfterRead()
{
	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void FDockableInfo::BeforeDelete()
{
	DELE_PTR_FULL(SceneComponent);
}

void FDocker::AfterRead()
{
}

void FDocker::BeforeDelete()
{
}

void FActorVelocityData::AfterRead()
{
}

void FActorVelocityData::BeforeDelete()
{
}

void FTransformBlendCurve::AfterRead()
{
}

void FTransformBlendCurve::BeforeDelete()
{
}

void FWeightedAnimationData::AfterRead()
{
}

void FWeightedAnimationData::BeforeDelete()
{
}

void FHitReactionAnimationData::AfterRead()
{
	READ_PTR_FULL(HitReactBlendSpace, UBlendSpace1D);
}

void FHitReactionAnimationData::BeforeDelete()
{
	DELE_PTR_FULL(HitReactBlendSpace);
}

void FEventCosmeticItemAttachmentSwitched::AfterRead()
{
	READ_PTR_FULL(Owner, AActor);
}

void FEventCosmeticItemAttachmentSwitched::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
}

void FEventCosmeticItemSpawnedOwnerNotification::AfterRead()
{
	READ_PTR_FULL(CosmeticItemActor, AActor);
}

void FEventCosmeticItemSpawnedOwnerNotification::BeforeDelete()
{
	DELE_PTR_FULL(CosmeticItemActor);
}

void FEventCosmeticItemSpawned::AfterRead()
{
	READ_PTR_FULL(Owner, AActor);
	READ_PTR_FULL(CosmeticData, UCosmeticItemAnimationSetDataAsset);
}

void FEventCosmeticItemSpawned::BeforeDelete()
{
	DELE_PTR_FULL(Owner);
	DELE_PTR_FULL(CosmeticData);
}

void FEventDockableObjectDestroyed::AfterRead()
{
}

void FEventDockableObjectDestroyed::BeforeDelete()
{
}

void FEventAnimationHappyReact::AfterRead()
{
}

void FEventAnimationHappyReact::BeforeDelete()
{
}

void FEventHitReactAnimationFinished::AfterRead()
{
}

void FEventHitReactAnimationFinished::BeforeDelete()
{
}

void FEventHitReactAnimationRequested::AfterRead()
{
}

void FEventHitReactAnimationRequested::BeforeDelete()
{
}

void FHitReactionAnimationState::AfterRead()
{
}

void FHitReactionAnimationState::BeforeDelete()
{
}

void FAnimationLookAtParams::AfterRead()
{
}

void FAnimationLookAtParams::BeforeDelete()
{
}

void FAnimationLookAt::AfterRead()
{
}

void FAnimationLookAt::BeforeDelete()
{
}

void FEventAnimationLookAtUpdated::AfterRead()
{
}

void FEventAnimationLookAtUpdated::BeforeDelete()
{
}

void FIKLookAtParams::AfterRead()
{
}

void FIKLookAtParams::BeforeDelete()
{
}

void FAnimNode_WeightedLoadOnDemandSquencePlayer::AfterRead()
{
	FAnimNode_AssetPlayerBase::AfterRead();

	READ_PTR_FULL(WeightedAnimSequenceLoadOnDemand, UWeightedAnimSequenceLoadOnDemand);
	READ_PTR_FULL(CurrentSequence, UAnimSequence);
	READ_PTR_FULL(NextSequence, UAnimSequence);
}

void FAnimNode_WeightedLoadOnDemandSquencePlayer::BeforeDelete()
{
	FAnimNode_AssetPlayerBase::BeforeDelete();

	DELE_PTR_FULL(WeightedAnimSequenceLoadOnDemand);
	DELE_PTR_FULL(CurrentSequence);
	DELE_PTR_FULL(NextSequence);
}

void FEventCustomAnimationMontageExitRequested::AfterRead()
{
}

void FEventCustomAnimationMontageExitRequested::BeforeDelete()
{
}

void FEventCustomAnimationMontageRequested::AfterRead()
{
}

void FEventCustomAnimationMontageRequested::BeforeDelete()
{
}

void FCustomAnimationMontageStateMachine::AfterRead()
{
	READ_PTR_FULL(ActiveState, UCustomAnimationMontageDefinitionDataAsset);
	READ_PTR_FULL(PendingState, UCustomAnimationMontageDefinitionDataAsset);
	READ_PTR_FULL(ActiveMontage, UAnimMontage);
}

void FCustomAnimationMontageStateMachine::BeforeDelete()
{
	DELE_PTR_FULL(ActiveState);
	DELE_PTR_FULL(PendingState);
	DELE_PTR_FULL(ActiveMontage);
}

void FEventPreviewCharacterAnimationRequest::AfterRead()
{
	READ_PTR_FULL(AnimationToPlay, UAnimationAsset);
}

void FEventPreviewCharacterAnimationRequest::BeforeDelete()
{
	DELE_PTR_FULL(AnimationToPlay);
}

void FAnimationStateCompleteEvent::AfterRead()
{
	READ_PTR_FULL(CompletedStateId, UClass);
}

void FAnimationStateCompleteEvent::BeforeDelete()
{
	DELE_PTR_FULL(CompletedStateId);
}

void FWeightedAnimationTimeout::AfterRead()
{
}

void FWeightedAnimationTimeout::BeforeDelete()
{
}

void FWeightedAnimationTimeoutSelector::AfterRead()
{
}

void FWeightedAnimationTimeoutSelector::BeforeDelete()
{
}

void UCharacterAnimationInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UCharacterAnimationInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

void UAnimationData::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAnimationServerData::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationServerData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAIAnimationInstanceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIAnimationInstanceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAnimationDataConsumerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAnimationDataConsumerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimDataEntryStructWrapper Wrapper                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UScriptStruct*           DestinationStruct              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGenericStruct          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimationDataFunctionLib::STATIC_UnwrapAnimDataEntryStruct(const struct FAnimDataEntryStructWrapper& Wrapper, class UScriptStruct* DestinationStruct, struct FGenericStruct* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.UnwrapAnimDataEntryStruct");

	UAnimationDataFunctionLib_UnwrapAnimDataEntryStruct_Params params;
	params.Wrapper = Wrapper;
	params.DestinationStruct = DestinationStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;


	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.MakeAnimationData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimationData* UAnimationDataFunctionLib::STATIC_MakeAnimationData(class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.MakeAnimationData");

	UAnimationDataFunctionLib_MakeAnimationData_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationData*          AnimationDataObject            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScriptStruct*           TheClass                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimDataEntryStructWrapper ReturnValue                    (Parm, OutParm, ReturnParm)
struct FAnimDataEntryStructWrapper UAnimationDataFunctionLib::STATIC_GetAnimDataEntryStructAsStructWrapper(class UAnimationData* AnimationDataObject, class UScriptStruct* TheClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.GetAnimDataEntryStructAsStructWrapper");

	UAnimationDataFunctionLib_GetAnimDataEntryStructAsStructWrapper_Params params;
	params.AnimationDataObject = AnimationDataObject;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UAnimationDataFunctionLib::STATIC_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs(class UClass* InClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataFunctionLib.CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs");

	UAnimationDataFunctionLib_CheckAnimDataClassTypeForDuplicateAnimDataEntryStructs_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAnimationDataFunctionLib::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAnimationDataFunctionLib::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UAnimationDataOverriderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAnimationDataOverriderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAnimationDataStoreId::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationDataStoreId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAnimationDataStoreOverrideId::AfterRead()
{
	UAnimationDataStoreId::AfterRead();

}

void UAnimationDataStoreOverrideId::BeforeDelete()
{
	UAnimationDataStoreId::BeforeDelete();

}

void UAnimationDataStore::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationDataStore::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Animation.AnimationDataStoreAsset.LookupAnimationData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimationData* UAnimationDataStoreAsset::LookupAnimationData(class UClass* AnimDataId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.LookupAnimationData");

	UAnimationDataStoreAsset_LookupAnimationData_Params params;
	params.AnimDataId = AnimDataId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.AnimationDataStoreAsset.GetAnimationDataClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnimationDataStoreAssetEntry Entry                          (Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* UAnimationDataStoreAsset::STATIC_GetAnimationDataClass(struct FAnimationDataStoreAssetEntry* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreAsset.GetAnimationDataClass");

	UAnimationDataStoreAsset_GetAnimationDataClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entry != nullptr)
		*Entry = params.Entry;


	return params.ReturnValue;
}


void UAnimationDataStoreAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAnimationDataStoreAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAnimationDataStoreWeakReferenceAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAnimationDataStoreWeakReferenceAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAnimationDataStoreLoaderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAnimationDataStoreLoaderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAnimationDataStoreComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(AnimationDataStoreWeakReferences, UAnimationDataStoreWeakReferenceAsset);
}

void UAnimationDataStoreComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(AnimationDataStoreWeakReferences);
}

// Function Animation.AnimationDataStoreInterface.GetAnimationDataForId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AnimDataId                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAnimationData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimationData* UAnimationDataStoreInterface::GetAnimationDataForId(class UClass* AnimDataId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.AnimationDataStoreInterface.GetAnimationDataForId");

	UAnimationDataStoreInterface_GetAnimationDataForId_Params params;
	params.AnimDataId = AnimDataId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAnimationDataStoreInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAnimationDataStoreInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAnimationEditorSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UAnimationEditorSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UAnimationLookAtInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAnimationLookAtInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAnimationStateId::AfterRead()
{
	UObject::AfterRead();

}

void UAnimationStateId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAnimNotify_DestroyAllCosmeticItems::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_DestroyAllCosmeticItems::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_DestroyCosmeticItem::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_DestroyCosmeticItem::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_PlayAnimationForCosmetic::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(CosmeticItemAnimation, UAnimSequenceBase);
}

void UAnimNotify_PlayAnimationForCosmetic::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(CosmeticItemAnimation);
}

void UAnimNotify_PlayMontage::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(MontageToPlay, UAnimMontage);
}

void UAnimNotify_PlayMontage::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(MontageToPlay);
}

void UAnimNotify_SetCosmeticItemVisibility::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_SetCosmeticItemVisibility::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_SetLookAtEnabled::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_SetLookAtEnabled::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_SpawnCosmeticItem::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(ItemSpawnClass, UClass);
	READ_PTR_FULL(CosmeticItemAnimationDataSet, UCosmeticItemAnimationSetDataAsset);
}

void UAnimNotify_SpawnCosmeticItem::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(ItemSpawnClass);
	DELE_PTR_FULL(CosmeticItemAnimationDataSet);
}

void UAnimNotify_StateComplete::AfterRead()
{
	UAnimNotify::AfterRead();

	READ_PTR_FULL(CompletedStateId, UClass);
}

void UAnimNotify_StateComplete::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

	DELE_PTR_FULL(CompletedStateId);
}

void UAnimNotify_SwitchCosmeticItemAttachment::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_SwitchCosmeticItemAttachment::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotify_ToggleIK::AfterRead()
{
	UAnimNotify::AfterRead();

}

void UAnimNotify_ToggleIK::BeforeDelete()
{
	UAnimNotify::BeforeDelete();

}

void UAnimNotifyCondition_FeatureConfigValidation::AfterRead()
{
	UAnimNotifyCondition::AfterRead();

}

void UAnimNotifyCondition_FeatureConfigValidation::BeforeDelete()
{
	UAnimNotifyCondition::BeforeDelete();

}

void UAnimNotifyState_PropagateCurveValuesToMaterials::AfterRead()
{
	UAnimNotifyState::AfterRead();

}

void UAnimNotifyState_PropagateCurveValuesToMaterials::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

}

void UAnimNotifyState_SetLookAtDisabledForDuration::AfterRead()
{
	UAnimNotifyState::AfterRead();

}

void UAnimNotifyState_SetLookAtDisabledForDuration::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

}

void UAnimNotifyState_SetLookAtEnabledForDuration::AfterRead()
{
	UAnimNotifyState::AfterRead();

}

void UAnimNotifyState_SetLookAtEnabledForDuration::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

}

void UAnimNotifyState_SetMeshInvisibleForDuration::AfterRead()
{
	UAnimNotifyState::AfterRead();

}

void UAnimNotifyState_SetMeshInvisibleForDuration::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

}

void UAnimNotifyState_SpawnCosmeticItem::AfterRead()
{
	UAnimNotifyState::AfterRead();

	READ_PTR_FULL(CosmeticItemToSpawn, UClass);
	READ_PTR_FULL(CosmeticItemAnimationDataSet, UCosmeticItemAnimationSetDataAsset);
}

void UAnimNotifyState_SpawnCosmeticItem::BeforeDelete()
{
	UAnimNotifyState::BeforeDelete();

	DELE_PTR_FULL(CosmeticItemToSpawn);
	DELE_PTR_FULL(CosmeticItemAnimationDataSet);
}

void UAthenaAnimationControllableSocketsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAnimationControllableSocketsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCharacterIKInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCharacterIKInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPreviewCharacterAnimationInstance::AfterRead()
{
	UCharacterAnimationInstance::AfterRead();

	READ_PTR_FULL(ActiveMontage, UAnimMontage);
}

void UPreviewCharacterAnimationInstance::BeforeDelete()
{
	UCharacterAnimationInstance::BeforeDelete();

	DELE_PTR_FULL(ActiveMontage);
}

void UClientSkeletalMeshComponent::AfterRead()
{
	USkeletalMeshComponent::AfterRead();

}

void UClientSkeletalMeshComponent::BeforeDelete()
{
	USkeletalMeshComponent::BeforeDelete();

}

void ACosmeticItemActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MeshComponent, USkeletalMeshComponent);
}

void ACosmeticItemActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MeshComponent);
}

void UCosmeticItemAnimationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCosmeticItemAnimationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ObjectToSpawn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Athena_EWieldAnimationLocation> SpawnLocation                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCosmeticItemAnimationSetDataAsset* CosmeticData                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SpawnHidden                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCosmeticItemAnimationComponent::SpawnCosmeticItem(class USkeletalMeshComponent* MeshComponent, class UClass* ObjectToSpawn, TEnumAsByte<Athena_EWieldAnimationLocation> SpawnLocation, class UCosmeticItemAnimationSetDataAsset* CosmeticData, bool SpawnHidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.CosmeticItemAnimationComponent.SpawnCosmeticItem");

	UCosmeticItemAnimationComponent_SpawnCosmeticItem_Params params;
	params.MeshComponent = MeshComponent;
	params.ObjectToSpawn = ObjectToSpawn;
	params.SpawnLocation = SpawnLocation;
	params.CosmeticData = CosmeticData;
	params.SpawnHidden = SpawnHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems
// (Native, Public, BlueprintCallable)
void UCosmeticItemAnimationComponent::DestroyAllCosmeticItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.CosmeticItemAnimationComponent.DestroyAllCosmeticItems");

	UCosmeticItemAnimationComponent_DestroyAllCosmeticItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCosmeticItemAnimationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DataAsset, UCosmeticItemAnimationDataAsset);
}

void UCosmeticItemAnimationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DataAsset);
}

void UCosmeticItemAnimationDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCosmeticItemAnimationDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCosmeticItemAnimationDataConsumerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCosmeticItemAnimationDataConsumerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCosmeticItemAnimationInstance::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(AnimationDataSet, UCosmeticItemAnimationSetDataAsset);
	READ_PTR_FULL(ActiveMontage, UAnimMontage);
}

void UCosmeticItemAnimationInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(AnimationDataSet);
	DELE_PTR_FULL(ActiveMontage);
}

void UCosmeticItemAnimationSetDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCosmeticItemAnimationSetDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCustomAnimationHandlerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomAnimationHandlerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCustomAnimationInstanceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomAnimationInstanceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCustomAnimationInstanceProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomAnimationInstanceProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCustomAnimationMontageInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomAnimationMontageInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FCustomAnimationMontageComponentReplicatedData PriorData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UCustomAnimationMontageComponent::OnRep_ReplicatedData(const struct FCustomAnimationMontageComponentReplicatedData& PriorData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.CustomAnimationMontageComponent.OnRep_ReplicatedData");

	UCustomAnimationMontageComponent_OnRep_ReplicatedData_Params params;
	params.PriorData = PriorData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCustomAnimationMontageComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UCustomAnimationMontageComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCustomAnimationMontageDefinitionDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(MontageData, UAnimMontage);
}

void UCustomAnimationMontageDefinitionDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(MontageData);
}

void UCustomAnimationMontageDefinitionListingDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCustomAnimationMontageDefinitionListingDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UCustomAnimationMontageIdListingDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCustomAnimationMontageIdListingDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function Animation.DockableInterface.HandleDestroy
// (Native, Public)
void UDockableInterface::HandleDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.HandleDestroy");

	UDockableInterface_HandleDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.DockableInterface.GetDockableInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FDockableInfo UDockableInterface::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockableInterface.GetDockableInfo");

	UDockableInterface_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDockableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDockableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.DockerBlueprintFunctions.UpdateDock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDockerBlueprintFunctions::STATIC_UpdateDock(struct FDocker* Docker, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.UpdateDock");

	UDockerBlueprintFunctions_UpdateDock_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

}


// Function Animation.DockerBlueprintFunctions.StartDockingWithActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DockDuration                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayAfterDocking              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDockerBlueprintFunctions::STATIC_StartDockingWithActor(struct FDocker* Docker, class AActor* Owner, class AActor* Target, float DockDuration, float DelayAfterDocking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.StartDockingWithActor");

	UDockerBlueprintFunctions_StartDockingWithActor_Params params;
	params.Owner = Owner;
	params.Target = Target;
	params.DockDuration = DockDuration;
	params.DelayAfterDocking = DelayAfterDocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

}


// Function Animation.DockerBlueprintFunctions.IsFullyDocked
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDockerBlueprintFunctions::STATIC_IsFullyDocked(struct FDocker* Docker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.IsFullyDocked");

	UDockerBlueprintFunctions_IsFullyDocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;


	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.IsDocking
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDockerBlueprintFunctions::STATIC_IsDocking(struct FDocker* Docker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.IsDocking");

	UDockerBlueprintFunctions_IsDocking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;


	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDocker                 Docker                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UDockerBlueprintFunctions::STATIC_GetTargetLocalOffset(const struct FDocker& Docker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.GetTargetLocalOffset");

	UDockerBlueprintFunctions_GetTargetLocalOffset_Params params;
	params.Docker = Docker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.DockerBlueprintFunctions.EndDock
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDocker                 Docker                         (Parm, OutParm, ReferenceParm)
void UDockerBlueprintFunctions::STATIC_EndDock(struct FDocker* Docker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.DockerBlueprintFunctions.EndDock");

	UDockerBlueprintFunctions_EndDock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Docker != nullptr)
		*Docker = params.Docker;

}


void UDockerBlueprintFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UDockerBlueprintFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UDockerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDockerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDockingAnimationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDockingAnimationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UIndexedPlayableMontagesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UIndexedPlayableMontagesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.LimbIKFunctionLibrary.SetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetTranslationStrength(struct FLimbIK* LimbIK, float InRotationStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTranslationStrength");

	ULimbIKFunctionLibrary_SetTranslationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FTransform              InTransform                    (ConstParm, Parm, IsPlainOldData, NoDestructor)
void ULimbIKFunctionLibrary::STATIC_SetTransform(struct FLimbIK* LimbIK, const struct FTransform& InTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetTransform");

	ULimbIKFunctionLibrary_SetTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          InRotationStrength             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetRotationStrength(struct FLimbIK* LimbIK, float InRotationStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetRotationStrength");

	ULimbIKFunctionLibrary_SetRotationStrength_Params params;
	params.InRotationStrength = InRotationStrength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FName                   Bone                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetParentBone(struct FLimbIK* LimbIK, const struct FName& Bone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetParentBone");

	ULimbIKFunctionLibrary_SetParentBone_Params params;
	params.Bone = Bone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<Animation_ELimbIKSpace> IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetIKSpace(struct FLimbIK* LimbIK, TEnumAsByte<Animation_ELimbIKSpace> IKSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetIKSpace");

	ULimbIKFunctionLibrary_SetIKSpace_Params params;
	params.IKSpace = IKSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Animation_ELimbIKSpace> IKSpace                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ParentBone                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetEnabled(struct FLimbIK* LimbIK, bool Enabled, TEnumAsByte<Animation_ELimbIKSpace> IKSpace, const struct FName& ParentBone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetEnabled");

	ULimbIKFunctionLibrary_SetEnabled_Params params;
	params.Enabled = Enabled;
	params.IKSpace = IKSpace;
	params.ParentBone = ParentBone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendOutSpeed                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetBlendOutSpeed(struct FLimbIK* LimbIK, float BlendOutSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendOutSpeed");

	ULimbIKFunctionLibrary_SetBlendOutSpeed_Params params;
	params.BlendOutSpeed = BlendOutSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          BlendInSpeed                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetBlendInSpeed(struct FLimbIK* LimbIK, float BlendInSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetBlendInSpeed");

	ULimbIKFunctionLibrary_SetBlendInSpeed_Params params;
	params.BlendInSpeed = BlendInSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           AnimationOverride              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULimbIKFunctionLibrary::STATIC_SetAnimationOverride(struct FLimbIK* LimbIK, bool AnimationOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAnimationOverride");

	ULimbIKFunctionLibrary_SetAnimationOverride_Params params;
	params.AnimationOverride = AnimationOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.SetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          AlphaTarget                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULimbIKFunctionLibrary::STATIC_SetAlphaTarget(struct FLimbIK* LimbIK, float AlphaTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.SetAlphaTarget");

	ULimbIKFunctionLibrary_SetAlphaTarget_Params params;
	params.AlphaTarget = AlphaTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;

}


// Function Animation.LimbIKFunctionLibrary.IsEnabled
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULimbIKFunctionLibrary::STATIC_IsEnabled(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.IsEnabled");

	ULimbIKFunctionLibrary_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTranslationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULimbIKFunctionLibrary::STATIC_GetTranslationStrength(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTranslationStrength");

	ULimbIKFunctionLibrary_GetTranslationStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform ULimbIKFunctionLibrary::STATIC_GetTransform(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetTransform");

	ULimbIKFunctionLibrary_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetRotationStrength
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULimbIKFunctionLibrary::STATIC_GetRotationStrength(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetRotationStrength");

	ULimbIKFunctionLibrary_GetRotationStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetParentBone
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName ULimbIKFunctionLibrary::STATIC_GetParentBone(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetParentBone");

	ULimbIKFunctionLibrary_GetParentBone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetIKSpace
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// TEnumAsByte<Animation_ELimbIKSpace> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Animation_ELimbIKSpace> ULimbIKFunctionLibrary::STATIC_GetIKSpace(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetIKSpace");

	ULimbIKFunctionLibrary_GetIKSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULimbIKFunctionLibrary::STATIC_GetCurrentAlpha(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetCurrentAlpha");

	ULimbIKFunctionLibrary_GetCurrentAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAnimationOverride
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULimbIKFunctionLibrary::STATIC_GetAnimationOverride(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAnimationOverride");

	ULimbIKFunctionLibrary_GetAnimationOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.GetAlphaTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLimbIK                 LimbIK                         (Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULimbIKFunctionLibrary::STATIC_GetAlphaTarget(struct FLimbIK* LimbIK)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.GetAlphaTarget");

	ULimbIKFunctionLibrary_GetAlphaTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LimbIK != nullptr)
		*LimbIK = params.LimbIK;


	return params.ReturnValue;
}


// Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           InBool                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULimbIKFunctionLibrary::STATIC_ConvertBoolToAlpha(bool InBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LimbIKFunctionLibrary.ConvertBoolToAlpha");

	ULimbIKFunctionLibrary_ConvertBoolToAlpha_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULimbIKFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULimbIKFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void ULoadableAnimationsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void ULoadableAnimationsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          AngleSpeedMax                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AngleSpeedMin                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULocomotionFunctionLib::STATIC_UpdateControllerSpineRotation(const struct FRotator& CharacterRotation, float AngleSpeedMax, float AngleSpeedMin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateControllerSpineRotation");

	ULocomotionFunctionLib_UpdateControllerSpineRotation_Params params;
	params.CharacterRotation = CharacterRotation;
	params.AngleSpeedMax = AngleSpeedMax;
	params.AngleSpeedMin = AngleSpeedMin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          CurrentMaxWalkSpeed            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WantedMovementSpeed            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BaseMaxWalkSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpeedBlendValue                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSwimming                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DeadZone                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorVelocityData      ReturnValue                    (Parm, OutParm, ReturnParm)
struct FActorVelocityData ULocomotionFunctionLib::STATIC_UpdateCharacterSpeed(const struct FVector& Velocity, float CurrentMaxWalkSpeed, float WantedMovementSpeed, float BaseMaxWalkSpeed, float SpeedBlendValue, bool IsSwimming, float DeadZone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCharacterSpeed");

	ULocomotionFunctionLib_UpdateCharacterSpeed_Params params;
	params.Velocity = Velocity;
	params.CurrentMaxWalkSpeed = CurrentMaxWalkSpeed;
	params.WantedMovementSpeed = WantedMovementSpeed;
	params.BaseMaxWalkSpeed = BaseMaxWalkSpeed;
	params.SpeedBlendValue = SpeedBlendValue;
	params.IsSwimming = IsSwimming;
	params.DeadZone = DeadZone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                CharacterRotation              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          LargeRate                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CurrentCharacterYaw            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULocomotionFunctionLib::STATIC_UpdateCalculateRateAndCurrentYaw(const struct FRotator& CharacterRotation, float LargeRate, float* CurrentCharacterYaw, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.LocomotionFunctionLib.UpdateCalculateRateAndCurrentYaw");

	ULocomotionFunctionLib_UpdateCalculateRateAndCurrentYaw_Params params;
	params.CharacterRotation = CharacterRotation;
	params.LargeRate = LargeRate;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentCharacterYaw != nullptr)
		*CurrentCharacterYaw = params.CurrentCharacterYaw;


	return params.ReturnValue;
}


void ULocomotionFunctionLib::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULocomotionFunctionLib::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UNetworkSyncedAnimationInstanceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNetworkSyncedAnimationInstanceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex
// (Final, Native, Protected)
void UNetworkSyncedAnimationComponent::OnRep_PlayingAnimationIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_PlayingAnimationIndex");

	UNetworkSyncedAnimationComponent_OnRep_PlayingAnimationIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression
// (Final, Native, Protected)
void UNetworkSyncedAnimationComponent::OnRep_AnimationProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.NetworkSyncedAnimationComponent.OnRep_AnimationProgression");

	UNetworkSyncedAnimationComponent_OnRep_AnimationProgression_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNetworkSyncedAnimationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(AnimInstance, UAnimInstance);
}

void UNetworkSyncedAnimationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(AnimInstance);
}

void URemoteAnimPlayableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URemoteAnimPlayableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UServerAnimationDataStoreInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServerAnimationDataStoreInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USyncGroupAnimMetaData::AfterRead()
{
	UAnimMetaData::AfterRead();

}

void USyncGroupAnimMetaData::BeforeDelete()
{
	UAnimMetaData::BeforeDelete();

}

void UTransformBlendCurveComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UTransformBlendCurveComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function Animation.TurningFunctionLib.TurningUpdate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CharacterMoving                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DeadZone                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          TurnRate                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayedCounter                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CounterMax                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TurningLeft                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTurningFunctionLib::STATIC_TurningUpdate(float DeltaSeconds, bool CharacterMoving, bool* DeadZone, float TurnRate, float* DelayedCounter, float CounterMax, bool* TurningLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.TurningFunctionLib.TurningUpdate");

	UTurningFunctionLib_TurningUpdate_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.CharacterMoving = CharacterMoving;
	params.TurnRate = TurnRate;
	params.CounterMax = CounterMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DeadZone != nullptr)
		*DeadZone = params.DeadZone;
	if (DelayedCounter != nullptr)
		*DelayedCounter = params.DelayedCounter;
	if (TurningLeft != nullptr)
		*TurningLeft = params.TurningLeft;


	return params.ReturnValue;
}


void UTurningFunctionLib::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTurningFunctionLib::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState
// (Final, Native, Public)
// Parameters:
// struct FName                   path                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaitForAnimationStateEntryProxy::OnEnteredState(const struct FName& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnEnteredState");

	UWaitForAnimationStateEntryProxy_OnEnteredState_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated
// (Final, Native, Public)
void UWaitForAnimationStateEntryProxy::OnAnimationUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.OnAnimationUpdated");

	UWaitForAnimationStateEntryProxy_OnAnimationUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.WaitForAnimationStateEntryProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaitForAnimationStateEntryProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWaitForAnimationStateEntryProxy* UWaitForAnimationStateEntryProxy::STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateEntryProxy.CreateProxy");

	UWaitForAnimationStateEntryProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWaitForAnimationStateEntryProxy::AfterRead()
{
	UObject::AfterRead();

}

void UWaitForAnimationStateEntryProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function Animation.WaitForAnimationStateExitProxy.OnExitState
// (Final, Native, Public)
// Parameters:
// struct FName                   path                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWaitForAnimationStateExitProxy::OnExitState(const struct FName& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnExitState");

	UWaitForAnimationStateExitProxy_OnExitState_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated
// (Final, Native, Public)
void UWaitForAnimationStateExitProxy::OnAnimationUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.OnAnimationUpdated");

	UWaitForAnimationStateExitProxy_OnAnimationUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.WaitForAnimationStateExitProxy.CreateProxy
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   TargetPath                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaitForAnimationStateExitProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWaitForAnimationStateExitProxy* UWaitForAnimationStateExitProxy::STATIC_CreateProxy(class UAnimInstance* AnimInstance, const struct FName& TargetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WaitForAnimationStateExitProxy.CreateProxy");

	UWaitForAnimationStateExitProxy_CreateProxy_Params params;
	params.AnimInstance = AnimInstance;
	params.TargetPath = TargetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWaitForAnimationStateExitProxy::AfterRead()
{
	UObject::AfterRead();

}

void UWaitForAnimationStateExitProxy::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UWeightedAnimationLoadOnDemandDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(FallBackAnimation, UAnimSequence);
}

void UWeightedAnimationLoadOnDemandDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(FallBackAnimation);
}

// Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWeightedAnimationLoadOnDemandDataAsset* InAnimationData                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWeightedAnimSequenceLoadOnDemand::Initialise(class UWeightedAnimationLoadOnDemandDataAsset* InAnimationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WeightedAnimSequenceLoadOnDemand.Initialise");

	UWeightedAnimSequenceLoadOnDemand_Initialise_Params params;
	params.InAnimationData = InAnimationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWeightedAnimSequenceLoadOnDemand* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWeightedAnimSequenceLoadOnDemand* UWeightedAnimSequenceLoadOnDemand::STATIC_CreateNewWeightedAnimSequenceLoadOnDemand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Animation.WeightedAnimSequenceLoadOnDemand.CreateNewWeightedAnimSequenceLoadOnDemand");

	UWeightedAnimSequenceLoadOnDemand_CreateNewWeightedAnimSequenceLoadOnDemand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWeightedAnimSequenceLoadOnDemand::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(FallBackAnimation, UAnimSequence);
}

void UWeightedAnimSequenceLoadOnDemand::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(FallBackAnimation);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
