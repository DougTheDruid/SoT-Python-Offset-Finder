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

// BlueprintGeneratedClass gmp_wrld_res_wood1_fruit2special_01_a2.gmp_wrld_res_wood1_fruit2special_01_a2_C
// 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
class Agmp_wrld_res_wood1_fruit2special_01_a2_C : public ACluster
{
public:
	class UClusterStaticMeshComponent*                 ClusterStaticMeshPomegranate;                              // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshBanana1;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood;                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass gmp_wrld_res_wood1_fruit2special_01_a2.gmp_wrld_res_wood1_fruit2special_01_a2_C");
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
