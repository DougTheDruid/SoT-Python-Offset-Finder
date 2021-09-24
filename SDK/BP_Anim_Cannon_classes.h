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

// AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C
// 0x0488 (FullSize[0x08E8] - InheritedSize[0x0460])
class UBP_Anim_Cannon_C : public UCannonAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_37D500E142042AF27DD48D970FEB9969;       // 0x0468(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B2519065482A2C6D2103138CBC70EFF5; // 0x04B0(0x0070)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_1955DCC24F53AFAFE226989AAE959203; // 0x0520(0x0118)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8AE3CC240728DC448411C83C0524A3E; // 0x0638(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2B6A57E44E8B7066652F00A00A0D8A32; // 0x0678(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BAED8644464D3F105EBF0CB3C252DA3D; // 0x06B8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51FF784042C14410738C649A47CDFFB9; // 0x0718(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_61FF7DC544AAE8D747E1B7B8E94CA9CE; // 0x0760(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0AA0EE3C4F3FBFEC36970FAE8D9F81C7; // 0x07B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F11BDD78417C84D075356DA9724CF142; // 0x07F8(0x00A8)
	struct FObjectMessagingHandle                      FireEventHandle;                                           // 0x08A0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Cannon.BP_Anim_Cannon_C");
		return ptr;
	}



	void AnimNotify_FireEnd();
	void ExecuteUbergraph_BP_Anim_Cannon(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
