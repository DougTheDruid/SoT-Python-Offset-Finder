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

// AnimBlueprintGeneratedClass BP_Anim_NPC_ReapersBones_Skeleton_InCage.BP_Anim_NPC_ReapersBones_Skeleton_InCage_C
// 0x1395 (FullSize[0x19A5] - InheritedSize[0x0610])
class UBP_Anim_NPC_ReapersBones_Skeleton_InCage_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_104752994F4C7611265637BE1401A80A;       // 0x0618(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_5F1D7BFE495A6910DEA96098083FEF62;   // 0x0660(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4D24F9ED4F80915317E8D1B8181F4A55; // 0x06E0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6C51F7D34DD0EFC20864DDAA38449ED1; // 0x0728(0x0048)
	struct FAnimNode_HIKLookAt                         AnimGraphNode_HIKLookAt_31AA699A43486347615BC392821E30CB;  // 0x0770(0x0088)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A19BABE441DD3A8A797A89DBDCEDAA4; // 0x07F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06441C554627078856052B91835CA919; // 0x0838(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FDC2D284DFBD56A28F530872CE00E36; // 0x0878(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D37C932C42DD5D36F58926AAF4013D68; // 0x08B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB0BEC1F4FE866352673FA9E1D736D8A; // 0x08F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5BC1B8C44856122643AC4494CCC70C25; // 0x0938(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F218C5CD406D08FDF06139960ED433FB; // 0x0978(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F22E023E4B45561D3C0476B51097BD43; // 0x09B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1777D02445DF620F5644A4AE9244283E; // 0x09F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D1C567C49CA7C2997D16A92AEC95F96; // 0x0A38(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4728ED8844E0C608B9DB2D93DB7FE7C7; // 0x0A78(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BA56F234A1194B97807359CB6EC9581; // 0x0AD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A1BAEDD48C28F65024DEF82AFB8BED0; // 0x0B20(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_10AFC4014067EFA6ABCC9D98A7D189AB; // 0x0B80(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C804E6EF4238707452500D97216CE7C5; // 0x0BC8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_00F67BC243F6EE9600B4E790F4F742EC; // 0x0C70(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A08EC9014376DDDA36C0AE8CEBE0B014; // 0x0CB8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_866B09DC43FF706B72ADF2A5CD8497AF; // 0x0D18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2BF3E127400369FDF04DCBA40242B051; // 0x0D60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_05C84FA84FEE4E47B3142DB9435A4073; // 0x0DA0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C03E9A644C34DBF6F4C0FFB710B26281; // 0x0DE0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82A0C8B446D4260D0539E2865AF6D51C; // 0x0E40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E0012D194A5DE57686B2658B8E39608B; // 0x0E88(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_87683DAD4D5B7872C1C22B8F9381A579; // 0x0EE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A0E29AD441DF3C0D49F9F885CDD1984D; // 0x0F30(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E528277F4493C225EA3967BD62C1C3A9; // 0x0FD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C3B9053C4ADE281E0BDFD6B6170146C1; // 0x1020(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2632E515426FBAA6563F339B925A6620; // 0x1080(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_641261A0483D88B4E98E1688F7168816; // 0x10C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_013BF8874E9530826F3A2BA7C4A69C3F; // 0x1108(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0DE8D5F84546C0883E828491C2229DDD; // 0x1148(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3885F5B14B877D8EBF4469840BF9EEE8; // 0x11A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4BC1DDEC4AE8696CBF2036AC5B00B9E4; // 0x11F0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_569DBDFB4691B6E80EC70D89FFC061AD; // 0x1250(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BD7B3B104CB6ECF536342BB15BAB3260; // 0x1298(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E10503EA43C1916E4EE2B48F35AA24D0; // 0x1340(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8D0E1F1E493FAA72717AD297F6079F22; // 0x1388(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67EDEEFC4EEE65D47B8EEA831944E325; // 0x1430(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E71EEF7D42D98E99EC53128E75FF9015;       // 0x14E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4490B5E94F9C5B15AD8DFA8362722DE8; // 0x1540(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A689BA4546380649BFB7D787E82A0B6E; // 0x15F0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_07DAF2C441F259BE2149F3BD9BFDAD9F;       // 0x1660(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_82E2700E403ACE7CA5CDDAA784EB7E5B; // 0x16C0(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A879AAB94561A9D31DE6B997CB2019EE; // 0x16F8(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C1DF636A439B3E8B3CE314960655C203; // 0x1788(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3D7AB31041A52F2C4FF3E9942F82C555; // 0x17D0(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_89B1F43949D9E445EB57FE90A98B6728; // 0x1880(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B823DFF49DA36572E36E7AA3E017A9C; // 0x18C8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C23B4BA41E72495EF7BE2AD6BBA5E90; // 0x1928(0x0060)
	struct FVector2D                                   LookAtAngleClamp;                                          // 0x1988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AnimgraphStarted;                                          // 0x1990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WLNW[0x3];                                     // 0x1991(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtChest;                                               // 0x1994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EHIKLookAtLimits>               LookAtClamp;                                               // 0x1998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y2WS[0x3];                                     // 0x1999(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtActivationSpeed;                                     // 0x199C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LookAtTargetPositionSpeed;                                 // 0x19A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPhased;                                                  // 0x19A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_NPC_ReapersBones_Skeleton_InCage.BP_Anim_NPC_ReapersBones_Skeleton_InCage_C");
		return ptr;
	}



	void PlayItemAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_2A19BABE441DD3A8A797A89DBDCEDAA4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_06441C554627078856052B91835CA919();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_6FDC2D284DFBD56A28F530872CE00E36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_D37C932C42DD5D36F58926AAF4013D68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_CB0BEC1F4FE866352673FA9E1D736D8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_F218C5CD406D08FDF06139960ED433FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_1777D02445DF620F5644A4AE9244283E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_9D1C567C49CA7C2997D16A92AEC95F96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_2BF3E127400369FDF04DCBA40242B051();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_05C84FA84FEE4E47B3142DB9435A4073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_641261A0483D88B4E98E1688F7168816();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage_AnimGraphNode_TransitionResult_013BF8874E9530826F3A2BA7C4A69C3F();
	void AnimNotify_StartLookat();
	void AnimNotify_StopLookAt();
	void AnimNotify_IdleVariantChange();
	void AnimNotify_InactiveVariantChange();
	void AnimNotify_InteractVariantChange();
	void BlueprintInitializeAnimation();
	void AnimNotify_NPCLookAtOn();
	void AnimNotify_NPCLookAtOff();
	void AnimNotify_EnteredNull();
	void AnimNotify_EnteredOneShot();
	void AnimNotify_EnteredContinuousOut();
	void AnimNotify_EnteredContinuousLoopB();
	void AnimNotify_EnteredContinuousLoopA();
	void AnimNotify_EnteredContinuousIn();
	void AnimNotify_NPCSelectNewCustomAnim_B();
	void AnimNotify_NPCSelectNewCustomAnim_A();
	void AnimNotify_NPCDeactivateCustomAnimSequence();
	void AnimNotify_RH_DetachSocketB();
	void AnimNotify_LH_DetachSocketB();
	void AnimNotify_RH_DetachSocketA();
	void AnimNotify_LH_DetachSocketA();
	void AnimNotify_LH_UseItem_11();
	void AnimNotify_LH_UseItem_10();
	void AnimNotify_LH_UseItem_9();
	void AnimNotify_LH_UseItem_8();
	void AnimNotify_LH_UseItem_7();
	void AnimNotify_LH_UseItem_6();
	void AnimNotify_RH_UseItem_11();
	void AnimNotify_RH_UseItem_10();
	void AnimNotify_RH_UseItem_9();
	void AnimNotify_RH_UseItem_8();
	void AnimNotify_RH_UseItem_7();
	void AnimNotify_RH_UseItem_6();
	void AnimNotify_RH_AttachItem();
	void AnimNotify_LH_AttachItem();
	void AnimNotify_LH_DetachItem();
	void AnimNotify_RH_DetachItem();
	void AnimNotify_RH_DestroyItem();
	void AnimNotify_RH_UseItem_5();
	void AnimNotify_RH_UseItem_4();
	void AnimNotify_RH_UseItem_3();
	void AnimNotify_RH_UseItem_2();
	void AnimNotify_LH_DestroyItem();
	void AnimNotify_LH_UseItem_5();
	void AnimNotify_LH_UseItem_4();
	void AnimNotify_LH_UseItem_3();
	void AnimNotify_LH_UseItem_2();
	void ExecuteUbergraph_BP_Anim_NPC_ReapersBones_Skeleton_InCage(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
