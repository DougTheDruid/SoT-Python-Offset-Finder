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

// BlueprintGeneratedClass gmp_wrld_res_wood1_fruit3special_01_b.gmp_wrld_res_wood1_fruit3special_01_b_C
// 0x0028 (FullSize[0x0420] - InheritedSize[0x03F8])
class Agmp_wrld_res_wood1_fruit3special_01_b_C : public ACluster
{
public:
	class UStaticMeshComponent*                        Decorator;                                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 PlankOfWood;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 Banana2;                                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 MANGO;                                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 BANANA;                                                    // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass gmp_wrld_res_wood1_fruit3special_01_b.gmp_wrld_res_wood1_fruit3special_01_b_C");
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
