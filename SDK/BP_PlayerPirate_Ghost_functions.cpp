// Name: SoT, Version: 2.3.0

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
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetPxActorCapacityForPhysXAggregate
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_PlayerPirate_Ghost_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetPxActorCapacityForPhysXAggregate");

	ABP_PlayerPirate_Ghost_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetAllMaterialParents
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UMaterialInstance*                           MaterialInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UMaterialInstance*>                   Parents                                                    (Parm, OutParm, ZeroConstructor)
void ABP_PlayerPirate_Ghost_C::GetAllMaterialParents(class UMaterialInstance* MaterialInstance, TArray<class UMaterialInstance*>* Parents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetAllMaterialParents");

	ABP_PlayerPirate_Ghost_C_GetAllMaterialParents_Params params;
	params.MaterialInstance = MaterialInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Parents != nullptr)
		*Parents = params.Parents;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CheckBaseMaterial
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UMaterialInstance*                           MaterialInstance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UMaterial*                                   MaterialToCheck                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::CheckBaseMaterial(class UMaterialInstance* MaterialInstance, class UMaterial* MaterialToCheck, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CheckBaseMaterial");

	ABP_PlayerPirate_Ghost_C_CheckBaseMaterial_Params params;
	params.MaterialInstance = MaterialInstance;
	params.MaterialToCheck = MaterialToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Set Up Ghost Materials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      Input_Mesh                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::Set_Up_Ghost_Materials(class USkeletalMeshComponent* Input_Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Set Up Ghost Materials");

	ABP_PlayerPirate_Ghost_C_Set_Up_Ghost_Materials_Params params;
	params.Input_Mesh = Input_Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetMouthPosition
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_PlayerPirate_Ghost_C::GetMouthPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.GetMouthPosition");

	ABP_PlayerPirate_Ghost_C_GetMouthPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PlayerPirate_Ghost_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.UserConstructionScript");

	ABP_PlayerPirate_Ghost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Update Athena Character
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAthenaCharacter*                            AthenaCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::Update_Athena_Character(class AAthenaCharacter* AthenaCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.Update Athena Character");

	ABP_PlayerPirate_Ghost_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanRotationSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::CapstanRotationSpeed(float RotationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanRotationSpeed");

	ABP_PlayerPirate_Ghost_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.DockingInterface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBP_Docking                                 Docking                                                    (Parm)
void ABP_PlayerPirate_Ghost_C::DockingInterface(const struct FBP_Docking& Docking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.DockingInterface");

	ABP_PlayerPirate_Ghost_C_DockingInterface_Params params;
	params.Docking = Docking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanForce
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              IndividualForce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  LH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  RH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.CapstanForce");

	ABP_PlayerPirate_Ghost_C_CapstanForce_Params params;
	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Transform
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  TransformUpdate                                            (Parm, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, const struct FTransform& TransformUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Transform");

	ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Blend Timing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Blend Timing");

	ABP_PlayerPirate_Ghost_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Strength
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LocationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              RotationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Update Strength");

	ABP_PlayerPirate_Ghost_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Active
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::IK_Limb_Active(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, bool Active, TEnumAsByte<Animation_ELimbIKSpace> CoordinateSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Active");

	ABP_PlayerPirate_Ghost_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Stretch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ArmStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              SpineStretch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LegStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.IK Limb Stretch");

	ABP_PlayerPirate_Ghost_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PlayerPirate_Ghost_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ReceiveBeginPlay");

	ABP_PlayerPirate_Ghost_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.OnMeshSet
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PlayerPirate_Ghost_C::OnMeshSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.OnMeshSet");

	ABP_PlayerPirate_Ghost_C_OnMeshSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ExecuteUbergraph_BP_PlayerPirate_Ghost
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerPirate_Ghost_C::ExecuteUbergraph_BP_PlayerPirate_Ghost(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerPirate_Ghost.BP_PlayerPirate_Ghost_C.ExecuteUbergraph_BP_PlayerPirate_Ghost");

	ABP_PlayerPirate_Ghost_C_ExecuteUbergraph_BP_PlayerPirate_Ghost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_PlayerPirate_Ghost_C::AfterRead()
{
	AAthenaGhostPlayerCharacter::AfterRead();

	READ_PTR_FULL(BP_GhostCharacterAudioComponent, UBP_GhostCharacterAudioComponent_C);
	READ_PTR_FULL(WaterInteraction, UWaterInteractionComponent);
	READ_PTR_FULL(PlayerNameplate, UPlayerNameplateComponent);
	READ_PTR_FULL(BodyLightController, UBodyLightControllerComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(BodyLight, UAmbientLightSourceComponent);
	READ_PTR_FULL(CharacterFootImpact, UCharacterFootImpactComponent);
}

void ABP_PlayerPirate_Ghost_C::BeforeDelete()
{
	AAthenaGhostPlayerCharacter::BeforeDelete();

	DELE_PTR_FULL(BP_GhostCharacterAudioComponent);
	DELE_PTR_FULL(WaterInteraction);
	DELE_PTR_FULL(PlayerNameplate);
	DELE_PTR_FULL(BodyLightController);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(BodyLight);
	DELE_PTR_FULL(CharacterFootImpact);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
