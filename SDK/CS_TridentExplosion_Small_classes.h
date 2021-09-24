#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass CS_TridentExplosion_Small.CS_TridentExplosion_Small_C
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UCS_TridentExplosion_Small_C : public UCameraShake
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CS_TridentExplosion_Small.CS_TridentExplosion_Small_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
