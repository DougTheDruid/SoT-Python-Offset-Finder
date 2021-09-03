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

// BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C
// 0x00E4 (FullSize[0x1A4C] - InheritedSize[0x1968])
class ABP_PlayerPirate_C : public AAthenaPlayerCharacter
{
public:
	unsigned char                                      UnknownData_39D8[0x8];                                     // 0x1968(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVenomableComponent*                         VenomableComponent;                                        // 0x1978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UChainLightningReceiverComponent*            ChainLightningReceiver;                                    // 0x1980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStatusApplicationMonitorComponent*          StatusApplicationMonitor;                                  // 0x1988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UReviveComponent*                            ReviveComponent;                                           // 0x1990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x1998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UVomitComponent*                             Vomit;                                                     // 0x19A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UNoiseMakerComponent*                        NoiseMaker;                                                // 0x19A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPlayerNameplateComponent*                   PlayerNameplate;                                           // 0x19B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBodyLightControllerComponent*               BodyLightController;                                       // 0x19B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAmbientLightSourceComponent*                BodyLight;                                                 // 0x19C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioSpaceTrackerComponent*                 AudioSpaceTracker;                                         // 0x19C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPlayerAtmosphericsAudioComponent*           PlayerAtmosphericsAudio;                                   // 0x19D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBP_CharacterVFXComponent_C*                 BP_CharacterVFXComponent;                                  // 0x19D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWaterInteractionComponent*                  WaterInteraction;                                          // 0x19E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBP_CharacterAudioComponent_C*               BP_PlayerAudioComponent;                                   // 0x19E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UCharacterFootImpactComponent*               CharacterFootImpact;                                       // 0x19F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPlayerOceanAudioComponent*                  PlayerOceanAudio;                                          // 0x19F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              TattooGlowDuration;                                        // 0x1A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5WNC[0x4];                                     // 0x1A04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 CurrentStaticMesh;                                         // 0x1A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               CurrentSkeletalMesh;                                       // 0x1A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USkeletalMesh*>                       SkeletalMeshArray;                                         // 0x1A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMesh*>                         StaticMeshArray;                                           // 0x1A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsSkeletalMesh;                                            // 0x1A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P8CQ[0x3];                                     // 0x1A39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ItemSelectArray;                                           // 0x1A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ItemScale;                                                 // 0x1A40(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerPirate.BP_PlayerPirate_C");
		return ptr;
	}



	unsigned char GetPxActorCapacityForPhysXAggregate();
	void TattoGlowDynamicMaterials(class UMeshComponent* Mesh);
	struct FVector GetMouthPosition();
	void UserConstructionScript();
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Active(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, bool Active, TEnumAsByte<Animation_ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void ReceiveBeginPlay();
	void TriggerTattooGlow();
	void ScaleMesh(const struct FVector& Scale, class UPrimitiveComponent* FirstPersonMesh, class UPrimitiveComponent* ThirdPersonMesh);
	void SkipToNextMesh();
	void SetWieldedItemMesh(class AWieldableItem* Wieldable_Item_Ref, class UStaticMesh* StaticMesh, class USkeletalMesh* SkeletalMesh, bool WieldItem, TArray<class UStaticMesh*>* StaticMeshArray, TArray<class USkeletalMesh*>* SkeletalMeshArray, const struct FVector& ItemScale, bool UseItemScale);
	void IncreaseWieldedObjectScale(const struct FVector& ItemScaleIncrement);
	void ExecuteUbergraph_BP_PlayerPirate(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
