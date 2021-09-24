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

// BlueprintGeneratedClass BP_Lantern_MediumShip_brig_new.BP_Lantern_MediumShip_brig_new_C
// 0x0000 (FullSize[0x074D] - InheritedSize[0x074D])
class ABP_Lantern_MediumShip_brig_new_C : public ABP_InteractableShipLantern_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern_MediumShip_brig_new.BP_Lantern_MediumShip_brig_new_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
