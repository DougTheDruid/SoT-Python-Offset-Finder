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

// BlueprintGeneratedClass BP_Mast.BP_Mast_C
// 0x00A0 (FullSize[0x09F8] - InheritedSize[0x0958])
class ABP_Mast_C : public AMast
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MastTopComponent;                                          // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TopgallantActor;                                           // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        MainsailActor;                                             // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        TopsailActor;                                              // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Main_Yard;                                                 // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Topgallant_Yard;                                           // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Top_Yard;                                                  // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MastBaseComponent;                                         // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<struct FBP_SailStructure>                   Sail_Parameters;                                           // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                Yards;                                                     // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                Sails;                                                     // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstance*                           Sail_Material;                                             // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_Sail_C*>                          SailActors;                                                // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UDecalComponent*                             DamageDecalRight;                                          // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UDecalComponent*                             DamageDecalLeft;                                           // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mast.BP_Mast_C");
		return ptr;
	}



	void AttemptToAddDamageDecal(TEnumAsByte<Repair_ERepairableState> RepairableState, class UDecalComponent** DecalComponent, const struct FTransform& RelativeTransform, class UMaterialInterface* NewDecalMaterial);
	bool IsMastVisuallyFractured();
	void Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component);
	void Trim_Array_Func(TArray<class UObject*>* TargetArray, int Size);
	void Initialise_Sail_Parameters();
	void Populate_Lists_of_Yards_and_Sails();
	void Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray);
	void Initialise_Sails();
	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset* MastDesc);
	void OnMastMeshSwapRequested(class UStaticMesh* NewMeshBottom, class UStaticMesh* NewMeshTop);
	void BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent);
	void BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent);
	void BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<Repair_ERepairableState> State, TEnumAsByte<Repair_ERepairableState> PreviousState, class URepairableComponent* RepairableComponent);
	void ExecuteUbergraph_BP_Mast(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
