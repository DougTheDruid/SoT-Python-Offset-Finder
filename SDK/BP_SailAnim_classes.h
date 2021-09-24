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

// AnimBlueprintGeneratedClass BP_SailAnim.BP_SailAnim_C
// 0x0A41 (FullSize[0x0EE1] - InheritedSize[0x04A0])
class UBP_SailAnim_C : public USailAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_36E486C64D45AD591699EB9DE95148AA;       // 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4709062A4D6F3DF256CE3BBBD3F62438; // 0x04F0(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_60A11B6E421DC7ABE02612B507E9583F; // 0x0550(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8F7870FD4D585B6527B8699FB6C39A00; // 0x05A0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_744CD4DF4921DA791F0E62AF18BB0354; // 0x0610(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0FF646C54E342E6AF0B0519988944FE1; // 0x0660(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4544C9A44DA3AF03FE8B2F96668BA498; // 0x06D0(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_98AAD55F461019026217D4A514048C35; // 0x0730(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5F9309DE496C72546730099C51C1045A; // 0x07A0(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7048DD804D5DF7BA5D73B2BDAE78AD3E; // 0x07F0(0x0050)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_C4077D44450869504F5B57B86B45BE03; // 0x0840(0x0070)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_F6592B664DE48009817043975A85BB7A; // 0x08B0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_620202814D7DC83538914C97843FF782; // 0x0920(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AD0DF712420B95F2622561A7C5707DE3; // 0x0970(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C8E714F349B500A7EC3EF58B86D2E675; // 0x09C0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7208FEE44A3C330562546387C848EDFC; // 0x0A30(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87AF56874D1931C5BA6C4BBDB19E9F1E; // 0x0A90(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_730E10D74D0D290D9DC39C9367AE1FCB; // 0x0AF0(0x0070)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_9F4C4E754FC987DC14F0698894F20B37; // 0x0B60(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7DD4A62F44AFC5FC76D2138415F53E3C; // 0x0BD0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_00AD432B4C00B5A2BA20C0AFC8E47F59; // 0x0C20(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C564AAE74343DD6AAE6CA2B7B8F0D60E; // 0x0CD0(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3892A81A4A1EEEC1D847CEAEB183E4AA; // 0x0D40(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5EFD03814CCDDD9BD3B576906065506C; // 0x0DB0(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FFCE07204DDA7DC2F3558C88726EA881; // 0x0E10(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_982A8E734123238A2CCF5CB62A719028; // 0x0E80(0x0060)
	bool                                               Main_Sail;                                                 // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_SailAnim.BP_SailAnim_C");
		return ptr;
	}



	void Set_Billow_Animation_Rate();
	void InitialiseSail(float PlayRateMultiplier, bool MainSail);
	void ExecuteUbergraph_BP_SailAnim(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
