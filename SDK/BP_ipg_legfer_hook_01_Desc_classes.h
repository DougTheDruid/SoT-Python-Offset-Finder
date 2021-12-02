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

// BlueprintGeneratedClass BP_ipg_legfer_hook_01_Desc.BP_ipg_legfer_hook_01_Desc_C
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UBP_ipg_legfer_hook_01_Desc_C : public UClothingDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ipg_legfer_hook_01_Desc.BP_ipg_legfer_hook_01_Desc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
