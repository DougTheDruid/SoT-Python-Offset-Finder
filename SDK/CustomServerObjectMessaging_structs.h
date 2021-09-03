#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomServerObjectMessaging.GameServerGlobalCustomServerEvent
// 0x0028
struct FGameServerGlobalCustomServerEvent
{
	struct FString                                     EventID;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ServerId;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FDateTime                                   ServerTimeUTC;                                             // 0x0020(0x0008) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.WatercraftSpawnCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FWatercraftSpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     WatercraftId;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.WatercraftDespawnCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FWatercraftDespawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     WatercraftId;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureSpawnedCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FTreasureSpawnedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureSoldCustomServerEvent
// 0x0050 (0x0078 - 0x0028)
struct FTreasureSoldCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CrewId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TreasureType;                                              // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     VendorId;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CompanyId;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasurePickedUpCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FTreasurePickedUpCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureFoundCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FTreasureFoundCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TreasureType;                                              // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureDroppedCustomServerEvent
// 0x0030 (0x0058 - 0x0028)
struct FTreasureDroppedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TreasureType;                                              // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                     Position;                                                  // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8EQZ[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShovelCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FShovelCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipSpawnedCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FShipSpawnedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipType;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipRepairCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FShipRepairCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipOnFireEndCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FShipOnFireEndCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipMastCollapseStateCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FShipMastCollapseStateCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MastId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipDestroyedCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FShipDestroyedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipDamagedCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FShipDamagedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ProjectileWeaponFiredCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FProjectileWeaponFiredCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ProjectileHitCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FProjectileHitCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ProjectileType;                                            // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RecipientId;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectActivatedCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerStatusEffectActivatedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Effect;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectDeactivatedCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerStatusEffectDeactivatedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Effect;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerSpawnCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerSpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerSetFootLocationCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerSetFootLocationCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Location;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerRevivalCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerRevivalCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerRequiresMermaidCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FPlayerRequiresMermaidCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerRadialChatCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerRadialChatCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerObjectUsageStartCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerObjectUsageStartCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerLeftGhostShipCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FPlayerLeftGhostShipCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerKillAICustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerKillAICustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageEndCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerItemUsageEndCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemRetrievalFromContainerCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerItemRetrievalFromContainerCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemEquipCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerItemEquipCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemAddToContainerCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerItemAddToContainerCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerInReviveableStateCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerInReviveableStateCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerHeartbeatCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerHeartbeatCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerHealthChangeCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerHealthChangeCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerGameFishingCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerGameFishingCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterStartCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FPlayerEncounterStartCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterEndCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FPlayerEncounterEndCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerEmoteCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Emote;                                                     // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerDeathCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerDeathCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedShipLoadoutCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerChangedShipLoadoutCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedLoadoutCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerChangedLoadoutCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageStartCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerCapstanUsageStartCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageEndCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerCapstanUsageEndCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketScoopCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerBucketScoopCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketEmptyCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FPlayerBucketEmptyCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCannonCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerActionCannonCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FPlayerActionCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Action;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.MermaidUsedCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FMermaidUsedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.MermaidSpawnedCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FMermaidSpawnedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FVector                                     Position;                                                  // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8S8V[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.MeleeWeaponAttackCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FMeleeWeaponAttackCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.LevelLoadCompletedCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FLevelLoadCompletedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.KrakenTentacleDestroyedCustomServerEvent
// 0x0008 (0x0030 - 0x0028)
struct FKrakenTentacleDestroyedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	int                                                TentacleRemaining;                                         // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W9JB[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.KrakenSpawnCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FKrakenSpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FVector                                     Position;                                                  // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QBQY[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ItemSpawnCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FItemSpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     ItemId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ItemType;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.FortWaveCompletedCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FFortWaveCompletedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.FortKeyUsedCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FFortKeyUsedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapCustomServerEvent
// 0x0008 (0x0030 - 0x0028)
struct FCustomTriggerOverlapCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	int                                                TriggerNetId;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherNetId;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CrewSessionLeaveCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FCrewSessionLeaveCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     CrewId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CrewPlayerLeftCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FCrewPlayerLeftCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     CrewId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CookStartCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FCookStartCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FoodType;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CookEndCustomServerEvent
// 0x0030 (0x0058 - 0x0028)
struct FCookEndCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FoodType;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CookedState;                                               // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AISpawnCustomServerEvent
// 0x0020 (0x0048 - 0x0028)
struct FAISpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     AIId;                                                      // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIType;                                                    // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AIShipSpawnCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FAIShipSpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     AIShipId;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AIShipDespawnCustomServerEvent
// 0x0010 (0x0038 - 0x0028)
struct FAIShipDespawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     AIShipId;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AIShipDamagedCustomServerEvent
// 0x0018 (0x0040 - 0x0028)
struct FAIShipDamagedCustomServerEvent : public FGameServerGlobalCustomServerEvent
{
	struct FString                                     AIShipId;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	float                                              AIShipWaterLevel;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JDYK[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TinySharkSpawnCustomServerEvent
// 0x0000 (0x0028 - 0x0028)
struct FTinySharkSpawnCustomServerEvent : public FGameServerGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
