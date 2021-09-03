#pragma once

// Name: SoT, Version: 2.2.1.1


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

// BlueprintGeneratedClass BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C
// 0x0020 (FullSize[0x0118] - InheritedSize[0x00F8])
class UBP_PromptCoordinator_Base_C : public UBasePromptCoordinator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsCompleted;                                               // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_71RW[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnComplete;                                                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptCoordinator_Base.BP_PromptCoordinator_Base_C");
		return ptr;
	}



	void IsCharacterInsideRadius(const struct FVector& Center, float Radius, bool* Result);
	void UninitializeImplementable();
	void GetHUDObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* HUD_Dispatcher);
	void Complete();
	void UnregisterHandles();
	void PostInitialize();
	void InitializeAndStart(class AAthenaPlayerController* PlayerController);
	void GetCharacterObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher);
	void Evaluate();
	void GetControllerObjectMessageDispatcher(struct FObjectMessagingDispatcherHandle* Player_Dispatcher);
	void Start();
	void ExecuteUbergraph_BP_PromptCoordinator_Base(int EntryPoint);
	void OnComplete__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
