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

// BlueprintGeneratedClass BP_fod_SharkMeatRaw_00_a_ItemInfo.BP_fod_SharkMeatRaw_00_a_ItemInfo_C
// 0x0018 (FullSize[0x0580] - InheritedSize[0x0568])
class ABP_fod_SharkMeatRaw_00_a_ItemInfo_C : public ABP_MeatItemInfo_C
{
public:
	class UMaterialManipulationSettingsComponent*      MaterialManipulationSettings;                              // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCookableComponent*                          Cookable;                                                  // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_fod_SharkMeatRaw_00_a_ItemInfo.BP_fod_SharkMeatRaw_00_a_ItemInfo_C");
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
