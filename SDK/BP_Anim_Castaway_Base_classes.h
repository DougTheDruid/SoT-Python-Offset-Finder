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

// AnimBlueprintGeneratedClass BP_Anim_Castaway_Base.BP_Anim_Castaway_Base_C
// 0x16F0 (FullSize[0x1D00] - InheritedSize[0x0610])
class UBP_Anim_Castaway_Base_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_B870D3484A54BD831E03239036608C7F;   // 0x0618(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_599338654CCF86A421F3C68F2F00CF65; // 0x0698(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8F3474004A89AD3A84824AA8B44CDD7E; // 0x06E0(0x0048)
	struct FAnimNode_HIKLookAt                         AnimGraphNode_HIKLookAt_2582C8C64614883605C1E592EA3CE41D;  // 0x0728(0x0088)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7; // 0x07B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41; // 0x07F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335; // 0x0830(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C; // 0x0870(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5; // 0x08B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFE99B244EDF78E44038A687CE9DACD7; // 0x08F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB; // 0x0930(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8A25DCAC47B44029B70F88AF3F5A5C54; // 0x0970(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68; // 0x09B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA; // 0x09F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AE082B84A607B0DFF0D5C8E7AC5DECC; // 0x0A30(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_269309D3407497D6420FD886C69BE95B; // 0x0A90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0502F6954CD4F84885DE03B203FAA8F6; // 0x0AD8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B18FE85B4ADCBEAB2174A7857612C92D; // 0x0B38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_341236BF4A81EBAA5A49EDB86EC42020; // 0x0B80(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_674A6619431A6BBD4596DABD67671419; // 0x0C28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CF69FE604FFB8ACD4F7C6A8525896858; // 0x0C70(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6275B4A5BA192F44B0FA218DF6A6A; // 0x0CD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615; // 0x0D18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942; // 0x0D58(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6B48F6B40274EB5526E73911EB2F649; // 0x0D98(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6673CFE14C2EE62CCE3294A742F35812; // 0x0DF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_029EE12A4EF80CF396A5BA8003D57382; // 0x0E40(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F05CBB143B076B163966AA6906E1FB9; // 0x0EA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D238362B487C43917B613DBA962EEC64; // 0x0EE8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B40EA37F4A864F9446DE8997ECE0B8F5; // 0x0F90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_398B14A14CE7DAC59E4F638FF1F7E2B9; // 0x0FD8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC3CBAAC4C827FD479924A86438256D2; // 0x1038(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F; // 0x1080(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B; // 0x10C0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D57BDD0C44F5E9BCE148F7B8CD76E643; // 0x1100(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77106F5421C70FDBB57609104AB457F; // 0x1160(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09547AC4474E920370C08B9CCA7EDEFA; // 0x11A8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBBA67C647C2061BFA1797AFE9BF99E0; // 0x1208(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4015BE5C46E0BF7E41E53C9658B209E1; // 0x1250(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8354546645EA8B119354CEA64CC8BDC0; // 0x12F8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EC197C9A494FDFB662CE46B25CD8705D; // 0x1340(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A00956D646F4BA2F5FD5CDAACCE20689; // 0x13E8(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F003585A412F4A022E2B3D801D9B08AA;       // 0x1498(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_418F9EBB4BAF6C7DCF3AFAAF73FA5A28; // 0x14F8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4FC478154142A96F7275D59808FE7214; // 0x1558(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24175F364A9813D7180BFF8022E13EDD; // 0x1608(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C60473CE417CD6AEB18505A864F11072; // 0x1668(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E016A2A74E8ABDCAC3CAF19029B2074C;       // 0x16D8(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_C9B05CC14452668E257F5E8820B6F305; // 0x1738(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3615CAE647A49133A333B69073BF0703; // 0x1770(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE43B0854184603482291BAAD8BD6B2A; // 0x1800(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_Root_2CC695EE42F957B8FB84CB90DD12357F;       // 0x18B0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6D2E367F40EFD8A1114E46AB263E8F2F; // 0x18F8(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4435C7694F94F5E5C0C9FE87B4E923E4; // 0x1988(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_50103564484D4471E09CC58845E868DF; // 0x19D0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3FD2E5FD440BF97EBE3CBB95FBC08C88; // 0x1A18(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CF7443674316BE65F42930827FDAC41C;       // 0x1A60(0x0060)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_DC67B22C43FE5B3ACF584D8F6C947179; // 0x1AC0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3DCF2F2743B292DCCAA5849ABDE22B02; // 0x1B30(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0F5460ED406658E5F6DC8EB9B38FA9B5;       // 0x1B78(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B53112D04F420ED411D2D4834653EB93; // 0x1BD8(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_BBAE480D4EB6C571F7DADE8874A05AF2; // 0x1C48(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_022C0BF9485525FF891213B86BBA8DCB;       // 0x1C80(0x0060)
	float                                              LookAtChest;                                               // 0x1CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                                   LookAtAngleClamp;                                          // 0x1CE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      LookAtClamp;                                               // 0x1CEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LOLV[0x3];                                     // 0x1CED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAtActivationSpeed;                                     // 0x1CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              LookAtTargetPositionSpeed;                                 // 0x1CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimgraphStarted;                                          // 0x1CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPhased;                                                  // 0x1CF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TRGJ[0x2];                                     // 0x1CFA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SequencerBlendWeight;                                      // 0x1CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Castaway_Base.BP_Anim_Castaway_Base_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_Castaway_Base_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
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
	void ExecuteUbergraph_BP_Anim_Castaway_Base(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
