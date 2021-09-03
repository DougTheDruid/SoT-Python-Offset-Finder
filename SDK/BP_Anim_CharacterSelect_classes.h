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

// AnimBlueprintGeneratedClass BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C
// 0x065A (FullSize[0x421A] - InheritedSize[0x3BC0])
class UBP_Anim_CharacterSelect_C : public UThirdPersonAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x3BC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA91E2B046589C64ABB3C4B5BE37EC7B;       // 0x3BC8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_825AF7F342BA122C410073BB53F7B2B6;       // 0x3C10(0x0060)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_4604515E42DFC0F4924E188A084526D1; // 0x3C70(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_0CE9150E4A30CA1A847B44BC7F2741F3; // 0x3CC0(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_EA6626534F1ED0DA4F1BB8828E8B6CAE; // 0x3D10(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_1F623FE647338998F9EE7CBDBB8482F4; // 0x3D60(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_5BA33F0B4645CABA9462E8BAA46CB848; // 0x3DB0(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_8FC28E084F5D06B070B8288538ED49C5; // 0x3E00(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_072A4898420FB56E779F299322CD5C89; // 0x3E50(0x0050)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_028FECB44A1A59FD42DE59B062889CCC;   // 0x3EA0(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FB2C5171490F4C8D7764D4B0E0F1823B; // 0x3F20(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FE35BD5549FB1F4A9B701DA3AAB144D5; // 0x3F68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBF34E9449BF8343E7B3A5883F6C2E2B; // 0x3FB0(0x0060)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_0D88BFB0467B089C1B1D3BA07601E4AC;   // 0x4010(0x0080)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_654DE6BC4364BCDD4E8F239EF6E25C82;   // 0x4090(0x0080)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_B4AE38804A30A76C481C54AE8393F6E4;   // 0x4110(0x0080)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_695B73B24FFE4232EBB796AB28A56B6B;   // 0x4190(0x0080)
	class UAnimSequenceBase*                           FallBackAnimation;                                         // 0x4210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Selected;                                                  // 0x4218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BeginFade;                                                 // 0x4219(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C");
		return ptr;
	}



	void BlueprintInitializeAnimation();
	void AnimNotify_SelectedCameraZoom();
	void AnimNotify_BeginFade();
	void ExecuteUbergraph_BP_Anim_CharacterSelect(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
