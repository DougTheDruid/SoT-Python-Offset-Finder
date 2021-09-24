#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass BP_EmissaryFlotsam_GoldHoarders_ItemInfo.BP_EmissaryFlotsam_GoldHoarders_ItemInfo_C
// 0x0008 (FullSize[0x0730] - InheritedSize[0x0728])
class ABP_EmissaryFlotsam_GoldHoarders_ItemInfo_C : public AEmissaryFlotsamItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmissaryFlotsam_GoldHoarders_ItemInfo.BP_EmissaryFlotsam_GoldHoarders_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
