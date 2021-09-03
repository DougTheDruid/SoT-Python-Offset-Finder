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

// AnimBlueprintGeneratedClass BP_Anim_Wheel.BP_Anim_Wheel_C
// 0x0B70 (FullSize[0x1010] - InheritedSize[0x04A0])
class UBP_Anim_Wheel_C : public UWheelAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_892B6A7C4B85B67AF6464BA18E8F3C2C;       // 0x04A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A80EF124893FAC12AC8A8BF41008B56; // 0x04F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21CCE9AD4BF57BA736F25F95E12A0B01; // 0x0530(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_420A13334A6C293921BDD490D607E734; // 0x0570(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0690ECD24CE6389D8F17DC98C79D1280; // 0x05B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F72ED6C647826C68231A5B8E38A021E7; // 0x05F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D69A499E4634B73C76F9B5A7706CAB4C; // 0x0630(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E6460BB0495D3A823EF5D9BC7B37A244; // 0x0670(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B211D75C4C7B09769BBA4FB78D2656B2; // 0x06B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8A89675475DA7ABCFC2859C568222BD; // 0x06F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C74337C849201E0ABA4A0CBDD6459507; // 0x0730(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC18207140787920FF0276B07EFB03F1; // 0x0770(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C364794348A9C3084D696695091587E0; // 0x07B0(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_545465A740F89C2E391B4EA808A0FC3F; // 0x07F0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5E14F98B488F19A0FCC39BA6444A67FC; // 0x0840(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_26F0FFA447BB35DCEDA057AE6C576772; // 0x0888(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_65FE90FF4DE45DEDF883B5B52E0B5657; // 0x08D8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_33334F9A45500ADB280727B13F259D69; // 0x0920(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_06DE574C4238AAB4BA787199565725A7; // 0x0970(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FB0902154D63E3BD877180A50A37AF1A; // 0x09B8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5102A1DA42ABD0E41F428586689B727D; // 0x0A08(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FAC6E2854EE497866B40BC8987E087E1; // 0x0A50(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8526A7D24D04575947D8E1AE66B1B259; // 0x0AA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D4165F1A4ED5A872C75BE48AE852E17B; // 0x0AE8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_03C8E31B4A5FE10716B21EB7651ED4B1; // 0x0B90(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1CFDA46047F20A6031E790B1783DB1A3; // 0x0C20(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_012A8AC4413A87A0DD41079388F1E3D5; // 0x0C68(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3229425C45FE80A02002C59DA82C7B00; // 0x0CB0(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_309D671B48784B9F1B05E482521FC5BD; // 0x0D40(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_91FF84C34EB2F91D0C059196B78AA1FE; // 0x0DD0(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3E8D552246D760A7EDFC7DB2E16CA9C6; // 0x0E60(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41A9D55B421A1C69CCB7BF9070C34B85; // 0x0EF0(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AB135DD947B12E21A9FB21A6A5E947EA; // 0x0F80(0x0090)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Wheel.BP_Anim_Wheel_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_Anim_Wheel(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
