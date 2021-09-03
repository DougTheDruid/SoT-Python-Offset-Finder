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

// AnimBlueprintGeneratedClass BP_FishAnimGraph.BP_FishAnimGraph_C
// 0x0204 (FullSize[0x06F4] - InheritedSize[0x04F0])
class UBP_FishAnimGraph_C : public UFishAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_42E20FB444C28E55BBDF768CB2CD9A4B;       // 0x04F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_35FAB3914B8A72312554D5AC6F346187; // 0x0540(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8327E6DA464BA45A5E62A59D22295734;       // 0x05A0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_94A1E82044FDC64C3864E0B5AF27253A; // 0x0600(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6BCED6BE45BD5788FB70C8AA5F0BCBBE; // 0x0648(0x00A8)
	int                                                RandomJump;                                                // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_FishAnimGraph.BP_FishAnimGraph_C");
		return ptr;
	}



	void AnimNotify_StartJump();
	void AnimNotify_EndJump();
	void ExecuteUbergraph_BP_FishAnimGraph(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
