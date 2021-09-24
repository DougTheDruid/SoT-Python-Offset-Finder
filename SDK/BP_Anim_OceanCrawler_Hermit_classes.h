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

// AnimBlueprintGeneratedClass BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C
// 0x1568 (FullSize[0x1C88] - InheritedSize[0x0720])
class UBP_Anim_OceanCrawler_Hermit_C : public UOceanCrawlerAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F7D49BAC4A5036196272C69872EE0BB4;       // 0x0728(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1A9D90D4A7F93B6222071AE34409618; // 0x0770(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65F8F9274381AF07697435AF5F3C6CCE; // 0x07B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E8AB5AA4C5E9598F2F1728C4DDAD70F; // 0x07F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1D9B659D42E2C7BFFF4BE4B41E8ACA78; // 0x0830(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06E25EE14553B0A77B1A99A9B986AD61; // 0x0870(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D68E89864BCB8101566481A81D480C36; // 0x08B0(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BF535E434269792F08D9C0BBB40CD6C3; // 0x09C0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9DAC990B4EAA16EF02A58DBE8BD040A6; // 0x0A08(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB09E7BF472D4C671BC986943738B9F9; // 0x0B18(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_AE50624749D21511ABBCE79E0685D308; // 0x0B60(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F17F526A456900E9231CED89943525DF; // 0x0B98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D5BF77C848D66277BB01BDB7A844499A; // 0x0BE0(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D5D381634A4C8F94E13B988ED2453ED4; // 0x0C88(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34E3874B4EB44C1A7EC87FA21ECD58DE; // 0x0CF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D72D0C74A058E75F14F0FA2D522E07C; // 0x0D38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C67A27F41F07640FA2842B7BFBDC628; // 0x0D78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC85E90546CD254952025B8C0F710CC2; // 0x0DB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3B5450547D39118081FA6A4CB6C0E1C; // 0x0DF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_885F6C4749C60500304D11A12F8079A0; // 0x0E38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_002134014F950E16113088B50AF957BE; // 0x0E78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3577C07499435D4AA22E38223F0507D; // 0x0EB8(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D58463684E3F6E34EB1DFDA770294B9E; // 0x0EF8(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B8DCE84456C6F0941F40EBBDB595579; // 0x1008(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9FCEF70D4BCD7F4F4B94C5976F7FFD1E; // 0x1050(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_663AB92C42D2699D128D15AA2E9A1D53; // 0x1160(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7DDA9DE640B91C596CCA478104377AB5; // 0x11A8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BCA3876F4CC54808535FE1ABF6741959; // 0x1250(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AC6E5024CE808E1408B388D39F94962; // 0x1298(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64C507EE41516104C3D181AACC118C75; // 0x12D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CD60D0E44D2CD20D7C62A8950F60B60; // 0x1318(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1B11DD884B19BB35160FB19EC926AC0D; // 0x1358(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C2B6C4FB474CC93D2B91D3BD6B491B8D; // 0x13A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBFA08F244336D58CC6EFAAFB8E3CFCF; // 0x13F0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_66A111A443CA4D8E2FF372B982C8CC12; // 0x1450(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87C0EE1E494678FA7DD2198312D0D50C; // 0x1498(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2B87583044DD53563722D6820B70677A; // 0x14F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4E81CBC45926F6145643B840A261588; // 0x1540(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0E86AF0B45F9B5999AAFEA9F06A281DB; // 0x15A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C18AEC647C13CE7EFDE9B9D9B455AAB; // 0x15E8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7941ABE44DAA00BF581B7D847DAEFE74; // 0x1690(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_747D44704D0340B9792AC2A02D596BBB;       // 0x16D8(0x0060)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AAC8B305463FA204903A89A0ADB7C73D; // 0x1738(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16E1580E4079324C88CA72BDFC61B6B4; // 0x1778(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_72083CB645F3DF35E68F84900B4C9192; // 0x17B8(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B2A39F24E0B8A8A0FDBEA8EE4407207; // 0x18C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49101C2E45A58AC89BDD27B15B8C73D6; // 0x1910(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E07F6C76478AC952F338A8BD9095508C; // 0x1970(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8191FA674E5181C2EB34F79BACA35371; // 0x19B8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9F1BCD33445E1BC2E61D62AF23CC71FD; // 0x1A60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EF79ECD4411E47ECE24C89B135AAE93A; // 0x1AA8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4FA3549C41E4DFE96034E09E11785CB2; // 0x1B50(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0F98EEC24F76C98072A148AAA6554955; // 0x1B98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0F332C364299A8BA801F309F9CA82FB8; // 0x1BE0(0x00A8)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_OceanCrawler_Hermit.BP_Anim_OceanCrawler_Hermit_C");
		return ptr;
	}



	void AnimNotify_NewAttack();
	void AnimNotify_AttackCompleted();
	void AnimNotify_StartingHitReact();
	void ExecuteUbergraph_BP_Anim_OceanCrawler_Hermit(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
