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

// BlueprintGeneratedClass BP_WSP_Campfire_Buildable.BP_WSP_Campfire_Buildable_C
// 0x0000 (FullSize[0x0780] - InheritedSize[0x0780])
class ABP_WSP_Campfire_Buildable_C : public ABP_Base_Campfire_Buildable_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WSP_Campfire_Buildable.BP_WSP_Campfire_Buildable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
