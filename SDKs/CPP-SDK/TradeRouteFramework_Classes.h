// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class TradeRouteDifficultyBand: public Object
{
public:
	int                                                          MinimumRank;                                       // 0x28(0x4)
	char                                                         pad0x4_MYZK5[0x4];                                 // 0x2c(0x4)
};


// Size 0x98 (Full Size[0xc0] - InheritedSize[0x28]
class TradeRouteData: public DataAsset
{
public:
	Struct IslandSelectionType                                   StartIsland;                                       // 0x28(0x8)
	Struct IslandSelectionType                                   EndIsland;                                         // 0x30(0x8)
	Struct PlayerStat                                            RouteCompletionStat;                               // 0x38(0x4)
	byte                                                         MapOrientation;                                    // 0x3c(0x1)
	char                                                         pad0x3_KNA7W[0x3];                                 // 0x3d(0x3)
	Struct TradeRouteMapData                                     TradeRouteMapData;                                 // 0x40(0x80)
};


// Size 0x98 (Full Size[0x130] - InheritedSize[0x98]
class TaleQuestGetProjectionPointOnTradeRouteStep: public TaleQuestStep
{
public:
};


// Size 0x98 (Full Size[0x118] - InheritedSize[0x80]
class TaleQuestGetProjectionPointOnTradeRouteStepDesc: public TaleQuestStepDesc
{
public:
	float                                                        ProjectionProportion;                              // 0x80(0x4)
	char                                                         pad0x4_QQOF7[0x4];                                 // 0x84(0x4)
	Struct QuestVariableVector                                   SourcePoint;                                       // 0x88(0x30)
	Struct QuestVariableTradeRouteData                           TradeRouteData;                                    // 0xb8(0x30)
	Struct QuestVariableVector                                   ProjectedPoint;                                    // 0xe8(0x30)
};


// Size 0x20 (Full Size[0xb8] - InheritedSize[0x98]
class TaleQuestSelectTradeRouteStep: public TaleQuestStep
{
public:
	Class TaleQuestSelectTradeRouteStepDesc*                     Desc;                                              // 0x98(0x8)
	char                                                         pad0x18_U0ZUB[0x18];                               // 0xa0(0x18)
};


// Size 0xc8 (Full Size[0x148] - InheritedSize[0x80]
class TaleQuestSelectTradeRouteStepDesc: public TaleQuestStepDesc
{
public:
	int                                                          NumSelectFromClosestIslands;                       // 0x80(0x4)
	char                                                         pad0x4_AVIBI[0x4];                                 // 0x84(0x4)
	Struct QuestVariableVector                                   SelectionOriginPointVar;                           // 0x88(0x30)
	Struct QuestVariableInt                                      TradeRouteDifficulty;                              // 0xb8(0x30)
	Struct QuestVariableTradeRouteData                           TradeRoute;                                        // 0xe8(0x30)
	Struct QuestVariableTaleResourceHandle                       AllocatedTradeRouteHandleVar;                      // 0x118(0x30)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class TradeRoutesDataAsset: public DataAsset
{
public:
	TArray<struct TradeRouteMappings>                            TradeRouteMappings;                                // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WorldTradeRouteInterface: public Interface
{
public:
};


}