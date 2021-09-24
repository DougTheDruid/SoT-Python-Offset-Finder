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

// BlueprintGeneratedClass BP_cmp_pocket_watch_mrh_01_e_Wieldable.BP_cmp_pocket_watch_mrh_01_e_Wieldable_C
// 0x0000 (FullSize[0x0A60] - InheritedSize[0x0A60])
class ABP_cmp_pocket_watch_mrh_01_e_Wieldable_C : public ABP_PocketWatch_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_cmp_pocket_watch_mrh_01_e_Wieldable.BP_cmp_pocket_watch_mrh_01_e_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
