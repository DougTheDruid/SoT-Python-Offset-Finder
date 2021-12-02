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

// AnimBlueprintGeneratedClass BP_Anim_Telescope.BP_Anim_Telescope_C
// 0x00B0 (FullSize[0x06E0] - InheritedSize[0x0630])
class UBP_Anim_Telescope_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1D97B58B48A1400F8187778D2053C701;       // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_859C556A499268A85ED18B90F93B9E6B;       // 0x0680(0x0060)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Telescope.BP_Anim_Telescope_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_Anim_Telescope(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
