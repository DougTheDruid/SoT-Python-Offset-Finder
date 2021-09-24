// Name: SoT, Version: 2.3.0

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

void FAIShipBattleParams::AfterRead()
{
}

void FAIShipBattleParams::BeforeDelete()
{
}

void FTrackingNoiseGenerator::AfterRead()
{
	READ_PTR_FULL(ParallelOffsetCurve, UCurveFloat);
}

void FTrackingNoiseGenerator::BeforeDelete()
{
	DELE_PTR_FULL(ParallelOffsetCurve);
}

void FShipMovementParams::AfterRead()
{
}

void FShipMovementParams::BeforeDelete()
{
}

void FAIShipEncounterParamsSpawnerData::AfterRead()
{
	READ_PTR_FULL(Spawner, UAISpawner);
}

void FAIShipEncounterParamsSpawnerData::BeforeDelete()
{
	DELE_PTR_FULL(Spawner);
}

void FAIShipContextDescDamageParams::AfterRead()
{
}

void FAIShipContextDescDamageParams::BeforeDelete()
{
}

void FAIShipCrewAmmoType::AfterRead()
{
}

void FAIShipCrewAmmoType::BeforeDelete()
{
}

void FAIShipCrewFormType::AfterRead()
{
}

void FAIShipCrewFormType::BeforeDelete()
{
}

void FAIShipSailData::AfterRead()
{
}

void FAIShipSailData::BeforeDelete()
{
}

void FWeightedSpawnOffset::AfterRead()
{
}

void FWeightedSpawnOffset::BeforeDelete()
{
}

void FWeightedSpawnDirection::AfterRead()
{
}

void FWeightedSpawnDirection::BeforeDelete()
{
}

void FRelativeSpawnLocationGeneratorParams::AfterRead()
{
}

void FRelativeSpawnLocationGeneratorParams::BeforeDelete()
{
}

void FShipTypeAIShipEncounterParams::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
	READ_PTR_FULL(Params, UAIShipEncounterParamsDataAsset);
}

void FShipTypeAIShipEncounterParams::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
	DELE_PTR_FULL(Params);
}

void FAIShipCaptainParams::AfterRead()
{
	READ_PTR_FULL(AIClassId, UClass);
}

void FAIShipCaptainParams::BeforeDelete()
{
	DELE_PTR_FULL(AIClassId);
}

void FAIShipSizeLimit::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
}

void FAIShipSizeLimit::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
}

void FAIShipEncounterWaveDesc::AfterRead()
{
}

void FAIShipEncounterWaveDesc::BeforeDelete()
{
}

void FAIShipWeightedSize::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
}

void FAIShipWeightedSize::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
}

void FAIShipClassWeightedSizes::AfterRead()
{
	READ_PTR_FULL(TargetShipSize, UClass);
}

void FAIShipClassWeightedSizes::BeforeDelete()
{
	DELE_PTR_FULL(TargetShipSize);
}

void FAIShipSingleWaveEncounterDescGenerationParams::AfterRead()
{
}

void FAIShipSingleWaveEncounterDescGenerationParams::BeforeDelete()
{
}

void FAIShipEncounterBattleDesc::AfterRead()
{
}

void FAIShipEncounterBattleDesc::BeforeDelete()
{
}

void FAIShipEncounterBattleGenerationParams::AfterRead()
{
	READ_PTR_FULL(HardShipType, UClass);
}

void FAIShipEncounterBattleGenerationParams::BeforeDelete()
{
	DELE_PTR_FULL(HardShipType);
}

void FFeatureLockedAIShipEncounterBattleGenerationParams::AfterRead()
{
}

void FFeatureLockedAIShipEncounterBattleGenerationParams::BeforeDelete()
{
}

void FAIShipBattleEncounterDescGenerationParams::AfterRead()
{
}

void FAIShipBattleEncounterDescGenerationParams::BeforeDelete()
{
}

void FAIShipSkeletonSkillsetOverride::AfterRead()
{
}

void FAIShipSkeletonSkillsetOverride::BeforeDelete()
{
}

void FWeightedAIShipCrewAmmoType::AfterRead()
{
}

void FWeightedAIShipCrewAmmoType::BeforeDelete()
{
}

void FAIShipGenerationParams::AfterRead()
{
	READ_PTR_FULL(ShipControllerParams, UAthenaAIShipControllerParamsDataAsset);
}

void FAIShipGenerationParams::BeforeDelete()
{
	DELE_PTR_FULL(ShipControllerParams);
}

void FAIShipContextDescGenerationShipSpecificParams::AfterRead()
{
	READ_PTR_FULL(ShipSize, UClass);
	READ_PTR_FULL(ShipDesc, UShipDescAsset);
}

void FAIShipContextDescGenerationShipSpecificParams::BeforeDelete()
{
	DELE_PTR_FULL(ShipSize);
	DELE_PTR_FULL(ShipDesc);
}

void FWeightedAIShipCrewFormType::AfterRead()
{
}

void FWeightedAIShipCrewFormType::BeforeDelete()
{
}

void FAIShipContextDescGenerationSharedParams::AfterRead()
{
}

void FAIShipContextDescGenerationSharedParams::BeforeDelete()
{
}

void FAIShipContextDescGenerationParams::AfterRead()
{
}

void FAIShipContextDescGenerationParams::BeforeDelete()
{
}

void FAIShipEncounterParams::AfterRead()
{
}

void FAIShipEncounterParams::BeforeDelete()
{
}

void FAIShipEncounterWave::AfterRead()
{
}

void FAIShipEncounterWave::BeforeDelete()
{
}

void FCursedSailsBattleParams::AfterRead()
{
	READ_PTR_FULL(EncounterDescription, UAIShipEncounterDesc);
}

void FCursedSailsBattleParams::BeforeDelete()
{
	DELE_PTR_FULL(EncounterDescription);
}

void FAIShipDespawnedEvent::AfterRead()
{
	READ_PTR_FULL(Ship, AActor);
}

void FAIShipDespawnedEvent::BeforeDelete()
{
	DELE_PTR_FULL(Ship);
}

void FAIShipSpawnedEvent::AfterRead()
{
	READ_PTR_FULL(Ship, AShip);
}

void FAIShipSpawnedEvent::BeforeDelete()
{
	DELE_PTR_FULL(Ship);
}

void FAIShipSinkNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FAIShipSinkNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FAIShipSpawnedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FAIShipSpawnedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FAIShipEncounterCompleteNetEvent::AfterRead()
{
	FBoxedRpc::AfterRead();

}

void FAIShipEncounterCompleteNetEvent::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

}

void FAIShipEncounterRevealNetEvent::AfterRead()
{
	FBoxedRpc::AfterRead();

}

void FAIShipEncounterRevealNetEvent::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

}

void FAIShipEncounterNotification::AfterRead()
{
}

void FAIShipEncounterNotification::BeforeDelete()
{
}

void FAIShipEncounterZoneExitedNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FAIShipEncounterZoneExitedNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FAIShipEncounterZoneEnteredNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FAIShipEncounterZoneEnteredNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FFeatureLockedCampaignParams::AfterRead()
{
	READ_PTR_FULL(CampaignDataAsset, UCursedSailsCampaignDataAsset);
}

void FFeatureLockedCampaignParams::BeforeDelete()
{
	DELE_PTR_FULL(CampaignDataAsset);
}

void FAIShipWorldSettings::AfterRead()
{
	READ_PTR_FULL(BattlesData, UAIShipBattlesDataAsset);
}

void FAIShipWorldSettings::BeforeDelete()
{
	DELE_PTR_FULL(BattlesData);
}

void FAIShipDamagedTelemetryEvent::AfterRead()
{
}

void FAIShipDamagedTelemetryEvent::BeforeDelete()
{
}

void FAIShipDespawnTelemetryEvent::AfterRead()
{
}

void FAIShipDespawnTelemetryEvent::BeforeDelete()
{
}

void FAIShipSpawnTelemetryEvent::AfterRead()
{
}

void FAIShipSpawnTelemetryEvent::BeforeDelete()
{
}

void UAIShipBattlesDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIShipBattlesDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIShipObstacleServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIShipObstacleServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UBTTask_SailShipBesideTarget::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SailShipBesideTarget::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UAthenaAIShipControllerParamsDataAsset::AfterRead()
{
	UAthenaAIControllerParamsDataAsset::AfterRead();

	READ_PTR_FULL(DistToTargetShipVSTrackingLatencyCurve, UCurveFloat);
}

void UAthenaAIShipControllerParamsDataAsset::BeforeDelete()
{
	UAthenaAIControllerParamsDataAsset::BeforeDelete();

	DELE_PTR_FULL(DistToTargetShipVSTrackingLatencyCurve);
}

void UAIShipContextDescDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(ShipDesc, UShipDescAsset);
	READ_PTR_FULL(ControllerParams, UAthenaAIShipControllerParamsDataAsset);
	READ_PTR_FULL(RewardMarkerParams, UShortRangeMarkerDataAsset);
}

void UAIShipContextDescDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(ShipDesc);
	DELE_PTR_FULL(ControllerParams);
	DELE_PTR_FULL(RewardMarkerParams);
}

void UAIShipContextParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIShipContextParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UAIShipEncounterSpawnParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIShipEncounterSpawnParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void AShipProxyPawn::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(Ship, AShip);
	READ_PTR_FULL(SpawnTargetShip, AShip);
}

void AShipProxyPawn::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(Ship);
	DELE_PTR_FULL(SpawnTargetShip);
}

void UAIShipEncounterParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(SpawnParams, UAIShipEncounterSpawnParamsDataAsset);
	READ_PTR_FULL(ContextParams, UAIShipContextParamsDataAsset);
	READ_PTR_FULL(DefaultContextDesc, UAIShipContextDescDataAsset);
	READ_PTR_FULL(ShipPawnClass, UClass);
	READ_PTR_FULL(BuoyantObjectSpawnProfileAsset, UBuoyantObjectSpawnProfileDataAsset);
	READ_PTR_FULL(EventSignalAssetClass, UClass);
}

void UAIShipEncounterParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(SpawnParams);
	DELE_PTR_FULL(ContextParams);
	DELE_PTR_FULL(DefaultContextDesc);
	DELE_PTR_FULL(ShipPawnClass);
	DELE_PTR_FULL(BuoyantObjectSpawnProfileAsset);
	DELE_PTR_FULL(EventSignalAssetClass);
}

void UAIShipServiceDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(BattleEncounterParams, UAIShipEncounterParamsDataAsset);
	READ_PTR_FULL(RewardMarkerParams, UShortRangeMarkerDataAsset);
}

void UAIShipServiceDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(BattleEncounterParams);
	DELE_PTR_FULL(RewardMarkerParams);
}

// Function:
//		Offset -> 0x03D1DE20
//		Name   -> Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGuid                                       CrewId                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAIShipDebugFunctionLibrary::STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew");

	UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D1DCD0
//		Name   -> Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAIShipServiceDataAsset*                     ServiceParams                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FAIShipEncounterBattleDesc                  ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FAIShipEncounterBattleDesc UAIShipDebugFunctionLibrary::STATIC_GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc");

	UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServiceParams = ServiceParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAIShipDebugFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAIShipDebugFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UAIShipEncounterDesc::AfterRead()
{
	UDataAsset::AfterRead();

}

void UAIShipEncounterDesc::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void AAIShipObstacleService::AfterRead()
{
	AActor::AfterRead();

}

void AAIShipObstacleService::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UAIShipServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAIShipServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAIShipService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Params, UAIShipServiceDataAsset);
}

void AAIShipService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Params);
}

void UAIShipTelemetryComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UAIShipTelemetryComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x03D1DC00
//		Name   -> Function AIShips.AthenaAIShipController.ApplyControllerParams
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UAthenaAIControllerParamsDataAsset*          ParamsAsset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       InPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAthenaAIShipController::ApplyControllerParams(class UAthenaAIControllerParamsDataAsset* ParamsAsset, class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShips.AthenaAIShipController.ApplyControllerParams");

	AAthenaAIShipController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AAthenaAIShipController::AfterRead()
{
	AAthenaAIControllerBase::AfterRead();

	READ_PTR_FULL(BTAsset, UBehaviorTree);
	READ_PTR_FULL(ShipParamsDataAsset, UAthenaAIShipControllerParamsDataAsset);
	READ_PTR_FULL(StatusEffectManagerComponent, UStatusEffectManagerComponent);
}

void AAthenaAIShipController::BeforeDelete()
{
	AAthenaAIControllerBase::BeforeDelete();

	DELE_PTR_FULL(BTAsset);
	DELE_PTR_FULL(ShipParamsDataAsset);
	DELE_PTR_FULL(StatusEffectManagerComponent);
}

void UBTService_UpdateIfShipShouldBreakTracking::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_UpdateIfShipShouldBreakTracking::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_UpdateLocationWithActorLocation::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_UpdateLocationWithActorLocation::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTService_UpdateTargetLocationForPassiveShip::AfterRead()
{
	UBTService::AfterRead();

}

void UBTService_UpdateTargetLocationForPassiveShip::BeforeDelete()
{
	UBTService::BeforeDelete();

}

void UBTTask_AIShipSurface::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_AIShipSurface::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_RamTargetShip::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_RamTargetShip::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SailShipCircleTarget::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SailShipCircleTarget::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SailShipForward::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SailShipForward::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

void UBTTask_SailShipToLocation::AfterRead()
{
	UBTTask_BlackboardBase::AfterRead();

}

void UBTTask_SailShipToLocation::BeforeDelete()
{
	UBTTask_BlackboardBase::BeforeDelete();

}

// Function:
//		Offset -> 0x03D1DEE0
//		Name   -> Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FAIShipSailData                             SailData                                                   (ConstParm, Parm, OutParm, ReferenceParm)
void UCursedCrewCustomisationInterface::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties");

	UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params params;
	params.SailData = SailData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCursedCrewCustomisationInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCursedCrewCustomisationInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCursedSailsCampaignDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UCursedSailsCampaignDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UDefeatAIShipEncounterConditionalStatTrigger::AfterRead()
{
	UConditionalStatsTriggerType::AfterRead();

}

void UDefeatAIShipEncounterConditionalStatTrigger::BeforeDelete()
{
	UConditionalStatsTriggerType::BeforeDelete();

}

void UIsAIShipEncounterTypeStatCondition::AfterRead()
{
	UStatCondition::AfterRead();

}

void UIsAIShipEncounterTypeStatCondition::BeforeDelete()
{
	UStatCondition::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
