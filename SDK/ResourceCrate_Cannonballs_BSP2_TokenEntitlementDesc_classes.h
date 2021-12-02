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

// BlueprintGeneratedClass ResourceCrate_Cannonballs_BSP2_TokenEntitlementDesc.ResourceCrate_Cannonballs_BSP2_TokenEntitlementDesc_C
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UResourceCrate_Cannonballs_BSP2_TokenEntitlementDesc_C : public UCommodityTokenEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ResourceCrate_Cannonballs_BSP2_TokenEntitlementDesc.ResourceCrate_Cannonballs_BSP2_TokenEntitlementDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
