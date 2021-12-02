#pragma once

// Name: SoT, Version: 2.4.0


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

// BlueprintGeneratedClass BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C
// 0x0292 (FullSize[0x03AA] - InheritedSize[0x0118])
class UBP_Prompt_MaidenVoyage_RowboatTutorial_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_SatInRowboat;                                        // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SSEV[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                Prompt_RowTheBoat;                                         // 0x0128(0x0068) (Edit, BlueprintVisible)
	struct FObjectMessagingHandle                      Handle_UseRowboat;                                         // 0x0190(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_LeaveRowboat;                                        // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_17DB[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_LeaveRowboat;                                       // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ReleaseOars;                                        // 0x0228(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_Brake;                                              // 0x0290(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_OneAtATime;                                         // 0x02F8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_StrokeEnded;                                        // 0x0360(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_StrokeCompleted;                                     // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               State_Completed;                                           // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_MaidenVoyage_RowboatTutorial.BP_Prompt_MaidenVoyage_RowboatTutorial_C");
		return ptr;
	}



	void OnStrokeEndedFunc();
	void OnLeaveRowboatFunc();
	void OnSitInRowboatFunc(const struct FEventPlayerTakenControlOfControllable& EventPlayerTakenControlOfControllable);
	void ResetState();
	void PostInitialize();
	void Evaluate();
	void UnregisterOtherEvents_Implementable();
	void OnSitInRowboat(const struct FEventPlayerTakenControlOfControllable& Event);
	void OnLeaveRowboat(const struct FEventPlayerReliquishedControlOfControllable& Event);
	void OnStrokeEnded(const struct FEventOarStrokeEnded& Event);
	void ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
