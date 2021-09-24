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

// BlueprintGeneratedClass BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C
// 0x00A0 (FullSize[0x01B8] - InheritedSize[0x0118])
class UBP_Prompt_EmissaryEntitlementPurchased_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_EmissaryEntitlementPurchased;                       // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                       OfferId;                                                   // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGuid                                       ExpectedOfferId;                                           // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FPrioritisedPromptWithHandle>        Prompts;                                                   // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               PromptSurfacedThisSession;                                 // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JO4J[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PromptAccessKey;                                           // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                PromptIndex;                                               // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NumberOfPrompts;                                           // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InitialDelay;                                              // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ShowPromptDuration;                                        // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_EmissaryEntitlementPurchased.BP_Prompt_EmissaryEntitlementPurchased_C");
		return ptr;
	}



	void OnEmissaryEntitlementPurchasedFunc(const struct FEmissaryEntitlementPurchasedEvent& NewParam);
	void EmissaryEntitlementPurchased(const struct FEmissaryEntitlementPurchasedEvent& NewParam);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
