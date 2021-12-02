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

// BlueprintGeneratedClass BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C
// 0x0119 (FullSize[0x0231] - InheritedSize[0x0118])
class UBP_Prompt_TavernBoard_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      WieldableItemUseEvent;                                     // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      TavernBoardPromptAccessKey;                                // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FPrioritisedPromptWithHandle                Prompt;                                                    // 0x0170(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InRangeOfTavernBoard;                                      // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H9WK[0x7];                                     // 0x01D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      ApproachedTavernBoardHandle;                               // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingDispatcherHandle            CharacterDispatcher;                                       // 0x0228(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasShown;                                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_TavernBoard.BP_Prompt_TavernBoard_C");
		return ptr;
	}



	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Evaluate();
	void OnApproachedTavernBoard(const struct FApproachedPlayerGeneratedMapsContainer& Event);
	void ExecuteUbergraph_BP_Prompt_TavernBoard(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
