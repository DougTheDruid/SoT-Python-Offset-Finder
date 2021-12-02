// Name: SoT, Version: 2.4.0

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

void FQuestVariableAny::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableAny::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FIslandTypeWeights::AfterRead()
{
}

void FIslandTypeWeights::BeforeDelete()
{
}

void FSplineFootprintPathTool::AfterRead()
{
}

void FSplineFootprintPathTool::BeforeDelete()
{
}

void FTaleQuestCargoRunContractItem::AfterRead()
{
	READ_PTR_FULL(ItemToCollect, UClass);
}

void FTaleQuestCargoRunContractItem::BeforeDelete()
{
	DELE_PTR_FULL(ItemToCollect);
}

void FTaleQuestDeliveryRequest::AfterRead()
{
}

void FTaleQuestDeliveryRequest::BeforeDelete()
{
}

void FTrackedActorData::AfterRead()
{
	READ_PTR_FULL(Actor, AActor);
}

void FTrackedActorData::BeforeDelete()
{
	DELE_PTR_FULL(Actor);
}

void FCriticalActorDelegateData::AfterRead()
{
	READ_PTR_FULL(CriticalActor, AActor);
}

void FCriticalActorDelegateData::BeforeDelete()
{
	DELE_PTR_FULL(CriticalActor);
}

void FPhasedActor::AfterRead()
{
	READ_PTR_FULL(MapActor, AActor);
	READ_PTR_FULL(Actor, AActor);
}

void FPhasedActor::BeforeDelete()
{
	DELE_PTR_FULL(MapActor);
	DELE_PTR_FULL(Actor);
}

void FPhasedItem::AfterRead()
{
	READ_PTR_FULL(ItemProxy, AItemProxy);
	READ_PTR_FULL(ItemInfo, AItemInfo);
}

void FPhasedItem::BeforeDelete()
{
	DELE_PTR_FULL(ItemProxy);
	DELE_PTR_FULL(ItemInfo);
}

void FSnapshottedActorData::AfterRead()
{
	READ_PTR_FULL(StoredItemInfo, AItemInfo);
}

void FSnapshottedActorData::BeforeDelete()
{
	DELE_PTR_FULL(StoredItemInfo);
}

void FMigrationActionPair::AfterRead()
{
	READ_PTR_FULL(MigrationAction, UTaleMigrationAction);
}

void FMigrationActionPair::BeforeDelete()
{
	DELE_PTR_FULL(MigrationAction);
}

void FQuestVariableArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableSetEQSTaleContextValue::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableSetEQSTaleContextValue::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableLinkEQSContext::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableLinkEQSContext::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableItemDescType::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableItemDescType::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableItemInfo::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableItemInfo::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariablePrioritisedPrompt::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariablePrioritisedPrompt::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableBountyTargetArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableBountyTargetArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FTaleQuestDeliverableItem::AfterRead()
{
	READ_PTR_FULL(Icon, UTexture);
}

void FTaleQuestDeliverableItem::BeforeDelete()
{
	DELE_PTR_FULL(Icon);
}

void FQuestVariableMerchantItemArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableMerchantItemArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableMerchantItem::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableMerchantItem::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FTaleActorSpawnParameters::AfterRead()
{
}

void FTaleActorSpawnParameters::BeforeDelete()
{
}

void FTaleQuestDesc::AfterRead()
{
	FQuestDesc::AfterRead();

	READ_PTR_FULL(Root, UTaleQuestStepDesc);
	READ_PTR_FULL(Definition, UObject);
}

void FTaleQuestDesc::BeforeDelete()
{
	FQuestDesc::BeforeDelete();

	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(Definition);
}

void FTaleQuestToggledDefinition::AfterRead()
{
	READ_PTR_FULL(Definition, UClass);
}

void FTaleQuestToggledDefinition::BeforeDelete()
{
	DELE_PTR_FULL(Definition);
}

void FCriticalActorWrapper::AfterRead()
{
	READ_PTR_FULL(CriticalActor, AActor);
}

void FCriticalActorWrapper::BeforeDelete()
{
	DELE_PTR_FULL(CriticalActor);
}

void FQuestVariableActorArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableActorArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableObjectArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableObjectArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableClassArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableClassArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FParticpantToolGroup::AfterRead()
{
}

void FParticpantToolGroup::BeforeDelete()
{
}

void FQuestVariableRotator::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableRotator::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableActorAssetType::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableActorAssetType::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableTaleResourceHandle::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableTaleResourceHandle::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FActorSpawnedAutomationEvent::AfterRead()
{
}

void FActorSpawnedAutomationEvent::BeforeDelete()
{
}

void FEventSpawnedTallTaleQuestItem::AfterRead()
{
}

void FEventSpawnedTallTaleQuestItem::BeforeDelete()
{
}

void FTaleQuestSelectorServiceSeedSetTelemetryEvent::AfterRead()
{
}

void FTaleQuestSelectorServiceSeedSetTelemetryEvent::BeforeDelete()
{
}

void FPlaySequencerAutomationEvent::AfterRead()
{
}

void FPlaySequencerAutomationEvent::BeforeDelete()
{
}

void FStepMerchantItemDesc::AfterRead()
{
	READ_PTR_FULL(Icon, UTexture);
}

void FStepMerchantItemDesc::BeforeDelete()
{
	DELE_PTR_FULL(Icon);
}

void FQuestVariableActorAssetTypeArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableActorAssetTypeArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableItemDescTypeArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableItemDescTypeArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariablePageLayout::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariablePageLayout::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableTexture::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableTexture::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FTaleQuestContextInvalidTelemetryEvent::AfterRead()
{
}

void FTaleQuestContextInvalidTelemetryEvent::BeforeDelete()
{
}

void FStepBountyTargetDesc::AfterRead()
{
	READ_PTR_FULL(Portrait, UTexture);
}

void FStepBountyTargetDesc::BeforeDelete()
{
	DELE_PTR_FULL(Portrait);
}

// Function:
//		Offset -> 0x0375D400
//		Name   -> Function Tales.TaleQuestStep.Signal
//		Flags  -> (Final, Native, Public)
void UTaleQuestStep::Signal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestStep.Signal");

	UTaleQuestStep_Signal_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTaleQuestStep::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(TaleStepDesc, UTaleQuestStepDesc);
}

void UTaleQuestStep::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(TaleStepDesc);
}

void UTaleQuestService::AfterRead()
{
	UObject::AfterRead();

}

void UTaleQuestService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTaleQuestServiceDesc::AfterRead()
{
	UObject::AfterRead();

}

void UTaleQuestServiceDesc::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTaleQuestStepDesc::AfterRead()
{
	UObject::AfterRead();

}

void UTaleQuestStepDesc::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTaleMigrationAction::AfterRead()
{
	UObject::AfterRead();

}

void UTaleMigrationAction::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTaleQuestFramedStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(FrameDesc, UTaleQuestFramedStepDesc);
	READ_PTR_FULL(StructForCollector, UScriptStruct);
}

void UTaleQuestFramedStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(FrameDesc);
	DELE_PTR_FULL(StructForCollector);
}

void UTaleQuestFramedStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(Variables, UScriptStruct);
}

void UTaleQuestFramedStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(Variables);
}

void UContendedResourceServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UContendedResourceServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWorldResourceRegistryInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWorldResourceRegistryInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UContendedResourceComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UContendedResourceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UEnvQueryContext_TaleContextBase::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_TaleContextBase::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UIslandTypeWeightsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UIslandTypeWeightsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void USplineFootprintPathComponent::AfterRead()
{
	USplineComponent::AfterRead();

	READ_PTR_FULL(DecalMaterial, UMaterialInterface);
}

void USplineFootprintPathComponent::BeforeDelete()
{
	USplineComponent::BeforeDelete();

	DELE_PTR_FULL(DecalMaterial);
}

void UStartTallTaleConditionalStatTrigger::AfterRead()
{
	UConditionalStatsTriggerType::AfterRead();

}

void UStartTallTaleConditionalStatTrigger::BeforeDelete()
{
	UConditionalStatsTriggerType::BeforeDelete();

}

void UTaleQuestArrayEntrySelectionStrategy::AfterRead()
{
	UObject::AfterRead();

}

void UTaleQuestArrayEntrySelectionStrategy::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFixedArrayEntrySelectionStrategy::AfterRead()
{
	UTaleQuestArrayEntrySelectionStrategy::AfterRead();

}

void UFixedArrayEntrySelectionStrategy::BeforeDelete()
{
	UTaleQuestArrayEntrySelectionStrategy::BeforeDelete();

}

void URandomArrayEntrySelectionStrategy::AfterRead()
{
	UTaleQuestArrayEntrySelectionStrategy::AfterRead();

}

void URandomArrayEntrySelectionStrategy::BeforeDelete()
{
	UTaleQuestArrayEntrySelectionStrategy::BeforeDelete();

}

void USequentialArrayEntrySelectionStrategy::AfterRead()
{
	UTaleQuestArrayEntrySelectionStrategy::AfterRead();

}

void USequentialArrayEntrySelectionStrategy::BeforeDelete()
{
	UTaleQuestArrayEntrySelectionStrategy::BeforeDelete();

}

void UTaleQuestCargoRunContract::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(DeliverToNPC, AActor);
	READ_PTR_FULL(CollectFromNPC, AActor);
}

void UTaleQuestCargoRunContract::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(DeliverToNPC);
	DELE_PTR_FULL(CollectFromNPC);
}

// Function:
//		Offset -> 0x0375D130
//		Name   -> Function Tales.TaleQuestCargoRunContractsService.GetContract
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       Guid                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTaleQuestCargoRunContract*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const struct FGuid& Guid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.GetContract");

	UTaleQuestCargoRunContractsService_GetContract_Params params {};
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0375CD30
//		Name   -> Function Tales.TaleQuestCargoRunContractsService.AddContract
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		TArray<class UClass*>                              InItems                                                    (Parm, ZeroConstructor, UObjectWrapper)
//		class AActor*                                      InCollectFromNPC                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      InDeliverToNPC                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InTimeLimitInMinutes                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGuid                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestCargoRunContractsService.AddContract");

	UTaleQuestCargoRunContractsService_AddContract_Params params {};
	params.InItems = InItems;
	params.InCollectFromNPC = InCollectFromNPC;
	params.InDeliverToNPC = InDeliverToNPC;
	params.InTimeLimitInMinutes = InTimeLimitInMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTaleQuestCargoRunContractsService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UTaleQuestCargoRunContractsService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UTaleQuestMerchantContract::AfterRead()
{
	UObject::AfterRead();

}

void UTaleQuestMerchantContract::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0375D1D0
//		Name   -> Function Tales.TaleQuestMerchantContractsService.GetContract
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       Guid                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTaleQuestMerchantContract*                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.GetContract");

	UTaleQuestMerchantContractsService_GetContract_Params params {};
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0375CEF0
//		Name   -> Function Tales.TaleQuestMerchantContractsService.AddContract
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		TArray<struct FTaleQuestDeliveryRequest>           Requests                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FName                                       InDeliveryDestination                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InTimeLimit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGuid                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMerchantContractsService.AddContract");

	UTaleQuestMerchantContractsService_AddContract_Params params {};
	params.Requests = Requests;
	params.InDeliveryDestination = InDeliveryDestination;
	params.InTimeLimit = InTimeLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTaleQuestMerchantContractsService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UTaleQuestMerchantContractsService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UTaleQuestImportFrame::AfterRead()
{
	UTaleQuestRootFrame::AfterRead();

}

void UTaleQuestImportFrame::BeforeDelete()
{
	UTaleQuestRootFrame::BeforeDelete();

}

// Function:
//		Offset -> 0x0375D390
//		Name   -> Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Seed                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTaleQuestSelectorServiceBlueprintFunctionLibrary::STATIC_SetDebugVoyageSeed(int Seed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed");

	UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params params {};
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0375D370
//		Name   -> Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UTaleQuestSelectorServiceBlueprintFunctionLibrary::STATIC_ResetVoyageDebugSeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed");

	UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTaleQuestSelectorServiceBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTaleQuestSelectorServiceBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x0375D540
//		Name   -> Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class UCutsceneResponseCoordinator*                Coordinator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCutsceneResponsesTaleService::TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator");

	UCutsceneResponsesTaleService_TrackResponseCoordinator_Params params {};
	params.Coordinator = Coordinator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0375D420
//		Name   -> Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ResponseSheetClass                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UCutsceneResponseSheet*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCutsceneResponseSheet* UCutsceneResponsesTaleService::StartCutsceneResponseSheet(class AActor* TargetActor, class UClass* ResponseSheetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet");

	UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params params {};
	params.TargetActor = TargetActor;
	params.ResponseSheetClass = ResponseSheetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0375D110
//		Name   -> Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UCutsceneResponsesTaleService::ClearAllActiveResponseSheets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets");

	UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0375D090
//		Name   -> Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCutsceneResponsesTaleService::AddResponseSheetRelevantActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor");

	UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCutsceneResponsesTaleService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UCutsceneResponsesTaleService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UGameEventExclusionZoneTaleService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UGameEventExclusionZoneTaleService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void URewardGenTaleQuestService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(SpawnData, UTaleQuestWeightedItemDescSpawnDataAsset);
}

void URewardGenTaleQuestService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(SpawnData);
}

void UTaleQuestActorService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestActorServiceDesc);
	READ_PTR_FULL(PhasedClusterRoot, APhasedClusterRoot);
}

void UTaleQuestActorService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(Desc);
	DELE_PTR_FULL(PhasedClusterRoot);
}

void UTaleQuestEQSService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UTaleQuestEQSService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UTaleQuestFlameOfFateService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(ServiceDesc, UTaleQuestFlameOfFateServiceDesc);
}

void UTaleQuestFlameOfFateService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(ServiceDesc);
}

// Function:
//		Offset -> 0x0375D270
//		Name   -> Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                Minimum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Maximum                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UTaleQuestSelectorService::GetRandomIntegerInRange(int Minimum, int Maximum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange");

	UTaleQuestSelectorService_GetRandomIntegerInRange_Params params {};
	params.Minimum = Minimum;
	params.Maximum = Maximum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTaleQuestSelectorService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestSelectorServiceDesc);
}

void UTaleQuestSelectorService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTaleResourceBrokerService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UTaleResourceBrokerService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UCutsceneResponsesTaleServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UCutsceneResponsesTaleServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UGameEventExclusionZoneTaleServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UGameEventExclusionZoneTaleServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void URewardGenTaleQuestServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

	READ_PTR_FULL(SpawnData, UTaleQuestWeightedItemDescSpawnDataAsset);
}

void URewardGenTaleQuestServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

	DELE_PTR_FULL(SpawnData);
}

void UTaleQuestActorServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

	READ_PTR_FULL(ItemLostFailureRunnable, UClass);
}

void UTaleQuestActorServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

	DELE_PTR_FULL(ItemLostFailureRunnable);
}

void UTaleQuestCargoRunContractsServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestCargoRunContractsServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleQuestEQSServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestEQSServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleQuestFlameOfFateServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

	READ_PTR_FULL(LanternItemCategory, UClass);
}

void UTaleQuestFlameOfFateServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

	DELE_PTR_FULL(LanternItemCategory);
}

void UTaleQuestMerchantContractsServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestMerchantContractsServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleQuestSelectorServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestSelectorServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UAddGameEventExclusionZoneStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UAddGameEventExclusionZoneStepDesc);
}

void UAddGameEventExclusionZoneStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UCallObjectFunctionStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UCallObjectFunctionStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UDebugTaleAddInstancedLevelStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UDebugTaleAddInstancedLevelStepDesc);
}

void UDebugTaleAddInstancedLevelStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
}

void UDebugTaleAddInstancedLevelStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UDebugTaleAddInstancedLevelStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UDestroySpawnedActorStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UDestroySpawnedActorStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UDoEQSQueryStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UDoEQSQueryStepDesc);
	READ_PTR_FULL(CachedTaleEQSService, UTaleQuestEQSService);
}

void UDoEQSQueryStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
	DELE_PTR_FULL(CachedTaleEQSService);
}

void UFindNamedPointStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UFindNamedPointStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UFindNamedPointAsVectorStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UFindNamedPointAsVectorStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UFindNamedPointAsTransformStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UFindNamedPointAsTransformStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UGenerateDigLocationInRadiusStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UGenerateDigLocationInRadiusStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UGetVoyageDifficultyFromRankStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UGetVoyageDifficultyFromRankStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UInvokeDamageStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UInvokeDamageStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void ULinkEQSContextWithVariableStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, ULinkEQSContextWithVariableStepDesc);
}

void ULinkEQSContextWithVariableStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void ULoadSequencerAnimationStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, ULoadSequencerAnimationStepDesc);
	READ_PTR_FULL(SequencerCutSceneActor, ASequencerCutSceneActor);
	READ_PTR_FULL(TargetToSpawnActor, AActor);
}

void ULoadSequencerAnimationStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
	DELE_PTR_FULL(SequencerCutSceneActor);
	DELE_PTR_FULL(TargetToSpawnActor);
}

void UParticipantRadiusTrackerStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UParticipantRadiusTrackerStepDesc);
}

void UParticipantRadiusTrackerStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UPlaySequencerAnimationOnCutsceneActorStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UPlaySequencerAnimationOnCutsceneActorStepDesc);
	READ_PTR_FULL(SequencerCutSceneActor, ASequencerCutSceneActor);
}

void UPlaySequencerAnimationOnCutsceneActorStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
	DELE_PTR_FULL(SequencerCutSceneActor);
}

void UPlaySequencerAnimationStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UPlaySequencerAnimationStepDesc);
	READ_PTR_FULL(SequencerCutSceneActor, ASequencerCutSceneActor);
}

void UPlaySequencerAnimationStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
	DELE_PTR_FULL(SequencerCutSceneActor);
}

void UProvokeHitReactionStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UProvokeHitReactionStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void URemoveGameEventExclusionZoneStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, URemoveGameEventExclusionZoneStepDesc);
}

void URemoveGameEventExclusionZoneStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void USetEQSNamedContextStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, USetEQSNamedContextStepDesc);
}

void USetEQSNamedContextStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void USpawnPhasedActorWithTransformStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void USpawnPhasedActorWithTransformStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void USpawnPhasedItemStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void USpawnPhasedItemStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UStartSuppressingCutsceneResponsesStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UStartSuppressingCutsceneResponsesStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UStopSuppressingCutsceneResponsesStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UStopSuppressingCutsceneResponsesStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestChooseIslandFromWeightsStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(IslandTypeWeights, UIslandTypeWeightsDataAsset);
}

void UTaleQuestChooseIslandFromWeightsStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(IslandTypeWeights);
}

void UTaleQuestClearTaleProposalsStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestClearTaleProposalsStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestEmissaryCompanyActionRewardBoostStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestEmissaryCompanyActionRewardBoostStepDesc);
}

void UTaleQuestEmissaryCompanyActionRewardBoostStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTaleQuestGrantRewardStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGrantRewardStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestPermanentPromptStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestPermanentPromptStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestSelectEntryFromArrayStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestSelectEntryFromArrayStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestUpdateCheckpointStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestUpdateCheckpointStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestWaitForHandInStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestWaitForHandInStepDesc);
}

void UTaleQuestWaitForHandInStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTrackResponseCoordinatorStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UTrackResponseCoordinatorStepDesc);
}

void UTrackResponseCoordinatorStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
}

void UWaitForItemPickupStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UWaitForItemPickupStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UAddGameEventExclusionZoneStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UAddGameEventExclusionZoneStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UCallObjectFunctionStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(Target, UObject);
}

void UCallObjectFunctionStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(Target);
}

void UDestroySpawnedActorStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UDestroySpawnedActorStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UDoEQSQueryStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(EQSQuery, UEnvQuery);
}

void UDoEQSQueryStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(EQSQuery);
}

void UFindNamedPointStepDescBase::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UFindNamedPointStepDescBase::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UFindNamedPointStepDesc::AfterRead()
{
	UFindNamedPointStepDescBase::AfterRead();

}

void UFindNamedPointStepDesc::BeforeDelete()
{
	UFindNamedPointStepDescBase::BeforeDelete();

}

void UFindNamedPointAsVectorStepDesc::AfterRead()
{
	UFindNamedPointStepDescBase::AfterRead();

}

void UFindNamedPointAsVectorStepDesc::BeforeDelete()
{
	UFindNamedPointStepDescBase::BeforeDelete();

}

void UFindNamedPointAsTransformStepDesc::AfterRead()
{
	UFindNamedPointStepDescBase::AfterRead();

}

void UFindNamedPointAsTransformStepDesc::BeforeDelete()
{
	UFindNamedPointStepDescBase::BeforeDelete();

}

void UGenerateDigLocationInRadiusStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UGenerateDigLocationInRadiusStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UInvokeDamageDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(DamageType, UClass);
}

void UInvokeDamageDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(DamageType);
}

void ULinkEQSContextWithVariableStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(Context, UClass);
}

void ULinkEQSContextWithVariableStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(Context);
}

void ULoadSequencerAnimationStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void ULoadSequencerAnimationStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UParticipantRadiusTrackerStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UParticipantRadiusTrackerStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UWaitUntilAllParticipantsEnterRadiusStep::AfterRead()
{
	UParticipantRadiusTrackerStepDesc::AfterRead();

}

void UWaitUntilAllParticipantsEnterRadiusStep::BeforeDelete()
{
	UParticipantRadiusTrackerStepDesc::BeforeDelete();

}

void UWaitUntilAllParticipantsLeaveRadiusStep::AfterRead()
{
	UParticipantRadiusTrackerStepDesc::AfterRead();

}

void UWaitUntilAllParticipantsLeaveRadiusStep::BeforeDelete()
{
	UParticipantRadiusTrackerStepDesc::BeforeDelete();

}

void UWaitUntilAnyParticipantEntersRadiusStep::AfterRead()
{
	UParticipantRadiusTrackerStepDesc::AfterRead();

}

void UWaitUntilAnyParticipantEntersRadiusStep::BeforeDelete()
{
	UParticipantRadiusTrackerStepDesc::BeforeDelete();

}

void UPlaySequencerAnimationOnCutsceneActorStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(LevelSequence, ULevelSequence);
	READ_PTR_FULL(DialogueData, USceneDialogueData);
	READ_PTR_FULL(FemaleLevelSequence, ULevelSequence);
}

void UPlaySequencerAnimationOnCutsceneActorStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(LevelSequence);
	DELE_PTR_FULL(DialogueData);
	DELE_PTR_FULL(FemaleLevelSequence);
}

void UPlaySequencerAnimationStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(LevelSequenceToPlay, ULevelSequence);
	READ_PTR_FULL(DialogueData, USceneDialogueData);
	READ_PTR_FULL(FemaleLevelSequenceToPlay, ULevelSequence);
}

void UPlaySequencerAnimationStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(LevelSequenceToPlay);
	DELE_PTR_FULL(DialogueData);
	DELE_PTR_FULL(FemaleLevelSequenceToPlay);
}

void UProvokeHitReactionDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(DamageType, UClass);
}

void UProvokeHitReactionDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(DamageType);
}

void URemoveGameEventExclusionZoneStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void URemoveGameEventExclusionZoneStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void USetEQSNamedContextStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void USetEQSNamedContextStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void USpawnPhasedActorWithTransformStepBaseDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void USpawnPhasedActorWithTransformStepBaseDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void USpawnPhasedActorAtLocationStepDesc::AfterRead()
{
	USpawnPhasedActorWithTransformStepBaseDesc::AfterRead();

}

void USpawnPhasedActorAtLocationStepDesc::BeforeDelete()
{
	USpawnPhasedActorWithTransformStepBaseDesc::BeforeDelete();

}

void USpawnPhasedItemStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void USpawnPhasedItemStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UStartSuppressingCutsceneResponsesStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UStartSuppressingCutsceneResponsesStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UStopSuppressingCutsceneResponsesStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UStopSuppressingCutsceneResponsesStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestChooseIslandFromWeightsStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(IslandTypeWeights, UIslandTypeWeightsDataAsset);
}

void UTaleQuestChooseIslandFromWeightsStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(IslandTypeWeights);
}

void UTaleQuestClearTaleProposalsStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestClearTaleProposalsStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestEmissaryCompanyActionRewardBoostStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestEmissaryCompanyActionRewardBoostStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestGrantRewardStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(Company, UClass);
}

void UTaleQuestGrantRewardStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(Company);
}

void UTaleQuestPermanentPromptStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestPermanentPromptStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSelectEntryFromArrayStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(SelectionStrategy, UTaleQuestArrayEntrySelectionStrategy);
}

void UTaleQuestSelectEntryFromArrayStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(SelectionStrategy);
}

void UTaleQuestUpdateCheckpointStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestUpdateCheckpointStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestWaitForHandInStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(SpecificItem, UClass);
}

void UTaleQuestWaitForHandInStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(SpecificItem);
}

void UTrackResponseCoordinatorStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTrackResponseCoordinatorStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UWaitForItemPickupStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UWaitForItemPickupStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSelectShipwreckLocationFromValidCandidatesStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(CachedSelectorService, UTaleQuestSelectorService);
}

void UTaleQuestSelectShipwreckLocationFromValidCandidatesStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(CachedSelectorService);
}

void UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(SelectionStrategy, UTaleQuestArrayEntrySelectionStrategy);
}

void UTaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(SelectionStrategy);
}

void UTaleQuestAddBountyMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddBountyMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddBountyMapStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(CustomLayout, UBountyMapLayout);
	READ_PTR_FULL(OverrideTreasureMapItemDesc, UClass);
}

void UTaleQuestAddBountyMapStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(CustomLayout);
	DELE_PTR_FULL(OverrideTreasureMapItemDesc);
}

void UTaleQuestAddCargoRunMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddCargoRunMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddCircleMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddCircleMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddMerchantMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddMerchantMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddRiddleMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddRiddleMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAddXMarksMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAddXMarksMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestAdvanceRiddleMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestAdvanceRiddleMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

// Function:
//		Offset -> 0x03E6A8C0
//		Name   -> Function Tales.TaleQuestMapService.UpdateMerchantMap
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MapId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTaleQuestDeliverableItem                   Deliverable                                                (Parm)
void UTaleQuestMapService::UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.UpdateMerchantMap");

	UTaleQuestMapService_UpdateMerchantMap_Params params {};
	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E6A830
//		Name   -> Function Tales.TaleQuestMapService.AdvanceRiddleMap
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       MapId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTaleQuestMapService::AdvanceRiddleMap(const struct FName& MapId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tales.TaleQuestMapService.AdvanceRiddleMap");

	UTaleQuestMapService_AdvanceRiddleMap_Params params {};
	params.MapId = MapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTaleQuestMapService::AfterRead()
{
	UTaleQuestService::AfterRead();

}

void UTaleQuestMapService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

}

void UTaleQuestMapServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestMapServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleQuestAddCargoRunMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

	READ_PTR_FULL(Layout, UCargoRunMapLayout);
}

void UTaleQuestAddCargoRunMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

	DELE_PTR_FULL(Layout);
}

void UTaleQuestAddCircleMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestAddCircleMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestAddMerchantMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

	READ_PTR_FULL(Layout, UMerchantMapLayout);
}

void UTaleQuestAddMerchantMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

	DELE_PTR_FULL(Layout);
}

void UTaleQuestAddRiddleMapBaseStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestAddRiddleMapBaseStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestAddRiddleMapStepDesc::AfterRead()
{
	UTaleQuestAddRiddleMapBaseStepDesc::AfterRead();

}

void UTaleQuestAddRiddleMapStepDesc::BeforeDelete()
{
	UTaleQuestAddRiddleMapBaseStepDesc::BeforeDelete();

}

void UTaleQuestAddRiddleMapUsingVariableStepDesc::AfterRead()
{
	UTaleQuestAddRiddleMapBaseStepDesc::AfterRead();

}

void UTaleQuestAddRiddleMapUsingVariableStepDesc::BeforeDelete()
{
	UTaleQuestAddRiddleMapBaseStepDesc::BeforeDelete();

}

void UTaleQuestAddXMarksMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestAddXMarksMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestAdvanceRiddleMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestAdvanceRiddleMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestRemoveMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UTaleQuestRemoveMapStepDesc);
}

void UTaleQuestRemoveMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
}

void UTaleQuestRemoveMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestRemoveMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

void UTaleQuestUpdateMerchantMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestUpdateMerchantMapStepDesc);
}

void UTaleQuestUpdateMerchantMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTaleQuestUpdateMerchantMapStepDesc::AfterRead()
{
	UTaleQuestMapStepDescBase::AfterRead();

}

void UTaleQuestUpdateMerchantMapStepDesc::BeforeDelete()
{
	UTaleQuestMapStepDescBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
