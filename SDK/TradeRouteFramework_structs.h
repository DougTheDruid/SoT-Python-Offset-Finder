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
// Enums
//---------------------------------------------------------------------------

// Enum TradeRouteFramework.ETradeRouteMapOrientation
enum class TradeRouteFramework_ETradeRouteMapOrientation : uint8_t
{
	ETradeRouteMapOrientation__Landscape = 0,
	ETradeRouteMapOrientation__Portrait = 1,
	ETradeRouteMapOrientation__ETradeRouteMapOrientation_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TradeRouteFramework.QuestVariableTradeRouteData
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTradeRouteData : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct TradeRouteFramework.TradeRouteMapping
// 0x0020
struct FTradeRouteMapping
{
	struct FIslandSelectionType                        StartIsland;                                               // 0x0000(0x0008) (Edit)
	class UClass*                                      DifficultyBand;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FStringAssetReference                       TradeRouteReference;                                       // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
