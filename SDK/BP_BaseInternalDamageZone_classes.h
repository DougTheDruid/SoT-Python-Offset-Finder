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

// BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C
// 0x0038 (FullSize[0x07D0] - InheritedSize[0x0798])
class ABP_BaseInternalDamageZone_C : public ABP_DamageZone_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        RepairWood;                                                // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWwiseEvent*                                 Start_Repair_Cue;                                          // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FWwiseEmitter                               RepairEmitter;                                             // 0x07B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C");
		return ptr;
	}



	void OnRepairMounted();
	bool GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket);
	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_BaseInternalDamageZone(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
