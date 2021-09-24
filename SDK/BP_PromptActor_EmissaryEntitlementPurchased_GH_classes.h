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

// BlueprintGeneratedClass BP_PromptActor_EmissaryEntitlementPurchased_GH.BP_PromptActor_EmissaryEntitlementPurchased_GH_C
// 0x0038 (FullSize[0x0440] - InheritedSize[0x0408])
class ABP_PromptActor_EmissaryEntitlementPurchased_GH_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_EmissaryEntitlementPurchased_C*   PromptCoordinator;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      PromptCounterAccessKey;                                    // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGuid                                       OfferId;                                                   // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FPrioritisedPromptWithHandle>        Prompts;                                                   // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PromptActor_EmissaryEntitlementPurchased_GH.BP_PromptActor_EmissaryEntitlementPurchased_GH_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PromptActor_EmissaryEntitlementPurchased_GH(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
