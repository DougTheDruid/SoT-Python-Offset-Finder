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

// AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C
// 0x000B (FullSize[0x1CE8] - InheritedSize[0x1CDD])
class UBP_Anim_Merchant_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData_FETQ[0x3];                                     // 0x1CDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C");
		return ptr;
	}



	void AnimNotify_NPCItemAnimation();
	void ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
