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

// BlueprintGeneratedClass BP_tls_shovel_bdg_01_a_Wieldable.BP_tls_shovel_bdg_01_a_Wieldable_C
// 0x0000 (FullSize[0x0848] - InheritedSize[0x0848])
class ABP_tls_shovel_bdg_01_a_Wieldable_C : public ABP_Shovel_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_tls_shovel_bdg_01_a_Wieldable.BP_tls_shovel_bdg_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
