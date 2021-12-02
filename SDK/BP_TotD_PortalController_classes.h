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

// BlueprintGeneratedClass BP_TotD_PortalController.BP_TotD_PortalController_C
// 0x0068 (FullSize[0x0438] - InheritedSize[0x03D0])
class ABP_TotD_PortalController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Timeline_0_CloudVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_PortalSwirlVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x03EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_CrackVisibility_E720F06846CDD3DCC686A1B40E94C68C; // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_LightScale_E720F06846CDD3DCC686A1B40E94C68C;    // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_PortalOpen_E720F06846CDD3DCC686A1B40E94C68C;    // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_E720F06846CDD3DCC686A1B40E94C68C;    // 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KA8P[0x3];                                     // 0x03FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UPointLightComponent*>                Lights;                                                    // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LightMaxScale;                                             // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GlowMaxScale;                                              // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture2D*                                  PortalMask;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TotD_PortalController.BP_TotD_PortalController_C");
		return ptr;
	}



	void SetParameters(float PortalOpen, float LightScale, float CrackVisibility, float PortalSwirlVisibility, float CloudVisibility);
	void SetPortalPositionAndOrientation();
	void CollectMaterialsAndLights();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OpenPortal();
	void ExecuteUbergraph_BP_TotD_PortalController(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
