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

// BlueprintGeneratedClass BP_Orderofsouls_MadameOlwen.BP_Orderofsouls_MadameOlwen_C
// 0x0000 (FullSize[0x05D8] - InheritedSize[0x05D8])
class ABP_Orderofsouls_MadameOlwen_C : public ABP_Orderofsouls_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Orderofsouls_MadameOlwen.BP_Orderofsouls_MadameOlwen_C");
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
