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

// AnimBlueprintGeneratedClass BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C
// 0x11F0 (FullSize[0x1910] - InheritedSize[0x0720])
class UBP_Anim_OceanCrawler_Crab_C : public UOceanCrawlerAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7418FCA74F19C0B2E7F28198892BB96F;       // 0x0728(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD3B1AF3411191AF4BE488AE4638DAEA; // 0x0770(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1BA81FED4ACC67E9633262BD682750B0; // 0x07B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_487696734CAD503348038FA40021E510; // 0x07F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9A375D6C432C28FA745DAEAC061853B0; // 0x0830(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_851D7EA24BDB41606F0F8AB5BBBA11B9; // 0x0870(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A4DBDC474EB23EFA26A1579F537BFB35; // 0x08B0(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_500F597E40CAB07D80742283937877A7; // 0x09C0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F8E3FDFA4E2C33620C54FB8B9104B0E2; // 0x0A08(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1F6AD8EE44D505A19951BE8D24CC7FF9; // 0x0B18(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_BC5D389B431C3A605867A1A8E0E461EB; // 0x0B60(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_920012084AF4A0FC8A8E9084A3BED4F3; // 0x0B98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D87C87A44C5B6E55192E8BAD31624FB5; // 0x0BE0(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B7BD7074494BFB652A05DEA1A4AC32A9; // 0x0C88(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7400BACE46148E6042825DBB4076E1D0; // 0x0CF8(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9BFE42BB4AE90EF2250CEFAE9E93807B;       // 0x0D38(0x0060)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC7D73254F8530A5E39E1C86565421B0; // 0x0D98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B91CD41444EECCD8DB803DB399C84945; // 0x0DD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21639D88436F5B6A9725DDBE3C2ECC2B; // 0x0E18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A251F064CD3B95D20384B9A3D880100; // 0x0E58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31D4C1134DF6408B1564138DF2A36E58; // 0x0E98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_967CB5514804C34FEEB73CB107D68056; // 0x0ED8(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A64321594F9555011F6095A16B530F8A; // 0x0F18(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A715A116462081B144E954BBEC223749; // 0x0F68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6FB23837489E1C71B8A6A88D8E1266E6; // 0x0FB0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E24ABBC143461899E3F62680CF7C9C54; // 0x1010(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41BF793A4BE15DF7273675AAECDA2A58; // 0x1058(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C95DBD60417F80A23CA909BAB16182FF; // 0x10B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_548BBFCE4D978ECDDEC290B945DF1AA3; // 0x1100(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_17E80D1E4978DA092C55B3AD12E6DAAD; // 0x1160(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_99B777A948AFAFB9DB493AA91D67AF4E; // 0x11A8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3CAF567429E4E1692F7B8B5D848437F; // 0x1250(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C4526D41278003B05F61A3A2E41D95; // 0x1298(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A39132343557CD58BB928802C06B0D6; // 0x12D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1D75D05A4FF624F7A8E5B1A2E5C609AC; // 0x1318(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59C9BA16437463C6B58A06AE383367E5; // 0x1358(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94DF6E7541D101F92D0AB98C2C0FB30A; // 0x1398(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05E4D0744DC05D2A05731CBC1F57C6DC; // 0x13F8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EAFB0EF24457B3CBB3D4A2AC1BD6957D; // 0x1440(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_917DC4CA49E078F0E48769896BB3B6CA; // 0x1550(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7846103548BB0362CEE44287D91ED959; // 0x1598(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F55A8D0E4C17BD441D6F398C6D693523; // 0x15F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9FDD2C2F4659EA8E2F21E58710F74AFF; // 0x1640(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_483167884044DB354D322E85ED32722A; // 0x16E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D8C282BF44DD56322E8339B183E49C9F; // 0x1730(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B005FF9747CE91DECF8573992844E389; // 0x17D8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7BEA4B3C49C7C6EF91D77A9002DE2E50; // 0x1820(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0EA9394240F58F04B37899B83F97FC9B; // 0x1868(0x00A8)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_OceanCrawler_Crab.BP_Anim_OceanCrawler_Crab_C");
		return ptr;
	}



	void AnimNotify_AttackCompleted();
	void AnimNotify_NewAttack();
	void AnimNotify_StartingHitReact();
	void ExecuteUbergraph_BP_Anim_OceanCrawler_Crab(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
