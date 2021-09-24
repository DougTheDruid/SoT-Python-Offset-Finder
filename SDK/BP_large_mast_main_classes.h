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

// BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C
// 0x0058 (FullSize[0x0A50] - InheritedSize[0x09F8])
class ABP_large_mast_main_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        BP_MastEmissaryFlag;                                       // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_flag_pennant_alliance_01_a;                            // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        BP_ShipFlagCustomizationChest;                             // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        BP_Bell;                                                   // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_flag_jolly_roger_01_a;                                 // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        Ladder;                                                    // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        WeldedCrowsNestPhysics;                                    // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        WeldedMastPhysics;                                         // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        shp_mast_ladder_step_01_a;                                 // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CrowsNest;                                                 // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset* MastDesc);
	void ExecuteUbergraph_BP_large_mast_main(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
