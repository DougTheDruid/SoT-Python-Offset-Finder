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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureMap_ItemInfo_XMarksTheSpotPlayerBuried.BP_TreasureMap_ItemInfo_XMarksTheSpotPlayerBuried_C
// 0x0000 (FullSize[0x0508] - InheritedSize[0x0508])
class ABP_TreasureMap_ItemInfo_XMarksTheSpotPlayerBuried_C : public ABP_TreasureMap_ItemInfo_XMarksTheSpot_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureMap_ItemInfo_XMarksTheSpotPlayerBuried.BP_TreasureMap_ItemInfo_XMarksTheSpotPlayerBuried_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
