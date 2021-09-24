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

// BlueprintGeneratedClass BP_GildedCrown_TallTales.BP_GildedCrown_TallTales_C
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class ABP_GildedCrown_TallTales_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_tal_guilded_crown_01_a;                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GildedCrown_TallTales.BP_GildedCrown_TallTales_C");
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
