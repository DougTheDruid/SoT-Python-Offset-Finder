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

// BlueprintGeneratedClass BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C
// 0x00F0 (FullSize[0x04C0] - InheritedSize[0x03D0])
class ABP_CoralFortress_WeatherZone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UExplosionComponent*                         Explosion;                                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULightningManagerComponent*                  LightningManager;                                          // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class ULightningComponent*                         Lightning;                                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCapsuleComponent*                           ExclusionTriggerVolume;                                    // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAtmosphericPressureZoneComponent*           AtmosphericPressureZone;                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBlendedPostProcessingRainZoneComponent*     BlendedPostProcessingRainZone;                             // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        TopCloudMeshComponent;                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        RingCloudMeshComponent;                                    // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Lightning4;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Lightning3;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Lightning2;                                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Lightning1;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        OuterRainSheet;                                            // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             RainRoot;                                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              RainBlend_Blend_1B3587E7420F9A76FB06A6A63DE0B159;          // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             RainBlend__Direction_1B3587E7420F9A76FB06A6A63DE0B159;     // 0x0454(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RTSK[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RainBlend;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            RainDynMaterials;                                          // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Opacity;                                                   // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_H43P[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWwiseEmitterCreationParams                 CreationParams;                                            // 0x0478(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwiseEmitter                               WwiseEmitter;                                              // 0x04A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C");
		return ptr;
	}



	void IsLocalPlayer(class AActor* Actor, bool* Result);
	void OnRep_Opacity();
	void CreateDynamicMaterialAtSlot0(class UPrimitiveComponent* Primitive, class UMaterialInstanceDynamic** Material);
	void UserConstructionScript();
	void RainBlend__FinishedFunc();
	void RainBlend__UpdateFunc();
	void ReceiveBeginPlay();
	void StartRainBlend();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void StopRainBlend();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_438_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_441_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_CoralFortress_WeatherZone(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
