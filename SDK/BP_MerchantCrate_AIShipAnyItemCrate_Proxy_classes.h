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

// BlueprintGeneratedClass BP_MerchantCrate_AIShipAnyItemCrate_Proxy.BP_MerchantCrate_AIShipAnyItemCrate_Proxy_C
// 0x0018 (FullSize[0x07A8] - InheritedSize[0x0790])
class ABP_MerchantCrate_AIShipAnyItemCrate_Proxy_C : public AStorageCrateItemProxy
{
public:
	class UAddOpenContainerActionRuleComponent*        AddOpenContainerActionRule;                                // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStorageContainerComponent*                  StorageContainer;                                          // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_AIShipAnyItemCrate_Proxy.BP_MerchantCrate_AIShipAnyItemCrate_Proxy_C");
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
