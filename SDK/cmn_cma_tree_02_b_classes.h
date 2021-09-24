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

// BlueprintGeneratedClass cmn_cma_tree_02_b.cmn_cma_tree_02_b_C
// 0x0018 (FullSize[0x0400] - InheritedSize[0x03E8])
class Acmn_cma_tree_02_b_C : public ACoveredMeshActor
{
public:
	class UAudioEventToComponentMapComponent*          AudioEventToComponentMap;                                  // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNonVagueNonUniqueLandmarkComponent*         NonVagueNonUniqueLandmark;                                 // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        wsp_trunk_01_b;                                            // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass cmn_cma_tree_02_b.cmn_cma_tree_02_b_C");
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
