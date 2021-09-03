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

// BlueprintGeneratedClass sot_frontend_01_a.sot_frontend_01_a_C
// 0x0080 (FullSize[0x0458] - InheritedSize[0x03D8])
class Asot_frontend_01_a_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPirateSelector*                             PirateUI;                                                  // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ZoomIn;                                                    // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Rotation;                                                  // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Selected;                                                  // 0x03EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S569[0x1];                                     // 0x03EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              initTime;                                                  // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              rotFactor;                                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ZoomOut;                                                   // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               initHighlight;                                             // 0x03F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_775A[0x2];                                     // 0x03F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                charSlotID;                                                // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0VBV[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_PirateGenerator_LineUp_C*>        pirateLineUpRef;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                lastCharSlotID;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               zoomOutDone;                                               // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               zoomDone;                                                  // 0x0415(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3WC4[0x2];                                     // 0x0416(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_Anim_CharacterSelect_C*                  pirateLineUpAnimgraph;                                     // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     selectedPirateLoc;                                         // 0x0420(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    selectedPirateRot;                                         // 0x042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PiratesInitialized;                                        // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PirateSelected;                                            // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               mouseDown;                                                 // 0x043A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               mouseDragging;                                             // 0x043B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              mouseStartX;                                               // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABP_CarouselCam_C*                           BP_CarouselCam_C_2_ExecuteUbergraph_sot_frontend_01_a_RefProperty; // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMatineeActor*                               MatineeActor_PirateSelect_ExecuteUbergraph_sot_frontend_01_a_RefProperty; // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_CarouselCam_C*                           BP_CarouselCam_C_2_UniqueObjectNameForCooking_232772163_RefProperty; // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a.sot_frontend_01_a_C");
		return ptr;
	}



	void Get_Pirate_Selector_Component(class UPirateSelector** PirateSelectorComponent);
	void GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component);
	void ResetLineUpPirates();
	void RefreshCharSlotStatus();
	void SetCharSlotId(int NewCharSlotID);
	void PirateHighlight(float Time);
	void GetSelectedPirate(class ABP_PirateGenerator_LineUp_C** Item);
	void GetPirateLineup(class ABP_PirateGenerator_LineUpUI_C** Item);
	void InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687(const struct FKey& Key);
	void InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686(const struct FKey& Key);
	void K2Node_MatineeController_5_Stop();
	void K2Node_MatineeController_5_Pause();
	void K2Node_MatineeController_5_Start();
	void K2Node_MatineeController_5_Finished();
	void InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685(const struct FKey& Key);
	void InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684(const struct FKey& Key);
	void InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683(const struct FKey& Key);
	void InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22(float AxisValue);
	void ReceiveBeginPlay();
	void BeginCelebration();
	void pirateSelectCam();
	void showShipSelectPirate();
	void reinstateSelectedPirateLoc();
	void StartGeneratingPirates();
	void SelectionCancelled();
	void SelectPirateButtonPressed();
	void RefreshPiratesButtonPressed();
	void FavoritePirateButtonPressed();
	void ReceiveTick(float DeltaSeconds);
	void PiratesInitializedEvent();
	void StartPirateCreationAnimation();
	void OnLeavingSelectionState();
	void ExecuteUbergraph_sot_frontend_01_a(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
