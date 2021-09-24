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

// BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C
// 0x00D8 (FullSize[0x0880] - InheritedSize[0x07A8])
class ABP_PiratePreview_C : public APiratePreviewActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Camera_SideView;                                           // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_ProfileImage;                                       // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Head_old;                                                  // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Hat;                                                // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Gloves;                                             // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Boots;                                              // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_PegLeg;                                             // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Hook;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Glove;                                              // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Torso;                                              // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Mid;                                                // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Legs;                                               // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Feet;                                               // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Head;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             Camera_Default;                                            // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChildActorComponent*                        ChildActor;                                                // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      HiddenDftMesh;                                             // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      PirateMesh;                                                // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCameraComponent*                            Camera;                                                    // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FScriptMulticastDelegate                    PreviewBusy;                                               // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PreviewReady;                                              // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PreviewShutdown;                                           // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PreviewBusy_Event(const struct FPiratePreviewBusyEvent& Data);
	void PreviewReady_Event(const struct FPiratePreviewReadyEvent& Data);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PiratePreview(int EntryPoint);
	void PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data);
	void PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data);
	void PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
