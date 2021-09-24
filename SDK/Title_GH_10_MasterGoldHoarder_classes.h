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

// BlueprintGeneratedClass Title_GH_10_MasterGoldHoarder.Title_GH_10_MasterGoldHoarder_C
// 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
class UTitle_GH_10_MasterGoldHoarder_C : public UTitleDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Title_GH_10_MasterGoldHoarder.Title_GH_10_MasterGoldHoarder_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
