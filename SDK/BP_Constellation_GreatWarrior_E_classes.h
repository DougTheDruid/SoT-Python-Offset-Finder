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

// BlueprintGeneratedClass BP_Constellation_GreatWarrior_E.BP_Constellation_GreatWarrior_E_C
// 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
class ABP_Constellation_GreatWarrior_E_C : public ABP_Constellation_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Constellation_GreatWarrior_E.BP_Constellation_GreatWarrior_E_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
