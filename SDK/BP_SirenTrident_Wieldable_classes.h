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

// BlueprintGeneratedClass BP_SirenTrident_Wieldable.BP_SirenTrident_Wieldable_C
// 0x0040 (FullSize[0x0990] - InheritedSize[0x0950])
class ABP_SirenTrident_Wieldable_C : public ADoubleActionItemWithAmmo
{
public:
	class UAimSensitivityComponent*                    AimSensitivity;                                            // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmmoEffectsComponent*                       AmmoEffects;                                               // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticStashedMeshMemoryConstraintComponent* StaticStashedMeshMemoryConstraint;                         // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmmoTransferComponent*                      AmmoTransfer;                                              // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UItemActionComponent*                        AimDownSightAction;                                        // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USirenTridentShotActionComponent*            SirenTridentShotAction;                                    // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULaunchableAttachPointComponent*             LaunchableAttachPoint;                                     // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SirenTrident_Wieldable.BP_SirenTrident_Wieldable_C");
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
