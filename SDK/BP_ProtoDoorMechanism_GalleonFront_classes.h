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

// BlueprintGeneratedClass BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C
// 0x0041 (FullSize[0x05C1] - InheritedSize[0x0580])
class ABP_ProtoDoorMechanism_GalleonFront_C : public ADoorMechanism
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             OpenJumpToLocation;                                        // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             ClosedJumpToLocation;                                      // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             OpenKnockbackDirection;                                    // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             ClosedKnockbackDirection;                                  // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        InteractionPoint;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               OpenVolume;                                                // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               ClosedVolume;                                              // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	bool                                               EnableJumpToLocation;                                      // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnStarted();
	void Blueprint_OnStopped();
	void BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonFront(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
