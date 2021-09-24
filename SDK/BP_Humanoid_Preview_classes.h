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

// AnimBlueprintGeneratedClass BP_Humanoid_Preview.BP_Humanoid_Preview_C
// 0x0770 (FullSize[0x0E50] - InheritedSize[0x06E0])
class UBP_Humanoid_Preview_C : public UPreviewCharacterAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F7B625FE4E87C2007BAF2F9C610F4DAD;       // 0x06E8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_06DDF97B4F83C0BF77EDD1AC455C0B99; // 0x0730(0x0090)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_62F9AEDF4DF2B1F3594300B6BC1CECE8; // 0x07C0(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_D36045404129EA2796244A956166566A;   // 0x0808(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3E6245CB44E9B97775230592AF56A6EA; // 0x0888(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C20425F841A45A207D91CAB17A9E0C69; // 0x08D0(0x0048)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_4548955641E72320787256AB96DA994B; // 0x0918(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_A61514BE4EF96C021389F6AD07CCC30D; // 0x0968(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_BEECCB534C1C37B25FA9F3B1DA7BA34B; // 0x09B8(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_89BFB8CF43DAFE0C5F6E379691867FAE; // 0x0A08(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_E9BD0B194F77290025D9BAA7D3051978; // 0x0A58(0x0050)
	unsigned char                                      UnknownData_WIG6[0x8];                                     // 0x0AA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_E9C975504F43E2B8701B799CD8F3259F;   // 0x0AB0(0x0080)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_9F8942EA45E1E98E4C4523A5BC630E7D; // 0x0B30(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_CB2992764499584AF2206682F31C72BF; // 0x0B80(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_A04B623441E3421CD41ABBAA6E75DFEF; // 0x0BD0(0x0050)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_E2FE89AA4B8BFB13E021738A7FE90A23;   // 0x0C20(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86845D1748E753EF522488B025872E01; // 0x0CA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_310D09BB4DF7B35D7BC01781E4095B68; // 0x0CE8(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8A5246C7402ED8F21203A68057B434BA;       // 0x0D90(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4805FD4F465DBD0A8F5730B95CC35DB3; // 0x0DF0(0x0060)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Humanoid_Preview.BP_Humanoid_Preview_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_Humanoid_Preview(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
