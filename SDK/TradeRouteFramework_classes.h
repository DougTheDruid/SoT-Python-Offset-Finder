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
// Classes
//---------------------------------------------------------------------------

// Class TradeRouteFramework.TradeRouteDifficultyBand
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTradeRouteDifficultyBand : public UObject
{
public:
	int                                                MinimumRank;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3VVZ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TradeRouteDifficultyBand");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.TradeRouteData
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class UTradeRouteData : public UDataAsset
{
public:
	struct FIslandSelectionType                        StartIsland;                                               // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FIslandSelectionType                        EndIsland;                                                 // 0x0030(0x0008) (Edit, DisableEditOnInstance)
	struct FPlayerStat                                 RouteCompletionStat;                                       // 0x0038(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<TradeRouteFramework_ETradeRouteMapOrientation> MapOrientation;                                            // 0x0044(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IWEL[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTradeRouteMapData                          TradeRouteMapData;                                         // 0x0048(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TradeRouteData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UTaleQuestGetProjectionPointOnTradeRouteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_UFFM[0x38];                                    // 0x0088(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestGetProjectionPointOnTradeRouteStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              ProjectionProportion;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XPFR[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        SourcePoint;                                               // 0x0038(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRouteData;                                            // 0x0048(0x0010) (Edit)
	struct FQuestVariableVector                        ProjectedPoint;                                            // 0x0058(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestGetProjectionPointOnTradeRouteStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.TaleQuestSelectTradeRouteStep
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UTaleQuestSelectTradeRouteStep : public UTaleQuestStep
{
public:
	class UTaleQuestSelectTradeRouteStepDesc*          Desc;                                                      // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PVO1[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestSelectTradeRouteStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UTaleQuestSelectTradeRouteStepDesc : public UTaleQuestStepDesc
{
public:
	int                                                NumSelectFromClosestIslands;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DUGH[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        SelectionOriginPointVar;                                   // 0x0038(0x0010) (Edit)
	struct FQuestVariableInt                           TradeRouteDifficulty;                                      // 0x0048(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRoute;                                                // 0x0058(0x0010) (Edit)
	struct FQuestVariableTaleResourceHandle            AllocatedTradeRouteHandleVar;                              // 0x0068(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TaleQuestSelectTradeRouteStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.TradeRoutesDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UTradeRoutesDataAsset : public UDataAsset
{
public:
	TArray<struct FTradeRouteMapping>                  TradeRouteMappings;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.TradeRoutesDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TradeRouteFramework.WorldTradeRouteInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWorldTradeRouteInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TradeRouteFramework.WorldTradeRouteInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
