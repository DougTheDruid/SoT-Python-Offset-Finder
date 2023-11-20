// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
struct CustomServerEvent
{
public:
	char                                                         pad0x8_6VAEA[0x8];                                 // 0x0(0x8)
	struct FName                                                 EventID;                                           // 0x8(0x8)
	struct DateTime                                              ServerTimeUTC;                                     // 0x10(0x8)
};


// Size 0x28
struct OnRelaodAmmoCustomServerEvent
{
public:
	char                                                         pad0x20_1BKRL[0x20];                               // 0x0(0x20)
	int                                                          AvailableAmmoToAdd;                                // 0x20(0x4)
	int                                                          CurrentAmmoAfterReload;                            // 0x24(0x4)
};


// Size 0x20
struct EntityCustomServerEvent
{
public:
	char                                                         pad0x18_RET54[0x18];                               // 0x0(0x18)
	int                                                          EntityNetId;                                       // 0x18(0x4)
	char                                                         pad0x4_EPDXA[0x4];                                 // 0x1c(0x4)
};


// Size 0x28
struct OnItemPlacedInChestCustomServerEvent
{
public:
	char                                                         pad0x20_AWCRM[0x20];                               // 0x0(0x20)
	int                                                          ChestId;                                           // 0x20(0x4)
	int                                                          ItemId;                                            // 0x24(0x4)
};


// Size 0x38
struct OnCannonBallHitShipCustomServerEvent
{
public:
	char                                                         pad0x20_AWOYA[0x20];                               // 0x0(0x20)
	struct FString                                               CannonBallType;                                    // 0x20(0x10)
	int                                                          ShipId;                                            // 0x30(0x4)
	char                                                         pad0x4_QN01T[0x4];                                 // 0x34(0x4)
};


// Size 0x28
struct PlayerCharacterEnteredShipCustomServerEvent
{
public:
	char                                                         pad0x20_Q6GUM[0x20];                               // 0x0(0x20)
	int                                                          UserId;                                            // 0x20(0x4)
	int                                                          ShipId;                                            // 0x24(0x4)
};


// Size 0x20
struct FortKeyUsedCustomServerEvent
{
public:
	char                                                         pad0x20_QD11W[0x20];                               // 0x0(0x20)
};


// Size 0x60
struct TreasureSoldCustomServerEvent
{
public:
	char                                                         pad0x20_H6VBA[0x20];                               // 0x0(0x20)
	struct FString                                               CrewId;                                            // 0x20(0x10)
	struct FString                                               TreasureType;                                      // 0x30(0x10)
	struct FString                                               VendorId;                                          // 0x40(0x10)
	struct FString                                               CompanyId;                                         // 0x50(0x10)
};


// Size 0x20
struct TreasurePickedUpCustomServerEvent
{
public:
	char                                                         pad0x20_TQ4CX[0x20];                               // 0x0(0x20)
};


// Size 0x30
struct TreasureFoundCustomServerEvent
{
public:
	char                                                         pad0x20_DVV7W[0x20];                               // 0x0(0x20)
	struct FString                                               TreasureType;                                      // 0x20(0x10)
};


// Size 0x40
struct TreasureDroppedCustomServerEvent
{
public:
	char                                                         pad0x20_D4BV2[0x20];                               // 0x0(0x20)
	struct FString                                               TreasureType;                                      // 0x20(0x10)
	struct Vector                                                Position;                                          // 0x30(0xc)
	char                                                         pad0x4_M8YGW[0x4];                                 // 0x3c(0x4)
};


// Size 0x28
struct TinySharkDespawnCustomServerEvent
{
public:
	char                                                         pad0x20_NJ8XV[0x20];                               // 0x0(0x20)
	byte                                                         Reason;                                            // 0x20(0x1)
	char                                                         pad0x7_0BE1S[0x7];                                 // 0x21(0x7)
};


// Size 0x28
struct KrakenDespawnCustomServerEvent
{
public:
	char                                                         pad0x20_04KLV[0x20];                               // 0x0(0x20)
	byte                                                         Reason;                                            // 0x20(0x1)
	char                                                         pad0x7_S9AG6[0x7];                                 // 0x21(0x7)
};


// Size 0x20
struct KrakenTentacleDestroyedCustomServerEvent
{
public:
	char                                                         pad0x20_FI6WY[0x20];                               // 0x0(0x20)
};


// Size 0x30
struct CookStartCustomServerEvent
{
public:
	char                                                         pad0x20_NFWAX[0x20];                               // 0x0(0x20)
	struct FString                                               FoodType;                                          // 0x20(0x10)
};


// Size 0x40
struct CookEndCustomServerEvent
{
public:
	char                                                         pad0x20_Y8ICT[0x20];                               // 0x0(0x20)
	struct FString                                               FoodType;                                          // 0x20(0x10)
	struct FString                                               CookedState;                                       // 0x30(0x10)
};


// Size 0x30
struct ShipSpawnedCustomServerEvent
{
public:
	char                                                         pad0x20_NG8Q7[0x20];                               // 0x0(0x20)
	struct FString                                               ShipType;                                          // 0x20(0x10)
};


// Size 0x28
struct ShipRepairCustomServerEvent
{
public:
	char                                                         pad0x20_3YDDX[0x20];                               // 0x0(0x20)
	int                                                          UserId;                                            // 0x20(0x4)
	int                                                          ShipId;                                            // 0x24(0x4)
};


// Size 0x20
struct ShipOnFireEndCustomServerEvent
{
public:
	char                                                         pad0x20_2W4TJ[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct ShipMastCollapseStateCustomServerEvent
{
public:
	char                                                         pad0x20_O1UCI[0x20];                               // 0x0(0x20)
	int                                                          ShipId;                                            // 0x20(0x4)
	int                                                          MastId;                                            // 0x24(0x4)
};


// Size 0x20
struct ShipDestroyedCustomServerEvent
{
public:
	char                                                         pad0x20_NYDWP[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct ShipDamagedCustomServerEvent
{
public:
	char                                                         pad0x20_86SDB[0x20];                               // 0x0(0x20)
	int                                                          Damage;                                            // 0x20(0x4)
	char                                                         pad0x4_ZKZBO[0x4];                                 // 0x24(0x4)
};


// Size 0x20
struct ProjectileWeaponFiredCustomServerEvent
{
public:
	char                                                         pad0x20_3P119[0x20];                               // 0x0(0x20)
};


// Size 0x38
struct ProjectileHitCustomServerEvent
{
public:
	char                                                         pad0x20_XML0M[0x20];                               // 0x0(0x20)
	struct FString                                               ProjectileType;                                    // 0x20(0x10)
	int                                                          RecipientId;                                       // 0x30(0x4)
	char                                                         pad0x4_HD7TH[0x4];                                 // 0x34(0x4)
};


// Size 0x30
struct PlayerStatusEffectActivatedCustomServerEvent
{
public:
	char                                                         pad0x20_1KAEJ[0x20];                               // 0x0(0x20)
	struct FString                                               Effect;                                            // 0x20(0x10)
};


// Size 0x30
struct PlayerStatusEffectDeactivatedCustomServerEvent
{
public:
	char                                                         pad0x20_F84HU[0x20];                               // 0x0(0x20)
	struct FString                                               Effect;                                            // 0x20(0x10)
};


// Size 0x28
struct PlayerSpawnCustomServerEvent
{
public:
	char                                                         pad0x20_F34MY[0x20];                               // 0x0(0x20)
	int                                                          PlayerStateId;                                     // 0x20(0x4)
	byte                                                         CharacterType;                                     // 0x24(0x1)
	char                                                         pad0x3_MU6BR[0x3];                                 // 0x25(0x3)
};


// Size 0x30
struct PlayerSetFootLocationCustomServerEvent
{
public:
	char                                                         pad0x20_V0CE8[0x20];                               // 0x0(0x20)
	struct FString                                               IslandName;                                        // 0x20(0x10)
};


// Size 0x28
struct PlayerRevivalCustomServerEvent
{
public:
	char                                                         pad0x28_4FG2R[0x28];                               // 0x0(0x28)
};


// Size 0x20
struct PlayerRadialChatCustomServerEvent
{
public:
	char                                                         pad0x20_52P91[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerLeftGhostShipCustomServerEvent
{
public:
	char                                                         pad0x20_DBI4T[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerKillAICustomServerEvent
{
public:
	char                                                         pad0x20_W5S3N[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerItemUsageStartCustomServerEvent
{
public:
	char                                                         pad0x20_6NPY5[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerItemUsageEndCustomServerEvent
{
public:
	char                                                         pad0x20_I55FV[0x20];                               // 0x0(0x20)
};


// Size 0x30
struct PlayerItemRetrievalFromContainerCustomServerEvent
{
public:
	char                                                         pad0x20_R2ENK[0x20];                               // 0x0(0x20)
	struct FString                                               RetrievedItemName;                                 // 0x20(0x10)
};


// Size 0x20
struct PlayerItemEquipCustomServerEvent
{
public:
	char                                                         pad0x20_R0CVW[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerItemAddToContainerCustomServerEvent
{
public:
	char                                                         pad0x20_Y39IW[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerInReviveableStateCustomServerEvent
{
public:
	char                                                         pad0x20_8MFWL[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerHeartbeatCustomServerEvent
{
public:
	char                                                         pad0x20_N4GD4[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerHealthChangeCustomServerEvent
{
public:
	char                                                         pad0x20_ERU7L[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct PlayerGameFishingStartedCustomServerEvent
{
public:
	char                                                         pad0x20_CYYX9[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct PlayerEncounterStartCustomServerEvent
{
public:
	char                                                         pad0x20_SDQF1[0x20];                               // 0x0(0x20)
	byte                                                         EncounterType;                                     // 0x20(0x1)
	char                                                         pad0x7_B64NL[0x7];                                 // 0x21(0x7)
};


// Size 0x28
struct PlayerEncounterEndCustomServerEvent
{
public:
	char                                                         pad0x20_TE2T4[0x20];                               // 0x0(0x20)
	byte                                                         EncounterType;                                     // 0x20(0x1)
	char                                                         pad0x7_Y72N4[0x7];                                 // 0x21(0x7)
};


// Size 0x30
struct PlayerEmoteEndCustomServerEvent
{
public:
	char                                                         pad0x20_1SW16[0x20];                               // 0x0(0x20)
	struct FString                                               Emote;                                             // 0x20(0x10)
};


// Size 0x30
struct PlayerEmoteStartCustomServerEvent
{
public:
	char                                                         pad0x20_ZHX16[0x20];                               // 0x0(0x20)
	struct FString                                               Emote;                                             // 0x20(0x10)
};


// Size 0x28
struct PlayerDeathCustomServerEvent
{
public:
	char                                                         pad0x20_PDI22[0x20];                               // 0x0(0x20)
	int                                                          KillerID;                                          // 0x20(0x4)
	char                                                         pad0x4_CSERH[0x4];                                 // 0x24(0x4)
};


// Size 0x28
struct PlayerChangedShipLoadoutCustomServerEvent
{
public:
	char                                                         pad0x20_DKC07[0x20];                               // 0x0(0x20)
	int                                                          ShipId;                                            // 0x20(0x4)
	char                                                         pad0x4_EZ1XM[0x4];                                 // 0x24(0x4)
};


// Size 0x20
struct PlayerChangedLoadoutCustomServerEvent
{
public:
	char                                                         pad0x20_BQE7O[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct PlayerCapstanUsageStartCustomServerEvent
{
public:
	char                                                         pad0x20_TS911[0x20];                               // 0x0(0x20)
	int                                                          ShipId;                                            // 0x20(0x4)
	char                                                         pad0x4_PWG4F[0x4];                                 // 0x24(0x4)
};


// Size 0x28
struct PlayerCapstanUsageEndCustomServerEvent
{
public:
	char                                                         pad0x20_W5JQX[0x20];                               // 0x0(0x20)
	int                                                          ShipId;                                            // 0x20(0x4)
	int                                                          CapstanState;                                      // 0x24(0x4)
};


// Size 0x20
struct PlayerBucketScoopCustomServerEvent
{
public:
	char                                                         pad0x20_8EWAQ[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct PlayerBucketEmptyCustomServerEvent
{
public:
	char                                                         pad0x20_87LCK[0x20];                               // 0x0(0x20)
	bool                                                         AtWielder;                                         // 0x20(0x1)
	char                                                         pad0x7_B6B83[0x7];                                 // 0x21(0x7)
};


// Size 0x28
struct PlayerActionCannonCustomServerEvent
{
public:
	char                                                         pad0x20_FAVOI[0x20];                               // 0x0(0x20)
	int                                                          ShipId;                                            // 0x20(0x4)
	char                                                         pad0x4_JLALA[0x4];                                 // 0x24(0x4)
};


// Size 0x30
struct PlayerActionCustomServerEvent
{
public:
	char                                                         pad0x20_8QM1Z[0x20];                               // 0x0(0x20)
	struct FString                                               Action;                                            // 0x20(0x10)
};


// Size 0x20
struct MermaidUsedCustomServerEvent
{
public:
	char                                                         pad0x20_Z7YAQ[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct MeleeWeaponAttackCustomServerEvent
{
public:
	char                                                         pad0x20_MH0LK[0x20];                               // 0x0(0x20)
	int                                                          Type;                                              // 0x20(0x4)
	char                                                         pad0x4_5T81G[0x4];                                 // 0x24(0x4)
};


// Size 0x28
struct CustomTriggerOverlapEndCustomServerEvent
{
public:
	char                                                         pad0x20_WXMI8[0x20];                               // 0x0(0x20)
	int                                                          OtherNetId;                                        // 0x20(0x4)
	char                                                         pad0x4_1C0JL[0x4];                                 // 0x24(0x4)
};


// Size 0x28
struct CustomTriggerOverlapBeginCustomServerEvent
{
public:
	char                                                         pad0x20_UUL72[0x20];                               // 0x0(0x20)
	int                                                          OtherNetId;                                        // 0x20(0x4)
	char                                                         pad0x4_PR5A0[0x4];                                 // 0x24(0x4)
};


// Size 0x30
struct AISpawnCustomServerEvent
{
public:
	char                                                         pad0x20_1J4G3[0x20];                               // 0x0(0x20)
	struct FString                                               AIType;                                            // 0x20(0x10)
};


// Size 0x20
struct AIShipSpawnCustomServerEvent
{
public:
	char                                                         pad0x20_3OXOS[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct AIShipDespawnCustomServerEvent
{
public:
	char                                                         pad0x20_PQYAZ[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct AIShipDamagedCustomServerEvent
{
public:
	char                                                         pad0x20_7JGKY[0x20];                               // 0x0(0x20)
	float                                                        AIShipWaterLevel;                                  // 0x20(0x4)
	char                                                         pad0x4_RW0LW[0x4];                                 // 0x24(0x4)
};


// Size 0x20
struct OnCannonballLoadedOnCannonCustomServerEvent
{
public:
	char                                                         pad0x20_69RUW[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct OnPlayerFiredFromCannonCustomServerEvent
{
public:
	char                                                         pad0x20_3RAPL[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct OnEnemyDeathCustomServerEvent
{
public:
	char                                                         pad0x20_PDC71[0x20];                               // 0x0(0x20)
	int                                                          KillerPlayerID;                                    // 0x20(0x4)
	char                                                         pad0x4_R7FUO[0x4];                                 // 0x24(0x4)
};


// Size 0x30
struct OnPlayerDigCustomServerEvent
{
public:
	char                                                         pad0x20_J72DT[0x20];                               // 0x0(0x20)
	struct Vector                                                Location;                                          // 0x20(0xc)
	char                                                         pad0x4_K0I76[0x4];                                 // 0x2c(0x4)
};


// Size 0x30
struct OnPlayerStartsNPCInteractionCustomServerEvent
{
public:
	char                                                         pad0x20_LM7J2[0x20];                               // 0x0(0x20)
	struct FString                                               NPCName;                                           // 0x20(0x10)
};


// Size 0x20
struct OnPlayerJoinsMapTableCustomServerEvent
{
public:
	char                                                         pad0x20_LHO6H[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct OnHarpoonShotHitCustomServerEvent
{
public:
	char                                                         pad0x20_K8PMZ[0x20];                               // 0x0(0x20)
	int                                                          ActorTetheredTo;                                   // 0x20(0x4)
	char                                                         pad0x4_YERQO[0x4];                                 // 0x24(0x4)
};


// Size 0x28
struct OnHarpoonShotShotCustomServerEvent
{
public:
	char                                                         pad0x20_RIBXN[0x20];                               // 0x0(0x20)
	int                                                          HarpoonId;                                         // 0x20(0x4)
	char                                                         pad0x4_84TNC[0x4];                                 // 0x24(0x4)
};


// Size 0x20
struct OnPlayerInsideCannonCustomServerEvent
{
public:
	char                                                         pad0x20_4OSXY[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct OnPlayerAteCustomServerEvent
{
public:
	char                                                         pad0x20_Z635C[0x20];                               // 0x0(0x20)
};


// Size 0x20
struct ShipSinkingCustomServerEvent
{
public:
	char                                                         pad0x20_C9J3J[0x20];                               // 0x0(0x20)
};


// Size 0x30
struct HoleFixedForShipCustomServerEvent
{
public:
	char                                                         pad0x20_2CGC7[0x20];                               // 0x0(0x20)
	float                                                        RepairPercentage;                                  // 0x20(0x4)
	int                                                          RepairingActor;                                    // 0x24(0x4)
	bool                                                         RepairCompleted;                                   // 0x28(0x1)
	char                                                         pad0x7_2NXW3[0x7];                                 // 0x29(0x7)
};


// Size 0x28
struct MermaidSpawnedCustomServerEvent
{
public:
	char                                                         pad0x18_G98S4[0x18];                               // 0x0(0x18)
	struct Vector                                                Position;                                          // 0x18(0xc)
	int                                                          PlayerId;                                          // 0x24(0x4)
};


// Size 0x18
struct GlobalCustomServerEvent
{
public:
	char                                                         pad0x18_WR0J1[0x18];                               // 0x0(0x18)
};


// Size 0x18
struct PlayerLookingAtMapCustomServerEvent
{
public:
	char                                                         pad0x18_9DFAS[0x18];                               // 0x0(0x18)
};


// Size 0x30
struct OnQuestStartedCustomServerEvent
{
public:
	char                                                         pad0x18_38E2R[0x18];                               // 0x0(0x18)
	byte                                                         QuestType;                                         // 0x18(0x1)
	char                                                         pad0x3_PUTS7[0x3];                                 // 0x19(0x3)
	struct Guid                                                  CrewId;                                            // 0x1c(0x10)
	char                                                         pad0x4_EJZWT[0x4];                                 // 0x2c(0x4)
};


// Size 0x50
struct OnVoyageStartedCustomServerEvent
{
public:
	char                                                         pad0x18_Z3EOG[0x18];                               // 0x0(0x18)
	struct FString                                               CompanyDisplayName;                                // 0x18(0x10)
	int                                                          Rank;                                              // 0x28(0x4)
	char                                                         pad0x4_Y6VL7[0x4];                                 // 0x2c(0x4)
	struct FString                                               Title;                                             // 0x30(0x10)
	struct Guid                                                  CrewId;                                            // 0x40(0x10)
};


// Size 0x28
struct OnVoyageCancelledCustomServerEvent
{
public:
	char                                                         pad0x18_YG2NN[0x18];                               // 0x0(0x18)
	struct FString                                               AssociatedCrew;                                    // 0x18(0x10)
};


// Size 0x40
struct OnVoyageAcceptedCustomServerEvent
{
public:
	char                                                         pad0x18_0RB5M[0x18];                               // 0x0(0x18)
	struct FString                                               CompanyDisplayName;                                // 0x18(0x10)
	int                                                          Rank;                                              // 0x28(0x4)
	char                                                         pad0x4_D0MTU[0x4];                                 // 0x2c(0x4)
	struct FString                                               Title;                                             // 0x30(0x10)
};


// Size 0x18
struct OnQuestAcceptedCustomServerEvent
{
public:
	char                                                         pad0x18_DC2TF[0x18];                               // 0x0(0x18)
};


// Size 0x20
struct WatercraftDespawnCustomServerEvent
{
public:
	char                                                         pad0x18_818LE[0x18];                               // 0x0(0x18)
	int                                                          WatercraftId;                                      // 0x18(0x4)
	char                                                         pad0x4_6ES61[0x4];                                 // 0x1c(0x4)
};


// Size 0x18
struct TreasureSpawnedCustomServerEvent
{
public:
	char                                                         pad0x18_APJ6T[0x18];                               // 0x0(0x18)
};


// Size 0x38
struct KrakenSpawnCustomServerEvent
{
public:
	char                                                         pad0x18_EUJUV[0x18];                               // 0x0(0x18)
	struct Vector                                                SpawnLocation;                                     // 0x18(0xc)
	int                                                          TrackedShipId;                                     // 0x24(0x4)
	int                                                          KrakenId;                                          // 0x28(0x4)
	int                                                          NumberOfTentacles;                                 // 0x2c(0x4)
	int                                                          NumberOfKilledTentaclesToDismissKraken;            // 0x30(0x4)
	char                                                         pad0x4_5NS5A[0x4];                                 // 0x34(0x4)
};


// Size 0x20
struct WatercraftSpawnCustomServerEvent
{
public:
	char                                                         pad0x18_L2KRA[0x18];                               // 0x0(0x18)
	int                                                          EntityNetId;                                       // 0x18(0x4)
	char                                                         pad0x4_NH4SR[0x4];                                 // 0x1c(0x4)
};


// Size 0x20
struct ActorSpawnCustomServerEvent
{
public:
	char                                                         pad0x18_ARV0S[0x18];                               // 0x0(0x18)
	int                                                          EntityNetId;                                       // 0x18(0x4)
	char                                                         pad0x4_I4CZL[0x4];                                 // 0x1c(0x4)
};


// Size 0x30
struct ItemSpawnCustomServerEvent
{
public:
	char                                                         pad0x18_KVBCW[0x18];                               // 0x0(0x18)
	int                                                          EntityNetId;                                       // 0x18(0x4)
	char                                                         pad0x4_G5170[0x4];                                 // 0x1c(0x4)
	struct FString                                               ItemType;                                          // 0x20(0x10)
};


// Size 0x28
struct FortWaveCompletedCustomServerEvent
{
public:
	char                                                         pad0x18_C3U74[0x18];                               // 0x0(0x18)
	struct FString                                               InCrewId;                                          // 0x18(0x10)
};


// Size 0x28
struct CrewSessionLeaveCustomServerEvent
{
public:
	char                                                         pad0x18_LJJ72[0x18];                               // 0x0(0x18)
	struct FString                                               CrewId;                                            // 0x18(0x10)
};


// Size 0x30
struct CrewPlayerLeftCustomServerEvent
{
public:
	char                                                         pad0x18_F3LUB[0x18];                               // 0x0(0x18)
	struct FString                                               CrewId;                                            // 0x18(0x10)
	int                                                          PlayerId;                                          // 0x28(0x4)
	char                                                         pad0x4_JYUVS[0x4];                                 // 0x2c(0x4)
};


// Size 0x30
struct TinySharkSpawnCustomServerEvent
{
public:
	char                                                         pad0x18_HG2D6[0x18];                               // 0x0(0x18)
	int                                                          TinySharkId;                                       // 0x18(0x4)
	struct Vector                                                SpawnLocation;                                     // 0x1c(0xc)
	int                                                          TrackedShipId;                                     // 0x28(0x4)
	char                                                         pad0x4_4ERZI[0x4];                                 // 0x2c(0x4)
};


}