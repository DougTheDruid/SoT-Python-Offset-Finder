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

// BlueprintGeneratedClass BP_SKCoralTrinket_Common_Desc.BP_SKCoralTrinket_Common_Desc_C
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UBP_SKCoralTrinket_Common_Desc_C : public UBootyItemDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SKCoralTrinket_Common_Desc.BP_SKCoralTrinket_Common_Desc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
