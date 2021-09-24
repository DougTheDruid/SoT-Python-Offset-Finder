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

// BlueprintGeneratedClass BP_Campaign036_FuryOfTheDamned_BilgeRats_NPC.BP_Campaign036_FuryOfTheDamned_BilgeRats_NPC_C
// 0x0030 (FullSize[0x05E8] - InheritedSize[0x05B8])
class ABP_Campaign036_FuryOfTheDamned_BilgeRats_NPC_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           Capsule;                                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNPCDialogComponent*                         NPCDialog;                                                 // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign036_FuryOfTheDamned_BilgeRats_NPC.BP_Campaign036_FuryOfTheDamned_BilgeRats_NPC_C");
		return ptr;
	}



	void UserConstructionScript();
	void ExecuteUbergraph_BP_Campaign036_FuryOfTheDamned_BilgeRats_NPC(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
