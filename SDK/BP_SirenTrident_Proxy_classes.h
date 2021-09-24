#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// BlueprintGeneratedClass BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C
// 0x0034 (FullSize[0x07CC] - InheritedSize[0x0798])
class ABP_SirenTrident_Proxy_C : public AStaticSimpleBootyItemProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UGlintComponent*                             Glint;                                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmmoEffectsComponent*                       AmmoEffects;                                               // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmmoTransferComponent*                      AmmoTransfer;                                              // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FVector                                     LocalInteractionOffset;                                    // 0x07C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SirenTrident_Proxy.BP_SirenTrident_Proxy_C");
		return ptr;
	}



	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SirenTrident_Proxy(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
