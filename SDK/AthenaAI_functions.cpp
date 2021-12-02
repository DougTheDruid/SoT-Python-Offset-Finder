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

void FAthenaAIFormComponentVfxCustomisation::AfterRead()
{
	READ_PTR_FULL(VfxCustomisationType, UClass);
	READ_PTR_FULL(VfxTemplate, UObject);
}

void FAthenaAIFormComponentVfxCustomisation::BeforeDelete()
{
	DELE_PTR_FULL(VfxCustomisationType);
	DELE_PTR_FULL(VfxTemplate);
}

void FAIEncounterAndWaveSettingsOverride::AfterRead()
{
	READ_PTR_FULL(EncounterSettings, UAIEncounterSettings);
	READ_PTR_FULL(SpawnWaveProgression, UAISpawnWaveSequenceRankProgression);
}

void FAIEncounterAndWaveSettingsOverride::BeforeDelete()
{
	DELE_PTR_FULL(EncounterSettings);
	DELE_PTR_FULL(SpawnWaveProgression);
}

void FAdditionalSpawnerBehaviour::AfterRead()
{
	READ_PTR_FULL(BehaviourStrategy, USpawnerBehaviourStrategy);
}

void FAdditionalSpawnerBehaviour::BeforeDelete()
{
	DELE_PTR_FULL(BehaviourStrategy);
}

void FAISpawnOverride::AfterRead()
{
}

void FAISpawnOverride::BeforeDelete()
{
}

void FConditionalAISpawnOverride::AfterRead()
{
	READ_PTR_FULL(Condition, UAISpawnOverrideCondition);
}

void FConditionalAISpawnOverride::BeforeDelete()
{
	DELE_PTR_FULL(Condition);
}

void FAISpawnContextIdEncounterSettingsPair::AfterRead()
{
	READ_PTR_FULL(EncounterSettings, UAIEncounterSettings);
	READ_PTR_FULL(SpawnWaveProgression, UAISpawnWaveSequenceRankProgression);
}

void FAISpawnContextIdEncounterSettingsPair::BeforeDelete()
{
	DELE_PTR_FULL(EncounterSettings);
	DELE_PTR_FULL(SpawnWaveProgression);
}

void FAISpawnTypeParams::AfterRead()
{
	READ_PTR_FULL(AIClassIdOverride, UClass);
}

void FAISpawnTypeParams::BeforeDelete()
{
	DELE_PTR_FULL(AIClassIdOverride);
}

void FWeightedAISpawnTypeParams::AfterRead()
{
}

void FWeightedAISpawnTypeParams::BeforeDelete()
{
}

void FAISpawnTypeParamsCollection::AfterRead()
{
}

void FAISpawnTypeParamsCollection::BeforeDelete()
{
}

void FAIFormDamageResponse::AfterRead()
{
	READ_PTR_FULL(DamagerType, UClass);
}

void FAIFormDamageResponse::BeforeDelete()
{
	DELE_PTR_FULL(DamagerType);
}

void FAthenaAIControllerParamValue::AfterRead()
{
}

void FAthenaAIControllerParamValue::BeforeDelete()
{
}

void FMinMaxAbilityRange::AfterRead()
{
}

void FMinMaxAbilityRange::BeforeDelete()
{
}

void FAIAbilityFollowUp::AfterRead()
{
	READ_PTR_FULL(AbilityType, UClass);
}

void FAIAbilityFollowUp::BeforeDelete()
{
	DELE_PTR_FULL(AbilityType);
}

void FAthenaAIAbilityPlayerBasedRange::AfterRead()
{
}

void FAthenaAIAbilityPlayerBasedRange::BeforeDelete()
{
}

void FAthenaAIAbilityPlayerBasedRanges::AfterRead()
{
}

void FAthenaAIAbilityPlayerBasedRanges::BeforeDelete()
{
}

void FAIAbilityContinuousCooldownParameterData::AfterRead()
{
}

void FAIAbilityContinuousCooldownParameterData::BeforeDelete()
{
}

void FAttackableTypeToAnimMapping::AfterRead()
{
	READ_PTR_FULL(AnimMontage, UObject);
}

void FAttackableTypeToAnimMapping::BeforeDelete()
{
	DELE_PTR_FULL(AnimMontage);
}

void FSwimAttackTargetShipImpulseData::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
}

void FSwimAttackTargetShipImpulseData::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
}

void FAIStrategyMovementProperties::AfterRead()
{
	READ_PTR_FULL(AIStrategy, UClass);
}

void FAIStrategyMovementProperties::BeforeDelete()
{
	DELE_PTR_FULL(AIStrategy);
}

void FAISpawnerWave::AfterRead()
{
}

void FAISpawnerWave::BeforeDelete()
{
}

void FAIPersistentSpawnerWave::AfterRead()
{
	FAISpawnerWave::AfterRead();

	READ_PTR_FULL(AITypeToCache, UClass);
}

void FAIPersistentSpawnerWave::BeforeDelete()
{
	FAISpawnerWave::BeforeDelete();

	DELE_PTR_FULL(AITypeToCache);
}

void FAIBountySpawnerWave::AfterRead()
{
	FAIPersistentSpawnerWave::AfterRead();

	READ_PTR_FULL(PostSpawnAction, UPostBountyAIPawnSpawnedAction);
	READ_PTR_FULL(BountyReward, UClass);
}

void FAIBountySpawnerWave::BeforeDelete()
{
	FAIPersistentSpawnerWave::BeforeDelete();

	DELE_PTR_FULL(PostSpawnAction);
	DELE_PTR_FULL(BountyReward);
}

void FAIBountySpawnerWaveGroup::AfterRead()
{
	READ_PTR_FULL(CombatDialogueForWaveGroup, UClass);
}

void FAIBountySpawnerWaveGroup::BeforeDelete()
{
	DELE_PTR_FULL(CombatDialogueForWaveGroup);
}

void FAIFaunaSpawnerWave::AfterRead()
{
	FAISpawnerWave::AfterRead();

}

void FAIFaunaSpawnerWave::BeforeDelete()
{
	FAISpawnerWave::BeforeDelete();

}

void FAthenaAIControllerSenseSettings::AfterRead()
{
}

void FAthenaAIControllerSenseSettings::BeforeDelete()
{
}

void FAthenaAIControllerSenseSettingOverride::AfterRead()
{
	READ_PTR_FULL(AIStrategy, UClass);
}

void FAthenaAIControllerSenseSettingOverride::BeforeDelete()
{
	DELE_PTR_FULL(AIStrategy);
}

void FAIStategyControllerMovementMod::AfterRead()
{
	READ_PTR_FULL(AIStrategy, UClass);
}

void FAIStategyControllerMovementMod::BeforeDelete()
{
	DELE_PTR_FULL(AIStrategy);
}

void FAIEncounterSpecification::AfterRead()
{
	READ_PTR_FULL(Skillset, UAthenaAIControllerParamsDataAsset);
	READ_PTR_FULL(Loadout, ULoadoutAsset);
	READ_PTR_FULL(Form, UAthenaAIFormDataAsset);
	READ_PTR_FULL(Ammo, UAthenaAIAmmoDataAsset);
	READ_PTR_FULL(AIClass, UClass);
	READ_PTR_FULL(PartsCategory, UAIPartsCategory);
}

void FAIEncounterSpecification::BeforeDelete()
{
	DELE_PTR_FULL(Skillset);
	DELE_PTR_FULL(Loadout);
	DELE_PTR_FULL(Form);
	DELE_PTR_FULL(Ammo);
	DELE_PTR_FULL(AIClass);
	DELE_PTR_FULL(PartsCategory);
}

void FAIDioramaPawn::AfterRead()
{
	READ_PTR_FULL(Pawn, APawn);
}

void FAIDioramaPawn::BeforeDelete()
{
	DELE_PTR_FULL(Pawn);
}

void FAIDioramaRoleDesc::AfterRead()
{
	READ_PTR_FULL(StartingItemCategory, UClass);
}

void FAIDioramaRoleDesc::BeforeDelete()
{
	DELE_PTR_FULL(StartingItemCategory);
}

void FAIDioramaLocationSourceComponentData::AfterRead()
{
	READ_PTR_FULL(Interactable, AActor);
}

void FAIDioramaLocationSourceComponentData::BeforeDelete()
{
	DELE_PTR_FULL(Interactable);
}

void FIslandDioramas::AfterRead()
{
}

void FIslandDioramas::BeforeDelete()
{
}

void FDioramaCategoryEntries::AfterRead()
{
}

void FDioramaCategoryEntries::BeforeDelete()
{
}

void FPetFlyingStrategyProperties::AfterRead()
{
	READ_PTR_FULL(Strategy, UClass);
}

void FPetFlyingStrategyProperties::BeforeDelete()
{
	DELE_PTR_FULL(Strategy);
}

void FPetMovementRequest::AfterRead()
{
}

void FPetMovementRequest::BeforeDelete()
{
}

void FPetTurnRateModifier::AfterRead()
{
	READ_PTR_FULL(Strategy, UClass);
}

void FPetTurnRateModifier::BeforeDelete()
{
	DELE_PTR_FULL(Strategy);
}

void FPetLoadedMaterial::AfterRead()
{
	READ_PTR_FULL(MaterialInstance, UMaterialInstance);
}

void FPetLoadedMaterial::BeforeDelete()
{
	DELE_PTR_FULL(MaterialInstance);
}

void FPetPartSizeMapping::AfterRead()
{
}

void FPetPartSizeMapping::BeforeDelete()
{
}

void FAIPartId::AfterRead()
{
}

void FAIPartId::BeforeDelete()
{
}

void FPetMaterialEntry::AfterRead()
{
}

void FPetMaterialEntry::BeforeDelete()
{
}

void FPetWieldableReactMapping::AfterRead()
{
	READ_PTR_FULL(WieldableType, UClass);
}

void FPetWieldableReactMapping::BeforeDelete()
{
	DELE_PTR_FULL(WieldableType);
}

void FAthenaAIControllerDamageTargetScoreFromPerceivedTarget::AfterRead()
{
}

void FAthenaAIControllerDamageTargetScoreFromPerceivedTarget::BeforeDelete()
{
}

void FAthenaAIControllerHealthCustomisation::AfterRead()
{
}

void FAthenaAIControllerHealthCustomisation::BeforeDelete()
{
}

void FTinySharkParams::AfterRead()
{
	READ_PTR_FULL(TinySharkType, UClass);
	READ_PTR_FULL(TinySharkClassID, UClass);
}

void FTinySharkParams::BeforeDelete()
{
	DELE_PTR_FULL(TinySharkType);
	DELE_PTR_FULL(TinySharkClassID);
}

void FEventTinySharkSpawned::AfterRead()
{
}

void FEventTinySharkSpawned::BeforeDelete()
{
}

void FTinySharkCollidedTelemetryEvent::AfterRead()
{
}

void FTinySharkCollidedTelemetryEvent::BeforeDelete()
{
}

void FTinySharkDespawnTelemetryEvent::AfterRead()
{
}

void FTinySharkDespawnTelemetryEvent::BeforeDelete()
{
}

void FTinySharkSpawnTelemetryEvent::AfterRead()
{
}

void FTinySharkSpawnTelemetryEvent::BeforeDelete()
{
}

void FAIExclusionZone::AfterRead()
{
}

void FAIExclusionZone::BeforeDelete()
{
}

void FEventAIPartsRetrievalComponentBeforeBeginLoad::AfterRead()
{
}

void FEventAIPartsRetrievalComponentBeforeBeginLoad::BeforeDelete()
{
}

void FAISpawnerArchive::AfterRead()
{
}

void FAISpawnerArchive::BeforeDelete()
{
}

void FAIFixedWavesSpawnerArchive::AfterRead()
{
	FAISpawnerArchive::AfterRead();

}

void FAIFixedWavesSpawnerArchive::BeforeDelete()
{
	FAISpawnerArchive::BeforeDelete();

}

void FAIIncrementalWaveSpawnerArchive::AfterRead()
{
	FAISpawnerArchive::AfterRead();

}

void FAIIncrementalWaveSpawnerArchive::BeforeDelete()
{
	FAISpawnerArchive::BeforeDelete();

}

void FAIPerCrewSpawnerRespawnUnit::AfterRead()
{
}

void FAIPerCrewSpawnerRespawnUnit::BeforeDelete()
{
}

void FAthenaAIControllerWeightedRangesParamValue::AfterRead()
{
}

void FAthenaAIControllerWeightedRangesParamValue::BeforeDelete()
{
}

void FTinySharkShipSpawnData::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
}

void FTinySharkShipSpawnData::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
}

void FTinySharkServiceParams::AfterRead()
{
	READ_PTR_FULL(TinySharkParams, UTinySharkParamsDataAsset);
	READ_PTR_FULL(SpawnForShipQuery, UEnvQuery);
}

void FTinySharkServiceParams::BeforeDelete()
{
	DELE_PTR_FULL(TinySharkParams);
	DELE_PTR_FULL(SpawnForShipQuery);
}

void FAthenaAICharacterCannonTarget::AfterRead()
{
}

void FAthenaAICharacterCannonTarget::BeforeDelete()
{
}

void FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties::AfterRead()
{
	READ_PTR_FULL(ItemCategory, UClass);
	READ_PTR_FULL(DistanceInMToProjectileHitChanceCurve, UCurveFloat);
}

void FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties::BeforeDelete()
{
	DELE_PTR_FULL(ItemCategory);
	DELE_PTR_FULL(DistanceInMToProjectileHitChanceCurve);
}

void FAthenaAIItemParamValue::AfterRead()
{
}

void FAthenaAIItemParamValue::BeforeDelete()
{
}

void FAthenaAICharacterControllerSpawnItemDescForItemCategory::AfterRead()
{
	READ_PTR_FULL(ItemCategory, UClass);
	READ_PTR_FULL(ItemDesc, UClass);
}

void FAthenaAICharacterControllerSpawnItemDescForItemCategory::BeforeDelete()
{
	DELE_PTR_FULL(ItemCategory);
	DELE_PTR_FULL(ItemDesc);
}

void FAthenaAIAbilityDamageStage::AfterRead()
{
}

void FAthenaAIAbilityDamageStage::BeforeDelete()
{
}

void FAthenaAICharacterControllerWeightedAmmoType::AfterRead()
{
	READ_PTR_FULL(AmmoType, UClass);
}

void FAthenaAICharacterControllerWeightedAmmoType::BeforeDelete()
{
	DELE_PTR_FULL(AmmoType);
}

void FAIAmmoRankMapping::AfterRead()
{
	READ_PTR_FULL(Ammo, UAthenaAIAmmoDataAsset);
}

void FAIAmmoRankMapping::BeforeDelete()
{
	DELE_PTR_FULL(Ammo);
}

void FAIDebugVisualisationLine::AfterRead()
{
}

void FAIDebugVisualisationLine::BeforeDelete()
{
}

void FAIDebugVisualisationBox::AfterRead()
{
}

void FAIDebugVisualisationBox::BeforeDelete()
{
}

void FAIDebugVisualisationCylinder::AfterRead()
{
}

void FAIDebugVisualisationCylinder::BeforeDelete()
{
}

void FAIDebugVisualisationSphere::AfterRead()
{
}

void FAIDebugVisualisationSphere::BeforeDelete()
{
}

void FAIDebugVisualisationCone::AfterRead()
{
}

void FAIDebugVisualisationCone::BeforeDelete()
{
}

void FAIIndividualVarietyEntry::AfterRead()
{
}

void FAIIndividualVarietyEntry::BeforeDelete()
{
}

void FTargetSkillsetProgressionPair::AfterRead()
{
}

void FTargetSkillsetProgressionPair::BeforeDelete()
{
}

void FTargetItemDropProgressionPair::AfterRead()
{
}

void FTargetItemDropProgressionPair::BeforeDelete()
{
}

void FAIEncounterGenerationRecipeFeatureBasedRankOrderList::AfterRead()
{
}

void FAIEncounterGenerationRecipeFeatureBasedRankOrderList::BeforeDelete()
{
}

void FAIFormRankMapping::AfterRead()
{
	READ_PTR_FULL(Form, UAthenaAIFormDataAsset);
}

void FAIFormRankMapping::BeforeDelete()
{
	DELE_PTR_FULL(Form);
}

void FAIPartsCategoryMapping::AfterRead()
{
	READ_PTR_FULL(ClassId, UClass);
	READ_PTR_FULL(PartsCategory, UAIPartsCategory);
}

void FAIPartsCategoryMapping::BeforeDelete()
{
	DELE_PTR_FULL(ClassId);
	DELE_PTR_FULL(PartsCategory);
}

void FAISkillsetRankMapping::AfterRead()
{
	READ_PTR_FULL(Skillset, UAthenaAIControllerParamsDataAsset);
}

void FAISkillsetRankMapping::BeforeDelete()
{
	DELE_PTR_FULL(Skillset);
}

void FAIDropSpawnerRankMapping::AfterRead()
{
}

void FAIDropSpawnerRankMapping::BeforeDelete()
{
}

void FAILoadoutRankMapping::AfterRead()
{
	READ_PTR_FULL(Loadout, ULoadoutAsset);
}

void FAILoadoutRankMapping::BeforeDelete()
{
	DELE_PTR_FULL(Loadout);
}

void FAITypeData::AfterRead()
{
	READ_PTR_FULL(DefaultDebugAIClassId, UClass);
}

void FAITypeData::BeforeDelete()
{
	DELE_PTR_FULL(DefaultDebugAIClassId);
}

void FAthenaAICharacterCannonTargetingParams::AfterRead()
{
}

void FAthenaAICharacterCannonTargetingParams::BeforeDelete()
{
}

void FAthenaAICharacterControllerItemCategoryNamedParams::AfterRead()
{
	READ_PTR_FULL(ItemCategory, UClass);
}

void FAthenaAICharacterControllerItemCategoryNamedParams::BeforeDelete()
{
	DELE_PTR_FULL(ItemCategory);
}

void FAIFormVarietyEntry::AfterRead()
{
}

void FAIFormVarietyEntry::BeforeDelete()
{
}

void FAIPartsCategoryFormMapping::AfterRead()
{
	READ_PTR_FULL(Form, UAthenaAIFormDataAsset);
}

void FAIPartsCategoryFormMapping::BeforeDelete()
{
	DELE_PTR_FULL(Form);
}

void FAISpawnWaveSequenceRankMapping::AfterRead()
{
	READ_PTR_FULL(SpawnWaveSequence, UAISpawnWaveSequence);
}

void FAISpawnWaveSequenceRankMapping::BeforeDelete()
{
	DELE_PTR_FULL(SpawnWaveSequence);
}

void FAIWeightedProbabilityRangeOfRangesRankMapping::AfterRead()
{
	READ_PTR_FULL(RangeOfRanges, UAIWeightedProbabilityRangeOfRangesAsset);
}

void FAIWeightedProbabilityRangeOfRangesRankMapping::BeforeDelete()
{
	DELE_PTR_FULL(RangeOfRanges);
}

void FCustomPlayersAITrackerData::AfterRead()
{
	READ_PTR_FULL(Tracker, UAIPlayerTracker);
}

void FCustomPlayersAITrackerData::BeforeDelete()
{
	DELE_PTR_FULL(Tracker);
}

void FAIPartIdNumVariantInfo::AfterRead()
{
}

void FAIPartIdNumVariantInfo::BeforeDelete()
{
}

void FReplicatedAIPartsData::AfterRead()
{
	READ_PTR_FULL(PartsCategory, UAIPartsCategory);
}

void FReplicatedAIPartsData::BeforeDelete()
{
	DELE_PTR_FULL(PartsCategory);
}

void FSpawnLocationGroup::AfterRead()
{
}

void FSpawnLocationGroup::BeforeDelete()
{
}

void FAISpawnContextData::AfterRead()
{
	READ_PTR_FULL(Id, UClass);
}

void FAISpawnContextData::BeforeDelete()
{
	DELE_PTR_FULL(Id);
}

void FAITargetBounds::AfterRead()
{
}

void FAITargetBounds::BeforeDelete()
{
}

void FAITargetInfo::AfterRead()
{
}

void FAITargetInfo::BeforeDelete()
{
}

void FAthenaAIControllerTargetPickingData::AfterRead()
{
}

void FAthenaAIControllerTargetPickingData::BeforeDelete()
{
}

void FEventSporeBreathAIAbilityFinished::AfterRead()
{
}

void FEventSporeBreathAIAbilityFinished::BeforeDelete()
{
}

void FEventSporeBreathAIAbilityStarted::AfterRead()
{
}

void FEventSporeBreathAIAbilityStarted::BeforeDelete()
{
}

void FEventAIVulnerabilityAbilityEnded::AfterRead()
{
}

void FEventAIVulnerabilityAbilityEnded::BeforeDelete()
{
}

void FEventAIVulnerabilityAbilityStarted::AfterRead()
{
}

void FEventAIVulnerabilityAbilityStarted::BeforeDelete()
{
}

void FEventAIPawnCarrierChange::AfterRead()
{
	READ_PTR_FULL(Carrier, AActor);
}

void FEventAIPawnCarrierChange::BeforeDelete()
{
	DELE_PTR_FULL(Carrier);
}

void FEventAIDebugTextUpdated::AfterRead()
{
}

void FEventAIDebugTextUpdated::BeforeDelete()
{
}

void FEventAIControllerUnPossess::AfterRead()
{
}

void FEventAIControllerUnPossess::BeforeDelete()
{
}

void FEventAIKnockbackEnded::AfterRead()
{
}

void FEventAIKnockbackEnded::BeforeDelete()
{
}

void FEventAIKnockbackStarted::AfterRead()
{
}

void FEventAIKnockbackStarted::BeforeDelete()
{
}

void FEventNewAIStrategyBPReadable::AfterRead()
{
	READ_PTR_FULL(NewAIStrategy, UClass);
}

void FEventNewAIStrategyBPReadable::BeforeDelete()
{
	DELE_PTR_FULL(NewAIStrategy);
}

void FEventNewAIStrategy::AfterRead()
{
	READ_PTR_FULL(NewAIStrategy, UClass);
}

void FEventNewAIStrategy::BeforeDelete()
{
	DELE_PTR_FULL(NewAIStrategy);
}

void FEventPawnRequestDespawn::AfterRead()
{
}

void FEventPawnRequestDespawn::BeforeDelete()
{
}

void FEventPawnRemoveOwnership::AfterRead()
{
	READ_PTR_FULL(AIPawn, APawn);
}

void FEventPawnRemoveOwnership::BeforeDelete()
{
	DELE_PTR_FULL(AIPawn);
}

void FEventOwnedPawnRemoveOwnership::AfterRead()
{
}

void FEventOwnedPawnRemoveOwnership::BeforeDelete()
{
}

void FEventAIPartRetrievalRequestFailed::AfterRead()
{
}

void FEventAIPartRetrievalRequestFailed::BeforeDelete()
{
}

void FEventVisualAppearanceSelected::AfterRead()
{
	READ_PTR_FULL(PartsCategory, UAIPartsCategory);
}

void FEventVisualAppearanceSelected::BeforeDelete()
{
	DELE_PTR_FULL(PartsCategory);
}

void FEventAILoadoutSelected::AfterRead()
{
	READ_PTR_FULL(NonStorableItem, UClass);
}

void FEventAILoadoutSelected::BeforeDelete()
{
	DELE_PTR_FULL(NonStorableItem);
}

void FEventAIAmmoSelected::AfterRead()
{
	READ_PTR_FULL(Ammo, UAthenaAIAmmoDataAsset);
}

void FEventAIAmmoSelected::BeforeDelete()
{
	DELE_PTR_FULL(Ammo);
}

void FEventAIFormSelected::AfterRead()
{
	READ_PTR_FULL(Form, UAthenaAIFormDataAsset);
}

void FEventAIFormSelected::BeforeDelete()
{
	DELE_PTR_FULL(Form);
}

void FEventAIPawnReadyToConstructDebugText::AfterRead()
{
}

void FEventAIPawnReadyToConstructDebugText::BeforeDelete()
{
}

void FEventOwnedPawnFinishedSpawning::AfterRead()
{
	READ_PTR_FULL(AICoordinator, UObject);
	READ_PTR_FULL(ActorToPerceiveOnSpawn, AActor);
	READ_PTR_FULL(Skillset, UAthenaAIControllerParamsDataAsset);
	READ_PTR_FULL(TargetInteractableOnSpawn, UObject);
	READ_PTR_FULL(OwnerAISpawner, UAISpawner);
}

void FEventOwnedPawnFinishedSpawning::BeforeDelete()
{
	DELE_PTR_FULL(AICoordinator);
	DELE_PTR_FULL(ActorToPerceiveOnSpawn);
	DELE_PTR_FULL(Skillset);
	DELE_PTR_FULL(TargetInteractableOnSpawn);
	DELE_PTR_FULL(OwnerAISpawner);
}

void FEventPlayerLeftAISpawnableWater::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FEventPlayerLeftAISpawnableWater::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FEventPlayerEnterAISpawnableWater::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FEventPlayerEnterAISpawnableWater::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FEventPlayerSetFootUponAISpawnRegion::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FEventPlayerSetFootUponAISpawnRegion::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FEventPlayerLeftAISpawnRegion::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FEventPlayerLeftAISpawnRegion::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FEventPlayerEnteredAISpawnRegion::AfterRead()
{
	READ_PTR_FULL(Player, AActor);
}

void FEventPlayerEnteredAISpawnRegion::BeforeDelete()
{
	DELE_PTR_FULL(Player);
}

void FEventAllAIProgressiveWavesCompleted::AfterRead()
{
}

void FEventAllAIProgressiveWavesCompleted::BeforeDelete()
{
}

void FEventAIPawnRemovedFromAIRegion::AfterRead()
{
	READ_PTR_FULL(AIPawn, APawn);
}

void FEventAIPawnRemovedFromAIRegion::BeforeDelete()
{
	DELE_PTR_FULL(AIPawn);
}

void FEventAIPawnAddedToAIRegion::AfterRead()
{
	READ_PTR_FULL(AIPawn, APawn);
}

void FEventAIPawnAddedToAIRegion::BeforeDelete()
{
	DELE_PTR_FULL(AIPawn);
}

void FEventOceanCrawlerAIBuffAudioRequest::AfterRead()
{
}

void FEventOceanCrawlerAIBuffAudioRequest::BeforeDelete()
{
}

void FEventOceanCrawlerAIAbilityAudioRequest::AfterRead()
{
}

void FEventOceanCrawlerAIAbilityAudioRequest::BeforeDelete()
{
}

void FEventAthenaAISpawnBeginAnim::AfterRead()
{
}

void FEventAthenaAISpawnBeginAnim::BeforeDelete()
{
}

void FEventAthenaAISpawnActive::AfterRead()
{
}

void FEventAthenaAISpawnActive::BeforeDelete()
{
}

void FAISpawnerTelemetryEvent::AfterRead()
{
}

void FAISpawnerTelemetryEvent::BeforeDelete()
{
}

void FAITelemetryFragmentInput::AfterRead()
{
	FTelemetryFragmentInput::AfterRead();

}

void FAITelemetryFragmentInput::BeforeDelete()
{
	FTelemetryFragmentInput::BeforeDelete();

}

void FAITelemetryFragment::AfterRead()
{
}

void FAITelemetryFragment::BeforeDelete()
{
}

void FPlayerKillAITelemetryEvent::AfterRead()
{
}

void FPlayerKillAITelemetryEvent::BeforeDelete()
{
}

void FAISpawnTelemetryEvent::AfterRead()
{
}

void FAISpawnTelemetryEvent::BeforeDelete()
{
}

void FAIActorTimeout::AfterRead()
{
	READ_PTR_FULL(AIActor, AActor);
}

void FAIActorTimeout::BeforeDelete()
{
	DELE_PTR_FULL(AIActor);
}

void FAIPerPlayerSpawnerPlayerDetailsUnit::AfterRead()
{
}

void FAIPerPlayerSpawnerPlayerDetailsUnit::BeforeDelete()
{
}

void FTemporaryPlayerDetailsUnitEntry::AfterRead()
{
}

void FTemporaryPlayerDetailsUnitEntry::BeforeDelete()
{
}

void FAICustomNameTitleMapping::AfterRead()
{
	READ_PTR_FULL(AIClassId, UClass);
}

void FAICustomNameTitleMapping::BeforeDelete()
{
	DELE_PTR_FULL(AIClassId);
}

void FAICustomClassIdNameOverrides::AfterRead()
{
}

void FAICustomClassIdNameOverrides::BeforeDelete()
{
}

void FChanceForSharksToBlockSirenEncounterData::AfterRead()
{
}

void FChanceForSharksToBlockSirenEncounterData::BeforeDelete()
{
}

void FPerDepthSpawnChance::AfterRead()
{
}

void FPerDepthSpawnChance::BeforeDelete()
{
}

void FPlayerInWaterData::AfterRead()
{
}

void FPlayerInWaterData::BeforeDelete()
{
}

void FSirenEncounterData::AfterRead()
{
	READ_PTR_FULL(GameWorld, UWorld);
	READ_PTR_FULL(SirenSpawner, UAIPerPlayerSpawner);
	READ_PTR_FULL(AIRegion, USimpleAIRegion);
	READ_PTR_FULL(ProximityPlayerTracker, UAIProximityPlayerTracker);
}

void FSirenEncounterData::BeforeDelete()
{
	DELE_PTR_FULL(GameWorld);
	DELE_PTR_FULL(SirenSpawner);
	DELE_PTR_FULL(AIRegion);
	DELE_PTR_FULL(ProximityPlayerTracker);
}

void FMinMaxBurrowAbility::AfterRead()
{
}

void FMinMaxBurrowAbility::BeforeDelete()
{
}

void FWeightedAmmoType::AfterRead()
{
	READ_PTR_FULL(AmmoType, UClass);
}

void FWeightedAmmoType::BeforeDelete()
{
	DELE_PTR_FULL(AmmoType);
}

void FWeightedAmmoTypeRange::AfterRead()
{
}

void FWeightedAmmoTypeRange::BeforeDelete()
{
}

void FCarriedItemThreatOverride::AfterRead()
{
	READ_PTR_FULL(ItemDesc, UClass);
}

void FCarriedItemThreatOverride::BeforeDelete()
{
	DELE_PTR_FULL(ItemDesc);
}

void FHearingThreat::AfterRead()
{
}

void FHearingThreat::BeforeDelete()
{
}

void FBlackboardValueCondition::AfterRead()
{
}

void FBlackboardValueCondition::BeforeDelete()
{
}

void FAIBountySpawnerArchiveWaveEntry::AfterRead()
{
}

void FAIBountySpawnerArchiveWaveEntry::BeforeDelete()
{
}

void FAIBountySpawnerArchiveWaveGroupEntry::AfterRead()
{
}

void FAIBountySpawnerArchiveWaveGroupEntry::BeforeDelete()
{
}

void FChanceAndBlackboardKeyPair::AfterRead()
{
}

void FChanceAndBlackboardKeyPair::BeforeDelete()
{
}

void FConditionalBasedOnBlackboardKey::AfterRead()
{
}

void FConditionalBasedOnBlackboardKey::BeforeDelete()
{
}

void FWeightedAIStrategyChance::AfterRead()
{
	READ_PTR_FULL(Strategy, UClass);
}

void FWeightedAIStrategyChance::BeforeDelete()
{
	DELE_PTR_FULL(Strategy);
}

void FAIStrategyVulnerabilityData::AfterRead()
{
	READ_PTR_FULL(Strategy, UClass);
}

void FAIStrategyVulnerabilityData::BeforeDelete()
{
	DELE_PTR_FULL(Strategy);
}

void FAIAbilityDebugReplicatedIntervals::AfterRead()
{
}

void FAIAbilityDebugReplicatedIntervals::BeforeDelete()
{
}

void FAIEncounterWave::AfterRead()
{
}

void FAIEncounterWave::BeforeDelete()
{
}

void FAIBountySpawnerParams::AfterRead()
{
}

void FAIBountySpawnerParams::BeforeDelete()
{
}

void FEventAIStartedDeadActionState::AfterRead()
{
	READ_PTR_FULL(Killer, AActor);
}

void FEventAIStartedDeadActionState::BeforeDelete()
{
	DELE_PTR_FULL(Killer);
}

void FEventPawnFinishedDying::AfterRead()
{
	READ_PTR_FULL(AIPawn, APawn);
}

void FEventPawnFinishedDying::BeforeDelete()
{
	DELE_PTR_FULL(AIPawn);
}

void FEventPawnStartedDying::AfterRead()
{
	READ_PTR_FULL(AIPawn, APawn);
	READ_PTR_FULL(Instigator, AActor);
}

void FEventPawnStartedDying::BeforeDelete()
{
	DELE_PTR_FULL(AIPawn);
	DELE_PTR_FULL(Instigator);
}

void FEventOwnedPawnFinishedDying::AfterRead()
{
}

void FEventOwnedPawnFinishedDying::BeforeDelete()
{
}

void FEventOwnedPawnStartedDying::AfterRead()
{
	READ_PTR_FULL(Instigator, AActor);
}

void FEventOwnedPawnStartedDying::BeforeDelete()
{
	DELE_PTR_FULL(Instigator);
}

void FBountySpawnerTargetDesc::AfterRead()
{
}

void FBountySpawnerTargetDesc::BeforeDelete()
{
}

void FAIBountySpawnerWaveLocation::AfterRead()
{
}

void FAIBountySpawnerWaveLocation::BeforeDelete()
{
}

void FAIBountySpawnerArchive::AfterRead()
{
	FAISpawnerArchive::AfterRead();

}

void FAIBountySpawnerArchive::BeforeDelete()
{
	FAISpawnerArchive::BeforeDelete();

}

void FBountySpawnerNewWaveGroupSpawnedEvent::AfterRead()
{
}

void FBountySpawnerNewWaveGroupSpawnedEvent::BeforeDelete()
{
}

void FBountySpawnerAudioChangedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FBountySpawnerAudioChangedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEventAIBountySpawnerTargetKilled::AfterRead()
{
	READ_PTR_FULL(TargetActor, AActor);
	READ_PTR_FULL(ItemDropped, AItemInfo);
	READ_PTR_FULL(Instigator, AActor);
}

void FEventAIBountySpawnerTargetKilled::BeforeDelete()
{
	DELE_PTR_FULL(TargetActor);
	DELE_PTR_FULL(ItemDropped);
	DELE_PTR_FULL(Instigator);
}

void FEventAIBountySpawnerWaveCompleted::AfterRead()
{
	READ_PTR_FULL(InstigatorOfFinalAIPawnDeath, AActor);
}

void FEventAIBountySpawnerWaveCompleted::BeforeDelete()
{
	DELE_PTR_FULL(InstigatorOfFinalAIPawnDeath);
}

void FMerchantCrateMetaWrapper::AfterRead()
{
	FItemMetaBase::AfterRead();

}

void FMerchantCrateMetaWrapper::BeforeDelete()
{
	FItemMetaBase::BeforeDelete();

}

void FEventFaunaThreatLevelChanged::AfterRead()
{
}

void FEventFaunaThreatLevelChanged::BeforeDelete()
{
}

void FEventFaunaAgitationEnded::AfterRead()
{
}

void FEventFaunaAgitationEnded::BeforeDelete()
{
}

void FEventFaunaAgitationBegun::AfterRead()
{
	READ_PTR_FULL(SourceActor, AActor);
}

void FEventFaunaAgitationBegun::BeforeDelete()
{
	DELE_PTR_FULL(SourceActor);
}

void FEventSwimRotationModeChanged::AfterRead()
{
}

void FEventSwimRotationModeChanged::BeforeDelete()
{
}

void FTinySharkWorldSettingsParams::AfterRead()
{
}

void FTinySharkWorldSettingsParams::BeforeDelete()
{
}

void FTinySharkEQSRequest::AfterRead()
{
}

void FTinySharkEQSRequest::BeforeDelete()
{
}

void FTinySharkSpawnedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FTinySharkSpawnedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FTinySharkKilledNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FTinySharkKilledNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FEventTinySharkKilled::AfterRead()
{
}

void FEventTinySharkKilled::BeforeDelete()
{
}

void FEventTinySharkDamaged::AfterRead()
{
}

void FEventTinySharkDamaged::BeforeDelete()
{
}

void FEventTinySharkDespawned::AfterRead()
{
}

void FEventTinySharkDespawned::BeforeDelete()
{
}

void FAIPerCrewSpawnerCrewUnit::AfterRead()
{
}

void FAIPerCrewSpawnerCrewUnit::BeforeDelete()
{
}

void FAIProgressiveWavesSpawnerArchive::AfterRead()
{
	FAISpawnerArchive::AfterRead();

}

void FAIProgressiveWavesSpawnerArchive::BeforeDelete()
{
	FAISpawnerArchive::BeforeDelete();

}

// Function:
//		Offset -> 0x041D1A50
//		Name   -> Function AthenaAI.AthenaAIFormComponent.OnRep_FormData
//		Flags  -> (Final, Native, Private)
void UAthenaAIFormComponent::OnRep_FormData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIFormComponent.OnRep_FormData");

	UAthenaAIFormComponent_OnRep_FormData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAthenaAIFormComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(FormData, UAthenaAIFormDataAsset);
	READ_PTR_FULL(HitReactionsLayer, UCharacterHitReactionDamagerTypeToAnimTypeLayer);
}

void UAthenaAIFormComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(FormData);
	DELE_PTR_FULL(HitReactionsLayer);
}

void UAthenaAIAbilityType::AfterRead()
{
	UObject::AfterRead();

}

void UAthenaAIAbilityType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAIStrategyId::AfterRead()
{
	UObject::AfterRead();

}

void UAIStrategyId::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x041D1660
//		Name   -> Function AthenaAI.AISpawner.GetNumOfSpawnRequests
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAISpawner::GetNumOfSpawnRequests()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AISpawner.GetNumOfSpawnRequests");

	UAISpawner_GetNumOfSpawnRequests_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAISpawner::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DefaultEncounterSettings, UAIEncounterSettings);
	READ_PTR_FULL(DefaultSpawnWaveProgression, UAISpawnWaveSequenceRankProgression);
	READ_PTR_FULL(FindSpawnPosQuery, UEnvQuery);
	READ_PTR_FULL(AthenaAISettings, UAthenaAISettings);
}

void UAISpawner::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DefaultEncounterSettings);
	DELE_PTR_FULL(DefaultSpawnWaveProgression);
	DELE_PTR_FULL(FindSpawnPosQuery);
	DELE_PTR_FULL(AthenaAISettings);
}

void UAIPerCrewSpawner::AfterRead()
{
	UAISpawner::AfterRead();

	READ_PTR_FULL(DefaultRespawnTimerRanges, UAIWeightedProbabilityRangeOfRangesRankProgression);
}

void UAIPerCrewSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

	DELE_PTR_FULL(DefaultRespawnTimerRanges);
}

void UAthenaAIFormDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(OverrideStatusRecipientResponseList, UStatusRecipientResponseList);
	READ_PTR_FULL(SurfaceMaterial, UPhysicalMaterial);
	READ_PTR_FULL(KilledVfxTemplate, UObject);
	READ_PTR_FULL(AICharacterAudioComponent, UClass);
	READ_PTR_FULL(AnimNotifyEmitterWithObservers, UClass);
	READ_PTR_FULL(FormComponentClass, UClass);
}

void UAthenaAIFormDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(OverrideStatusRecipientResponseList);
	DELE_PTR_FULL(SurfaceMaterial);
	DELE_PTR_FULL(KilledVfxTemplate);
	DELE_PTR_FULL(AICharacterAudioComponent);
	DELE_PTR_FULL(AnimNotifyEmitterWithObservers);
	DELE_PTR_FULL(FormComponentClass);
}

void UAIPlayerTracker::AfterRead()
{
	UObject::AfterRead();

}

void UAIPlayerTracker::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAISpawnerPlayerTracker::AfterRead()
{
	UAIPlayerTracker::AfterRead();

}

void UAISpawnerPlayerTracker::BeforeDelete()
{
	UAIPlayerTracker::BeforeDelete();

}

void UAIInteractableType::AfterRead()
{
	UObject::AfterRead();

}

void UAIInteractableType::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAthenaAIAbilityStageParams::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(TypeClass, UClass);
}

void UAthenaAIAbilityStageParams::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(TypeClass);
}

void UAthenaAIAbility::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AbilityParams, UAthenaAIAbilityParams);
	READ_PTR_FULL(Pawn, APawn);
	READ_PTR_FULL(Controller, AAthenaAIController);
	READ_PTR_FULL(CurrentAbilityStageParams, UAthenaAIAbilityStageParams);
}

void UAthenaAIAbility::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AbilityParams);
	DELE_PTR_FULL(Pawn);
	DELE_PTR_FULL(Controller);
	DELE_PTR_FULL(CurrentAbilityStageParams);
}

void UAthenaAIAbilityParams::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AIAbilityTypeClass, UClass);
}

void UAthenaAIAbilityParams::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AIAbilityTypeClass);
}

void UAIInteractableComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Type, UClass);
}

void UAIInteractableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Type);
}

void UBTDecorator_BaseConditional::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_BaseConditional::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_TargetOnShip::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_TargetOnShip::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTService_QueryShipsForTarget::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_QueryShipsForTarget::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTTask_SwimAttackTargetActor::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SwimAttackTargetActor::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SwimAttackTargetShip::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(AttackAnim, UAnimSequence);
	READ_PTR_FULL(AttackVFX, UObject);
	READ_PTR_FULL(DamageCauserType, UClass);
	READ_PTR_FULL(TargetShip, AShip);
}

void UBTTask_SwimAttackTargetShip::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(AttackAnim);
	DELE_PTR_FULL(AttackVFX);
	DELE_PTR_FULL(DamageCauserType);
	DELE_PTR_FULL(TargetShip);
}

void ABurrowEruptBase::AfterRead()
{
	AActor::AfterRead();

}

void ABurrowEruptBase::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UAIAnimationStateId::AfterRead()
{
	UObject::AfterRead();

}

void UAIAnimationStateId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USpawnerBehaviourStrategy::AfterRead()
{
	UObject::AfterRead();

}

void USpawnerBehaviourStrategy::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAICreatureCharacterMovementComponent::AfterRead()
{
	UCharacterMovementComponent::AfterRead();

}

void UAICreatureCharacterMovementComponent::BeforeDelete()
{
	UCharacterMovementComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x035599E0
//		Name   -> Function AthenaAI.AICreatureCharacter.SetAIStrategy
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      InStrategy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AAICreatureCharacter::SetAIStrategy(class UClass* InStrategy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.SetAIStrategy");

	AAICreatureCharacter_SetAIStrategy_Params params {};
	params.InStrategy = InStrategy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03559960
//		Name   -> Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UClass*                                      OldAIStrategy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AAICreatureCharacter::OnRep_CurrentAIStrategy(class UClass* OldAIStrategy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.OnRep_CurrentAIStrategy");

	AAICreatureCharacter_OnRep_CurrentAIStrategy_Params params {};
	params.OldAIStrategy = OldAIStrategy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03559940
//		Name   -> Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void AAICreatureCharacter::Multicast_DespawnRPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.Multicast_DespawnRPC");

	AAICreatureCharacter_Multicast_DespawnRPC_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03559900
//		Name   -> Function AthenaAI.AICreatureCharacter.GetAIStrategy
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* AAICreatureCharacter::GetAIStrategy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICreatureCharacter.GetAIStrategy");

	AAICreatureCharacter_GetAIStrategy_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void AAICreatureCharacter::AfterRead()
{
	ACharacter::AfterRead();

	READ_PTR_FULL(ActionStateMachineComponent, UActionStateMachineComponent);
	READ_PTR_FULL(ActionStatePriorityTableData, UActionStatePriorityTableData);
	READ_PTR_FULL(ActionStateCreatorDefinition, UClass);
	READ_PTR_FULL(AIControllerParams, UAthenaAIControllerParamsDataAsset);
	READ_PTR_FULL(InteractableComponent, UInteractableComponent);
	READ_PTR_FULL(WaterHeightProviderComponent, UWaterHeightProviderComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitterComponent, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(RewindComponent, URewindComponent);
	READ_PTR_FULL(ActionRulesComponent, UActionRulesComponent);
	READ_PTR_FULL(AICreatureCharacterMovementComponent, UAICreatureCharacterMovementComponent);
	READ_PTR_FULL(CurrentAIStrategy, UClass);
}

void AAICreatureCharacter::BeforeDelete()
{
	ACharacter::BeforeDelete();

	DELE_PTR_FULL(ActionStateMachineComponent);
	DELE_PTR_FULL(ActionStatePriorityTableData);
	DELE_PTR_FULL(ActionStateCreatorDefinition);
	DELE_PTR_FULL(AIControllerParams);
	DELE_PTR_FULL(InteractableComponent);
	DELE_PTR_FULL(WaterHeightProviderComponent);
	DELE_PTR_FULL(AnimNotifyWwiseEmitterComponent);
	DELE_PTR_FULL(RewindComponent);
	DELE_PTR_FULL(ActionRulesComponent);
	DELE_PTR_FULL(AICreatureCharacterMovementComponent);
	DELE_PTR_FULL(CurrentAIStrategy);
}

void UAthenaAICharacterPathFollowingComponent::AfterRead()
{
	UPathFollowingComponent::AfterRead();

}

void UAthenaAICharacterPathFollowingComponent::BeforeDelete()
{
	UPathFollowingComponent::BeforeDelete();

}

void UAICreatureCharacterPathFollowingComponent::AfterRead()
{
	UAthenaAICharacterPathFollowingComponent::AfterRead();

}

void UAICreatureCharacterPathFollowingComponent::BeforeDelete()
{
	UAthenaAICharacterPathFollowingComponent::BeforeDelete();

}

void UAICreatureMovementModifierInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAICreatureMovementModifierInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAICreatureMovementModifierParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAICreatureMovementModifierParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UBehaviourTreeInterruptionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UBehaviourTreeInterruptionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UForcedIdleBehaviourInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UForcedIdleBehaviourInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIDialogueStateProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIDialogueStateProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USimpleDialogueStateProvider::AfterRead()
{
	UObject::AfterRead();

}

void USimpleDialogueStateProvider::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UBountySpawnerAudioZonesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UBountySpawnerAudioZonesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIBountySpawner::AfterRead()
{
	UAISpawner::AfterRead();

	READ_PTR_FULL(ActiveCombatDialogue, UAICombatDialogue);
	READ_PTR_FULL(AudioZoneTriggerComponent, UOverlapTriggerComponent);
}

void UAIBountySpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

	DELE_PTR_FULL(ActiveCombatDialogue);
	DELE_PTR_FULL(AudioZoneTriggerComponent);
}

void UPostBountyAIPawnSpawnedAction::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPostBountyAIPawnSpawnedAction::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UApplyNameplateToBountyWaveSpawnedAction::AfterRead()
{
	UPostBountyAIPawnSpawnedAction::AfterRead();

}

void UApplyNameplateToBountyWaveSpawnedAction::BeforeDelete()
{
	UPostBountyAIPawnSpawnedAction::BeforeDelete();

}

// Function:
//		Offset -> 0x03620E80
//		Name   -> Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAIFaunaSpawner::SpawnFaunaGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIFaunaSpawner.SpawnFaunaGroup");

	UAIFaunaSpawner_SpawnFaunaGroup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIFaunaSpawner::AfterRead()
{
	UAISpawner::AfterRead();

	READ_PTR_FULL(FaunaLeader, AActor);
}

void UAIFaunaSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

	DELE_PTR_FULL(FaunaLeader);
}

// Function:
//		Offset -> 0x041D3310
//		Name   -> Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIControllerBase::SetNamedControllerParam(const struct FName& ParamName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.SetNamedControllerParam");

	AAthenaAIControllerBase_SetNamedControllerParam_Params params {};
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D13E0
//		Name   -> Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FWeightedProbabilityRangeOfRanges           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWeightedProbabilityRangeOfRanges AAthenaAIControllerBase::FindNamedWeightedRangesControllerParam(const struct FName& ParamName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.FindNamedWeightedRangesControllerParam");

	AAthenaAIControllerBase_FindNamedWeightedRangesControllerParam_Params params {};
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D1330
//		Name   -> Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AAthenaAIControllerBase::FindNamedControllerParam(const struct FName& ParamName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.FindNamedControllerParam");

	AAthenaAIControllerBase_FindNamedControllerParam_Params params {};
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D0E00
//		Name   -> Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UAthenaAIControllerParamsDataAsset*          ParamsAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIControllerBase::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIControllerBase.ApplyControllerParams");

	AAthenaAIControllerBase_ApplyControllerParams_Params params {};
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAthenaAIControllerBase::AfterRead()
{
	AAIController::AfterRead();

}

void AAthenaAIControllerBase::BeforeDelete()
{
	AAIController::BeforeDelete();

}

// Function:
//		Offset -> 0x041D37E0
//		Name   -> Function AthenaAI.AthenaAIController.StopBehaviourLogic
//		Flags  -> (Native, Public, BlueprintCallable)
void AAthenaAIController::StopBehaviourLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.StopBehaviourLogic");

	AAthenaAIController_StopBehaviourLogic_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D3470
//		Name   -> Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExpirationAge                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Sense                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AAthenaAIController::SetPerceptionExpirationAgeForActor(class AActor* Actor, float ExpirationAge, class UClass* Sense)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.SetPerceptionExpirationAgeForActor");

	AAthenaAIController_SetPerceptionExpirationAgeForActor_Params params {};
	params.Actor = Actor;
	params.ExpirationAge = ExpirationAge;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2690
//		Name   -> Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TriggerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIController::RegisterSpawnTriggerActorAsStimulus(class AActor* TriggerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.RegisterSpawnTriggerActorAsStimulus");

	AAthenaAIController_RegisterSpawnTriggerActorAsStimulus_Params params {};
	params.TriggerActor = TriggerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1850
//		Name   -> Function AthenaAI.AthenaAIController.OnPerceptionUpdated
//		Flags  -> (Native, Public)
// Parameters:
//		TArray<class AActor*>                              ChangedPerceivedActors                                     (Parm, ZeroConstructor)
void AAthenaAIController::OnPerceptionUpdated(TArray<class AActor*> ChangedPerceivedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnPerceptionUpdated");

	AAthenaAIController_OnPerceptionUpdated_Params params {};
	params.ChangedPerceivedActors = ChangedPerceivedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function AthenaAI.AthenaAIController.OnNewlySpawned
//		Flags  -> (Event, Public, BlueprintEvent)
void AAthenaAIController::OnNewlySpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnNewlySpawned");

	AAthenaAIController_OnNewlySpawned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function AthenaAI.AthenaAIController.OnFinishDespawn
//		Flags  -> (Event, Public, BlueprintEvent)
void AAthenaAIController::OnFinishDespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.OnFinishDespawn");

	AAthenaAIController_OnFinishDespawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D16F0
//		Name   -> Function AthenaAI.AthenaAIController.IsActorPerceived
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AAthenaAIController::IsActorPerceived(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.IsActorPerceived");

	AAthenaAIController_IsActorPerceived_Params params {};
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D16C0
//		Name   -> Function AthenaAI.AthenaAIController.GetTargetActor
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* AAthenaAIController::GetTargetActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetTargetActor");

	AAthenaAIController_GetTargetActor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D1600
//		Name   -> Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UAthenaAIPerceptionComponent*                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAthenaAIPerceptionComponent* AAthenaAIController::GetAthenaAIPerceptionComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAthenaAIPerceptionComponent");

	AAthenaAIController_GetAthenaAIPerceptionComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D1540
//		Name   -> Function AthenaAI.AthenaAIController.GetAllSeenActors
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class AActor*>                              SeenActors                                                 (Parm, OutParm, ZeroConstructor)
void AAthenaAIController::GetAllSeenActors(TArray<class AActor*>* SeenActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.GetAllSeenActors");

	AAthenaAIController_GetAllSeenActors_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SeenActors != nullptr)
		*SeenActors = params.SeenActors;

}


// Function:
//		Offset -> 0x041D0D30
//		Name   -> Function AthenaAI.AthenaAIController.ApplyControllerParams
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UAthenaAIControllerParamsDataAsset*          ParamsAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIController.ApplyControllerParams");

	AAthenaAIController_ApplyControllerParams_Params params {};
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAthenaAIController::AfterRead()
{
	AAthenaAIControllerBase::AfterRead();

	READ_PTR_FULL(SightConfig, UAISenseConfig_Sight);
	READ_PTR_FULL(HearingConfig, UAISenseConfig_Hearing);
	READ_PTR_FULL(DamageSenseConfig, UAISenseConfig_Damage);
	READ_PTR_FULL(CurrentNotSeenPerceivedActor, AActor);
	READ_PTR_FULL(PendingSpawnTriggerActor, AActor);
}

void AAthenaAIController::BeforeDelete()
{
	AAthenaAIControllerBase::BeforeDelete();

	DELE_PTR_FULL(SightConfig);
	DELE_PTR_FULL(HearingConfig);
	DELE_PTR_FULL(DamageSenseConfig);
	DELE_PTR_FULL(CurrentNotSeenPerceivedActor);
	DELE_PTR_FULL(PendingSpawnTriggerActor);
}

// Function:
//		Offset -> 0x03620DF0
//		Name   -> Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InDormancyCheckingEnabledInAutomation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAthenaFaunaAIController::SetDormancyCheckingEnabled(bool InDormancyCheckingEnabledInAutomation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.SetDormancyCheckingEnabled");

	AAthenaFaunaAIController_SetDormancyCheckingEnabled_Params params {};
	params.InDormancyCheckingEnabledInAutomation = InDormancyCheckingEnabledInAutomation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620A90
//		Name   -> Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaFaunaAIController::LeaderDestroyed(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.LeaderDestroyed");

	AAthenaFaunaAIController_LeaderDestroyed_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036202B0
//		Name   -> Function AthenaAI.AthenaFaunaAIController.GetLeader
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* AAthenaFaunaAIController::GetLeader()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetLeader");

	AAthenaFaunaAIController_GetLeader_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0361FFB0
//		Name   -> Function AthenaAI.AthenaFaunaAIController.GetCourage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AAthenaFaunaAIController::GetCourage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetCourage");

	AAthenaFaunaAIController_GetCourage_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0361FF80
//		Name   -> Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UAthenaAICharacterPathFollowingComponent*    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAthenaAICharacterPathFollowingComponent* AAthenaFaunaAIController::GetAthenaAICharPathFollowingComp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaFaunaAIController.GetAthenaAICharPathFollowingComp");

	AAthenaFaunaAIController_GetAthenaAICharPathFollowingComp_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void AAthenaFaunaAIController::AfterRead()
{
	AAthenaAIController::AfterRead();

	READ_PTR_FULL(FaunaDataAsset, UFaunaAIContollerParamsDataAsset);
	READ_PTR_FULL(CarrierActor, AActor);
	READ_PTR_FULL(HighestDangerActor, AActor);
	READ_PTR_FULL(PlayerTracker, UFaunaAIPlayerTracker);
}

void AAthenaFaunaAIController::BeforeDelete()
{
	AAthenaAIController::BeforeDelete();

	DELE_PTR_FULL(FaunaDataAsset);
	DELE_PTR_FULL(CarrierActor);
	DELE_PTR_FULL(HighestDangerActor);
	DELE_PTR_FULL(PlayerTracker);
}

void UCatchFaunaConditionalStatTrigger::AfterRead()
{
	UConditionalStatsTriggerType::AfterRead();

}

void UCatchFaunaConditionalStatTrigger::BeforeDelete()
{
	UConditionalStatsTriggerType::BeforeDelete();

}

void UEnvQueryContext_LeaderFromBlackboard::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_LeaderFromBlackboard::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_Threat::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_Threat::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

// Function:
//		Offset -> 0x03620EA0
//		Name   -> Function AthenaAI.Fauna.TestingSetWaterState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<AthenaAI_EFaunaInWaterState>           NewInState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::TestingSetWaterState(TEnumAsByte<AthenaAI_EFaunaInWaterState> NewInState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.TestingSetWaterState");

	AFauna_TestingSetWaterState_Params params {};
	params.NewInState = NewInState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620DD0
//		Name   -> Function AthenaAI.Fauna.OnRep_TargetTurnAngle
//		Flags  -> (Final, Native, Private)
void AFauna::OnRep_TargetTurnAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_TargetTurnAngle");

	AFauna_OnRep_TargetTurnAngle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620DB0
//		Name   -> Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim
//		Flags  -> (Final, Native, Private)
void AFauna::OnRep_IsPlayingStarvingAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsPlayingStarvingAnim");

	AFauna_OnRep_IsPlayingStarvingAnim_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620D90
//		Name   -> Function AthenaAI.Fauna.OnRep_IsCalm
//		Flags  -> (Final, Native, Private)
void AFauna::OnRep_IsCalm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsCalm");

	AFauna_OnRep_IsCalm_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620D70
//		Name   -> Function AthenaAI.Fauna.OnRep_IsAgitated
//		Flags  -> (Final, Native, Private)
void AFauna::OnRep_IsAgitated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_IsAgitated");

	AFauna_OnRep_IsAgitated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620D50
//		Name   -> Function AthenaAI.Fauna.OnRep_InWaterState
//		Flags  -> (Final, Native, Private)
void AFauna::OnRep_InWaterState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_InWaterState");

	AFauna_OnRep_InWaterState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620CC0
//		Name   -> Function AthenaAI.Fauna.OnRep_CratedState
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		TEnumAsByte<AthenaAI_EFaunaCratedState>            PreviousCratedState                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::OnRep_CratedState(TEnumAsByte<AthenaAI_EFaunaCratedState> PreviousCratedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.OnRep_CratedState");

	AFauna_OnRep_CratedState_Params params {};
	params.PreviousCratedState = PreviousCratedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620C30
//		Name   -> Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class AActor*                                      Crate                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_PlayPutInCrateEffectsRPC");

	AFauna_Multicast_PlayPutInCrateEffectsRPC_Params params {};
	params.Crate = Crate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620BA0
//		Name   -> Function AthenaAI.Fauna.Multicast_JustBeenFedRPC
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		class AActor*                                      FedBy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::Multicast_JustBeenFedRPC(class AActor* FedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_JustBeenFedRPC");

	AFauna_Multicast_JustBeenFedRPC_Params params {};
	params.FedBy = FedBy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03620B10
//		Name   -> Function AthenaAI.Fauna.Multicast_HightlightLeader
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
//		bool                                               bIsLeader                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFauna::Multicast_HightlightLeader(bool bIsLeader)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.Multicast_HightlightLeader");

	AFauna_Multicast_HightlightLeader_Params params {};
	params.bIsLeader = bIsLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0361FE10
//		Name   -> Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AFauna::GenerateNewRandomAnimationSeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.GenerateNewRandomAnimationSeed");

	AFauna_GenerateNewRandomAnimationSeed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0361FD60
//		Name   -> Function AthenaAI.Fauna.ActivateResponseRPC
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		float                                              InTargetTurnAngle                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFauna::ActivateResponseRPC(float InTargetTurnAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Fauna.ActivateResponseRPC");

	AFauna_ActivateResponseRPC_Params params {};
	params.InTargetTurnAngle = InTargetTurnAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AFauna::AfterRead()
{
	AAICreatureCharacter::AfterRead();

	READ_PTR_FULL(FaunaSpecies, UClass);
	READ_PTR_FULL(FaunaBreed, UClass);
	READ_PTR_FULL(HitImpactParticleSystem, UObject);
	READ_PTR_FULL(DeathParticleSystem, UObject);
	READ_PTR_FULL(PutInCrateParticleSystem, UObject);
	READ_PTR_FULL(PutInCrateSoundCue, UWwiseEvent);
	READ_PTR_FULL(TookDamageSoundCue, UWwiseEvent);
	READ_PTR_FULL(AgitationStartedSoundCue, UWwiseEvent);
	READ_PTR_FULL(AgitationStoppedSoundCue, UWwiseEvent);
	READ_PTR_FULL(CalmStartedSoundCue, UWwiseEvent);
	READ_PTR_FULL(CalmStoppedSoundCue, UWwiseEvent);
	READ_PTR_FULL(BreathBubblesParticleSystem, UObject);
	READ_PTR_FULL(OnFeedingForceFeedbackEffect, UForceFeedbackEffect);
	READ_PTR_FULL(MountableComponent, UMountableComponent);
	READ_PTR_FULL(HealthComponent, UHealthComponent);
	READ_PTR_FULL(DamageableComponent, UDamageableComponent);
	READ_PTR_FULL(AttackHitVolume, UPrimitiveComponent);
	READ_PTR_FULL(Animations, UFaunaAnimationData);
	READ_PTR_FULL(DitherComponent, UDitherComponent);
	READ_PTR_FULL(StatusEffectManagerComponent, ULightWeightStatusEffectManagerComponent);
	READ_PTR_FULL(AIControllerParamsWhenInCrate, UAthenaAIControllerParamsDataAsset);
	READ_PTR_FULL(PeriodicAINoiseEventComponent, UPeriodicAINoiseEventComponent);
	READ_PTR_FULL(AgitationResponseParticleSystem, UObject);
	READ_PTR_FULL(FeedingComponent, UFeedingComponent);
	READ_PTR_FULL(FaunaMovementComponent, UFaunaMovementComponent);
	READ_PTR_FULL(Crate, AActor);
	READ_PTR_FULL(BreathBubblesParticleSystemComponent, UParticleSystemComponent);
	READ_PTR_FULL(VenomComponent, UVenomComponent);
}

void AFauna::BeforeDelete()
{
	AAICreatureCharacter::BeforeDelete();

	DELE_PTR_FULL(FaunaSpecies);
	DELE_PTR_FULL(FaunaBreed);
	DELE_PTR_FULL(HitImpactParticleSystem);
	DELE_PTR_FULL(DeathParticleSystem);
	DELE_PTR_FULL(PutInCrateParticleSystem);
	DELE_PTR_FULL(PutInCrateSoundCue);
	DELE_PTR_FULL(TookDamageSoundCue);
	DELE_PTR_FULL(AgitationStartedSoundCue);
	DELE_PTR_FULL(AgitationStoppedSoundCue);
	DELE_PTR_FULL(CalmStartedSoundCue);
	DELE_PTR_FULL(CalmStoppedSoundCue);
	DELE_PTR_FULL(BreathBubblesParticleSystem);
	DELE_PTR_FULL(OnFeedingForceFeedbackEffect);
	DELE_PTR_FULL(MountableComponent);
	DELE_PTR_FULL(HealthComponent);
	DELE_PTR_FULL(DamageableComponent);
	DELE_PTR_FULL(AttackHitVolume);
	DELE_PTR_FULL(Animations);
	DELE_PTR_FULL(DitherComponent);
	DELE_PTR_FULL(StatusEffectManagerComponent);
	DELE_PTR_FULL(AIControllerParamsWhenInCrate);
	DELE_PTR_FULL(PeriodicAINoiseEventComponent);
	DELE_PTR_FULL(AgitationResponseParticleSystem);
	DELE_PTR_FULL(FeedingComponent);
	DELE_PTR_FULL(FaunaMovementComponent);
	DELE_PTR_FULL(Crate);
	DELE_PTR_FULL(BreathBubblesParticleSystemComponent);
	DELE_PTR_FULL(VenomComponent);
}

void UFaunaAIPlayerTracker::AfterRead()
{
	UAIPlayerTracker::AfterRead();

}

void UFaunaAIPlayerTracker::BeforeDelete()
{
	UAIPlayerTracker::BeforeDelete();

}

void UFaunaAnimationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UFaunaAnimationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UFaunaMovementComponent::AfterRead()
{
	UAICreatureCharacterMovementComponent::AfterRead();

}

void UFaunaMovementComponent::BeforeDelete()
{
	UAICreatureCharacterMovementComponent::BeforeDelete();

}

void UMerchantCrateMetaGenerator::AfterRead()
{
	UItemSnapshotMetaGenerator::AfterRead();

}

void UMerchantCrateMetaGenerator::BeforeDelete()
{
	UItemSnapshotMetaGenerator::BeforeDelete();

}

// Function:
//		Offset -> 0x03762FC0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UClass>                            AIType                                                     (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
//		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                                                   (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
//		TAssetPtr<class ULoadoutAsset>                     Loadout                                                    (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
//		TAssetPtr<class UAthenaAIFormDataAsset>            Form                                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
//		TAssetPtr<class UClass>                            AIItemSpawnComponent                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
//		class UClass*                                      ClassId                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		TAssetPtr<class UAthenaAIAmmoDataAsset>            Ammo                                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash)
//		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FRotator                                    Rot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FName                                       Region                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      TriggerActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NavMeshOverride                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_SpawnAIWithSettings(TAssetPtr<class UClass> AIType, TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset, TAssetPtr<class ULoadoutAsset> Loadout, TAssetPtr<class UAthenaAIFormDataAsset> Form, TAssetPtr<class UClass> AIItemSpawnComponent, class UClass* ClassId, TAssetPtr<class UAthenaAIAmmoDataAsset> Ammo, const struct FVector& Pos, const struct FRotator& Rot, const struct FName& Region, class AActor* TriggerActor, const struct FName& NavMeshOverride, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAIWithSettings");

	UAthenaAIDebugFunctionLibrary_SpawnAIWithSettings_Params params {};
	params.AIType = AIType;
	params.Skillset = Skillset;
	params.Loadout = Loadout;
	params.Form = Form;
	params.AIItemSpawnComponent = AIItemSpawnComponent;
	params.ClassId = ClassId;
	params.Ammo = Ammo;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Region = Region;
	params.TriggerActor = TriggerActor;
	params.NavMeshOverride = NavMeshOverride;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03762CA0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UAIEncounterSettings*                        EncounterSettings                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FRotator                                    Rot                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              Delay                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               MakeAIPermanentlyNetRelevant                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      InstancedNavMesh                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FAIEncounterSpecification                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FAIEncounterSpecification UAthenaAIDebugFunctionLibrary::STATIC_SpawnAI(class UAIEncounterSettings* EncounterSettings, const struct FVector& Pos, const struct FRotator& Rot, float Delay, bool MakeAIPermanentlyNetRelevant, class AActor* InstancedNavMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SpawnAI");

	UAthenaAIDebugFunctionLibrary_SpawnAI_Params params {};
	params.EncounterSettings = EncounterSettings;
	params.Pos = Pos;
	params.Rot = Rot;
	params.Delay = Delay;
	params.MakeAIPermanentlyNetRelevant = MakeAIPermanentlyNetRelevant;
	params.InstancedNavMesh = InstancedNavMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03762BE0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              InMaxAllowedSeconds                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     QueryOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_SetEnvQueryManagerMaxAllowedSeconds(float InMaxAllowedSeconds, class UObject* QueryOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.SetEnvQueryManagerMaxAllowedSeconds");

	UAthenaAIDebugFunctionLibrary_SetEnvQueryManagerMaxAllowedSeconds_Params params {};
	params.InMaxAllowedSeconds = InMaxAllowedSeconds;
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03762BC0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAthenaAIDebugFunctionLibrary::STATIC_KillAllDebugAISpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.KillAllDebugAISpawners");

	UAthenaAIDebugFunctionLibrary_KillAllDebugAISpawners_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03762B40
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     QueryOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAthenaAIDebugFunctionLibrary::STATIC_GetEnvQueryManagerNumRunningQueries(class UObject* QueryOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.GetEnvQueryManagerNumRunningQueries");

	UAthenaAIDebugFunctionLibrary_GetEnvQueryManagerNumRunningQueries_Params params {};
	params.QueryOwner = QueryOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03762AD0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AAthenaAIController*                         AIController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_EnableMaximumSightSettings(class AAthenaAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableMaximumSightSettings");

	UAthenaAIDebugFunctionLibrary_EnableMaximumSightSettings_Params params {};
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03762A60
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_EnableBehaviorTreeLogging(class UObject* WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.EnableBehaviorTreeLogging");

	UAthenaAIDebugFunctionLibrary_EnableBehaviorTreeLogging_Params params {};
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x037629F0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_DespawnAIPawn(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.DespawnAIPawn");

	UAthenaAIDebugFunctionLibrary_DespawnAIPawn_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x037628F0
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAISpawner*                                  SpawnerAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Pos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UAthenaAIDebugFunctionLibrary::STATIC_CreateAISpawnerAtPosition(class UObject* WorldContext, class UAISpawner* SpawnerAsset, const struct FVector& Pos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtPosition");

	UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtPosition_Params params {};
	params.WorldContext = WorldContext;
	params.SpawnerAsset = SpawnerAsset;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03762800
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAISpawner*                                  SpawnerAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      SpawnLocationActor                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaAIDebugFunctionLibrary::STATIC_CreateAISpawnerAtActor(class UObject* WorldContext, class UAISpawner* SpawnerAsset, class AActor* SpawnLocationActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CreateAISpawnerAtActor");

	UAthenaAIDebugFunctionLibrary_CreateAISpawnerAtActor_Params params {};
	params.WorldContext = WorldContext;
	params.SpawnerAsset = SpawnerAsset;
	params.SpawnLocationActor = SpawnLocationActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03762630
//		Name   -> Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FVector                                     QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UAthenaAIDebugFunctionLibrary::STATIC_CanProjectPointToNavigation(class UObject* WorldContext, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIDebugFunctionLibrary.CanProjectPointToNavigation");

	UAthenaAIDebugFunctionLibrary_CanProjectPointToNavigation_Params params {};
	params.WorldContext = WorldContext;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAthenaAIDebugFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAthenaAIDebugFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void ADebugAISpawnerCreator::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SpawnerTemplate, UAISpawner);
	READ_PTR_FULL(Spawner, UAISpawner);
	READ_PTR_FULL(ProximityPlayerTracker, UAIProximityPlayerTracker);
	READ_PTR_FULL(Region, USimpleAIRegion);
}

void ADebugAISpawnerCreator::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SpawnerTemplate);
	DELE_PTR_FULL(Spawner);
	DELE_PTR_FULL(ProximityPlayerTracker);
	DELE_PTR_FULL(Region);
}

void UAIDioramaLocationSourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIDioramaLocationSourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAIDiorama::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SceneComponent, USceneComponent);
	READ_PTR_FULL(SpawnedDialogueCoordinator, ASceneDialogueCoordinator);
	READ_PTR_FULL(DialogueData, USceneDialogueData);
}

void AAIDiorama::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SceneComponent);
	DELE_PTR_FULL(SpawnedDialogueCoordinator);
	DELE_PTR_FULL(DialogueData);
}

void UAIDioramaCategory::AfterRead()
{
	UObject::AfterRead();

}

void UAIDioramaCategory::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAIDioramaController::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AIDioramaDesc, UAIDioramaDesc);
	READ_PTR_FULL(DialogueData, USceneDialogueData);
	READ_PTR_FULL(AIDiorama, AAIDiorama);
	READ_PTR_FULL(Spawner, UAISpawner);
}

void UAIDioramaController::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AIDioramaDesc);
	DELE_PTR_FULL(DialogueData);
	DELE_PTR_FULL(AIDiorama);
	DELE_PTR_FULL(Spawner);
}

void UAIDioramaDesc::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DialogueData, USceneDialogueData);
}

void UAIDioramaDesc::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DialogueData);
}

void UAIDioramaLocationSourceComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(DialogueTriggerRadiusSphere, USphereComponent);
	READ_PTR_FULL(DialogueSubtitleRadiusSphere, USphereComponent);
	READ_PTR_FULL(AISenseRadiusSphere, USphereComponent);
}

void UAIDioramaLocationSourceComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(DialogueTriggerRadiusSphere);
	DELE_PTR_FULL(DialogueSubtitleRadiusSphere);
	DELE_PTR_FULL(AISenseRadiusSphere);
}

void UAIDioramaServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIDioramaServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAIDioramaService::AfterRead()
{
	AActor::AfterRead();

}

void AAIDioramaService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ADebugDioramaCreator::AfterRead()
{
	ADebugAISpawnerCreator::AfterRead();

	READ_PTR_FULL(AIDioramaDesc, UAIDioramaDesc);
	READ_PTR_FULL(Location, UAIDioramaLocationSourceComponent);
	READ_PTR_FULL(AIDioramaController, UAIDioramaController);
}

void ADebugDioramaCreator::BeforeDelete()
{
	ADebugAISpawnerCreator::BeforeDelete();

	DELE_PTR_FULL(AIDioramaDesc);
	DELE_PTR_FULL(Location);
	DELE_PTR_FULL(AIDioramaController);
}

void UInDioramaAIStrategyId::AfterRead()
{
	UAIStrategyId::AfterRead();

}

void UInDioramaAIStrategyId::BeforeDelete()
{
	UAIStrategyId::BeforeDelete();

}

// Function:
//		Offset -> 0x03A14A60
//		Name   -> Function AthenaAI.Pet.SetExitTakeOffFlag
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InExitTakeOffFlag                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APet::SetExitTakeOffFlag(bool InExitTakeOffFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.SetExitTakeOffFlag");

	APet_SetExitTakeOffFlag_Params params {};
	params.InExitTakeOffFlag = InExitTakeOffFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14900
//		Name   -> Function AthenaAI.Pet.OnShipDestroyed
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      InShip                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APet::OnShipDestroyed(class AActor* InShip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnShipDestroyed");

	APet_OnShipDestroyed_Params params {};
	params.InShip = InShip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A148E0
//		Name   -> Function AthenaAI.Pet.OnRep_RollRequest
//		Flags  -> (Final, Native, Private)
void APet::OnRep_RollRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_RollRequest");

	APet_OnRep_RollRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A148C0
//		Name   -> Function AthenaAI.Pet.OnRep_ResetRollAndZOffset
//		Flags  -> (Final, Native, Private)
void APet::OnRep_ResetRollAndZOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_ResetRollAndZOffset");

	APet_OnRep_ResetRollAndZOffset_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A148A0
//		Name   -> Function AthenaAI.Pet.OnRep_PetTurnToFaceData
//		Flags  -> (Final, Native, Public)
void APet::OnRep_PetTurnToFaceData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetTurnToFaceData");

	APet_OnRep_PetTurnToFaceData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14880
//		Name   -> Function AthenaAI.Pet.OnRep_PetOwner
//		Flags  -> (Final, Native, Private)
void APet::OnRep_PetOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetOwner");

	APet_OnRep_PetOwner_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14860
//		Name   -> Function AthenaAI.Pet.OnRep_PetIsSad
//		Flags  -> (Final, Native, Private)
void APet::OnRep_PetIsSad()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PetIsSad");

	APet_OnRep_PetIsSad_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14840
//		Name   -> Function AthenaAI.Pet.OnRep_PerchedInHangout
//		Flags  -> (Final, Native, Private)
void APet::OnRep_PerchedInHangout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_PerchedInHangout");

	APet_OnRep_PerchedInHangout_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14820
//		Name   -> Function AthenaAI.Pet.OnRep_MovementRequest
//		Flags  -> (Final, Native, Private)
void APet::OnRep_MovementRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_MovementRequest");

	APet_OnRep_MovementRequest_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A147E0
//		Name   -> Function AthenaAI.Pet.OnRep_InHangout
//		Flags  -> (Final, Native, Private)
void APet::OnRep_InHangout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnRep_InHangout");

	APet_OnRep_InHangout_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A145C0
//		Name   -> Function AthenaAI.Pet.OnOwnerDestroyed
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      InOwner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APet::OnOwnerDestroyed(class AActor* InOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.OnOwnerDestroyed");

	APet_OnOwnerDestroyed_Params params {};
	params.InOwner = InOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A145A0
//		Name   -> Function AthenaAI.Pet.Multicast_DitherOut
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void APet::Multicast_DitherOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.Multicast_DitherOut");

	APet_Multicast_DitherOut_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14580
//		Name   -> Function AthenaAI.Pet.Multicast_DitherIn
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
void APet::Multicast_DitherIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.Multicast_DitherIn");

	APet_Multicast_DitherIn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03A14560
//		Name   -> Function AthenaAI.Pet.GetFloorMeshOffsetZ
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float APet::GetFloorMeshOffsetZ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.Pet.GetFloorMeshOffsetZ");

	APet_GetFloorMeshOffsetZ_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void APet::AfterRead()
{
	AAICreatureCharacter::AfterRead();

	READ_PTR_FULL(WieldableReactMappingsAsset, UPetWieldableReactMappingsDataAsset);
	READ_PTR_FULL(FlyingLandCurve, UCurveFloat);
	READ_PTR_FULL(FlyingTakeOffCurve, UCurveFloat);
	READ_PTR_FULL(MidFlightAdjustmentCurve, UCurveFloat);
	READ_PTR_FULL(MidFlightTimeToDistanceAdjustmentCurve, UCurveFloat);
	READ_PTR_FULL(FiredFromActorSFX, UWwiseEvent);
	READ_PTR_FULL(DitherComponent, UPetDitherComponent);
	READ_PTR_FULL(AINameplateComponent, UAINameplateComponent);
	READ_PTR_FULL(FeedingComponent, UFeedingComponent);
	READ_PTR_FULL(StarvingComponent, UStarvingComponent);
	READ_PTR_FULL(CleanlinessComponent, UCleanlinessComponent);
	READ_PTR_FULL(CannonSquashComponent, UCannonSquashComponent);
	READ_PTR_FULL(AIPartsRetrievalComponent, UAIPartsRetrievalComponent);
	READ_PTR_FULL(PetPartCustomisationComponent, UPetPartCustomisationComponent);
	READ_PTR_FULL(LightWeightStatusEffectManagerComponent, ULightWeightStatusEffectManagerComponent);
	READ_PTR_FULL(TelemetryComponent, UPetTelemetryComponent);
	READ_PTR_FULL(SicknessComponent, UPetSicknessComponent);
	READ_PTR_FULL(WaterExposureComponent, UWaterExposureComponent);
	READ_PTR_FULL(AnimationDataStoreComponent, UAnimationDataStoreComponent);
	READ_PTR_FULL(SpawnedForShip, AActor);
	READ_PTR_FULL(PetOwner, AActor);
	READ_PTR_FULL(PetInfo, AItemInfo);
	READ_PTR_FULL(CurrentlyPlayingParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(LandingStrategy, UClass);
	READ_PTR_FULL(PursuitStrategy, UClass);
}

void APet::BeforeDelete()
{
	AAICreatureCharacter::BeforeDelete();

	DELE_PTR_FULL(WieldableReactMappingsAsset);
	DELE_PTR_FULL(FlyingLandCurve);
	DELE_PTR_FULL(FlyingTakeOffCurve);
	DELE_PTR_FULL(MidFlightAdjustmentCurve);
	DELE_PTR_FULL(MidFlightTimeToDistanceAdjustmentCurve);
	DELE_PTR_FULL(FiredFromActorSFX);
	DELE_PTR_FULL(DitherComponent);
	DELE_PTR_FULL(AINameplateComponent);
	DELE_PTR_FULL(FeedingComponent);
	DELE_PTR_FULL(StarvingComponent);
	DELE_PTR_FULL(CleanlinessComponent);
	DELE_PTR_FULL(CannonSquashComponent);
	DELE_PTR_FULL(AIPartsRetrievalComponent);
	DELE_PTR_FULL(PetPartCustomisationComponent);
	DELE_PTR_FULL(LightWeightStatusEffectManagerComponent);
	DELE_PTR_FULL(TelemetryComponent);
	DELE_PTR_FULL(SicknessComponent);
	DELE_PTR_FULL(WaterExposureComponent);
	DELE_PTR_FULL(AnimationDataStoreComponent);
	DELE_PTR_FULL(SpawnedForShip);
	DELE_PTR_FULL(PetOwner);
	DELE_PTR_FULL(PetInfo);
	DELE_PTR_FULL(CurrentlyPlayingParticleSystem);
	DELE_PTR_FULL(LandingStrategy);
	DELE_PTR_FULL(PursuitStrategy);
}

void UBTTask_SetRoamingPetAnimationState::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetRoamingPetAnimationState::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UEnvQueryContext_PositionFromBlackboard::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_PositionFromBlackboard::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UPetDitherComponent::AfterRead()
{
	UDitherComponent::AfterRead();

}

void UPetDitherComponent::BeforeDelete()
{
	UDitherComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x041D1AB0
//		Name   -> Function AthenaAI.AINameplateComponent.OnRep_Title
//		Flags  -> (Final, Native, Private)
void UAINameplateComponent::OnRep_Title()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_Title");

	UAINameplateComponent_OnRep_Title_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1A30
//		Name   -> Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString
//		Flags  -> (Final, Native, Private)
void UAINameplateComponent::OnRep_DisplayNameAsString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DisplayNameAsString");

	UAINameplateComponent_OnRep_DisplayNameAsString_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1A10
//		Name   -> Function AthenaAI.AINameplateComponent.OnRep_DisplayName
//		Flags  -> (Final, Native, Private)
void UAINameplateComponent::OnRep_DisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DisplayName");

	UAINameplateComponent_OnRep_DisplayName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D19F0
//		Name   -> Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText
//		Flags  -> (Final, Native, Private)
void UAINameplateComponent::OnRep_DebugDisplayText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AINameplateComponent.OnRep_DebugDisplayText");

	UAINameplateComponent_OnRep_DebugDisplayText_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAINameplateComponent::AfterRead()
{
	UNameplateComponent::AfterRead();

}

void UAINameplateComponent::BeforeDelete()
{
	UNameplateComponent::BeforeDelete();

}

void UPetNameplateComponent::AfterRead()
{
	UAINameplateComponent::AfterRead();

}

void UPetNameplateComponent::BeforeDelete()
{
	UAINameplateComponent::BeforeDelete();

}

void UPetPartCustomisationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(AnimationDataStoreId, UClass);
	READ_PTR_FULL(SizeMappingsAsset, UPetPartSizeMappingsDataAsset);
	READ_PTR_FULL(CurrentlyLoadedMesh, USkeletalMesh);
	READ_PTR_FULL(CurrentlyLoadedOverrideAsset, UPetCustomisationOverrideDataAsset);
}

void UPetPartCustomisationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(AnimationDataStoreId);
	DELE_PTR_FULL(SizeMappingsAsset);
	DELE_PTR_FULL(CurrentlyLoadedMesh);
	DELE_PTR_FULL(CurrentlyLoadedOverrideAsset);
}

void UPetPartSizeMappingsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetPartSizeMappingsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UPetSicknessComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPetSicknessComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UAIPartsDesc::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIPartsDesc::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UPetsPartsDesc::AfterRead()
{
	UAIPartsDesc::AfterRead();

	READ_PTR_FULL(PetOverrideAsset, UPetCustomisationOverrideDataAsset);
}

void UPetsPartsDesc::BeforeDelete()
{
	UAIPartsDesc::BeforeDelete();

	DELE_PTR_FULL(PetOverrideAsset);
}

void UPetTelemetryComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPetTelemetryComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UPetWieldableReactMappingsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UPetWieldableReactMappingsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void APreviewPet::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PreviewPetPartsCategory, UAIPartsCategory);
	READ_PTR_FULL(PreviewPetMesh, USkeletalMeshComponent);
	READ_PTR_FULL(AIPartsRetrievalComponent, UAIPartsRetrievalComponent);
	READ_PTR_FULL(PetPartCustomisationComponent, UPetPartCustomisationComponent);
}

void APreviewPet::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PreviewPetPartsCategory);
	DELE_PTR_FULL(PreviewPetMesh);
	DELE_PTR_FULL(AIPartsRetrievalComponent);
	DELE_PTR_FULL(PetPartCustomisationComponent);
}

// Function:
//		Offset -> 0x03AC1710
//		Name   -> Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAthenaAIControllerParamsDataAsset*          InControllerParametersAsset                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaSwimmingAIController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* InControllerParametersAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaSwimmingAIController.ApplyControllerParams");

	AAthenaSwimmingAIController_ApplyControllerParams_Params params {};
	params.InControllerParametersAsset = InControllerParametersAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAthenaSwimmingAIController::AfterRead()
{
	AAthenaAIController::AfterRead();

	READ_PTR_FULL(SwimmingPathFollowingComponent, USwimmingPathFollowingComponent);
	READ_PTR_FULL(DistOfAttackerVsChanceToPursue, UCurveFloat);
}

void AAthenaSwimmingAIController::BeforeDelete()
{
	AAthenaAIController::BeforeDelete();

	DELE_PTR_FULL(SwimmingPathFollowingComponent);
	DELE_PTR_FULL(DistOfAttackerVsChanceToPursue);
}

void UBTDecorator_NearSurfaceOfWater::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_NearSurfaceOfWater::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTService_SetFloatToTheSurfaceWhileInBranch::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_SetFloatToTheSurfaceWhileInBranch::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTTask_SetFloatToTheSurface::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetFloatToTheSurface::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void USwimmingCreatureMovementAnimationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USwimmingCreatureMovementAnimationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USwimmingPathFollowingComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MovementComponent, USwimmingCreatureMovementComponent);
	READ_PTR_FULL(SwimmingAIController, AAthenaSwimmingAIController);
	READ_PTR_FULL(TargetActor, AActor);
}

void USwimmingPathFollowingComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MovementComponent);
	DELE_PTR_FULL(SwimmingAIController);
	DELE_PTR_FULL(TargetActor);
}

void UBTTask_SwimTo::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SwimTo::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SwimTurnOnTheSpot::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SwimTurnOnTheSpot::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UAthenaAIControllerParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAthenaAIControllerParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UTinySharkTelemetryComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UTinySharkTelemetryComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x03C8BF10
//		Name   -> Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      InDestroyedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATinySharkExperience::TinySharkPawnDestroyed(class AActor* InDestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.TinySharkPawnDestroyed");

	ATinySharkExperience_TinySharkPawnDestroyed_Params params {};
	params.InDestroyedActor = InDestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C8BCA0
//		Name   -> Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn
//		Flags  -> (Native, Protected)
// Parameters:
//		class ASharkPawn*                                  LastTinySharkPawn                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATinySharkExperience::OnRep_TinySharkPawn(class ASharkPawn* LastTinySharkPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.OnRep_TinySharkPawn");

	ATinySharkExperience_OnRep_TinySharkPawn_Params params {};
	params.LastTinySharkPawn = LastTinySharkPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C8BC80
//		Name   -> Function AthenaAI.TinySharkExperience.GetTrackedShip
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AShip*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AShip* ATinySharkExperience::GetTrackedShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetTrackedShip");

	ATinySharkExperience_GetTrackedShip_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03C8BC60
//		Name   -> Function AthenaAI.TinySharkExperience.GetCurrentState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<AthenaAI_ETinySharkState>              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaAI_ETinySharkState> ATinySharkExperience::GetCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetCurrentState");

	ATinySharkExperience_GetCurrentState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03C8BC40
//		Name   -> Function AthenaAI.TinySharkExperience.GetActiveState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<AthenaAI_ETinySharkActiveState>        ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaAI_ETinySharkActiveState> ATinySharkExperience::GetActiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkExperience.GetActiveState");

	ATinySharkExperience_GetActiveState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ATinySharkExperience::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TrackingMovementValidQuery, UEnvQuery);
	READ_PTR_FULL(TinySharkSpawner, UAIOnDemandSpawner);
	READ_PTR_FULL(TinySharkPawn, ASharkPawn);
	READ_PTR_FULL(TinySharkTelemetryComponent, UTinySharkTelemetryComponent);
	READ_PTR_FULL(TrackedShip, AShip);
}

void ATinySharkExperience::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TrackingMovementValidQuery);
	DELE_PTR_FULL(TinySharkSpawner);
	DELE_PTR_FULL(TinySharkPawn);
	DELE_PTR_FULL(TinySharkTelemetryComponent);
	DELE_PTR_FULL(TrackedShip);
}

void UCoralShieldAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

}

void UCoralShieldAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

}

void UElectricShieldAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

}

void UElectricShieldAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

}

void USporeBreathAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

	READ_PTR_FULL(BreathActor, AStatusEffectOverlapZone);
	READ_PTR_FULL(BreathVFX, UVFXSpawnerComponent);
}

void USporeBreathAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

	DELE_PTR_FULL(BreathActor);
	DELE_PTR_FULL(BreathVFX);
}

void UAthenaAIAbilityHandlerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAIAbilityHandlerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTinySharkParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UTinySharkParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UTinySharkServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTinySharkServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03C8BE10
//		Name   -> Function AthenaAI.TinySharkService.RequestTinySharkWithShip
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class AShip*                                       InTrackedShip                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OverrideControllerParamIndex                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PartIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATinySharkService::RequestTinySharkWithShip(class AShip* InTrackedShip, int OverrideControllerParamIndex, int PartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithShip");

	ATinySharkService_RequestTinySharkWithShip_Params params {};
	params.InTrackedShip = InTrackedShip;
	params.OverrideControllerParamIndex = OverrideControllerParamIndex;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03C8BD30
//		Name   -> Function AthenaAI.TinySharkService.RequestTinySharkWithLocation
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     SpawnLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		int                                                PartIndex                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATinySharkService::RequestTinySharkWithLocation(const struct FVector& SpawnLocation, int PartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.RequestTinySharkWithLocation");

	ATinySharkService_RequestTinySharkWithLocation_Params params {};
	params.SpawnLocation = SpawnLocation;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03C8BC10
//		Name   -> Function AthenaAI.TinySharkService.DismissAllTinySharks
//		Flags  -> (Native, Public, BlueprintCallable)
void ATinySharkService::DismissAllTinySharks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.DismissAllTinySharks");

	ATinySharkService_DismissAllTinySharks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C8BBD0
//		Name   -> Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATinySharkService::CanSpawnTinySharkExperience()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.TinySharkService.CanSpawnTinySharkExperience");

	ATinySharkService_CanSpawnTinySharkExperience_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ATinySharkService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TinySharkServiceParams, UTinySharkServiceParamsDataAsset);
}

void ATinySharkService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TinySharkServiceParams);
}

void UTinySharkServiceParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UTinySharkServiceParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UMeshMemoryConstraintsAIPartsDesc::AfterRead()
{
	UAIPartsDesc::AfterRead();

	READ_PTR_FULL(MeshFallbackCategory, UClass);
	READ_PTR_FULL(BudgetToCountMemoryAgainstIfNoFallback, UClass);
}

void UMeshMemoryConstraintsAIPartsDesc::BeforeDelete()
{
	UAIPartsDesc::BeforeDelete();

	DELE_PTR_FULL(MeshFallbackCategory);
	DELE_PTR_FULL(BudgetToCountMemoryAgainstIfNoFallback);
}

void UTeleportAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

}

void UTeleportAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

}

void UAIItemParameterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIItemParameterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAthenaAIControllerSharedParamValuesDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAthenaAIControllerSharedParamValuesDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAthenaAICharacterControllerSharedParamValuesDataAsset::AfterRead()
{
	UAthenaAIControllerSharedParamValuesDataAsset::AfterRead();

	READ_PTR_FULL(DistanceInMToCannonShotHitChanceCurve, UCurveFloat);
	READ_PTR_FULL(FleeingEQS, UEnvQuery);
}

void UAthenaAICharacterControllerSharedParamValuesDataAsset::BeforeDelete()
{
	UAthenaAIControllerSharedParamValuesDataAsset::BeforeDelete();

	DELE_PTR_FULL(DistanceInMToCannonShotHitChanceCurve);
	DELE_PTR_FULL(FleeingEQS);
}

void UAthenaAICharacterControllerParamsDataAsset::AfterRead()
{
	UAthenaAIControllerParamsDataAsset::AfterRead();

	READ_PTR_FULL(IndividualDistanceInMToCannonShotHitChanceCurve, UCurveFloat);
	READ_PTR_FULL(IndividualFleeingEQS, UEnvQuery);
}

void UAthenaAICharacterControllerParamsDataAsset::BeforeDelete()
{
	UAthenaAIControllerParamsDataAsset::BeforeDelete();

	DELE_PTR_FULL(IndividualDistanceInMToCannonShotHitChanceCurve);
	DELE_PTR_FULL(IndividualFleeingEQS);
}

void UAthenaAIAmmoDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAthenaAIAmmoDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIAmmoRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIAmmoRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIAmmoProgressionTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIAmmoProgressionTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIAmmoTypeList::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DefaultAmmo, UAthenaAIAmmoDataAsset);
}

void UAIAmmoTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DefaultAmmo);
}

void UAIAnimationStateInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIAnimationStateInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIChargeUpInterruptedStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UAIChargeUpInterruptedStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UAIClassId::AfterRead()
{
	UObject::AfterRead();

}

void UAIClassId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAIPartsCategory::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIPartsCategory::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIPartsServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPartsServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D2580
//		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAISkillsetRankProgression>        Progression                                                (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillsetProgression");

	UAIEncounterServiceInterface_RegisterLoadedSkillsetProgression_Params params {};
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2360
//		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                                                   (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedSkillset");

	UAIEncounterServiceInterface_RegisterLoadedSkillset_Params params {};
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2140
//		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class ULoadoutAsset>                     Loadout                                                    (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedLoadout");

	UAIEncounterServiceInterface_RegisterLoadedLoadout_Params params {};
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1F20
//		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAthenaAIFormDataAsset>            Form                                                       (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedForm");

	UAIEncounterServiceInterface_RegisterLoadedForm_Params params {};
	params.Form = Form;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1D00
//		Name   -> Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAIEncounterSettings>              Encounter                                                  (Parm, UObjectWrapper, HasGetValueTypeHash)
void UAIEncounterServiceInterface::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterServiceInterface.RegisterLoadedEncounter");

	UAIEncounterServiceInterface_RegisterLoadedEncounter_Params params {};
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIEncounterServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIEncounterServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIClassIdTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIClassIdTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIColorVariantPool::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIColorVariantPool::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x041D1AD0
//		Name   -> Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UAICombatEncounterInterface::OnVulnerabilityStateEntered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AICombatEncounterInterface.OnVulnerabilityStateEntered");

	UAICombatEncounterInterface_OnVulnerabilityStateEntered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAICombatEncounterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAICombatEncounterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIDebugVisualisationComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UAIDebugVisualisationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UAIElectricProjectileInterruptedStatus::AfterRead()
{
	UStatusBase::AfterRead();

}

void UAIElectricProjectileInterruptedStatus::BeforeDelete()
{
	UStatusBase::BeforeDelete();

}

void UAIEncounterGenerationRecipe::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIEncounterGenerationRecipe::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIEncounterGenerationRecipeRankOrderList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIEncounterGenerationRecipeRankOrderList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIEncounterGenerationRecipeTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIEncounterGenerationRecipeTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIEncounterGenerationServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIEncounterGenerationServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAIEncounterGenerationService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(GenerationRecipes, UAIEncounterGenerationRecipeTypeList);
}

void AAIEncounterGenerationService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(GenerationRecipes);
}

void UAIFormRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIFormRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIFormProgressionTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIFormProgressionTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIFormTypeList::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DefaultForm, UAthenaAIFormDataAsset);
}

void UAIFormTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DefaultForm);
}

void UAILoadoutProgressionTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAILoadoutProgressionTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAILoadoutTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAILoadoutTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAISkillsetProgressionTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISkillsetProgressionTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAISkillsetTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISkillsetTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIPartsCategoryTypeList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIPartsCategoryTypeList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x041D2470
//		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAISkillsetRankProgression>        Progression                                                (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedSkillsetProgression(TAssetPtr<class UAISkillsetRankProgression> Progression)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillsetProgression");

	AAIEncounterService_RegisterLoadedSkillsetProgression_Params params {};
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2250
//		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedSkillset
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset                                                   (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedSkillset(TAssetPtr<class UAthenaAIControllerParamsDataAsset> Skillset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedSkillset");

	AAIEncounterService_RegisterLoadedSkillset_Params params {};
	params.Skillset = Skillset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2030
//		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedLoadout
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class ULoadoutAsset>                     Loadout                                                    (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedLoadout(TAssetPtr<class ULoadoutAsset> Loadout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedLoadout");

	AAIEncounterService_RegisterLoadedLoadout_Params params {};
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1E10
//		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedForm
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAthenaAIFormDataAsset>            Form                                                       (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedForm(TAssetPtr<class UAthenaAIFormDataAsset> Form)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedForm");

	AAIEncounterService_RegisterLoadedForm_Params params {};
	params.Form = Form;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1BE0
//		Name   -> Function AthenaAI.AIEncounterService.RegisterLoadedEncounter
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TAssetPtr<class UAIEncounterSettings>              Encounter                                                  (Parm, UObjectWrapper, HasGetValueTypeHash)
void AAIEncounterService::RegisterLoadedEncounter(TAssetPtr<class UAIEncounterSettings> Encounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIEncounterService.RegisterLoadedEncounter");

	AAIEncounterService_RegisterLoadedEncounter_Params params {};
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAIEncounterService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Ammo, UAIAmmoTypeList);
	READ_PTR_FULL(AmmoProgressions, UAIAmmoProgressionTypeList);
	READ_PTR_FULL(Forms, UAIFormTypeList);
	READ_PTR_FULL(FormProgressions, UAIFormProgressionTypeList);
	READ_PTR_FULL(Loadouts, UAILoadoutTypeList);
	READ_PTR_FULL(LoadoutProgressions, UAILoadoutProgressionTypeList);
	READ_PTR_FULL(Skillsets, UAISkillsetTypeList);
	READ_PTR_FULL(SkillsetProgressions, UAISkillsetProgressionTypeList);
	READ_PTR_FULL(ClassIds, UAIClassIdTypeList);
	READ_PTR_FULL(PartsCategories, UAIPartsCategoryTypeList);
	READ_PTR_FULL(TeamColors, UAIColorVariantPool);
	READ_PTR_FULL(AIItemDropSpawners, UAIItemDropComponentList);
	READ_PTR_FULL(AIItemDropSpawnerProgressions, UAIItemDropComponentRankProgressionList);
}

void AAIEncounterService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Ammo);
	DELE_PTR_FULL(AmmoProgressions);
	DELE_PTR_FULL(Forms);
	DELE_PTR_FULL(FormProgressions);
	DELE_PTR_FULL(Loadouts);
	DELE_PTR_FULL(LoadoutProgressions);
	DELE_PTR_FULL(Skillsets);
	DELE_PTR_FULL(SkillsetProgressions);
	DELE_PTR_FULL(ClassIds);
	DELE_PTR_FULL(PartsCategories);
	DELE_PTR_FULL(TeamColors);
	DELE_PTR_FULL(AIItemDropSpawners);
	DELE_PTR_FULL(AIItemDropSpawnerProgressions);
}

void UAISkillsetRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISkillsetRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIEncounterSettings::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(AIClass, UClass);
}

void UAIEncounterSettings::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(AIClass);
}

void UAIEncounterSettingsFixed::AfterRead()
{
	UAIEncounterSettings::AfterRead();

}

void UAIEncounterSettingsFixed::BeforeDelete()
{
	UAIEncounterSettings::BeforeDelete();

}

void UAIEncounterSettingsRankProgression::AfterRead()
{
	UAIEncounterSettings::AfterRead();

}

void UAIEncounterSettingsRankProgression::BeforeDelete()
{
	UAIEncounterSettings::BeforeDelete();

}

void UAIFormItemSpawnRequirement::AfterRead()
{
	USpawnRequirement::AfterRead();

}

void UAIFormItemSpawnRequirement::BeforeDelete()
{
	USpawnRequirement::BeforeDelete();

}

void UAIIdentifierOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIIdentifierOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIInteractableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIInteractableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIInteractableOperatorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIInteractableOperatorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIItemDropComponentList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIItemDropComponentList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIItemDropComponentRankProgressionList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIItemDropComponentRankProgressionList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIItemSpawnDataSourceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIItemSpawnDataSourceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIItemSpawnDataSourceComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(ItemSpawnDataAsset, UItemSpawnTransformWithRandomQuantityDataAssset);
}

void UAIItemSpawnDataSourceComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(ItemSpawnDataAsset);
}

void UAIItemSpawnRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIItemSpawnRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAILoadoutInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAILoadoutInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAILoadoutItemSpawnRequirement::AfterRead()
{
	USpawnRequirement::AfterRead();

}

void UAILoadoutItemSpawnRequirement::BeforeDelete()
{
	USpawnRequirement::BeforeDelete();

}

void UAILoadoutRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAILoadoutRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAILoadoutWithNonStorableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAILoadoutWithNonStorableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D3580
//		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ItemDesc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class AItemInfo*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AItemInfo* UAIManagerBlueprintFunctionLibrary::STATIC_SpawnItemFromAI(class APawn* Pawn, class UClass* ItemDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.SpawnItemFromAI");

	UAIManagerBlueprintFunctionLibrary_SpawnItemFromAI_Params params {};
	params.Pawn = Pawn;
	params.ItemDesc = ItemDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D1630
//		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAIManagerBlueprintFunctionLibrary::STATIC_GetFrameCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.GetFrameCounter");

	UAIManagerBlueprintFunctionLibrary_GetFrameCounter_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D0C50
//		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       DisplayName                                                (ConstParm, Parm, OutParm, ReferenceParm)
void UAIManagerBlueprintFunctionLibrary::STATIC_AddNameplateToAIWithLocalisedName(class AActor* Actor, const struct FText& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAIWithLocalisedName");

	UAIManagerBlueprintFunctionLibrary_AddNameplateToAIWithLocalisedName_Params params {};
	params.Actor = Actor;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D0B80
//		Name   -> Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     DisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAIManagerBlueprintFunctionLibrary::STATIC_AddNameplateToAI(class AActor* Actor, const struct FString& DisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerBlueprintFunctionLibrary.AddNameplateToAI");

	UAIManagerBlueprintFunctionLibrary_AddNameplateToAI_Params params {};
	params.Actor = Actor;
	params.DisplayName = DisplayName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIManagerBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAIManagerBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x041D3710
//		Name   -> Function AthenaAI.AIManagerServiceInterface.StartDespawnAI
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Athena_ECharacterDeathType>            DeathType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIManagerServiceInterface::StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.StartDespawnAI");

	UAIManagerServiceInterface_StartDespawnAI_Params params {};
	params.AIActor = AIActor;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1690
//		Name   -> Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAIManagerServiceInterface::GetNumOfSpawnedPawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerServiceInterface.GetNumOfSpawnedPawns");

	UAIManagerServiceInterface_GetNumOfSpawnedPawns_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAIManagerServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIManagerServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAthenaAIAbilityComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CurrentAIAbility, UAthenaAIAbility);
	READ_PTR_FULL(QueuedAbilityType, UClass);
	READ_PTR_FULL(DebugAlwaysOnAbility, UClass);
}

void UAthenaAIAbilityComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CurrentAIAbility);
	DELE_PTR_FULL(QueuedAbilityType);
	DELE_PTR_FULL(DebugAlwaysOnAbility);
}

void UAthenaAIAbilityHandlerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DebugAlwaysOnAbility, UClass);
	READ_PTR_FULL(RequiresActivation, UClass);
}

void UAthenaAIAbilityHandlerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DebugAlwaysOnAbility);
	DELE_PTR_FULL(RequiresActivation);
}

void UCoralShieldAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

	READ_PTR_FULL(VulnerabilityToApplyToSelf, UDamageableVulnerabilityLayer);
}

void UCoralShieldAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

	DELE_PTR_FULL(VulnerabilityToApplyToSelf);
}

void UAthenaAITypeListDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAthenaAITypeListDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAISpawnWaveSequence::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISpawnWaveSequence::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAISpawnWaveSequenceRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISpawnWaveSequenceRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIWeightedProbabilityRangeOfRangesAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIWeightedProbabilityRangeOfRangesAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIWeightedProbabilityRangeOfRangesRankProgression::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIWeightedProbabilityRangeOfRangesRankProgression::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIPlayerTrackerObservedInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPlayerTrackerObservedInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIPlayerTrackerObserverInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPlayerTrackerObserverInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAISpawnRequestResultLoggerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAISpawnRequestResultLoggerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAthenaAISettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UAthenaAISettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UAISpawnContextId::AfterRead()
{
	UObject::AfterRead();

}

void UAISpawnContextId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UCustomizableAIManagerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomizableAIManagerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D3800
//		Name   -> Function AthenaAI.AIManagerService.TickService
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              DeltaSeconds                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIManagerService::TickService(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.TickService");

	AAIManagerService_TickService_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D3640
//		Name   -> Function AthenaAI.AIManagerService.StartDespawnAI
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class APawn*                                       AIActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Athena_ECharacterDeathType>            DeathType                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIManagerService::StartDespawnAI(class APawn* AIActor, TEnumAsByte<Athena_ECharacterDeathType> DeathType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIManagerService.StartDespawnAI");

	AAIManagerService_StartDespawnAI_Params params {};
	params.AIActor = AIActor;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAIManagerService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(AmbientWaterSpawnerManager, AAmbientWaterSpawnerManager);
	READ_PTR_FULL(AITypeList, UAthenaAITypeListDataAsset);
	READ_PTR_FULL(AISpawnContextList, UAISpawnContextList);
}

void AAIManagerService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(AmbientWaterSpawnerManager);
	DELE_PTR_FULL(AITypeList);
	DELE_PTR_FULL(AISpawnContextList);
}

// Function:
//		Offset -> 0x041D3290
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InMaxNumOfSpawnedActors                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxNumOfSpawnedActors");

	UDebugAIManagerServiceInterface_SetMaxNumOfSpawnedActors_Params params {};
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D3180
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InMaxAICostUnitsPerRegion                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsPerRegion");

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsPerRegion_Params params {};
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D3070
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InMaxAICostUnitsForWorld                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetMaxAICostUnitsForWorld");

	UDebugAIManagerServiceInterface_SetMaxAICostUnitsForWorld_Params params {};
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2E40
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Ignore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDebugAIManagerServiceInterface::SetIgnoreCharacterLimits(bool Ignore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetIgnoreCharacterLimits");

	UDebugAIManagerServiceInterface_SetIgnoreCharacterLimits_Params params {};
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2D30
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InDistanceToPlayerToRaiseSpawnPriority                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetDistanceToPlayerToRaiseSpawnPriority");

	UDebugAIManagerServiceInterface_SetDistanceToPlayerToRaiseSpawnPriority_Params params {};
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2BA0
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InCharacterWorldDensityCheckTimer                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterWorldDensityCheckTimer");

	UDebugAIManagerServiceInterface_SetCharacterWorldDensityCheckTimer_Params params {};
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2AA0
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InCharacterRegionDensityCheckTimer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterRegionDensityCheckTimer");

	UDebugAIManagerServiceInterface_SetCharacterRegionDensityCheckTimer_Params params {};
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D29A0
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InCloseByCharactersRadius                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDebugAIManagerServiceInterface::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.SetCharacterNetRelevancy");

	UDebugAIManagerServiceInterface_SetCharacterNetRelevancy_Params params {};
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D0FA0
//		Name   -> Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      InExclusive                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               InBlockState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDebugAIManagerServiceInterface::BlockAIAbility(class UClass* InExclusive, bool InBlockState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerServiceInterface.BlockAIAbility");

	UDebugAIManagerServiceInterface_BlockAIAbility_Params params {};
	params.InExclusive = InExclusive;
	params.InBlockState = InBlockState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDebugAIManagerServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UDebugAIManagerServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D3200
//		Name   -> Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InMaxNumOfSpawnedActors                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetMaxNumOfSpawnedActors(int InMaxNumOfSpawnedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxNumOfSpawnedActors");

	ADebugAIManagerService_SetMaxNumOfSpawnedActors_Params params {};
	params.InMaxNumOfSpawnedActors = InMaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D30F0
//		Name   -> Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InMaxAICostUnitsPerRegion                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetMaxAICostUnitsPerRegion(int InMaxAICostUnitsPerRegion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsPerRegion");

	ADebugAIManagerService_SetMaxAICostUnitsPerRegion_Params params {};
	params.InMaxAICostUnitsPerRegion = InMaxAICostUnitsPerRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2FE0
//		Name   -> Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InMaxAICostUnitsForWorld                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetMaxAICostUnitsForWorld(int InMaxAICostUnitsForWorld)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetMaxAICostUnitsForWorld");

	ADebugAIManagerService_SetMaxAICostUnitsForWorld_Params params {};
	params.InMaxAICostUnitsForWorld = InMaxAICostUnitsForWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2DB0
//		Name   -> Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Ignore                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADebugAIManagerService::SetIgnoreCharacterLimits(bool Ignore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetIgnoreCharacterLimits");

	ADebugAIManagerService_SetIgnoreCharacterLimits_Params params {};
	params.Ignore = Ignore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2CB0
//		Name   -> Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InDistanceToPlayerToRaiseSpawnPriority                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetDistanceToPlayerToRaiseSpawnPriority(float InDistanceToPlayerToRaiseSpawnPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetDistanceToPlayerToRaiseSpawnPriority");

	ADebugAIManagerService_SetDistanceToPlayerToRaiseSpawnPriority_Params params {};
	params.InDistanceToPlayerToRaiseSpawnPriority = InDistanceToPlayerToRaiseSpawnPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2B20
//		Name   -> Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InCharacterWorldDensityCheckTimer                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetCharacterWorldDensityCheckTimer(float InCharacterWorldDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterWorldDensityCheckTimer");

	ADebugAIManagerService_SetCharacterWorldDensityCheckTimer_Params params {};
	params.InCharacterWorldDensityCheckTimer = InCharacterWorldDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2A20
//		Name   -> Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InCharacterRegionDensityCheckTimer                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetCharacterRegionDensityCheckTimer(float InCharacterRegionDensityCheckTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterRegionDensityCheckTimer");

	ADebugAIManagerService_SetCharacterRegionDensityCheckTimer_Params params {};
	params.InCharacterRegionDensityCheckTimer = InCharacterRegionDensityCheckTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2920
//		Name   -> Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InCloseByCharactersRadius                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADebugAIManagerService::SetCharacterNetRelevancy(float InCloseByCharactersRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.SetCharacterNetRelevancy");

	ADebugAIManagerService_SetCharacterNetRelevancy_Params params {};
	params.InCloseByCharactersRadius = InCloseByCharactersRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D0ED0
//		Name   -> Function AthenaAI.DebugAIManagerService.BlockAIAbility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      InExclusive                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               InBlockState                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ADebugAIManagerService::BlockAIAbility(class UClass* InExclusive, bool InBlockState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.DebugAIManagerService.BlockAIAbility");

	ADebugAIManagerService_BlockAIAbility_Params params {};
	params.InExclusive = InExclusive;
	params.InBlockState = InBlockState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ADebugAIManagerService::AfterRead()
{
	AAIManagerService::AfterRead();

}

void ADebugAIManagerService::BeforeDelete()
{
	AAIManagerService::BeforeDelete();

}

void AAINoiseFireInstigator::AfterRead()
{
	AActor::AfterRead();

}

void AAINoiseFireInstigator::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UAIPartsService::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PartsCategoriesList, UAIPartsCategoryTypeList);
	READ_PTR_FULL(TeamColors, UAIColorVariantPool);
}

void UAIPartsService::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PartsCategoriesList);
	DELE_PTR_FULL(TeamColors);
}

void UAIPartCustomizationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPartCustomizationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIPartIdListingAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIPartIdListingAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIPartsRetrievalInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPartsRetrievalInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D2820
//		Name   -> Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAIPartsCategory*                            AssignedPartsCategory                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PartsIndexToUse                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TeamColorIndex                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIPartsRetrievalComponent::RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int PartsIndexToUse, int TeamColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPartsRetrievalComponent.RequestNewAIParts");

	UAIPartsRetrievalComponent_RequestNewAIParts_Params params {};
	params.AssignedPartsCategory = AssignedPartsCategory;
	params.PartsIndexToUse = PartsIndexToUse;
	params.TeamColorIndex = TeamColorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1A70
//		Name   -> Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData
//		Flags  -> (Final, Native, Private)
void UAIPartsRetrievalComponent::OnRep_ReplicatedAIPartsData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPartsRetrievalComponent.OnRep_ReplicatedAIPartsData");

	UAIPartsRetrievalComponent_OnRep_ReplicatedAIPartsData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIPartsRetrievalComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(PartsCategory, UAIPartsCategory);
}

void UAIPartsRetrievalComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(PartsCategory);
}

void UAIPawnInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPawnInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIPawnTurnActiveInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIPawnTurnActiveInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIProximityPlayerTracker::AfterRead()
{
	UAISpawnerPlayerTracker::AfterRead();

}

void UAIProximityPlayerTracker::BeforeDelete()
{
	UAISpawnerPlayerTracker::BeforeDelete();

}

void UFilterFirstPlayerEnterPlayerTrackerDecorator::AfterRead()
{
	UAISpawnerPlayerTracker::AfterRead();

}

void UFilterFirstPlayerEnterPlayerTrackerDecorator::BeforeDelete()
{
	UAISpawnerPlayerTracker::BeforeDelete();

}

void UAIProjectileInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIProjectileInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIRegionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIRegionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIRegionComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UAIRegionComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UAIShipInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIShipInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAISkillsetItemSpawnRequirement::AfterRead()
{
	USpawnRequirement::AfterRead();

}

void UAISkillsetItemSpawnRequirement::BeforeDelete()
{
	USpawnRequirement::BeforeDelete();

}

void UAISpawnContextContainerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAISpawnContextContainerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAISpawnContextContainerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UAISpawnContextContainerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UAISpawnContextList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISpawnContextList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAISpawnContextProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAISpawnContextProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIFixedWavesSpawner::AfterRead()
{
	UAISpawner::AfterRead();

}

void UAIFixedWavesSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

}

void UAIIncrementalWaveSpawner::AfterRead()
{
	UAISpawner::AfterRead();

}

void UAIIncrementalWaveSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

}

void UAIInteractableSpawner::AfterRead()
{
	UAISpawner::AfterRead();

	READ_PTR_FULL(AIInteractableType, UClass);
}

void UAIInteractableSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

	DELE_PTR_FULL(AIInteractableType);
}

void UAIOnDemandSpawner::AfterRead()
{
	UAISpawner::AfterRead();

}

void UAIOnDemandSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

}

// Function:
//		Offset -> 0x041D1AF0
//		Name   -> Function AthenaAI.AIPerPlayerSpawner.PlayerDeath
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAIPerPlayerSpawner::PlayerDeath(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AIPerPlayerSpawner.PlayerDeath");

	UAIPerPlayerSpawner_PlayerDeath_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAIPerPlayerSpawner::AfterRead()
{
	UAISpawner::AfterRead();

}

void UAIPerPlayerSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

}

void UNamedAIDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(DefaultClassId, UClass);
	READ_PTR_FULL(FemaleCaptainClassId, UClass);
	READ_PTR_FULL(MaleCaptainClassId, UClass);
	READ_PTR_FULL(FemaleCrewClassId, UClass);
	READ_PTR_FULL(MaleCrewClassId, UClass);
}

void UNamedAIDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(DefaultClassId);
	DELE_PTR_FULL(FemaleCaptainClassId);
	DELE_PTR_FULL(MaleCaptainClassId);
	DELE_PTR_FULL(FemaleCrewClassId);
	DELE_PTR_FULL(MaleCrewClassId);
}

void UAIBoobyTrapSpawner::AfterRead()
{
	UAIPerPlayerSpawner::AfterRead();

	READ_PTR_FULL(NewWaveSpawnSfx, UWwiseEvent);
	READ_PTR_FULL(NamedAIDataAsset, UNamedAIDataAsset);
	READ_PTR_FULL(ActorToTrack, AActor);
}

void UAIBoobyTrapSpawner::BeforeDelete()
{
	UAIPerPlayerSpawner::BeforeDelete();

	DELE_PTR_FULL(NewWaveSpawnSfx);
	DELE_PTR_FULL(NamedAIDataAsset);
	DELE_PTR_FULL(ActorToTrack);
}

void UAIProgressiveWavesSpawner::AfterRead()
{
	UAISpawner::AfterRead();

	READ_PTR_FULL(TriggerActor, AActor);
}

void UAIProgressiveWavesSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

	DELE_PTR_FULL(TriggerActor);
}

void UAISpawnerSpawnInteractableAssignmentInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAISpawnerSpawnInteractableAssignmentInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIWaveSpawner::AfterRead()
{
	UAISpawner::AfterRead();

}

void UAIWaveSpawner::BeforeDelete()
{
	UAISpawner::BeforeDelete();

}

void UAISpawnerList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAISpawnerList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAISpawnOverrideCondition::AfterRead()
{
	UObject::AfterRead();

}

void UAISpawnOverrideCondition::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAISpawnCampaignCondition::AfterRead()
{
	UAISpawnOverrideCondition::AfterRead();

}

void UAISpawnCampaignCondition::BeforeDelete()
{
	UAISpawnOverrideCondition::BeforeDelete();

}

void UAISpawnComplexCondition::AfterRead()
{
	UAISpawnOverrideCondition::AfterRead();

}

void UAISpawnComplexCondition::BeforeDelete()
{
	UAISpawnOverrideCondition::BeforeDelete();

}

void UAISpawnAndCondition::AfterRead()
{
	UAISpawnComplexCondition::AfterRead();

}

void UAISpawnAndCondition::BeforeDelete()
{
	UAISpawnComplexCondition::BeforeDelete();

}

void UAISpawnOrCondition::AfterRead()
{
	UAISpawnComplexCondition::AfterRead();

}

void UAISpawnOrCondition::BeforeDelete()
{
	UAISpawnComplexCondition::BeforeDelete();

}

void UAISpawnMatchesAllContextsCondition::AfterRead()
{
	UAISpawnOverrideCondition::AfterRead();

}

void UAISpawnMatchesAllContextsCondition::BeforeDelete()
{
	UAISpawnOverrideCondition::BeforeDelete();

}

void UAISpawnMatchesAnyContextCondition::AfterRead()
{
	UAISpawnOverrideCondition::AfterRead();

}

void UAISpawnMatchesAnyContextCondition::BeforeDelete()
{
	UAISpawnOverrideCondition::BeforeDelete();

}

void UStaticAISpawnCondition::AfterRead()
{
	UAISpawnOverrideCondition::AfterRead();

}

void UStaticAISpawnCondition::BeforeDelete()
{
	UAISpawnOverrideCondition::BeforeDelete();

}

void UAISpawnPointSeedComponent::AfterRead()
{
	USceneComponent::AfterRead();

}

void UAISpawnPointSeedComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

}

void UAISpawnRegionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAISpawnRegionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAITargetServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAITargetServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAITargetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAITargetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAITargetActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Root, USceneComponent);
}

void AAITargetActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Root);
}

void AAITargetService::AfterRead()
{
	AActor::AfterRead();

}

void AAITargetService::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x041D11F0
//		Name   -> Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Target                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               CheckYaw                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    OutAimConfig                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAITargetWeaponInterface::FindAimConfigToHitTarget(const struct FVector& Target, bool CheckYaw, struct FRotator* OutAimConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AITargetWeaponInterface.FindAimConfigToHitTarget");

	UAITargetWeaponInterface_FindAimConfigToHitTarget_Params params {};
	params.Target = Target;
	params.CheckYaw = CheckYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAimConfig != nullptr)
		*OutAimConfig = params.OutAimConfig;


	return params.ReturnValue;
}


void UAITargetWeaponInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAITargetWeaponInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAIWithFormInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIWithFormInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D1950
//		Name   -> Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      InActorDying                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAmbientWaterSpawnerManager::OnPlayerDeath(class AActor* InActorDying)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AmbientWaterSpawnerManager.OnPlayerDeath");

	AAmbientWaterSpawnerManager_OnPlayerDeath_Params params {};
	params.InActorDying = InActorDying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAmbientWaterSpawnerManager::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Root, USceneComponent);
	READ_PTR_FULL(AthenaAISettings, UAthenaAISettings);
	READ_PTR_FULL(SharkPerPlayerSpawnerTemplate, UAIPerPlayerSpawner);
	READ_PTR_FULL(SirenPerPlayerSpawnerTemplate, UAIPerPlayerSpawner);
	READ_PTR_FULL(SharkPerPlayerSpawner, UAIPerPlayerSpawner);
}

void AAmbientWaterSpawnerManager::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(AthenaAISettings);
	DELE_PTR_FULL(SharkPerPlayerSpawnerTemplate);
	DELE_PTR_FULL(SirenPerPlayerSpawnerTemplate);
	DELE_PTR_FULL(SharkPerPlayerSpawner);
}

void UAmmunitionItemClassProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAmmunitionItemClassProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAppliedStatusToMultipleAIWithFormsStatCondition::AfterRead()
{
	UStatCondition::AfterRead();

}

void UAppliedStatusToMultipleAIWithFormsStatCondition::BeforeDelete()
{
	UStatCondition::BeforeDelete();

}

void UAquaticAITargetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAquaticAITargetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBurrowAIAbility::AfterRead()
{
	UAthenaAIAbility::AfterRead();

	READ_PTR_FULL(CachedTarget, AActor);
}

void UBurrowAIAbility::BeforeDelete()
{
	UAthenaAIAbility::BeforeDelete();

	DELE_PTR_FULL(CachedTarget);
}

// Function:
//		Offset -> 0x041D1A90
//		Name   -> Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan
//		Flags  -> (Final, Native, Public)
void ABurrowCrack::OnRep_StartFadeAndLifeSpan()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.BurrowCrack.OnRep_StartFadeAndLifeSpan");

	ABurrowCrack_OnRep_StartFadeAndLifeSpan_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              PercentLeft                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABurrowCrack::OnLifeSpanPercentLeft(float PercentLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.BurrowCrack.OnLifeSpanPercentLeft");

	ABurrowCrack_OnLifeSpanPercentLeft_Params params {};
	params.PercentLeft = PercentLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABurrowCrack::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneComponent, USceneComponent);
	READ_PTR_FULL(DecalComponent, UDecalComponent);
}

void ABurrowCrack::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneComponent);
	DELE_PTR_FULL(DecalComponent);
}

void UBurrowAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

	READ_PTR_FULL(BurrowCrackToSpawn, UClass);
	READ_PTR_FULL(BurrowEruptArea, UClass);
	READ_PTR_FULL(EnvQueryLinesToTarget, UEnvQuery);
	READ_PTR_FULL(EnvQueryAroundTarget, UEnvQuery);
}

void UBurrowAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

	DELE_PTR_FULL(BurrowCrackToSpawn);
	DELE_PTR_FULL(BurrowEruptArea);
	DELE_PTR_FULL(EnvQueryLinesToTarget);
	DELE_PTR_FULL(EnvQueryAroundTarget);
}

void UBurrowHealAIAbilityParams::AfterRead()
{
	UBurrowAIAbilityParams::AfterRead();

	READ_PTR_FULL(AllyTypeToHeal, UClass);
}

void UBurrowHealAIAbilityParams::BeforeDelete()
{
	UBurrowAIAbilityParams::BeforeDelete();

	DELE_PTR_FULL(AllyTypeToHeal);
}

void UBurrowHealAIAbility::AfterRead()
{
	UBurrowAIAbility::AfterRead();

}

void UBurrowHealAIAbility::BeforeDelete()
{
	UBurrowAIAbility::BeforeDelete();

}

void UAthenaAIBuffAbilityInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAIBuffAbilityInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBTDecorator_CompareBlackboardValues::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_CompareBlackboardValues::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_TargetInRange::AfterRead()
{
	UBTDecorator_CompareBlackboardValues::AfterRead();

}

void UBTDecorator_TargetInRange::BeforeDelete()
{
	UBTDecorator_CompareBlackboardValues::BeforeDelete();

}

void UBTDecorator_TargetInRangeOfPoint::AfterRead()
{
	UBTDecorator_TargetInRange::AfterRead();

}

void UBTDecorator_TargetInRangeOfPoint::BeforeDelete()
{
	UBTDecorator_TargetInRange::BeforeDelete();

}

void UBTDecorator_TestRange::AfterRead()
{
	UBTDecorator_CompareBlackboardValues::AfterRead();

}

void UBTDecorator_TestRange::BeforeDelete()
{
	UBTDecorator_CompareBlackboardValues::BeforeDelete();

}

void UBTDecorator_TestRangeOfSeenActors::AfterRead()
{
	UBTDecorator_TestRange::AfterRead();

}

void UBTDecorator_TestRangeOfSeenActors::BeforeDelete()
{
	UBTDecorator_TestRange::BeforeDelete();

}

void UBTDecorator_ConeCheck3D::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_ConeCheck3D::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_DockedToInteractable::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

}

void UBTDecorator_DockedToInteractable::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

}

void UBTDecorator_FeatureToggle::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_FeatureToggle::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_IsAbilityAvailable::AfterRead()
{
	UBTDecorator::AfterRead();

	READ_PTR_FULL(AIAbilityType, UClass);
}

void UBTDecorator_IsAbilityAvailable::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

	DELE_PTR_FULL(AIAbilityType);
}

void UBTDecorator_IsLocationInWater::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

}

void UBTDecorator_IsLocationInWater::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

}

void UBTDecorator_MultipleRandomDiceRolls::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_MultipleRandomDiceRolls::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_RandomDiceRoll::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_RandomDiceRoll::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_RandomLoop::AfterRead()
{
	UBTDecorator::AfterRead();

	READ_PTR_FULL(RandomNumLoopCurve, UCurveFloat);
}

void UBTDecorator_RandomLoop::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

	DELE_PTR_FULL(RandomNumLoopCurve);
}

void UBTDecorator_RollAgainstPatrolChance::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_RollAgainstPatrolChance::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_TestAIInteractableType::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

	READ_PTR_FULL(Type, UClass);
}

void UBTDecorator_TestAIInteractableType::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(Type);
}

void UBTService_AimAIInteractable::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_AimAIInteractable::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_DefaultFocusToPosAtRelativeAngleToObject::AfterRead()
{
	UBTService_DefaultFocus::AfterRead();

}

void UBTService_DefaultFocusToPosAtRelativeAngleToObject::BeforeDelete()
{
	UBTService_DefaultFocus::BeforeDelete();

}

void UBTService_DetermineAIAbility::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_DetermineAIAbility::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_DisableCollisions::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_DisableCollisions::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_DisableDamageResponses::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_DisableDamageResponses::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_DisableStun::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_DisableStun::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_EnableFaceFocusActor::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

}

void UBTService_EnableFaceFocusActor::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

}

void UBTService_IncrementFloatValueWithTimeSpentInBranch::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

}

void UBTService_IncrementFloatValueWithTimeSpentInBranch::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

}

void UBTService_OverrideTurnSpeed::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_OverrideTurnSpeed::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_PlayCustomMontageId::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_PlayCustomMontageId::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_QueryPerceptionForTarget::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_QueryPerceptionForTarget::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_RunEQSQuery::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

	READ_PTR_FULL(QueryTemplate, UEnvQuery);
}

void UBTService_RunEQSQuery::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(QueryTemplate);
}

void UBTService_DoesEQSQuerySucceed::AfterRead()
{
	UBTService_RunEQSQuery::AfterRead();

}

void UBTService_DoesEQSQuerySucceed::BeforeDelete()
{
	UBTService_RunEQSQuery::BeforeDelete();

}

void UBTService_RunEQSQueryOnActorMovement::AfterRead()
{
	UBTService_RunEQSQuery::AfterRead();

}

void UBTService_RunEQSQueryOnActorMovement::BeforeDelete()
{
	UBTService_RunEQSQuery::BeforeDelete();

}

void UBTService_SetAIAnimationState::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

}

void UBTService_SetAIAnimationState::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

}

void UBTService_SetAIStrategy::AfterRead()
{
	UBTService::AfterRead();

	READ_PTR_FULL(NewStrategy, UClass);
}

void UBTService_SetAIStrategy::BeforeDelete()
{
	UBTService::BeforeDelete();

	DELE_PTR_FULL(NewStrategy);
}

void UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_SetBoolBlackboardValueToTrueOnCeaseRelevant::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_SetBoolBlackboardValueTrueWhileRelevant::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_SetBoolBlackboardValueTrueWhileRelevant::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_SetNameBlackboardValueWhileRelevant::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_SetNameBlackboardValueWhileRelevant::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_TriggerNotifications::AfterRead()
{
	UBTService::AfterRead();

	READ_PTR_FULL(EnterBranchNotificationId, UClass);
	READ_PTR_FULL(LeaveBranchNotificationId, UClass);
}

void UBTService_TriggerNotifications::BeforeDelete()
{
	UBTService::BeforeDelete();

	DELE_PTR_FULL(EnterBranchNotificationId);
	DELE_PTR_FULL(LeaveBranchNotificationId);
}

void UElectricShieldAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

}

void UElectricShieldAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

}

void USporeBreathAIAbilityParams::AfterRead()
{
	UAthenaAIAbilityParams::AfterRead();

	READ_PTR_FULL(BreathActor, UClass);
	READ_PTR_FULL(VfxSpawner, UClass);
}

void USporeBreathAIAbilityParams::BeforeDelete()
{
	UAthenaAIAbilityParams::BeforeDelete();

	DELE_PTR_FULL(BreathActor);
	DELE_PTR_FULL(VfxSpawner);
}

void UBurrowAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UBurrowAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UBurrowHealAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UBurrowHealAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UCoralShieldAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UCoralShieldAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UElectricShieldAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void UElectricShieldAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void USporeBreathAIAbilityType::AfterRead()
{
	UAthenaAIAbilityType::AfterRead();

}

void USporeBreathAIAbilityType::BeforeDelete()
{
	UAthenaAIAbilityType::BeforeDelete();

}

void UAthenaAIRangeBasedAmmoDataAsset::AfterRead()
{
	UAthenaAIAmmoDataAsset::AfterRead();

}

void UAthenaAIRangeBasedAmmoDataAsset::BeforeDelete()
{
	UAthenaAIAmmoDataAsset::BeforeDelete();

}

void UAthenaAICharacterStatsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAICharacterStatsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USpawnItemDescProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USpawnItemDescProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D33E0
//		Name   -> Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InPrioritiseInteractablesBeforeEnemies                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAthenaAICharacterController::SetOverridePrioritiseInteractablesBeforeEnemies(bool InPrioritiseInteractablesBeforeEnemies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetOverridePrioritiseInteractablesBeforeEnemies");

	AAthenaAICharacterController_SetOverridePrioritiseInteractablesBeforeEnemies_Params params {};
	params.InPrioritiseInteractablesBeforeEnemies = InPrioritiseInteractablesBeforeEnemies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2ED0
//		Name   -> Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      InItemCategory                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FName                                       ParamName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAICharacterController::SetItemSpecificNamedControllerParam(class UClass* InItemCategory, const struct FName& ParamName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetItemSpecificNamedControllerParam");

	AAthenaAICharacterController_SetItemSpecificNamedControllerParam_Params params {};
	params.InItemCategory = InItemCategory;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D2C20
//		Name   -> Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InDisableTurningForTest                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAthenaAICharacterController::SetDisableTurningForTest(bool InDisableTurningForTest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.SetDisableTurningForTest");

	AAthenaAICharacterController_SetDisableTurningForTest_Params params {};
	params.InDisableTurningForTest = InDisableTurningForTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1070
//		Name   -> Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAthenaAICharacterController::ClearOverridePrioritiseInteractablesBeforeEnemies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAICharacterController.ClearOverridePrioritiseInteractablesBeforeEnemies");

	AAthenaAICharacterController_ClearOverridePrioritiseInteractablesBeforeEnemies_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAthenaAICharacterController::AfterRead()
{
	AAthenaAIController::AfterRead();

	READ_PTR_FULL(ItemParamsDataAsset, UAthenaAIItemParamsDataAsset);
	READ_PTR_FULL(FallbackLoadoutIfAllEngageItemsDropped, ULoadoutAsset);
	READ_PTR_FULL(CharacterParamsDataAsset, UAthenaAICharacterControllerParamsDataAsset);
	READ_PTR_FULL(DistanceInMToCannonShotHitChanceCurve, UCurveFloat);
}

void AAthenaAICharacterController::BeforeDelete()
{
	AAthenaAIController::BeforeDelete();

	DELE_PTR_FULL(ItemParamsDataAsset);
	DELE_PTR_FULL(FallbackLoadoutIfAllEngageItemsDropped);
	DELE_PTR_FULL(CharacterParamsDataAsset);
	DELE_PTR_FULL(DistanceInMToCannonShotHitChanceCurve);
}

void UAthenaAIControllerNavMeshTogglesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAIControllerNavMeshTogglesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UFaunaAIContollerParamsDataAsset::AfterRead()
{
	UAthenaAIControllerParamsDataAsset::AfterRead();

	READ_PTR_FULL(CharacterDistanceToDangerRatingCurve, UCurveFloat);
	READ_PTR_FULL(DangerRatingToAgitationDurationCurve, UCurveFloat);
	READ_PTR_FULL(DistanceToLeaderPatrolChanceCurve, UCurveFloat);
}

void UFaunaAIContollerParamsDataAsset::BeforeDelete()
{
	UAthenaAIControllerParamsDataAsset::BeforeDelete();

	DELE_PTR_FULL(CharacterDistanceToDangerRatingCurve);
	DELE_PTR_FULL(DangerRatingToAgitationDurationCurve);
	DELE_PTR_FULL(DistanceToLeaderPatrolChanceCurve);
}

void UAthenaAIControllerParamsDataProvider::AfterRead()
{
	UAIDataProvider::AfterRead();

}

void UAthenaAIControllerParamsDataProvider::BeforeDelete()
{
	UAIDataProvider::BeforeDelete();

}

void UAthenaAIControllerParamsTargetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAIControllerParamsTargetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UAthenaAIFormComponentContainerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAthenaAIFormComponentContainerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x041D17C0
//		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      Sense                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAthenaAIPerceptionComponent::IsPerceptionSenseEnabled(class UClass* Sense)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsPerceptionSenseEnabled");

	UAthenaAIPerceptionComponent_IsPerceptionSenseEnabled_Params params {};
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D1790
//		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAthenaAIPerceptionComponent::IsAnyPerceptionEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.IsAnyPerceptionEnabled");

	UAthenaAIPerceptionComponent_IsAnyPerceptionEnabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x041D1120
//		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Sense                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaAIPerceptionComponent::EnablePerceptionSense(class UClass* Sense, bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnablePerceptionSense");

	UAthenaAIPerceptionComponent_EnablePerceptionSense_Params params {};
	params.Sense = Sense;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D1090
//		Name   -> Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enable                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaAIPerceptionComponent::EnableAllPerception(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.AthenaAIPerceptionComponent.EnableAllPerception");

	UAthenaAIPerceptionComponent_EnableAllPerception_Params params {};
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAthenaAIPerceptionComponent::AfterRead()
{
	UAIPerceptionComponent::AfterRead();

}

void UAthenaAIPerceptionComponent::BeforeDelete()
{
	UAIPerceptionComponent::BeforeDelete();

}

void UAthenaAISightTargetInterface::AfterRead()
{
	UAISightTargetInterface::AfterRead();

}

void UAthenaAISightTargetInterface::BeforeDelete()
{
	UAISightTargetInterface::BeforeDelete();

}

void UAthenaAIWeightedRangesDataProvider::AfterRead()
{
	UAIDataProvider::AfterRead();

}

void UAthenaAIWeightedRangesDataProvider::BeforeDelete()
{
	UAIDataProvider::BeforeDelete();

}

void UBlackboardAIDataProvider::AfterRead()
{
	UAIDataProvider::AfterRead();

}

void UBlackboardAIDataProvider::BeforeDelete()
{
	UAIDataProvider::BeforeDelete();

}

void UBTDecorator_ActionState::AfterRead()
{
	UBTDecorator::AfterRead();

	READ_PTR_FULL(StateId, UClass);
}

void UBTDecorator_ActionState::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

	DELE_PTR_FULL(StateId);
}

void UBTDecorator_ActorInWater::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

}

void UBTDecorator_ActorInWater::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

}

void UBTDecorator_CurrentAIStrategy::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_CurrentAIStrategy::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_IsActorInExpectedActionState::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

	READ_PTR_FULL(ExpectedActionState, UClass);
}

void UBTDecorator_IsActorInExpectedActionState::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

	DELE_PTR_FULL(ExpectedActionState);
}

void UBTDecorator_ItemReadyToUse::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

	READ_PTR_FULL(NotificationId, UClass);
}

void UBTDecorator_ItemReadyToUse::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

	DELE_PTR_FULL(NotificationId);
}

void UBTDecorator_LeftOfAIPawn::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_LeftOfAIPawn::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_LineOfSightToTarget::AfterRead()
{
	UBTDecorator_BaseConditional::AfterRead();

}

void UBTDecorator_LineOfSightToTarget::BeforeDelete()
{
	UBTDecorator_BaseConditional::BeforeDelete();

}

void UBTDecorator_CompareBlackboardClassValue::AfterRead()
{
	UBTDecorator_BlackboardBase::AfterRead();

	READ_PTR_FULL(Class, UClass);
}

void UBTDecorator_CompareBlackboardClassValue::BeforeDelete()
{
	UBTDecorator_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(Class);
}

void UBTDecorator_CompareBlackboardIntValue::AfterRead()
{
	UBTDecorator::AfterRead();

}

void UBTDecorator_CompareBlackboardIntValue::BeforeDelete()
{
	UBTDecorator::BeforeDelete();

}

void UBTDecorator_CompareFloatValueBase::AfterRead()
{
	UBTDecorator_CompareBlackboardValues::AfterRead();

}

void UBTDecorator_CompareFloatValueBase::BeforeDelete()
{
	UBTDecorator_CompareBlackboardValues::BeforeDelete();

}

void UBTDecorator_CompareBlackboardActorSpeed::AfterRead()
{
	UBTDecorator_CompareFloatValueBase::AfterRead();

}

void UBTDecorator_CompareBlackboardActorSpeed::BeforeDelete()
{
	UBTDecorator_CompareFloatValueBase::BeforeDelete();

}

void UBTDecorator_CompareBlackboardFloatValue::AfterRead()
{
	UBTDecorator_CompareFloatValueBase::AfterRead();

}

void UBTDecorator_CompareBlackboardFloatValue::BeforeDelete()
{
	UBTDecorator_CompareFloatValueBase::BeforeDelete();

}

void UBTDecorator_CompareCurrentHealth::AfterRead()
{
	UBTDecorator_CompareFloatValueBase::AfterRead();

}

void UBTDecorator_CompareCurrentHealth::BeforeDelete()
{
	UBTDecorator_CompareFloatValueBase::BeforeDelete();

}

void UBTService_UpdateFocusOnBBChange::AfterRead()
{
	UBTService_DefaultFocus::AfterRead();

}

void UBTService_UpdateFocusOnBBChange::BeforeDelete()
{
	UBTService_DefaultFocus::BeforeDelete();

}

void UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile::AfterRead()
{
	UBTService_UpdateFocusOnBBChange::AfterRead();

}

void UBTService_UpdateFocusOnBBChangeWithOffsetFromWieldedProjectile::BeforeDelete()
{
	UBTService_UpdateFocusOnBBChange::BeforeDelete();

}

void UBTService_UpdateTargetForInteractable::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_UpdateTargetForInteractable::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_UpdateViewPitchForWieldedProjectileToHitTarget::AfterRead()
{
	UBTService_BlackboardBase::AfterRead();

}

void UBTService_UpdateViewPitchForWieldedProjectileToHitTarget::BeforeDelete()
{
	UBTService_BlackboardBase::BeforeDelete();

}

void UBTTask_ApplyStatusComposite::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_ApplyStatusComposite::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_AthenaMoveTo::AfterRead()
{
	UBTTask_MoveTo::AfterRead();

}

void UBTTask_AthenaMoveTo::BeforeDelete()
{
	UBTTask_MoveTo::BeforeDelete();

}

void UBTTask_MoveToFailOnDistanceChange::AfterRead()
{
	UBTTask_AthenaMoveTo::AfterRead();

}

void UBTTask_MoveToFailOnDistanceChange::BeforeDelete()
{
	UBTTask_AthenaMoveTo::BeforeDelete();

}

void UBTTask_MoveToFailOnDistanceToSeenActors::AfterRead()
{
	UBTTask_MoveToFailOnDistanceChange::AfterRead();

}

void UBTTask_MoveToFailOnDistanceToSeenActors::BeforeDelete()
{
	UBTTask_MoveToFailOnDistanceChange::BeforeDelete();

}

void UBTTask_MoveToFailOnDistanceToTargetChanged::AfterRead()
{
	UBTTask_MoveToFailOnDistanceChange::AfterRead();

}

void UBTTask_MoveToFailOnDistanceToTargetChanged::BeforeDelete()
{
	UBTTask_MoveToFailOnDistanceChange::BeforeDelete();

}

void UBTTask_MoveToMovingLocation::AfterRead()
{
	UBTTask_AthenaMoveTo::AfterRead();

}

void UBTTask_MoveToMovingLocation::BeforeDelete()
{
	UBTTask_AthenaMoveTo::BeforeDelete();

}

void UBTTask_AthenaWait::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_AthenaWait::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_AthenaWaitWithFloor::AfterRead()
{
	UBTTask_AthenaWait::AfterRead();

}

void UBTTask_AthenaWaitWithFloor::BeforeDelete()
{
	UBTTask_AthenaWait::BeforeDelete();

}

void UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_BurrowAbilityTriggerEruptAreaFromBlackboard::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_BurrowIntoGround::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_BurrowIntoGround::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_ClearBlackboardValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_ClearBlackboardValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_ClearPerceptualData::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_ClearPerceptualData::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_CopyAIInteractionPointAndFocusToBlackboard::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_CopyAIInteractionPointAndFocusToBlackboard::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_CopyBlackboardActor::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_CopyBlackboardActor::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_CopyBlackboardVector::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_CopyBlackboardVector::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_DetermineFollowUpAIAbility::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(AIAbilityTypeToFollowUp, UClass);
}

void UBTTask_DetermineFollowUpAIAbility::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(AIAbilityTypeToFollowUp);
}

void UBTTask_ExecuteAIAbility::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(AIAbilityType, UClass);
}

void UBTTask_ExecuteAIAbility::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(AIAbilityType);
}

void UBTTask_GetCurrentHealth::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_GetCurrentHealth::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_IgnoreActorTemporarily::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_IgnoreActorTemporarily::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_IncrementBlackboardFloatValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_IncrementBlackboardFloatValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_IncrementBlackboardIntValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_IncrementBlackboardIntValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_InteractWith::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(NotificationId, UClass);
}

void UBTTask_InteractWith::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(NotificationId);
}

void UBTTask_MoveToTarget::AfterRead()
{
	UBTTask_MoveTo::AfterRead();

}

void UBTTask_MoveToTarget::BeforeDelete()
{
	UBTTask_MoveTo::BeforeDelete();

}

void UBTTask_NetworkTriggerAnim::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(Anim, UAnimSequence);
}

void UBTTask_NetworkTriggerAnim::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(Anim);
}

void UBTTask_NOP::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_NOP::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_PlayCustomMontageId::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_PlayCustomMontageId::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_PlayMontage::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(MontageToPlay, UObject);
}

void UBTTask_PlayMontage::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(MontageToPlay);
}

void UBTTask_RequestDespawn::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_RequestDespawn::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_SetAIStrategy::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(NewStrategy, UClass);
}

void UBTTask_SetAIStrategy::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(NewStrategy);
}

void UBTTask_SetAIStrategyFromWeightedArray::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetAIStrategyFromWeightedArray::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_SetBlackboardActor::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(Actor, AActor);
}

void UBTTask_SetBlackboardActor::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(Actor);
}

void UBTTask_SetBlackboardBoolValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetBlackboardBoolValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SetBlackboardClassValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(ClassValue, UClass);
}

void UBTTask_SetBlackboardClassValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(ClassValue);
}

void UBTTask_SetBlackboardEQSValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

	READ_PTR_FULL(EQS, UEnvQuery);
}

void UBTTask_SetBlackboardEQSValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

	DELE_PTR_FULL(EQS);
}

void UBTTask_SetBlackboardFloatValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetBlackboardFloatValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SetBlackboardFloatValueFromWeightedArray::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetBlackboardFloatValueFromWeightedArray::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SetBlackboardIntValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetBlackboardIntValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SetBlackboardVectorValue::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetBlackboardVectorValue::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SetFollowUpAbility::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(AIAbilityType, UClass);
}

void UBTTask_SetFollowUpAbility::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(AIAbilityType);
}

void UBTTask_SetInHiddenActionState::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetInHiddenActionState::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_SetIsHeadingOffNavMeshCheck::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetIsHeadingOffNavMeshCheck::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_SetupAITargetWeaponForNextShot::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_SetupAITargetWeaponForNextShot::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_SetVelocity::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetVelocity::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SpawnActorAndStore::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(ActorToSpawn, UClass);
}

void UBTTask_SpawnActorAndStore::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(ActorToSpawn);
}

void UBTTask_StopMovementImmediately::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_StopMovementImmediately::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBTTask_StorePawnLocationInBlackboard::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_StorePawnLocationInBlackboard::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_TeleportTo::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_TeleportTo::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_TriggerNotification::AfterRead()
{
	UBTTaskNode::AfterRead();

	READ_PTR_FULL(NotificationId, UClass);
}

void UBTTask_TriggerNotification::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

	DELE_PTR_FULL(NotificationId);
}

void UBTTask_UnwieldCurrentWeapon::AfterRead()
{
	UBTTaskNode::AfterRead();

}

void UBTTask_UnwieldCurrentWeapon::BeforeDelete()
{
	UBTTaskNode::BeforeDelete();

}

void UBurrowInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UBurrowInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBurrowComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(BurrowCrackClass, UClass);
	READ_PTR_FULL(BurrowEruptClass, UClass);
	READ_PTR_FULL(BurrowErupt, ABurrowEruptBase);
}

void UBurrowComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(BurrowCrackClass);
	DELE_PTR_FULL(BurrowEruptClass);
	DELE_PTR_FULL(BurrowErupt);
}

// Function:
//		Offset -> 0x041D19D0
//		Name   -> Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole
//		Flags  -> (Final, Native, Private)
void UCoralShieldVFXComponent::OnRep_CurrentCoralShieldRole()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.CoralShieldVFXComponent.OnRep_CurrentCoralShieldRole");

	UCoralShieldVFXComponent_OnRep_CurrentCoralShieldRole_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCoralShieldVFXComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(VFXAsset, UParticleSystem);
	READ_PTR_FULL(SpawnedVFXSystem, UParticleSystemComponent);
	READ_PTR_FULL(OffToOnCurve, UCurveFloat);
	READ_PTR_FULL(OnToOffCurve, UCurveFloat);
}

void UCoralShieldVFXComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(VFXAsset);
	DELE_PTR_FULL(SpawnedVFXSystem);
	DELE_PTR_FULL(OffToOnCurve);
	DELE_PTR_FULL(OnToOffCurve);
}

void UCustomSkeletonAnimationDataList::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCustomSkeletonAnimationDataList::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEnvQueryContext_ContextLocationFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_ContextLocationFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_HomePositionFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_HomePositionFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_KnockbackPosFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_KnockbackPosFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_ThrowableTargetPositionFromBlackboard::AfterRead()
{
	UEnvQueryContext_PositionFromBlackboard::AfterRead();

}

void UEnvQueryContext_ThrowableTargetPositionFromBlackboard::BeforeDelete()
{
	UEnvQueryContext_PositionFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_SeenActors::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_SeenActors::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_SeenActorsProjectedToGround::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_SeenActorsProjectedToGround::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_SpawnedForActorFromBlackboard::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_SpawnedForActorFromBlackboard::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_TargetActorFromBlackboard::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_TargetActorFromBlackboard::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryContext_TargetActorFromBlackboardPredictedLocation::AfterRead()
{
	UEnvQueryContext_TargetActorFromBlackboard::AfterRead();

}

void UEnvQueryContext_TargetActorFromBlackboardPredictedLocation::BeforeDelete()
{
	UEnvQueryContext_TargetActorFromBlackboard::BeforeDelete();

}

void UEnvQueryContext_TargetActorFromParams::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UEnvQueryContext_TargetActorFromParams::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UEnvQueryGenerator_AIRegionLocations::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

}

void UEnvQueryGenerator_AIRegionLocations::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

}

void UEnvQueryGenerator_FromContext::AfterRead()
{
	UEnvQueryGenerator::AfterRead();

	READ_PTR_FULL(Context, UClass);
}

void UEnvQueryGenerator_FromContext::BeforeDelete()
{
	UEnvQueryGenerator::BeforeDelete();

	DELE_PTR_FULL(Context);
}

void UEnvQueryGenerator_Line::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(FromContext, UClass);
	READ_PTR_FULL(ToContext, UClass);
}

void UEnvQueryGenerator_Line::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(FromContext);
	DELE_PTR_FULL(ToContext);
}

void UEnvQueryGenerator_PointsAtContext::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(Context, UClass);
}

void UEnvQueryGenerator_PointsAtContext::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(Context);
}

void UEnvQueryGenerator_Sphere::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(Centre, UClass);
}

void UEnvQueryGenerator_Sphere::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(Centre);
}

void UEnvQueryGenerator_WaterArc::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(Origin, UClass);
	READ_PTR_FULL(DirectArcTarget, UClass);
}

void UEnvQueryGenerator_WaterArc::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(Origin);
	DELE_PTR_FULL(DirectArcTarget);
}

void UEnvQueryGenerator_WaterDonut::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(Center, UClass);
	READ_PTR_FULL(WaterPlaneSourceContext, UClass);
}

void UEnvQueryGenerator_WaterDonut::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(Center);
	DELE_PTR_FULL(WaterPlaneSourceContext);
}

void UEnvQueryGenerator_WaterMultiDeckerRing::AfterRead()
{
	UEnvQueryGenerator_ProjectedPoints::AfterRead();

	READ_PTR_FULL(Center, UClass);
}

void UEnvQueryGenerator_WaterMultiDeckerRing::BeforeDelete()
{
	UEnvQueryGenerator_ProjectedPoints::BeforeDelete();

	DELE_PTR_FULL(Center);
}

void UEnvQueryTest_HasLineOfSight::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(Context, UClass);
}

void UEnvQueryTest_HasLineOfSight::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(Context);
}

void UEnvQueryTest_InGameEventExclusionZone::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_InGameEventExclusionZone::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_IsAngleInRange2D::AfterRead()
{
	UEnvQueryTest::AfterRead();

}

void UEnvQueryTest_IsAngleInRange2D::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

}

void UEnvQueryTest_WaterHeight::AfterRead()
{
	UEnvQueryTest::AfterRead();

	READ_PTR_FULL(ActorWithWaterPlaneContext, UClass);
}

void UEnvQueryTest_WaterHeight::BeforeDelete()
{
	UEnvQueryTest::BeforeDelete();

	DELE_PTR_FULL(ActorWithWaterPlaneContext);
}

void UHealthGemComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UHealthGemComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UIsAIOfClassStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UIsAIOfClassStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

void UIsAIOfFormStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UIsAIOfFormStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

void UIsAIOfSkillsetStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UIsAIOfSkillsetStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

void UPeriodicAINoiseEventComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MovementSpeedToNoiseRange, UCurveFloat);
	READ_PTR_FULL(OwnerActor, AActor);
}

void UPeriodicAINoiseEventComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MovementSpeedToNoiseRange);
	DELE_PTR_FULL(OwnerActor);
}

void UPlayerProximityObservedSpawnContextProvider::AfterRead()
{
	UObject::AfterRead();

}

void UPlayerProximityObservedSpawnContextProvider::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USimpleAIRegion::AfterRead()
{
	UObject::AfterRead();

}

void USimpleAIRegion::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x041D2720
//		Name   -> Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpawnContextProviderZone::RemoveContextsFromTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.SpawnContextProviderZone.RemoveContextsFromTarget");

	ASpawnContextProviderZone_RemoveContextsFromTarget_Params params {};
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x041D09B0
//		Name   -> Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InOtherBodyIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InFromSweep                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  InSweepResult                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ASpawnContextProviderZone::AddContextsToTarget(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaAI.SpawnContextProviderZone.AddContextsToTarget");

	ASpawnContextProviderZone_AddContextsToTarget_Params params {};
	params.InActor = InActor;
	params.InComponent = InComponent;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ASpawnContextProviderZone::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BoundingBox, UBoxComponent);
}

void ASpawnContextProviderZone::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BoundingBox);
}

void UBaseSpawnBlockingBehaviourStrategy::AfterRead()
{
	USpawnerBehaviourStrategy::AfterRead();

}

void UBaseSpawnBlockingBehaviourStrategy::BeforeDelete()
{
	USpawnerBehaviourStrategy::BeforeDelete();

}

void USirenEncounterSpawnBlockingBehaviourStrategy::AfterRead()
{
	UBaseSpawnBlockingBehaviourStrategy::AfterRead();

}

void USirenEncounterSpawnBlockingBehaviourStrategy::BeforeDelete()
{
	UBaseSpawnBlockingBehaviourStrategy::BeforeDelete();

}

void UStatusResponseSetBlackboardBoolKey::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseSetBlackboardBoolKey::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UStatusResponseSetBlackboardClassKey::AfterRead()
{
	UStatusResponse::AfterRead();

	READ_PTR_FULL(ValueWhenActive, UClass);
	READ_PTR_FULL(ValueWhenDeactivated, UClass);
}

void UStatusResponseSetBlackboardClassKey::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

	DELE_PTR_FULL(ValueWhenActive);
	DELE_PTR_FULL(ValueWhenDeactivated);
}

void UStatusResponseSetBlackboardFloatKey::AfterRead()
{
	UStatusResponse::AfterRead();

}

void UStatusResponseSetBlackboardFloatKey::BeforeDelete()
{
	UStatusResponse::BeforeDelete();

}

void UVulnerabilityDuringAIStrategyComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(HealthComponent, UHealthComponent);
}

void UVulnerabilityDuringAIStrategyComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(HealthComponent);
}

void AWaterbasedAISupplier::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Spawners, UAISpawnerList);
}

void AWaterbasedAISupplier::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Spawners);
}

void UBTTask_SetBlackboardFloatValueFromMinMax::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SetBlackboardFloatValueFromMinMax::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
