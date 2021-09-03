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

// BlueprintGeneratedClass BP_CT_VoyageProgress.BP_CT_VoyageProgress_C
// 0x0021 (FullSize[0x0101] - InheritedSize[0x00E0])
class UBP_CT_VoyageProgress_C : public UCompanyTutorialVoyageProgress
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AAthenaPlayerController*                     AthenaPlayerController;                                    // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> VoyageState;                                               // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U4N7[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MaximumRank;                                               // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               NoLongerPurchaseable;                                      // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CT_VoyageProgress.BP_CT_VoyageProgress_C");
		return ptr;
	}



	void IsPurchaseable(bool* Result);
	void SetProgress(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> NewProgress);
	void IsCurrently(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState, bool* Result);
	void IsPast(TEnumAsByte<TutorialVoyageInternalState_ETutorialVoyageInternalState> ProgressState, bool* Result);
	void PopulateExistingState();
	void Initialise(bool Disabled);
	void ExecuteUbergraph_BP_CT_VoyageProgress(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
