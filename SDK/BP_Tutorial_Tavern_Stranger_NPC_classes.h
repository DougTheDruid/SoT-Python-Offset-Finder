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

// BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C
// 0x0068 (FullSize[0x0778] - InheritedSize[0x0710])
class ABP_Tutorial_Tavern_Stranger_NPC_C : public ATutorialTavernStrangerNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           SolidHits;                                                 // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNPCDialogComponent*                         NPCDialog;                                                 // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FText                                       MysteriousStranger;                                        // 0x0738(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData_NZ5C[0x20];                                    // 0x0738(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class ACutSceneActor*                              CutSceneActor;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C");
		return ptr;
	}



	void UnhidePlayerPrompts();
	bool CanInteract(class AActor* InInteractor);
	void StartOnboardingCutscene();
	void UserConstructionScript();
	void QueueCutsceneActorDestruction();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void CleanTutorialCutScene();
	void ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
