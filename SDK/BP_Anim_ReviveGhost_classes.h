#pragma once

// Name: SoT, Version: 2.4.0


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

// AnimBlueprintGeneratedClass BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C
// 0x0928 (FullSize[0x0DB8] - InheritedSize[0x0490])
class UBP_Anim_ReviveGhost_C : public UReviveGhostAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B2BFF63741F817F21C45AAB8A7A762B0;       // 0x0498(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_901FA5BA454A4649BCEE0FA833A0B062; // 0x04E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E77D5DE4BAF6AE3F8A4B3B0A8434782; // 0x0520(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F13BC4F4B5ADA1507BB5AB219C237AA; // 0x0560(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A15381D649C65AC8DF8FFBBCB4199E21; // 0x05A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_976A8DD84A6B07031FD7DAA4595FCC92; // 0x05E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B998422B4290B27CB76C7A95878B782D; // 0x0620(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7538F9D340A736CF18470B855289915F; // 0x0660(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_371E79184575535E84C99FA55A63FC5C; // 0x06A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C96E9A2A44300F6C6E19619725C2B8C8; // 0x06E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C12DF8474A04E4E4782DA9B83E8EA0BE; // 0x0720(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC37E4854B980F9A2514CFB5E0E3B95A; // 0x0760(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C8D504E94F15440338628D9C41DA274D; // 0x07C0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F811C0046A67427F49E9F85D3D94FB1; // 0x0808(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_59C01A614BA4327688792F814235F65C; // 0x0850(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_60EC0F9C4016FB9E8BF248A76BD33983; // 0x08A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8A9071045453622328E5E9B49FD1C5B; // 0x08E8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6A318CAD4979341A7E44BA8375018B74; // 0x0948(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EBB788A34488BC28DD3B838DDE246A65; // 0x0990(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1FA3B1334A4B91C0447680BE7B5717CA; // 0x09F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_631C646B4584FC2E30565F9C3ACFA3A6; // 0x0A38(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C949B43E45A64494A43E789E78896ED2; // 0x0A98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A94282964B7F23260AA5CFB11F9B81B5; // 0x0AE0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E04044E340F86B9AC489088AD41AFE60; // 0x0B40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B589D06947880588A943FE83262E9A33; // 0x0B88(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B67A4F824A3094948C9ECBB74FDD5DB8; // 0x0C30(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F11F886642AEC95AE06B2EA23A0CB134; // 0x0C78(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_71009D984D06C31FCC34A4B43940ACA6; // 0x0CC8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A6535CF945C147A307E61681E12F6CDF; // 0x0D10(0x00A8)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_ReviveGhost.BP_Anim_ReviveGhost_C");
		return ptr;
	}



	void AnimNotify_OutOfComplete();
	void ExecuteUbergraph_BP_Anim_ReviveGhost(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
