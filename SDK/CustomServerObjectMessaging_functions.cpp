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

void FCustomServerEvent::AfterRead()
{
}

void FCustomServerEvent::BeforeDelete()
{
}

void FEntityCustomServerEvent::AfterRead()
{
	FCustomServerEvent::AfterRead();

}

void FEntityCustomServerEvent::BeforeDelete()
{
	FCustomServerEvent::BeforeDelete();

}

void FGlobalCustomServerEvent::AfterRead()
{
	FCustomServerEvent::AfterRead();

}

void FGlobalCustomServerEvent::BeforeDelete()
{
	FCustomServerEvent::BeforeDelete();

}

void FOnCannonBallHitShipCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FOnCannonBallHitShipCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerCharacterEnteredShipCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerCharacterEnteredShipCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FWatercraftSpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FWatercraftSpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FWatercraftDespawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FWatercraftDespawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FTreasureSpawnedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FTreasureSpawnedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FTreasureSoldCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FTreasureSoldCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FTreasurePickedUpCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FTreasurePickedUpCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FTreasureFoundCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FTreasureFoundCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FTreasureDroppedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FTreasureDroppedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShovelCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShovelCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShipSpawnedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShipSpawnedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShipRepairCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShipRepairCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShipOnFireEndCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShipOnFireEndCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShipMastCollapseStateCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShipMastCollapseStateCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShipDestroyedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShipDestroyedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FShipDamagedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FShipDamagedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FProjectileWeaponFiredCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FProjectileWeaponFiredCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FProjectileHitCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FProjectileHitCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerStatusEffectActivatedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerStatusEffectActivatedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerStatusEffectDeactivatedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerStatusEffectDeactivatedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerSpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerSpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerSetFootLocationCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerSetFootLocationCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerRevivalCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerRevivalCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerRequiresMermaidCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerRequiresMermaidCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerRadialChatCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerRadialChatCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerObjectUsageStartCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerObjectUsageStartCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerLeftGhostShipCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerLeftGhostShipCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerKillAICustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerKillAICustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerItemUsageEndCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerItemUsageEndCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerItemRetrievalFromContainerCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerItemRetrievalFromContainerCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerItemEquipCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerItemEquipCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerItemAddToContainerCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerItemAddToContainerCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerInReviveableStateCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerInReviveableStateCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerHeartbeatCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerHeartbeatCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerHealthChangeCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerHealthChangeCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerGameFishingCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerGameFishingCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerEncounterStartCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerEncounterStartCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerEncounterEndCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerEncounterEndCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerEmoteCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerEmoteCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerDeathCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerDeathCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerChangedShipLoadoutCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerChangedShipLoadoutCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerChangedLoadoutCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerChangedLoadoutCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerCapstanUsageStartCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerCapstanUsageStartCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerCapstanUsageEndCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerCapstanUsageEndCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerBucketScoopCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerBucketScoopCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerBucketEmptyCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerBucketEmptyCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerActionCannonCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerActionCannonCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FPlayerActionCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FPlayerActionCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FMermaidUsedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FMermaidUsedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FMermaidSpawnedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FMermaidSpawnedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FMeleeWeaponAttackCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FMeleeWeaponAttackCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FLevelLoadCompletedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FLevelLoadCompletedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FKrakenTentacleDestroyedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FKrakenTentacleDestroyedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FKrakenSpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FKrakenSpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FItemSpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FItemSpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FFortWaveCompletedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FFortWaveCompletedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FFortKeyUsedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FFortKeyUsedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FCustomTriggerOverlapCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FCustomTriggerOverlapCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FCrewSessionLeaveCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FCrewSessionLeaveCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FCrewPlayerLeftCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FCrewPlayerLeftCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FCookStartCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FCookStartCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FCookEndCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FCookEndCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FAISpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FAISpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FAIShipSpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FAIShipSpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FAIShipDespawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FAIShipDespawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FAIShipDamagedCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FAIShipDamagedCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void FTinySharkSpawnCustomServerEvent::AfterRead()
{
	FGlobalCustomServerEvent::AfterRead();

}

void FTinySharkSpawnCustomServerEvent::BeforeDelete()
{
	FGlobalCustomServerEvent::BeforeDelete();

}

void UCustomServerDispatcherProviderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomServerDispatcherProviderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
