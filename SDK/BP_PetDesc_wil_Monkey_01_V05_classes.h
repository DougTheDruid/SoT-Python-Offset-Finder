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

// BlueprintGeneratedClass BP_PetDesc_wil_Monkey_01_V05.BP_PetDesc_wil_Monkey_01_V05_C
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UBP_PetDesc_wil_Monkey_01_V05_C : public UPetEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetDesc_wil_Monkey_01_V05.BP_PetDesc_wil_Monkey_01_V05_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
