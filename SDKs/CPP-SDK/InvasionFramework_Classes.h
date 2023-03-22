// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InvasionServiceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class DisplayInvasionBannersStep: public TaleQuestStep
{
public:
};


// Size 0x188 (Full Size[0x1e8] - InheritedSize[0x60]
class TaleQuestInvasionService: public TaleQuestService
{
public:
	Class TaleQuestInvasionServiceDesc*                          ServiceDesc;                                       // 0x60(0x8)
	char                                                         pad0x180_BW87Y[0x180];                             // 0x68(0x180)
};


// Size 0xe0 (Full Size[0x108] - InheritedSize[0x28]
class TaleQuestInvasionServiceDesc: public TaleQuestServiceDesc
{
public:
	Struct FText                                                 OnCrewLeftServerMessage;                           // 0x28(0x38)
	Struct FText                                                 OnCrewLeftFightMessage;                            // 0x60(0x38)
	Struct FText                                                 FactionGBannerTag;                                 // 0x98(0x38)
	Struct FText                                                 FactionBBannerTag;                                 // 0xd0(0x38)
};


// Size 0xa0 (Full Size[0x120] - InheritedSize[0x80]
class DisplayInvasionBannersStepDesc: public TaleQuestStepDesc
{
public:
	Struct FText                                                 Message;                                           // 0x80(0x38)
	bool                                                         DisableMusic;                                      // 0xb8(0x1)
	char                                                         pad0x7_P6GZF[0x7];                                 // 0xb9(0x7)
	Struct QuestVariableGuid                                     DisplayShipsNameForCrewId;                         // 0xc0(0x30)
	Struct QuestVariableName                                     DisplayBannersForFaction;                          // 0xf0(0x30)
};


// Size 0x0 (Full Size[0x58] - InheritedSize[0x58]
class EnvQueryGenerator_AggressiveAggressiveSpawnLocations: public EnvQueryGenerator
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class GetInvasionBattleLocationStep: public TaleQuestStep
{
public:
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class GetInvasionBattleLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	Struct QuestVariableFloat                                    Radius;                                            // 0xb0(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class GetInvasionShipsStep: public TaleQuestStep
{
public:
};


// Size 0x1b0 (Full Size[0x230] - InheritedSize[0x80]
class GetInvasionShipsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    AggressiveShip;                                    // 0x80(0x30)
	Struct QuestVariableActor                                    AggressiveShip;                                    // 0xb0(0x30)
	Struct QuestVariableActor                                    PassiveShip;                                       // 0xe0(0x30)
	Struct QuestVariableGuid                                     AggressiveCrewId;                                  // 0x110(0x30)
	Struct QuestVariableGuid                                     AggressiveCrewId;                                  // 0x140(0x30)
	Struct QuestVariableGuid                                     PassiveCrewId;                                     // 0x170(0x30)
	Struct QuestVariableName                                     AggressiveFaction;                                 // 0x1a0(0x30)
	Struct QuestVariableName                                     AggressiveFaction;                                 // 0x1d0(0x30)
	Struct QuestVariableName                                     PassiveFaction;                                    // 0x200(0x30)
};


// Size 0x40 (Full Size[0x408] - InheritedSize[0x3c8]
class InvasionBattleBounds: public Actor
{
public:
	Class SceneComponent*                                        Root;                                              // 0x3c8(0x8)
	Class Actor*                                                 ShipToTrack1;                                      // 0x3d0(0x8)
	Class Actor*                                                 ShipToTrack2;                                      // 0x3d8(0x8)
	float                                                        InnerRadius;                                       // 0x3e0(0x4)
	float                                                        OuterRadius;                                       // 0x3e4(0x4)
	char                                                         pad0x8_YPATH[0x8];                                 // 0x3e8(0x8)
	Class Actor*                                                 ShipThatWasDestroyed;                              // 0x3f0(0x8)
	TArray<class Actor*>                                         HasLeftBattleBounds;                               // 0x3f8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InvasionBattleBoundsShipComponentInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InvasionBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class InvasionLocationsDataAsset: public DataAsset
{
public:
	TArray<struct AggressiveAggressiveLocations>                 AggressiveAggressiveLocations;                     // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InvasionLocationsDataAssetGetterInterface: public Interface
{
public:
};


// Size 0x88 (Full Size[0xb0] - InheritedSize[0x28]
class InvasionServiceDataAsset: public DataAsset
{
public:
	Class VoyageDescDataAsset*                                   Matchmaking_VoyageDescDataAsset;                   // 0x28(0x8)
	Class VoyageDescDataAsset*                                   Invasion_AggressivePassive_VoyageDescDataAsset;    // 0x30(0x8)
	Class VoyageDescDataAsset*                                   Invasion_AggressiveAggressive_VoyageDescDataAsset; // 0x38(0x8)
	float                                                        VoteValidationRivalShipDetectionRadius;            // 0x40(0x4)
	char                                                         pad0x4_DXF11[0x4];                                 // 0x44(0x4)
	Class VoyageDescDataAsset*                                   Invasion_LosingCrew_VoyageDescDataAsset;           // 0x48(0x8)
	Class EnvQuery*                                              AggressivePassive_EnvQueryTemplate;                // 0x50(0x8)
	Class EnvQuery*                                              AggressiveAggressive_InvasionLocation_EnvQueryTemplate; // 0x58(0x8)
	Class EnvQuery*                                              AggressiveAggressive_PrimaryShipLocation_EnvQueryTemplate; // 0x60(0x8)
	Class EnvQuery*                                              AggressiveAggressive_SecondaryShipLocation_EnvQueryTemplate; // 0x68(0x8)
	float                                                        AggressivePassive_EQSQueryParamData_SailingTargetDistanceInMetres_Min; // 0x70(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_SailingTargetDistanceInMetres_Max; // 0x74(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_StationaryTargetDistanceInMetres_Min; // 0x78(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_StationaryTargetDistanceInMetres_Max; // 0x7c(0x4)
	float                                                        AggressivePassive_EQSQueryParamData_TargetLocationOffsetInMetres; // 0x80(0x4)
	float                                                        AggressiveAggressive_EQSQueryParamData_PrimaryShipTargetDistanceInMetres_Min; // 0x84(0x4)
	float                                                        AggressiveAggressive_EQSQueryParamData_PrimaryShipTargetDistanceInMetres_Max; // 0x88(0x4)
	float                                                        AggressiveAggressive_EQSQueryParamData_SecondaryShipTargetDistanceInMetres_Min; // 0x8c(0x4)
	float                                                        AggressiveAggressive_EQSQueryParamData_SecondaryShipTargetDistanceInMetres_Max; // 0x90(0x4)
	char                                                         pad0x4_DK6W0[0x4];                                 // 0x94(0x4)
	Class VoyageDescDataAsset*                                   Invasion_Debug_AggressivePassive_VoyageDescDataAsset; // 0x98(0x8)
	Class VoyageDescDataAsset*                                   Invasion_Debug_AggressiveAggressive_VoyageDescDataAsset; // 0xa0(0x8)
	float                                                        StopPlayingEmergeMusicAfterSeconds;                // 0xa8(0x4)
	float                                                        WorldEventsCooldown;                               // 0xac(0x4)
};


// Size 0x298 (Full Size[0x660] - InheritedSize[0x3c8]
class InvasionService: public Actor
{
public:
	char                                                         pad0x40_NJ18E[0x40];                               // 0x3c8(0x40)
	Class InvasionSettings*                                      InvasionSettings;                                  // 0x408(0x8)
	Class InvasionServiceDataAsset*                              InvasionServiceDataAsset;                          // 0x410(0x8)
	Class InvasionLocationsDataAsset*                            InvasionLocationsDataAsset;                        // 0x418(0x8)
	char                                                         pad0x178_KBIPH[0x178];                             // 0x420(0x178)
	TArray<struct MatchmakingCrews>                              MatchmakingCrews;                                  // 0x598(0x10)
	TArray<struct InvadingCrews>                                 InvadingCrews;                                     // 0x5a8(0x10)
	TArray<struct ReplicatedInvasionCrewMusicStates>             ReplicatedInvasionCrewMusicStates;                 // 0x5b8(0x10)
	TArray<struct MatchmakingCrewsReplicated>                    MatchmakingCrewsReplicated;                        // 0x5c8(0x10)
	TArray<struct InvadingCrewsReplicated>                       InvadingCrewsReplicated;                           // 0x5d8(0x10)
	TArray<class InvasionBattleBounds*>                          InvasionBattleBoundsList;                          // 0x5e8(0x10)
	char                                                         pad0x68_SY6MB[0x68];                               // 0x5f8(0x68)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class InvasionSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                                  InvasionServiceDataAsset;                          // 0x38(0x10)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class SetInvasionMusicStateForCrewStep: public TaleQuestStep
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class SetInvasionMusicStateForCrewStepDesc: public TaleQuestStepDesc
{
public:
	byte                                                         MusicState;                                        // 0x80(0x1)
	char                                                         pad0x7_FBJ2F[0x7];                                 // 0x81(0x7)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestInvasionCreateBattleBoundsStep: public TaleQuestStep
{
public:
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestInvasionCreateBattleBoundsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    Ship1;                                             // 0x80(0x30)
	Struct QuestVariableActor                                    Ship2;                                             // 0xb0(0x30)
};


// Size 0x198 (Full Size[0x1f8] - InheritedSize[0x60]
class TaleQuestInvasionMatchmakingService: public TaleQuestService
{
public:
	Class TaleQuestInvasionMatchmakingServiceDesc*               ServiceDesc;                                       // 0x60(0x8)
	char                                                         pad0x190_YF2QI[0x190];                             // 0x68(0x190)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class TaleQuestInvasionMatchmakingServiceDesc: public TaleQuestServiceDesc
{
public:
	Struct FText                                                 OnCrewLeftServerMessage;                           // 0x28(0x38)
	Struct FText                                                 OnCrewLeftFightMessage;                            // 0x60(0x38)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestInvasionRemoveBattleBoundsStep: public TaleQuestStep
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestInvasionRemoveBattleBoundsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    ShipInBattleBounds;                                // 0x80(0x30)
};


// Size 0x18 (Full Size[0xb0] - InheritedSize[0x98]
class WaitForShipToBeDefeatedStep: public TaleQuestStep
{
public:
};


// Size 0x160 (Full Size[0x1e0] - InheritedSize[0x80]
class WaitForShipToBeDefeatedStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    WinningShip;                                       // 0x80(0x30)
	Struct QuestVariableActor                                    DefeatedShip;                                      // 0xb0(0x30)
	Struct QuestVariableGuid                                     WinningCrewId;                                     // 0xe0(0x30)
	Struct QuestVariableGuid                                     DefeatedCrewId;                                    // 0x110(0x30)
	Struct QuestVariableName                                     WinningFaction;                                    // 0x140(0x30)
	Struct QuestVariableName                                     DefeatedFaction;                                   // 0x170(0x30)
	float                                                        TimeoutTimerIntervalInMinutes;                     // 0x1a0(0x4)
	char                                                         pad0x4_AKXQJ[0x4];                                 // 0x1a4(0x4)
	Struct FText                                                 FailMessage;                                       // 0x1a8(0x38)
};


}