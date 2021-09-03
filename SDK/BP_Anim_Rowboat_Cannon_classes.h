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

// AnimBlueprintGeneratedClass BP_Anim_Rowboat_Cannon.BP_Anim_Rowboat_Cannon_C
// 0x01D8 (FullSize[0x0638] - InheritedSize[0x0460])
class UBP_Anim_Rowboat_Cannon_C : public UCannonAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_738AE4D1451F0890E5D6DCAA154EE2EC;       // 0x0468(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FF606AE447D3D6316A425DB4AA212555; // 0x04B0(0x0070)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_551BEF41427BE228F32C22B3B3923F22; // 0x0520(0x0118)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Rowboat_Cannon.BP_Anim_Rowboat_Cannon_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_Anim_Rowboat_Cannon(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
