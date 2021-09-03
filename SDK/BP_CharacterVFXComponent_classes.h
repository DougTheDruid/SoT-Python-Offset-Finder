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

// BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C
// 0x0250 (FullSize[0x0330] - InheritedSize[0x00E0])
class UBP_CharacterVFXComponent_C : public UCharacterVfxComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      EnterWaterEvent;                                           // 0x00E8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      UnderwaterStateChanged;                                    // 0x0130(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    Splash_Emitter;                                            // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Large_Foot_Splash;                                         // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Small_Foot_Splash;                                         // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Threshold_for_run;                                         // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Threshold_for_large_foot_impact;                           // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FObjectMessagingHandle                      FallingIntoWaterHandle;                                    // 0x0198(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             Large_Falling_Splash;                                      // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FObjectMessagingHandle                      PlayerViewUnderWaterHandle;                                // 0x01E8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      EnterShipEventHandle;                                      // 0x0230(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ExitShipEventHandle;                                       // 0x0278(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     WindOffsetFromShip;                                        // 0x02C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DEBUG_WindActive;                                          // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FW8F[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DEBUG_WindToggleTimer;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WCIN[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FObjectMessagingHandle                      WindDirectionChangedHandle;                                // 0x02D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    vfx_particle_underwater_ambient;                           // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    vfx_player_underwater_ambient;                             // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterVFXComponent.BP_CharacterVFXComponent_C");
		return ptr;
	}



	void GetWindService(class UObject** WindInterface);
	void WindVFX_DebugTick();
	void WindVFX_Destroy();
	void WindVFX_Create();
	void WindVFX_Deactivate();
	void Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void Play_Falling_Splash(float FallingSpeed);
	void Play_Foot_Splash(const struct FVector& Location);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event);
	void FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event);
	void WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed);
	void On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water);
	void ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
