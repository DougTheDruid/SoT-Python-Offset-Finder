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

// BlueprintGeneratedClass BP_fod_SharkMeatRaw_00_a_Wieldable.BP_fod_SharkMeatRaw_00_a_Wieldable_C
// 0x0000 (FullSize[0x0858] - InheritedSize[0x0858])
class ABP_fod_SharkMeatRaw_00_a_Wieldable_C : public ABP_StaticWieldableIngestible_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_fod_SharkMeatRaw_00_a_Wieldable.BP_fod_SharkMeatRaw_00_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
