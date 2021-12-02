#pragma once

// Name: SoT, Version: 2.4.0


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

// ScriptStruct CustomServerObjectMessaging.CustomServerEvent
// 0x0018
struct FCustomServerEvent
{
	unsigned char                                      UnknownData_LHHI[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       EventID;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   ServerTimeUTC;                                             // 0x0010(0x0008) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.EntityCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FEntityCustomServerEvent : public FCustomServerEvent
{
	int                                                EntityNetId;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AN2D[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.GlobalCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FGlobalCustomServerEvent : public FCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.OnCannonBallHitShipCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FOnCannonBallHitShipCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     CannonBallType;                                            // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                ShipId;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R4YK[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerCharacterEnteredShipCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FPlayerCharacterEnteredShipCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                UserId;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShipId;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.WatercraftSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FWatercraftSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     WatercraftId;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.WatercraftDespawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FWatercraftDespawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     WatercraftId;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureSpawnedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FTreasureSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureSoldCustomServerEvent
// 0x0050 (0x0068 - 0x0018)
struct FTreasureSoldCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CrewId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TreasureType;                                              // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     VendorId;                                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CompanyId;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasurePickedUpCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FTreasurePickedUpCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureFoundCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FTreasureFoundCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TreasureType;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TreasureDroppedCustomServerEvent
// 0x0030 (0x0048 - 0x0018)
struct FTreasureDroppedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TreasureType;                                              // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                     Position;                                                  // 0x0038(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_15HD[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShovelCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShovelCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipSpawnedCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FShipSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipType;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipRepairCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FShipRepairCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipOnFireEndCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShipOnFireEndCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipMastCollapseStateCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FShipMastCollapseStateCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MastId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipDestroyedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShipDestroyedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ShipDamagedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FShipDamagedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ShipId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ProjectileWeaponFiredCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FProjectileWeaponFiredCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ProjectileHitCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FProjectileHitCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ProjectileType;                                            // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     RecipientId;                                               // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectActivatedCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerStatusEffectActivatedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Effect;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerStatusEffectDeactivatedCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerStatusEffectDeactivatedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Effect;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerSetFootLocationCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerSetFootLocationCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Location;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerRevivalCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerRevivalCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerRequiresMermaidCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerRequiresMermaidCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerRadialChatCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerRadialChatCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerObjectUsageStartCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerObjectUsageStartCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerLeftGhostShipCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerLeftGhostShipCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerKillAICustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerKillAICustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemUsageEndCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemUsageEndCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemRetrievalFromContainerCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemRetrievalFromContainerCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemEquipCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemEquipCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerItemAddToContainerCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerItemAddToContainerCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerInReviveableStateCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerInReviveableStateCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerHeartbeatCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerHeartbeatCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerHealthChangeCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerHealthChangeCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerGameFishingCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerGameFishingCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterStartCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerEncounterStartCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerEncounterEndCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FPlayerEncounterEndCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerEmoteCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerEmoteCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Emote;                                                     // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerDeathCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerDeathCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedShipLoadoutCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerChangedShipLoadoutCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerChangedLoadoutCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerChangedLoadoutCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageStartCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerCapstanUsageStartCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerCapstanUsageEndCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerCapstanUsageEndCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketScoopCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerBucketScoopCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerBucketEmptyCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FPlayerBucketEmptyCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCannonCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerActionCannonCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ShipId;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.PlayerActionCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FPlayerActionCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Action;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.MermaidUsedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMermaidUsedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.MermaidSpawnedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMermaidSpawnedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FVector                                     Position;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EURT[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.MeleeWeaponAttackCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FMeleeWeaponAttackCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.LevelLoadCompletedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FLevelLoadCompletedCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.KrakenTentacleDestroyedCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FKrakenTentacleDestroyedCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                TentacleRemaining;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TRB4[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.KrakenSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FKrakenSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FVector                                     Position;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G0B4[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.ItemSpawnCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FItemSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     ItemId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ItemType;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.FortWaveCompletedCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FFortWaveCompletedCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.FortKeyUsedCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FFortKeyUsedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CustomTriggerOverlapCustomServerEvent
// 0x0008 (0x0020 - 0x0018)
struct FCustomTriggerOverlapCustomServerEvent : public FGlobalCustomServerEvent
{
	int                                                TriggerNetId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherNetId;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CrewSessionLeaveCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FCrewSessionLeaveCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     CrewId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CrewPlayerLeftCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FCrewPlayerLeftCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     CrewId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CookStartCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FCookStartCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FoodType;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.CookEndCustomServerEvent
// 0x0030 (0x0048 - 0x0018)
struct FCookEndCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     UserId;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FoodType;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CookedState;                                               // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AISpawnCustomServerEvent
// 0x0020 (0x0038 - 0x0018)
struct FAISpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     AIId;                                                      // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIType;                                                    // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AIShipSpawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FAIShipSpawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     AIShipId;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AIShipDespawnCustomServerEvent
// 0x0010 (0x0028 - 0x0018)
struct FAIShipDespawnCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     AIShipId;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.AIShipDamagedCustomServerEvent
// 0x0018 (0x0030 - 0x0018)
struct FAIShipDamagedCustomServerEvent : public FGlobalCustomServerEvent
{
	struct FString                                     AIShipId;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	float                                              AIShipWaterLevel;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N15R[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomServerObjectMessaging.TinySharkSpawnCustomServerEvent
// 0x0000 (0x0018 - 0x0018)
struct FTinySharkSpawnCustomServerEvent : public FGlobalCustomServerEvent
{

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
