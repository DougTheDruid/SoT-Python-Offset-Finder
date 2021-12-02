// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.GetPxActorCapacityForPhysXAggregate
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_PlayerPirate_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.GetPxActorCapacityForPhysXAggregate");

	ABP_PlayerPirate_C_GetPxActorCapacityForPhysXAggregate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMeshComponent*                              Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::TattoGlowDynamicMaterials(class UMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials");

	ABP_PlayerPirate_C_TattoGlowDynamicMaterials_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_PlayerPirate_C::GetMouthPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition");

	ABP_PlayerPirate_C_GetMouthPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerPirate_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript");

	ABP_PlayerPirate_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAthenaCharacter*                            AthenaCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::Update_Athena_Character(class AAthenaCharacter* AthenaCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character");

	ABP_PlayerPirate_C_Update_Athena_Character_Params params {};
	params.AthenaCharacter = AthenaCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::CapstanRotationSpeed(float RotationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed");

	ABP_PlayerPirate_C_CapstanRotationSpeed_Params params {};
	params.RotationSpeed = RotationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBP_Docking                                 Docking                                                    (Parm)
void ABP_PlayerPirate_C::DockingInterface(const struct FBP_Docking& Docking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface");

	ABP_PlayerPirate_C_DockingInterface_Params params {};
	params.Docking = Docking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              IndividualForce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  LH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  RH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce");

	ABP_PlayerPirate_C_CapstanForce_Params params {};
	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  TransformUpdate                                            (Parm, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, const struct FTransform& TransformUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform");

	ABP_PlayerPirate_C_IK_Limb_Update_Transform_Params params {};
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing");

	ABP_PlayerPirate_C_IK_Limb_Blend_Timing_Params params {};
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LocationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              RotationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength");

	ABP_PlayerPirate_C_IK_Limb_Update_Strength_Params params {};
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::IK_Limb_Active(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, bool Active, TEnumAsByte<Animation_ELimbIKSpace> CoordinateSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active");

	ABP_PlayerPirate_C_IK_Limb_Active_Params params {};
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ArmStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              SpineStretch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LegStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch");

	ABP_PlayerPirate_C_IK_Limb_Stretch_Params params {};
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PlayerPirate_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay");

	ABP_PlayerPirate_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PlayerPirate_C::TriggerTattooGlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow");

	ABP_PlayerPirate_C_TriggerTattooGlow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.ScaleMesh
//		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPrimitiveComponent*                         FirstPersonMesh                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPrimitiveComponent*                         ThirdPersonMesh                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::ScaleMesh(const struct FVector& Scale, class UPrimitiveComponent* FirstPersonMesh, class UPrimitiveComponent* ThirdPersonMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.ScaleMesh");

	ABP_PlayerPirate_C_ScaleMesh_Params params {};
	params.Scale = Scale;
	params.FirstPersonMesh = FirstPersonMesh;
	params.ThirdPersonMesh = ThirdPersonMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.SkipToNextMesh
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_PlayerPirate_C::SkipToNextMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.SkipToNextMesh");

	ABP_PlayerPirate_C_SkipToNextMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.SetWieldedItemMesh
//		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AWieldableItem*                              Wieldable_Item_Ref                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UStaticMesh*                                 StaticMesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USkeletalMesh*                               SkeletalMesh                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WieldItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UStaticMesh*>                         StaticMeshArray                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class USkeletalMesh*>                       SkeletalMeshArray                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     ItemScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               UseItemScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::SetWieldedItemMesh(class AWieldableItem* Wieldable_Item_Ref, class UStaticMesh* StaticMesh, class USkeletalMesh* SkeletalMesh, bool WieldItem, TArray<class UStaticMesh*>* StaticMeshArray, TArray<class USkeletalMesh*>* SkeletalMeshArray, const struct FVector& ItemScale, bool UseItemScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.SetWieldedItemMesh");

	ABP_PlayerPirate_C_SetWieldedItemMesh_Params params {};
	params.Wieldable_Item_Ref = Wieldable_Item_Ref;
	params.StaticMesh = StaticMesh;
	params.SkeletalMesh = SkeletalMesh;
	params.WieldItem = WieldItem;
	params.ItemScale = ItemScale;
	params.UseItemScale = UseItemScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StaticMeshArray != nullptr)
		*StaticMeshArray = params.StaticMeshArray;
	if (SkeletalMeshArray != nullptr)
		*SkeletalMeshArray = params.SkeletalMeshArray;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.IncreaseWieldedObjectScale
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ItemScaleIncrement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::IncreaseWieldedObjectScale(const struct FVector& ItemScaleIncrement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.IncreaseWieldedObjectScale");

	ABP_PlayerPirate_C_IncreaseWieldedObjectScale_Params params {};
	params.ItemScaleIncrement = ItemScaleIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_C::ExecuteUbergraph_BP_PlayerPirate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate");

	ABP_PlayerPirate_C_ExecuteUbergraph_BP_PlayerPirate_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PlayerPirate_C::AfterRead()
{
	AAthenaPlayerCharacter::AfterRead();

	READ_PTR_FULL(ChainLightningReceiver, UChainLightningReceiverComponent);
	READ_PTR_FULL(StatusApplicationMonitor, UStatusApplicationMonitorComponent);
	READ_PTR_FULL(ReviveComponent, UReviveComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(Vomit, UVomitComponent);
	READ_PTR_FULL(NoiseMaker, UNoiseMakerComponent);
	READ_PTR_FULL(PlayerNameplate, UPlayerNameplateComponent);
	READ_PTR_FULL(BodyLightController, UBodyLightControllerComponent);
	READ_PTR_FULL(BodyLight, UAmbientLightSourceComponent);
	READ_PTR_FULL(AudioSpaceTracker, UAudioSpaceTrackerComponent);
	READ_PTR_FULL(PlayerAtmosphericsAudio, UPlayerAtmosphericsAudioComponent);
	READ_PTR_FULL(BP_CharacterVFXComponent, UBP_CharacterVFXComponent_C);
	READ_PTR_FULL(WaterInteraction, UWaterInteractionComponent);
	READ_PTR_FULL(BP_PlayerAudioComponent, UBP_CharacterAudioComponent_C);
	READ_PTR_FULL(CharacterFootImpact, UCharacterFootImpactComponent);
	READ_PTR_FULL(PlayerOceanAudio, UPlayerOceanAudioComponent);
	READ_PTR_FULL(CurrentStaticMesh, UStaticMesh);
	READ_PTR_FULL(CurrentSkeletalMesh, USkeletalMesh);
}

void ABP_PlayerPirate_C::BeforeDelete()
{
	AAthenaPlayerCharacter::BeforeDelete();

	DELE_PTR_FULL(ChainLightningReceiver);
	DELE_PTR_FULL(StatusApplicationMonitor);
	DELE_PTR_FULL(ReviveComponent);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(Vomit);
	DELE_PTR_FULL(NoiseMaker);
	DELE_PTR_FULL(PlayerNameplate);
	DELE_PTR_FULL(BodyLightController);
	DELE_PTR_FULL(BodyLight);
	DELE_PTR_FULL(AudioSpaceTracker);
	DELE_PTR_FULL(PlayerAtmosphericsAudio);
	DELE_PTR_FULL(BP_CharacterVFXComponent);
	DELE_PTR_FULL(WaterInteraction);
	DELE_PTR_FULL(BP_PlayerAudioComponent);
	DELE_PTR_FULL(CharacterFootImpact);
	DELE_PTR_FULL(PlayerOceanAudio);
	DELE_PTR_FULL(CurrentStaticMesh);
	DELE_PTR_FULL(CurrentSkeletalMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
