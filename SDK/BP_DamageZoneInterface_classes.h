#pragma once

// Name: SoT, Version: 2.2.1.1


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

// BlueprintGeneratedClass BP_DamageZoneInterface.BP_DamageZoneInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_DamageZoneInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageZoneInterface.BP_DamageZoneInterface_C");
		return ptr;
	}



	void GetNumExternalHits(int* NumExternalHits);
	void ClearDecalFlags();
	void AddExternalHit(const struct FHullDamageHit& Hit_Data);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
