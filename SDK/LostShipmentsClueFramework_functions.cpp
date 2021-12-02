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

void FClueSite::AfterRead()
{
	READ_PTR_FULL(SiteType, UClass);
	READ_PTR_FULL(SiteData, UClueSiteData);
}

void FClueSite::BeforeDelete()
{
	DELE_PTR_FULL(SiteType);
	DELE_PTR_FULL(SiteData);
}

void FWeightedClueDestinationDescriptor::AfterRead()
{
	READ_PTR_FULL(DestinationType, UClass);
}

void FWeightedClueDestinationDescriptor::BeforeDelete()
{
	DELE_PTR_FULL(DestinationType);
}

void FWeightedClueDescriptor::AfterRead()
{
	READ_PTR_FULL(Descriptor, UClass);
}

void FWeightedClueDescriptor::BeforeDelete()
{
	DELE_PTR_FULL(Descriptor);
}

void FClueSiteTypeSupportedDescribedByEntry::AfterRead()
{
	READ_PTR_FULL(SiteType, UClass);
}

void FClueSiteTypeSupportedDescribedByEntry::BeforeDelete()
{
	DELE_PTR_FULL(SiteType);
}

void FRestrictedClueType::AfterRead()
{
	READ_PTR_FULL(Type, UClass);
}

void FRestrictedClueType::BeforeDelete()
{
	DELE_PTR_FULL(Type);
}

void FClueSiteLootRestriction::AfterRead()
{
	READ_PTR_FULL(SiteType, UClass);
}

void FClueSiteLootRestriction::BeforeDelete()
{
	DELE_PTR_FULL(SiteType);
}

void FDebrisToRangeDist::AfterRead()
{
	READ_PTR_FULL(WeightedDebrisTypeAsset, UWeightedDebrisDataAsset);
}

void FDebrisToRangeDist::BeforeDelete()
{
	DELE_PTR_FULL(WeightedDebrisTypeAsset);
}

void FLootToRangeDist::AfterRead()
{
	READ_PTR_FULL(WeightedLootDescAsset, UWeightedTreasureChestDescAsset);
}

void FLootToRangeDist::BeforeDelete()
{
	DELE_PTR_FULL(WeightedLootDescAsset);
}

void FLootSpawnedAtClueSite::AfterRead()
{
	READ_PTR_FULL(SiteType, UClass);
}

void FLootSpawnedAtClueSite::BeforeDelete()
{
	DELE_PTR_FULL(SiteType);
}

void FClueSiteLootHistory::AfterRead()
{
}

void FClueSiteLootHistory::BeforeDelete()
{
}

void FQuestVariableClueSite::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableClueSite::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FQuestVariableClueDescriptor::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableClueDescriptor::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FWeightedDebris::AfterRead()
{
}

void FWeightedDebris::BeforeDelete()
{
}

void FLandClueCreationChoice::AfterRead()
{
	READ_PTR_FULL(ClueSiteType, UClass);
	READ_PTR_FULL(ClueCreator, ULandClueCreator);
}

void FLandClueCreationChoice::BeforeDelete()
{
	DELE_PTR_FULL(ClueSiteType);
	DELE_PTR_FULL(ClueCreator);
}

void FSeaClueCreationChoice::AfterRead()
{
	READ_PTR_FULL(SiteType, UClass);
	READ_PTR_FULL(ClueCreator, USeaClueCreator);
}

void FSeaClueCreationChoice::BeforeDelete()
{
	DELE_PTR_FULL(SiteType);
	DELE_PTR_FULL(ClueCreator);
}

void FQuestVariableClueSiteArray::AfterRead()
{
	FQuestVariable::AfterRead();

}

void FQuestVariableClueSiteArray::BeforeDelete()
{
	FQuestVariable::BeforeDelete();

}

void FEventClueObtained::AfterRead()
{
	READ_PTR_FULL(ObtainedClue, UClueDescriptor);
	READ_PTR_FULL(ObtainedSiteType, UClass);
}

void FEventClueObtained::BeforeDelete()
{
	DELE_PTR_FULL(ObtainedClue);
	DELE_PTR_FULL(ObtainedSiteType);
}

void UClueSiteData::AfterRead()
{
	UObject::AfterRead();

}

void UClueSiteData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClueSiteType::AfterRead()
{
	UObject::AfterRead();

}

void UClueSiteType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandClueCreator::AfterRead()
{
	UObject::AfterRead();

}

void ULandClueCreator::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USeaClueCreator::AfterRead()
{
	UObject::AfterRead();

}

void USeaClueCreator::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClueChoiceSelectionStrategy::AfterRead()
{
	UObject::AfterRead();

}

void UClueChoiceSelectionStrategy::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFixedClueChoiceSelectionStrategy::AfterRead()
{
	UClueChoiceSelectionStrategy::AfterRead();

}

void UFixedClueChoiceSelectionStrategy::BeforeDelete()
{
	UClueChoiceSelectionStrategy::BeforeDelete();

}

void URandomClueChoiceSelectionStrategy::AfterRead()
{
	UClueChoiceSelectionStrategy::AfterRead();

}

void URandomClueChoiceSelectionStrategy::BeforeDelete()
{
	UClueChoiceSelectionStrategy::BeforeDelete();

}

// Function:
//		Offset -> 0x0133A970
//		Name   -> Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
//		Flags  -> (Native, Public)
void UClueDestinationDescriptor::OnRep_DestinationInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo");

	UClueDestinationDescriptor_OnRep_DestinationInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClueDestinationDescriptor::AfterRead()
{
	UObject::AfterRead();

}

void UClueDestinationDescriptor::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClueDescriptor::AfterRead()
{
	UObject::AfterRead();

}

void UClueDescriptor::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x0133A5D0
//		Name   -> Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UClueConnectionConfig*                       ConnectionConfiguration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Difficulty                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UClass*>                              AllowedClueTypes                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
//		class UTaleQuestSelectorService*                   SelectorService                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     SourceLocation                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FClueSite                                   TargetSite                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		class UClueDescriptor*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClueDescriptor* UClueConnectionBlueprintFunctionLibrary::STATIC_CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite");

	UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params params {};
	params.ConnectionConfiguration = ConnectionConfiguration;
	params.Difficulty = Difficulty;
	params.AllowedClueTypes = AllowedClueTypes;
	params.SelectorService = SelectorService;
	params.SourceLocation = SourceLocation;
	params.TargetSite = TargetSite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UClueConnectionBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UClueConnectionBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UClueDescriptorGenerator::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(DescriptorType, UClass);
}

void UClueDescriptorGenerator::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(DescriptorType);
}

void UClueDestinationGenerator::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RequiredClueSiteDataType, UClass);
}

void UClueDestinationGenerator::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RequiredClueSiteDataType);
}

void UClueConnectionConfig::AfterRead()
{
	UDataAsset::AfterRead();

}

void UClueConnectionConfig::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UClueDescriptorContainerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UClueDescriptorContainerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UClueDescriptorContainerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CurrentClue, UClueDescriptor);
}

void UClueDescriptorContainerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CurrentClue);
}

void UClueFactoryConfig::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ChoiceStrategy, UClueChoiceSelectionStrategy);
}

void UClueFactoryConfig::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ChoiceStrategy);
}

void UClueFactory::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Config, UClueFactoryConfig);
}

void UClueFactory::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Config);
}

// Function:
//		Offset -> 0x0133A880
//		Name   -> Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Participant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClueDescriptor*                             Clue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ClueSite                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UClueLifetimeBlueprintFunctionLibrary::STATIC_GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant");

	UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params params {};
	params.Participant = Participant;
	params.Clue = Clue;
	params.ClueSite = ClueSite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UClueLifetimeBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UClueLifetimeBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UClueSiteLootRestrictionsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UClueSiteLootRestrictionsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UDebrisForVoyageRankDescAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UDebrisForVoyageRankDescAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEnvQueryTest_SeaClueSpawnLocation::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(ContextSourcePoint, UClass);
	READ_PTR_FULL(ContextProjectionPoint, UClass);
}

void UEnvQueryTest_SeaClueSpawnLocation::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(ContextSourcePoint);
	DELE_PTR_FULL(ContextProjectionPoint);
}

void ULootForVoyageRankDescAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void ULootForVoyageRankDescAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UNPCLootSpawnInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UNPCLootSpawnInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UNPCLootSpawnComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UNPCLootSpawnComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void USeaClueSiteTypesDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void USeaClueSiteTypesDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UTaleQuestChooseLandOrSeaStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(SeaClueSiteTypes, USeaClueSiteTypesDataAsset);
}

void UTaleQuestChooseLandOrSeaStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(SeaClueSiteTypes);
}

// Function:
//		Offset -> 0x0133A7E0
//		Name   -> Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FClueSite>                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FClueSite> UTaleQuestClueSiteService::GetClueSites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites");

	UTaleQuestClueSiteService_GetClueSites_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTaleQuestClueSiteService::AfterRead()
{
	UTaleQuestService::AfterRead();

	READ_PTR_FULL(Desc, UTaleQuestClueSiteServiceDesc);
}

void UTaleQuestClueSiteService::BeforeDelete()
{
	UTaleQuestService::BeforeDelete();

	DELE_PTR_FULL(Desc);
}

void UTaleQuestClueSiteServiceDesc::AfterRead()
{
	UTaleQuestServiceDesc::AfterRead();

}

void UTaleQuestClueSiteServiceDesc::BeforeDelete()
{
	UTaleQuestServiceDesc::BeforeDelete();

}

void UTaleQuestChooseLandOrSeaStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(SeaClueSiteTypes, USeaClueSiteTypesDataAsset);
}

void UTaleQuestChooseLandOrSeaStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(SeaClueSiteTypes);
}

void UTaleQuestGenerateCluePointingToSiteStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGenerateCluePointingToSiteStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGenerateCluePointingToSiteStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(ConnectionConfiguration, UClueConnectionConfig);
}

void UTaleQuestGenerateCluePointingToSiteStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(ConnectionConfiguration);
}

void UTaleQuestGenerateClueSiteAtSeaLocationStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGenerateClueSiteAtSeaLocationStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGenerateClueSiteAtSeaLocationStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(ClueFactoryConfiguration, UClueFactoryConfig);
}

void UTaleQuestGenerateClueSiteAtSeaLocationStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(ClueFactoryConfiguration);
}

void UTaleQuestGenerateClueSiteOnIslandStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGenerateClueSiteOnIslandStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGenerateClueSiteOnIslandStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(ClueGenerationConfiguration, UClueFactoryConfig);
}

void UTaleQuestGenerateClueSiteOnIslandStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(ClueGenerationConfiguration);
}

void UTaleQuestGenerateDebrisTypeForVoyageRankStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGenerateDebrisTypeForVoyageRankStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(DebrisForRankDescAsset, UDebrisForVoyageRankDescAsset);
}

void UTaleQuestGenerateDebrisTypeForVoyageRankStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(DebrisForRankDescAsset);
}

void UTaleQuestGenerateLootDescForVoyageRankStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestGenerateLootDescForVoyageRankStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestGenerateLootDescForVoyageRankStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(LootForRankDescAsset, ULootForVoyageRankDescAsset);
}

void UTaleQuestGenerateLootDescForVoyageRankStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(LootForRankDescAsset);
}

void UTaleQuestIsClueOfTypeStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestIsClueOfTypeStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestIsClueOfTypeStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(ClueSiteTypeToMatch, UClass);
}

void UTaleQuestIsClueOfTypeStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(ClueSiteTypeToMatch);
}

void UTaleQuestSelectClueSiteForLootStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

	READ_PTR_FULL(StepDesc, UTaleQuestSelectClueSiteForLootStepDesc);
}

void UTaleQuestSelectClueSiteForLootStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

	DELE_PTR_FULL(StepDesc);
}

void UTaleQuestSelectClueSiteForLootStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

	READ_PTR_FULL(SelectionStrategy, UTaleQuestArrayEntrySelectionStrategy);
	READ_PTR_FULL(ClueSiteLootRestrictions, UClueSiteLootRestrictionsDataAsset);
}

void UTaleQuestSelectClueSiteForLootStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

	DELE_PTR_FULL(SelectionStrategy);
	DELE_PTR_FULL(ClueSiteLootRestrictions);
}

void UTaleQuestSpawnDebrisAtClueSiteStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestSpawnDebrisAtClueSiteStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestSpawnDebrisAtClueSiteStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestSpawnDebrisAtClueSiteStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestSpawnLootItemInClueSiteStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestSpawnLootItemInClueSiteStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestSpawnLootItemInClueSiteStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestSpawnLootItemInClueSiteStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestStoreClueOnActorStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestStoreClueOnActorStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestStoreClueOnActorStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestStoreClueOnActorStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep::AfterRead()
{
	UTaleQuestStep::AfterRead();

}

void UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep::BeforeDelete()
{
	UTaleQuestStep::BeforeDelete();

}

void UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc::AfterRead()
{
	UTaleQuestStepDesc::AfterRead();

}

void UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc::BeforeDelete()
{
	UTaleQuestStepDesc::BeforeDelete();

}

void UWeightedDebrisDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWeightedDebrisDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
