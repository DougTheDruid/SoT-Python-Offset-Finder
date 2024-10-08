#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x8
struct StreakMaterialValue
{
public:
	int                                                          Streak;                                            // 0x0(0x4)
	float                                                        Length;                                            // 0x4(0x4)
};


// Size 0x20
struct FactionVoteAdded
{
public:
	class Actor*                                                 Voter;                                             // 0x0(0x8)
	struct Guid                                                  CrewId;                                            // 0x8(0x10)
	bool                                                         VotePassed;                                        // 0x18(0x1)
};


// Size 0x4
struct UpdateKillStreakEvent
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
};


// Size 0x10
struct FactionBlockedTaleVoteConsensusReached
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x18
struct StreakDynamicMaterials
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x8(0x10)
};


// Size 0xc
struct KillStreakRibbonEvent
{
public:
	int                                                          HourGlassPreValue;                                 // 0x0(0x4)
	int                                                          HourGlassPostValue;                                // 0x4(0x4)
	int                                                          HourGlassIncrement;                                // 0x8(0x4)
};


// Size 0x10
struct StreakMaterial
{
public:
	class MaterialInstance*                                      Material;                                          // 0x0(0x8)
	char                                                         PartType;                                          // 0x8(0x1)
};


// Size 0x20
struct FactionRequest
{
public:
	class UClass*                                                Faction;                                           // 0x0(0x8)
};


// Size 0x20
struct FactionPopupEvent
{
public:
	class DataAsset*                                             PopUpDesc;                                         // 0x18(0x8)
};


// Size 0x8
struct FactionBlockedTaleVoteAdded
{
public:
	class Actor*                                                 Voter;                                             // 0x0(0x8)
};


// Size 0x20
struct FactionShipSunkUIEvent
{
public:
	char                                                         OpponentFaction;                                   // 0x0(0x1)
	struct FString                                               ShipName;                                          // 0x8(0x10)
	int                                                          MyKillStreak;                                      // 0x18(0x4)
	int                                                          TheirKillStreak;                                   // 0x1c(0x4)
};


// Size 0x20
struct ActivateKillStreakNetworkEvent
{
public:
	char                                                         FactionId;                                         // 0x18(0x1)
};


// Size 0x28
struct LootLevelReward
{
public:
	char                                                         LootLevel;                                         // 0x0(0x1)
	struct RewardId                                              RewardId;                                          // 0x4(0x8)
	TArray<struct FactionServicePopUpData>                       LootLevelPopUpMessageDesc;                         // 0x10(0x10)
	int                                                          PopUpIndex;                                        // 0x20(0x4)
};


// Size 0x40
struct FactionShipSunkNetworkEvent
{
public:
	char                                                         OpponentFaction;                                   // 0x18(0x1)
	struct Guid                                                  OpponentCrewId;                                    // 0x1c(0x10)
	int                                                          MyKillStreak;                                      // 0x2c(0x4)
	int                                                          TheirKillStreak;                                   // 0x30(0x4)
	int                                                          SandsOfFateBefore;                                 // 0x34(0x4)
	int                                                          SandsOfFateAfter;                                  // 0x38(0x4)
	bool                                                         IsIntraFactionBattle;                              // 0x3c(0x1)
};


// Size 0x88
struct CinematicFactionEvent
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	struct CinematicQuestEvent                                   CinematicData;                                     // 0x8(0x80)
};


// Size 0x10
struct StreakMesh
{
public:
	class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	char                                                         PartType;                                          // 0x8(0x1)
};


// Size 0x1
struct ActivateKillStreakEvent
{
public:
	char                                                         FactionId;                                         // 0x0(0x1)
};


// Size 0x10
struct FactionStreakData
{
public:
	class UClass*                                                Faction;                                           // 0x0(0x8)
	int                                                          StreakLevel;                                       // 0x8(0x4)
};


// Size 0xa0
struct FactionDisplayInfo
{
public:
	class UClass*                                                Faction;                                           // 0x0(0x8)
	struct FText                                                 Title;                                             // 0x8(0x38)
	struct FText                                                 Description;                                       // 0x40(0x38)
	struct Vector2D                                              CardOffset;                                        // 0x78(0x8)
	struct StringAssetReference                                  KeyArt;                                            // 0x80(0x10)
	struct StringAssetReference                                  Icon;                                              // 0x90(0x10)
};


// Size 0x18
struct StreakCompanyMaterials
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<struct StreakMaterial>                                Materials;                                         // 0x8(0x10)
};


