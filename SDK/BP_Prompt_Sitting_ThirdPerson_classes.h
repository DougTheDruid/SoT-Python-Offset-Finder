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

// BlueprintGeneratedClass BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C
// 0x0152 (FullSize[0x026A] - InheritedSize[0x0118])
class UBP_Prompt_Sitting_ThirdPerson_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_LocalPlayerEnteredSittingState;                     // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ThirdPerson;                                        // 0x0168(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDisplayDuration;                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CrewInRadius;                                              // 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PromptOnCooldown;                                          // 0x01D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A56L[0x2];                                     // 0x01D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_LocalPlayerExitedSittingState;                      // 0x01D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_LocalPlayerEnteredSittingThirdPersonCameraState;    // 0x0220(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerOnSeat;                                              // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PromptEvaluated;                                           // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C");
		return ptr;
	}



	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void LocalPlayerEnteredSittingState(const struct FEventLocalPlayerEnteredSittingState& Event);
	void LocalPlayerExitedSittingState(const struct FEventLocalPlayerExittedSittingState& Event);
	void LocalPlayerEnteredSittingThirdPersonCamera(const struct FEventLocalPlayerEnteredSittingThirdPersonCameraState& Event);
	void ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
