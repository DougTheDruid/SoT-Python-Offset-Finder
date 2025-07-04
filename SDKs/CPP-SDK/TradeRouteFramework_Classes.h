#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "TradeRouteFramework_Structs.h"


// Size 0x98 (Full Size[0x118] - InheritedSize[0x80]
class TaleQuestGetProjectionPointOnTradeRouteStepDesc: public TaleQuestStepDesc
{
public:
	float                                                        ProjectionProportion;                              // 0x80(0x4)
	char                                                         pad0x4_ENT4K[0x4];                                 // 0x84(0x4)
	struct QuestVariableVector                                   SourcePoint;                                       // 0x88(0x30)
	struct QuestVariableTradeRouteData                           TradeRouteData;                                    // 0xb8(0x30)
	struct QuestVariableVector                                   ProjectedPoint;                                    // 0xe8(0x30)
};


// Size 0x98 (Full Size[0x130] - InheritedSize[0x98]
class TaleQuestGetProjectionPointOnTradeRouteStep: public TaleQuestStep
{
public:
	char                                                         pad0x98_G6SFM[0x98];                               // 0x98(0x98)
};


// Size 0x98 (Full Size[0xc0] - InheritedSize[0x28]
class TradeRouteData: public DataAsset
{
public:
	struct IslandSelectionType                                   StartIsland;                                       // 0x28(0x8)
	struct IslandSelectionType                                   EndIsland;                                         // 0x30(0x8)
	struct PlayerStat                                            RouteCompletionStat;                               // 0x38(0x4)
	char                                                         MapOrientation;                                    // 0x3c(0x1)
	char                                                         pad0x3_PKUK2[0x3];                                 // 0x3d(0x3)
	struct TradeRouteMapData                                     TradeRouteMapData;                                 // 0x40(0x80)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class TradeRouteDifficultyBand: public Object
{
public:
	int                                                          MinimumRank;                                       // 0x28(0x4)
	char                                                         pad0x4_PA1QS[0x4];                                 // 0x2c(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class TradeRoutesDataAsset: public DataAsset
{
public:
	TArray<struct TradeRouteMapping>                             TradeRouteMappings;                                // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WorldTradeRouteInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0xb8] - InheritedSize[0x98]
class TaleQuestSelectTradeRouteStep: public TaleQuestStep
{
public:
	class TaleQuestSelectTradeRouteStepDesc*                     Desc;                                              // 0x98(0x8)
	char                                                         pad0x18_JUT0D[0x18];                               // 0xa0(0x18)
};


// Size 0xf8 (Full Size[0x178] - InheritedSize[0x80]
class TaleQuestSelectTradeRouteStepDesc: public TaleQuestStepDesc
{
public:
	struct TradeRouteMappingFilterQuestVariable                  TradeRouteMappingFilter;                           // 0x80(0x30)
	int                                                          NumSelectFromClosestIslands;                       // 0xb0(0x4)
	char                                                         pad0x4_CNMUT[0x4];                                 // 0xb4(0x4)
	struct QuestVariableVector                                   SelectionOriginPointVar;                           // 0xb8(0x30)
	struct QuestVariableInt                                      TradeRouteDifficulty;                              // 0xe8(0x30)
	struct QuestVariableTradeRouteData                           TradeRoute;                                        // 0x118(0x30)
	struct QuestVariableTaleResourceHandle                       AllocatedTradeRouteHandleVar;                      // 0x148(0x30)
};


