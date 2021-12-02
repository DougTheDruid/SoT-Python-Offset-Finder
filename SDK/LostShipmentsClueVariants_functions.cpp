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

void FClueDestinationToTextIndex::AfterRead()
{
	READ_PTR_FULL(DestinationType, UClass);
}

void FClueDestinationToTextIndex::BeforeDelete()
{
	DELE_PTR_FULL(DestinationType);
}

void FClueDestinationChoice::AfterRead()
{
	READ_PTR_FULL(Destination, UClueDestinationDescriptor);
}

void FClueDestinationChoice::BeforeDelete()
{
	DELE_PTR_FULL(Destination);
}

void FGenderSpecificTextPairings::AfterRead()
{
}

void FGenderSpecificTextPairings::BeforeDelete()
{
}

void FTextEntryWithLayout::AfterRead()
{
}

void FTextEntryWithLayout::BeforeDelete()
{
}

void FMapRadialIconData::AfterRead()
{
}

void FMapRadialIconData::BeforeDelete()
{
}

void FExistingNPCToPhasedNPC::AfterRead()
{
}

void FExistingNPCToPhasedNPC::BeforeDelete()
{
}

void UAbandonedNoteClueDescriptor::AfterRead()
{
	UClueDescriptor::AfterRead();

	READ_PTR_FULL(DestinationDescriptor, UClueDestinationDescriptor);
}

void UAbandonedNoteClueDescriptor::BeforeDelete()
{
	UClueDescriptor::BeforeDelete();

	DELE_PTR_FULL(DestinationDescriptor);
}

void UAbandonedNoteClueDescriptorGenerator::AfterRead()
{
	UClueDescriptorGenerator::AfterRead();

}

void UAbandonedNoteClueDescriptorGenerator::BeforeDelete()
{
	UClueDescriptorGenerator::BeforeDelete();

}

void UAbandonedNoteClueTextChoiceSource::AfterRead()
{
	UObject::AfterRead();

}

void UAbandonedNoteClueTextChoiceSource::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAbandonedNoteClueTextChoiceSourceConsumerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAbandonedNoteClueTextChoiceSourceConsumerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAbandonedNoteClueTextAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DestinationType, UClass);
}

void UAbandonedNoteClueTextAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DestinationType);
}

void UAbandonedNoteClueTextIndexAssetBase::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAbandonedNoteClueTextIndexAssetBase::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAbandonedNoteClueTextIndexAssetMap::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAbandonedNoteClueTextIndexAssetMap::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAbandonedNoteClueTextSourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAbandonedNoteClueTextSourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UClueTitleInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UClueTitleInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UClueDestinationContainerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UClueDestinationContainerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x01370280
//		Name   -> Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
//		Flags  -> (Final, Native, Private)
void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentTitleText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText");

	UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01370260
//		Name   -> Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
//		Flags  -> (Final, Native, Private)
void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentClueDestination()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination");

	UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbandonedNoteClueDestinationContainerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ClueTextIndexAssetMap, UAbandonedNoteClueTextIndexAssetMap);
	READ_PTR_FULL(ClueTextChoiceSource, UAbandonedNoteClueTextChoiceSource);
}

void UAbandonedNoteClueDestinationContainerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ClueTextIndexAssetMap);
	DELE_PTR_FULL(ClueTextChoiceSource);
}

void UNPCByNameClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void UNPCByNameClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void UAbandonedNoteClueGenderSpecificTextAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DestinationType, UClass);
}

void UAbandonedNoteClueGenderSpecificTextAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DestinationType);
}

void UAbandonedNoteClueGenderSpecificTextIndexAsset::AfterRead()
{
	UAbandonedNoteClueTextIndexAssetBase::AfterRead();

}

void UAbandonedNoteClueGenderSpecificTextIndexAsset::BeforeDelete()
{
	UAbandonedNoteClueTextIndexAssetBase::BeforeDelete();

}

void UAbandonedNoteClueTextIndexAsset::AfterRead()
{
	UAbandonedNoteClueTextIndexAssetBase::AfterRead();

}

void UAbandonedNoteClueTextIndexAsset::BeforeDelete()
{
	UAbandonedNoteClueTextIndexAssetBase::BeforeDelete();

}

void UAbandonedNoteWieldableRenderingComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(BodyTextFont, UFont);
	READ_PTR_FULL(TitleTextFont, UFont);
}

void UAbandonedNoteWieldableRenderingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(BodyTextFont);
	DELE_PTR_FULL(TitleTextFont);
}

void AAbandonedNoteWieldable::AfterRead()
{
	ASkeletalMeshWieldableItem::AfterRead();

	READ_PTR_FULL(WieldableItemCanvasRenderingComponent, UWieldableItemCanvasRenderingComponent);
	READ_PTR_FULL(AbandonedNoteRenderingComponent, UAbandonedNoteWieldableRenderingComponent);
	READ_PTR_FULL(InventoryItemComponent, UInventoryItemComponent);
	READ_PTR_FULL(UsableWieldableComponent, UUsableWieldableComponent);
}

void AAbandonedNoteWieldable::BeforeDelete()
{
	ASkeletalMeshWieldableItem::BeforeDelete();

	DELE_PTR_FULL(WieldableItemCanvasRenderingComponent);
	DELE_PTR_FULL(AbandonedNoteRenderingComponent);
	DELE_PTR_FULL(InventoryItemComponent);
	DELE_PTR_FULL(UsableWieldableComponent);
}

void UBarrelsOfPlentyClueDestinationGenerator::AfterRead()
{
	UClueDestinationGenerator::AfterRead();

}

void UBarrelsOfPlentyClueDestinationGenerator::BeforeDelete()
{
	UClueDestinationGenerator::BeforeDelete();

}

void UBarrelsOfPlentyClueSiteData::AfterRead()
{
	UClueSiteData::AfterRead();

}

void UBarrelsOfPlentyClueSiteData::BeforeDelete()
{
	UClueSiteData::BeforeDelete();

}

void UBarrelsOfPlentyClueSiteType::AfterRead()
{
	UClueSiteType::AfterRead();

}

void UBarrelsOfPlentyClueSiteType::BeforeDelete()
{
	UClueSiteType::BeforeDelete();

}

void UBarrelsOfPlentySeaClueCreator::AfterRead()
{
	USeaClueCreator::AfterRead();

}

void UBarrelsOfPlentySeaClueCreator::BeforeDelete()
{
	USeaClueCreator::BeforeDelete();

}

void UCircleMapClueDescriptor::AfterRead()
{
	UClueDescriptor::AfterRead();

	READ_PTR_FULL(DestinationDescriptor, UClueDestinationDescriptor);
}

void UCircleMapClueDescriptor::BeforeDelete()
{
	UClueDescriptor::BeforeDelete();

	DELE_PTR_FULL(DestinationDescriptor);
}

void UCircleMapClueDescriptorGenerator::AfterRead()
{
	UClueDescriptorGenerator::AfterRead();

}

void UCircleMapClueDescriptorGenerator::BeforeDelete()
{
	UClueDescriptorGenerator::BeforeDelete();

}

void UCircleMapClueRenderDataSourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCircleMapClueRenderDataSourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCircleMapClueDestinationContainerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MapMarkId, UClass);
	READ_PTR_FULL(DebugCrossId, UClass);
}

void UCircleMapClueDestinationContainerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MapMarkId);
	DELE_PTR_FULL(DebugCrossId);
}

// Function:
//		Offset -> 0x013702C0
//		Name   -> Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
//		Flags  -> (Final, Native, Private)
void AClueSiteCircleMapWieldable::OnRep_MapRadialIconData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData");

	AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AClueSiteCircleMapWieldable::AfterRead()
{
	ARenderToTextureMapBase::AfterRead();

}

void AClueSiteCircleMapWieldable::BeforeDelete()
{
	ARenderToTextureMapBase::BeforeDelete();

}

// Function:
//		Offset -> 0x013701B0
//		Name   -> Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AItemInfo*                                   ItemInfo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClueDescriptor*                             Clue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UClueVariantsBlueprintFunctionLibrary::STATIC_GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem");

	UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params params {};
	params.ItemInfo = ItemInfo;
	params.Clue = Clue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClueVariantsBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UClueVariantsBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x013702A0
//		Name   -> Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
//		Flags  -> (Native, Public)
void UCompositeClueDestinationDescriptor::OnRep_DestinationInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo");

	UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCompositeClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

	READ_PTR_FULL(PrimaryClueDestDescriptor, UClueDestinationDescriptor);
	READ_PTR_FULL(SecondaryClueDestDescriptor, UClueDestinationDescriptor);
}

void UCompositeClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

	DELE_PTR_FULL(PrimaryClueDestDescriptor);
	DELE_PTR_FULL(SecondaryClueDestDescriptor);
}

void UEndOfGooseChaseClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void UEndOfGooseChaseClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void UExistingToPhasedNPCIndexAssetMap::AfterRead()
{
	UDataAsset::AfterRead();

}

void UExistingToPhasedNPCIndexAssetMap::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UFloatingMessageInABottleClueDestinationGenerator::AfterRead()
{
	UClueDestinationGenerator::AfterRead();

}

void UFloatingMessageInABottleClueDestinationGenerator::BeforeDelete()
{
	UClueDestinationGenerator::BeforeDelete();

}

void UFloatingMessageInABottleClueSiteData::AfterRead()
{
	UClueSiteData::AfterRead();

}

void UFloatingMessageInABottleClueSiteData::BeforeDelete()
{
	UClueSiteData::BeforeDelete();

}

void UFloatingMessageInABottleClueSiteType::AfterRead()
{
	UClueSiteType::AfterRead();

}

void UFloatingMessageInABottleClueSiteType::BeforeDelete()
{
	UClueSiteType::BeforeDelete();

}

void UFloatingMessageInABottleSeaClueCreator::AfterRead()
{
	USeaClueCreator::AfterRead();

}

void UFloatingMessageInABottleSeaClueCreator::BeforeDelete()
{
	USeaClueCreator::BeforeDelete();

}

// Function:
//		Offset -> 0x01370150
//		Name   -> Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClueDescriptor*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClueDescriptor* UGooseChaseClueBlueprintFunctionLibrary::STATIC_CreateEndOfGooseChaseClue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue");

	UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGooseChaseClueBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UGooseChaseClueBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UIslandByCompassBearingClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void UIslandByCompassBearingClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void UIslandByNameClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void UIslandByNameClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void UIslandNameForNPCContextDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void UIslandNameForNPCContextDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void ULocationOnIslandClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void ULocationOnIslandClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void ULostShipwreckClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void ULostShipwreckClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void UMerchantCaptainSpawnInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMerchantCaptainSpawnInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMerchantCaptainSpawnComponent::AfterRead()
{
	UItemSpawnComponent::AfterRead();

}

void UMerchantCaptainSpawnComponent::BeforeDelete()
{
	UItemSpawnComponent::BeforeDelete();

}

void UNPCHintDialogueClueCreator::AfterRead()
{
	ULandClueCreator::AfterRead();

	READ_PTR_FULL(NPCMappingAsset, UExistingToPhasedNPCIndexAssetMap);
}

void UNPCHintDialogueClueCreator::BeforeDelete()
{
	ULandClueCreator::BeforeDelete();

	DELE_PTR_FULL(NPCMappingAsset);
}

void UNPCHintDialogueClueDestinationGenerator::AfterRead()
{
	UClueDestinationGenerator::AfterRead();

}

void UNPCHintDialogueClueDestinationGenerator::BeforeDelete()
{
	UClueDestinationGenerator::BeforeDelete();

}

void UNPCHintDialogueClueSiteData::AfterRead()
{
	UClueSiteData::AfterRead();

}

void UNPCHintDialogueClueSiteData::BeforeDelete()
{
	UClueSiteData::BeforeDelete();

}

void UNPCHintDialogueClueSiteType::AfterRead()
{
	UClueSiteType::AfterRead();

}

void UNPCHintDialogueClueSiteType::BeforeDelete()
{
	UClueSiteType::BeforeDelete();

}

void UObtainClueOnWieldComponent::AfterRead()
{
	UOnItemWieldedComponent::AfterRead();

	READ_PTR_FULL(ClueToObtain, UClueDescriptor);
	READ_PTR_FULL(ClueSiteType, UClass);
}

void UObtainClueOnWieldComponent::BeforeDelete()
{
	UOnItemWieldedComponent::BeforeDelete();

	DELE_PTR_FULL(ClueToObtain);
	DELE_PTR_FULL(ClueSiteType);
}

void UObtainClueFromContainerOnWieldComponent::AfterRead()
{
	UObtainClueOnWieldComponent::AfterRead();

}

void UObtainClueFromContainerOnWieldComponent::BeforeDelete()
{
	UObtainClueOnWieldComponent::BeforeDelete();

}

void USeaLocationByGridSquareClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void USeaLocationByGridSquareClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

// Function:
//		Offset -> 0x0136FF50
//		Name   -> Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UClueConnectionConfig*                       ConnectionConfiguration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Difficulty                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UClass*>                              AllowedClueTypes                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
//		class UTaleQuestSelectorService*                   SelectorService                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     SourceLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class AShipwreck*                                  Shipwreck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClueDescriptor*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClueDescriptor* UShipwreckClueBlueprintFunctionLibrary::STATIC_CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck");

	UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params params {};
	params.ConnectionConfiguration = ConnectionConfiguration;
	params.Difficulty = Difficulty;
	params.AllowedClueTypes = AllowedClueTypes;
	params.SelectorService = SelectorService;
	params.SourceLocation = SourceLocation;
	params.Shipwreck = Shipwreck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UShipwreckClueBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UShipwreckClueBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UShipwreckClueDestinationDescriptor::AfterRead()
{
	UClueDestinationDescriptor::AfterRead();

}

void UShipwreckClueDestinationDescriptor::BeforeDelete()
{
	UClueDestinationDescriptor::BeforeDelete();

}

void UShipwreckClueDestinationGenerator::AfterRead()
{
	UClueDestinationGenerator::AfterRead();

}

void UShipwreckClueDestinationGenerator::BeforeDelete()
{
	UClueDestinationGenerator::BeforeDelete();

}

void UShipwreckClueSiteType::AfterRead()
{
	UClueSiteType::AfterRead();

}

void UShipwreckClueSiteType::BeforeDelete()
{
	UClueSiteType::BeforeDelete();

}

// Function:
//		Offset -> 0x013702E0
//		Name   -> Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       InTitleText                                                (ConstParm, Parm, OutParm, ReferenceParm)
void UTaleQuestClueInventoryService::SetClueTitleText(const struct FText& InTitleText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText");

	UTaleQuestClueInventoryService_SetClueTitleText_Params params {};
	params.InTitleText = InTitleText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01370180
//		Name   -> Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UTaleQuestClueInventoryService::GetCollectedClueCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount");

	UTaleQuestClueInventoryService_GetCollectedClueCount_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTaleQuestClueInventoryService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(ClueTextChoiceSource, UAbandonedNoteClueTextChoiceSource);
}

void UTaleQuestClueInventoryService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(ClueTextChoiceSource);
}

void UTaleQuestClueInventoryServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestClueInventoryServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleQuestGetNPCActorFromClueSiteStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGetNPCActorFromClueSiteStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGetNPCActorFromClueSiteStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestGetNPCActorFromClueSiteStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestGetPhasedVersionOfActorFromAssetMapStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(NPCIndexAssetMap, UExistingToPhasedNPCIndexAssetMap);
}

void UTaleQuestGetPhasedVersionOfActorFromAssetMapStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(NPCIndexAssetMap);
}

void UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(IndexAssetMap, UExistingToPhasedNPCIndexAssetMap);
}

void UTaleQuestGetPhasedVersionOfActorFromAssetMapStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(IndexAssetMap);
}

void UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestRetrieveSpawnedMerchantCaptainFromShipwreckStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSpawnWashedUpMessageInABottleClueStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestSpawnWashedUpMessageInABottleClueStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestSpawnWashedUpMessageInABottleClueStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSpawnWashedUpSkeletonClueStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestSpawnWashedUpSkeletonClueStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestSpawnWashedUpSkeletonClueStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestSpawnWashedUpSkeletonClueStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UWaitForClueCollectedStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(ClueDesc, UClueDescriptor);
	READ_PTR_FULL(ClueActor, AActor);
}

void UWaitForClueCollectedStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(ClueDesc);
	DELE_PTR_FULL(ClueActor);
}

void UWaitForClueCollectedStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UWaitForClueCollectedStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UWashedUpMessageInABottleClueCreator::AfterRead()
{
	ULandClueCreator::AfterRead();

}

void UWashedUpMessageInABottleClueCreator::BeforeDelete()
{
	ULandClueCreator::BeforeDelete();

}

void UWashedUpMessageInABottleClueDestinationGenerator::AfterRead()
{
	UClueDestinationGenerator::AfterRead();

}

void UWashedUpMessageInABottleClueDestinationGenerator::BeforeDelete()
{
	UClueDestinationGenerator::BeforeDelete();

}

void UWashedUpMessageInABottleClueSiteData::AfterRead()
{
	UClueSiteData::AfterRead();

	READ_PTR_FULL(BottleItemType, UClass);
}

void UWashedUpMessageInABottleClueSiteData::BeforeDelete()
{
	UClueSiteData::BeforeDelete();

	DELE_PTR_FULL(BottleItemType);
}

void UWashedUpMessageInABottleClueSiteType::AfterRead()
{
	UClueSiteType::AfterRead();

}

void UWashedUpMessageInABottleClueSiteType::BeforeDelete()
{
	UClueSiteType::BeforeDelete();

}

void UWashedUpSkeletonClueDestinationGenerator::AfterRead()
{
	UClueDestinationGenerator::AfterRead();

}

void UWashedUpSkeletonClueDestinationGenerator::BeforeDelete()
{
	UClueDestinationGenerator::BeforeDelete();

}

void UWashedUpSkeletonClueSiteData::AfterRead()
{
	UClueSiteData::AfterRead();

	READ_PTR_FULL(SkeletonPoseType, UClass);
	READ_PTR_FULL(ClueItemType, UClass);
}

void UWashedUpSkeletonClueSiteData::BeforeDelete()
{
	UClueSiteData::BeforeDelete();

	DELE_PTR_FULL(SkeletonPoseType);
	DELE_PTR_FULL(ClueItemType);
}

void UWashedUpSkeletonClueSiteType::AfterRead()
{
	UClueSiteType::AfterRead();

}

void UWashedUpSkeletonClueSiteType::BeforeDelete()
{
	UClueSiteType::BeforeDelete();

}

void UWashedUpSkeletonLandClueCreator::AfterRead()
{
	ULandClueCreator::AfterRead();

}

void UWashedUpSkeletonLandClueCreator::BeforeDelete()
{
	ULandClueCreator::BeforeDelete();

}

void UInteractableGrammaticalGenderComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UInteractableGrammaticalGenderComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
