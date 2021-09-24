#pragma once

// Name: SoT, Version: 2.3.0


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

// BlueprintGeneratedClass BP_wpn_blunderbuss_yr1_leg_01_a_ItemInfo.BP_wpn_blunderbuss_yr1_leg_01_a_ItemInfo_C
// 0x0008 (FullSize[0x0518] - InheritedSize[0x0510])
class ABP_wpn_blunderbuss_yr1_leg_01_a_ItemInfo_C : public AItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_wpn_blunderbuss_yr1_leg_01_a_ItemInfo.BP_wpn_blunderbuss_yr1_leg_01_a_ItemInfo_C");
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
