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

// BlueprintGeneratedClass BP_OutpostCrate_bld_shop_wood_box_01_a.BP_OutpostCrate_bld_shop_wood_box_01_a_C
// 0x0018 (FullSize[0x0508] - InheritedSize[0x04F0])
class ABP_OutpostCrate_bld_shop_wood_box_01_a_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStorageContainerComponent*                  StorageContainer;                                          // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_OutpostCrate_bld_shop_wood_box_01_a.BP_OutpostCrate_bld_shop_wood_box_01_a_C");
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
