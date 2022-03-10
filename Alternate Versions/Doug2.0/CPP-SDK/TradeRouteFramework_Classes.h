namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class TradeRouteDifficultyBand: public Object
{
public:
	int                                                MinimumRank                                        // 0x28(0x4)
};


// Size 0x98
class TradeRouteData: public DataAsset
{
public:
	Struct IslandSelectionType                         StartIsland                                        // 0x28(0x8)
	Struct IslandSelectionType                         EndIsland                                          // 0x30(0x8)
	Struct PlayerStat                                  RouteCompletionStat                                // 0x38(0x4)
	byte                                               MapOrientation                                     // 0x3c(0x1)
	Struct TradeRouteMapData                           TradeRouteMapData                                  // 0x40(0x80)
};


// Size 0x68
class TaleQuestGetProjectionPointOnTradeRouteStep: public TaleQuestStep
{
public:
};


// Size 0x68
class TaleQuestGetProjectionPointOnTradeRouteStepDesc: public TaleQuestStepDesc
{
public:
	float                                              ProjectionProportion                               // 0x80(0x4)
	Struct QuestVariableVector                         SourcePoint                                        // 0x88(0x20)
	Struct QuestVariableTradeRouteData                 TradeRouteData                                     // 0xa8(0x20)
	Struct QuestVariableVector                         ProjectedPoint                                     // 0xc8(0x20)
};


// Size 0x20
class TaleQuestSelectTradeRouteStep: public TaleQuestStep
{
public:
	Class TaleQuestSelectTradeRouteStepDesc*           Desc                                               // 0x90(0x8)
};


// Size 0x88
class TaleQuestSelectTradeRouteStepDesc: public TaleQuestStepDesc
{
public:
	int                                                NumSelectFromClosestIslands                        // 0x80(0x4)
	Struct QuestVariableVector                         SelectionOriginPointVar                            // 0x88(0x20)
	Struct QuestVariableInt                            TradeRouteDifficulty                               // 0xa8(0x20)
	Struct QuestVariableTradeRouteData                 TradeRoute                                         // 0xc8(0x20)
	Struct QuestVariableTaleResourceHandle             AllocatedTradeRouteHandleVar                       // 0xe8(0x20)
};


// Size 0x10
class TradeRoutesDataAsset: public DataAsset
{
public:
	TArray<Struct ClueSiteTypeToMarkIdMap>             TradeRouteMappings                                 // 0x28(0x10)
};


// Size 0x0
class WorldTradeRouteInterface: public Interface
{
public:
};


}