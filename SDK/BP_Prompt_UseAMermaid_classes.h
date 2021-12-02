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

// BlueprintGeneratedClass BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C
// 0x0164 (FullSize[0x027C] - InheritedSize[0x0118])
class UBP_Prompt_UseAMermaid_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_IsThereAMermaid;                                     // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FPLU[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_OnMermaidActivatedLocally;                          // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OnMermaidDeactivatedLocally;                        // 0x0170(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_OnMermaidUsed;                                      // 0x01B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_MermaidUsed;                                         // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1HB3[0x7];                                     // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                Prompt_UseMermaid;                                         // 0x0208(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_ShowPrompt;                                          // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2KOL[0x3];                                     // 0x0271(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PromptDisplayDuration;                                     // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PromptHideDuration;                                        // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_UseAMermaid.BP_Prompt_UseAMermaid_C");
		return ptr;
	}



	void ResetState();
	struct FPromptEvaluation EvaluatePromptDisplayState();
	void PostInitialize();
	void Prompt_MermaidActivatedLocally(const struct FMermaidActivatedLocally& Ev);
	void Prompt_MermaidDeactivatedLocally(const struct FMermaidDeactivatedLocally& Ev);
	void Prompt_MermaidUsed(const struct FMermaidUsedEvent& Ev);
	void UnregisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_UseAMermaid(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
