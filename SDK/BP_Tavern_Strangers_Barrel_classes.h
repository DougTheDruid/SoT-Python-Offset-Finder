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

// BlueprintGeneratedClass BP_Tavern_Strangers_Barrel.BP_Tavern_Strangers_Barrel_C
// 0x0000 (FullSize[0x03D8] - InheritedSize[0x03D8])
class ABP_Tavern_Strangers_Barrel_C : public ATavernStrangersBarrel
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tavern_Strangers_Barrel.BP_Tavern_Strangers_Barrel_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
