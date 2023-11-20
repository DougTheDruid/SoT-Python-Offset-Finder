// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
struct LootLevelReward
{
public:
	byte                                                         LootLevel;                                         // 0x0(0x1)
	char                                                         pad0x3_7RB06[0x3];                                 // 0x1(0x3)
	struct RewardId                                              RewardId;                                          // 0x4(0x8)
	char                                                         pad0x4_5IUC0[0x4];                                 // 0xc(0x4)
	TArray<struct FactionServicePopUpData>                       LootLevelPopUpMessageDesc;                         // 0x10(0x10)
	int                                                          PopUpIndex;                                        // 0x20(0x4)
	char                                                         pad0x4_NL6BV[0x4];                                 // 0x24(0x4)
};


// Size 0x20
struct FactionRequest
{
public:
	class UClass*                                                Faction;                                           // 0x0(0x8)
	char                                                         pad0x18_V7SOG[0x18];                               // 0x8(0x18)
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


// Size 0xc
struct KillStreakRibbonEvent
{
public:
	int                                                          HourGlassPreValue;                                 // 0x0(0x4)
	int                                                          HourGlassPostValue;                                // 0x4(0x4)
	int                                                          HourGlassIncrement;                                // 0x8(0x4)
};


// Size 0x1
struct KillStreakHideEvent
{
public:
	char                                                         pad0x1_D1OEN[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct KillStreakShowEvent
{
public:
	char                                                         pad0x1_OJDT9[0x1];                                 // 0x0(0x1)
};


// Size 0x4
struct UpdateKillStreakEvent
{
public:
	int                                                          NewLevel;                                          // 0x0(0x4)
};


// Size 0x1
struct DeactivateKillStreakEvent
{
public:
	char                                                         pad0x1_18MYE[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct ActivateKillStreakEvent
{
public:
	byte                                                         FactionId;                                         // 0x0(0x1)
};


// Size 0x10
struct DeactivateKillStreakNetworkEvent
{
public:
	char                                                         pad0x10_87GR3[0x10];                               // 0x0(0x10)
};


// Size 0x18
struct ActivateKillStreakNetworkEvent
{
public:
	char                                                         pad0x10_ULYQE[0x10];                               // 0x0(0x10)
	byte                                                         FactionId;                                         // 0x10(0x1)
	char                                                         pad0x7_3OD1D[0x7];                                 // 0x11(0x7)
};


// Size 0x20
struct FactionShipSunkUIEvent
{
public:
	byte                                                         OpponentFaction;                                   // 0x0(0x1)
	char                                                         pad0x7_AOE71[0x7];                                 // 0x1(0x7)
	struct FString                                               ShipName;                                          // 0x8(0x10)
	int                                                          MyKillStreak;                                      // 0x18(0x4)
	int                                                          TheirKillStreak;                                   // 0x1c(0x4)
};


// Size 0x38
struct FactionShipSunkNetworkEvent
{
public:
	char                                                         pad0x10_GZOIB[0x10];                               // 0x0(0x10)
	byte                                                         OpponentFaction;                                   // 0x10(0x1)
	char                                                         pad0x3_XHRG4[0x3];                                 // 0x11(0x3)
	struct Guid                                                  OpponentCrewId;                                    // 0x14(0x10)
	int                                                          MyKillStreak;                                      // 0x24(0x4)
	int                                                          TheirKillStreak;                                   // 0x28(0x4)
	int                                                          SandsOfFateBefore;                                 // 0x2c(0x4)
	int                                                          SandsOfFateAfter;                                  // 0x30(0x4)
	bool                                                         IsIntraFactionBattle;                              // 0x34(0x1)
	char                                                         pad0x3_8AXY6[0x3];                                 // 0x35(0x3)
};


// Size 0x18
struct FactionPopupEvent
{
public:
	char                                                         pad0x10_1S7LV[0x10];                               // 0x0(0x10)
	class DataAsset*                                             PopUpDesc;                                         // 0x10(0x8)
};


// Size 0x10
struct StreakMesh
{
public:
	class StaticMesh*                                            Mesh;                                              // 0x0(0x8)
	byte                                                         PartType;                                          // 0x8(0x1)
	char                                                         pad0x7_BJDE1[0x7];                                 // 0x9(0x7)
};


// Size 0x10
struct StreakMaterial
{
public:
	class MaterialInstance*                                      Material;                                          // 0x0(0x8)
	byte                                                         PartType;                                          // 0x8(0x1)
	char                                                         pad0x7_NAB3D[0x7];                                 // 0x9(0x7)
};


// Size 0x88
struct CinematicFactionEvent
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	struct CinematicQuestEvent                                   CinematicData;                                     // 0x8(0x80)
};


// Size 0x10
struct FactionStreakData
{
public:
	class UClass*                                                Faction;                                           // 0x0(0x8)
	int                                                          StreakLevel;                                       // 0x8(0x4)
	char                                                         pad0x4_TSWEG[0x4];                                 // 0xc(0x4)
};


// Size 0x18
struct StreakDynamicMaterials
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<class MaterialInstanceDynamic*>                       DynamicMaterials;                                  // 0x8(0x10)
};


// Size 0x18
struct StreakCompanyMaterials
{
public:
	class UClass*                                                Company;                                           // 0x0(0x8)
	TArray<struct StreakMaterial>                                Materials;                                         // 0x8(0x10)
};


// Size 0x8
struct StreakMaterialValue
{
public:
	int                                                          Streak;                                            // 0x0(0x4)
	float                                                        Length;                                            // 0x4(0x4)
};


// Size 0x10
struct FactionBlockedTaleVoteConsensusReached
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x8
struct FactionBlockedTaleVoteAdded
{
public:
	class Actor*                                                 Voter;                                             // 0x0(0x8)
};


// Size 0x20
struct FactionVoteAdded
{
public:
	class Actor*                                                 Voter;                                             // 0x0(0x8)
	struct Guid                                                  CrewId;                                            // 0x8(0x10)
	bool                                                         VotePassed;                                        // 0x18(0x1)
	char                                                         pad0x7_DLTFK[0x7];                                 // 0x19(0x7)
};


// Size 0x1
struct EventLocalPlayerApproachedHourglass
{
public:
	char                                                         pad0x1_ADXND[0x1];                                 // 0x0(0x1)
};


}