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

// BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C
// 0x0000 (FullSize[0x074D] - InheritedSize[0x074D])
class ABP_Lantern_LargeShip_MapDeck_MapTable_C : public ABP_InteractableShipLantern_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_LargeShip_MapDeck_MapTable.BP_Lantern_LargeShip_MapDeck_MapTable_C");
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
