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

// BlueprintGeneratedClass BP_BoilingWaterProjectile_NoSplash.BP_BoilingWaterProjectile_NoSplash_C
// 0x0000 (FullSize[0x0710] - InheritedSize[0x0710])
class ABP_BoilingWaterProjectile_NoSplash_C : public ABP_BoilingWaterProjectile_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoilingWaterProjectile_NoSplash.BP_BoilingWaterProjectile_NoSplash_C");
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
