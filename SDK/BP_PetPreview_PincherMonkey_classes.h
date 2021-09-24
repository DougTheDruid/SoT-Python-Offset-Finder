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

// BlueprintGeneratedClass BP_PetPreview_PincherMonkey.BP_PetPreview_PincherMonkey_C
// 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
class ABP_PetPreview_PincherMonkey_C : public ABP_PetPreview_Base_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetPreview_PincherMonkey.BP_PetPreview_PincherMonkey_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
