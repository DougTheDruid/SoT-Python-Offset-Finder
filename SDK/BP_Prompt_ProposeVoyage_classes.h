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

// BlueprintGeneratedClass BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C
// 0x00C8 (FullSize[0x01E0] - InheritedSize[0x0118])
class UBP_Prompt_ProposeVoyage_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_OfferPurchased;                                      // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YUWP[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      Handle_OnOfferPurchased;                                   // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_Complete;                                            // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_92RW[0x7];                                     // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPrioritisedPromptWithHandle                Prompt_ProposeVoyage;                                      // 0x0178(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prompt_ProposeVoyage.BP_Prompt_ProposeVoyage_C");
		return ptr;
	}



	void PostInitialize();
	void Prompt_OfferPurchased(const struct FOfferPurchasedEvent& Ev);
	void UnregisterOtherEvents_Implementable();
	void Evaluate();
	void ExecuteUbergraph_BP_Prompt_ProposeVoyage(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
