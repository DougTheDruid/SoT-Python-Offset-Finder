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
//		Name   -> Function BP_Wheel.BP_Wheel_C.GetDockableInfo
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDockableInfo                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_Wheel_C::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.GetDockableInfo");

	ABP_Wheel_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_Wheel_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint");

	ABP_Wheel_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.GetWheelMesh
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class USkeletalMeshComponent* ABP_Wheel_C::GetWheelMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.GetWheelMesh");

	ABP_Wheel_C_GetWheelMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Wheel_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.UserConstructionScript");

	ABP_Wheel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.Receive Animation State
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FRotator                                    WheelRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              WheelAnimationTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EWheel_EWheel>                         EWheel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              WheelRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::Receive_Animation_State(const struct FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel_EWheel> EWheel, float Direction, float WheelRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.Receive Animation State");

	ABP_Wheel_C_Receive_Animation_State_Params params;
	params.WheelRotation = WheelRotation;
	params.WheelAnimationTime = WheelAnimationTime;
	params.EWheel = EWheel;
	params.Direction = Direction;
	params.WheelRate = WheelRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.StickInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              StickInputX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::StickInput(float StickInputX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.StickInput");

	ABP_Wheel_C_StickInput_Params params;
	params.StickInputX = StickInputX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.Update Athena Character
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAthenaCharacter*                            AthenaCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::Update_Athena_Character(class AAthenaCharacter* AthenaCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.Update Athena Character");

	ABP_Wheel_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::CapstanRotationSpeed(float RotationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed");

	ABP_Wheel_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.DockingInterface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBP_Docking                                 Docking                                                    (Parm)
void ABP_Wheel_C::DockingInterface(const struct FBP_Docking& Docking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.DockingInterface");

	ABP_Wheel_C_DockingInterface_Params params;
	params.Docking = Docking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.CapstanForce
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              IndividualForce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  LH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  RH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.CapstanForce");

	ABP_Wheel_C_CapstanForce_Params params;
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
//		Name   -> Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  TransformUpdate                                            (Parm, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, const struct FTransform& TransformUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform");

	ABP_Wheel_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing");

	ABP_Wheel_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LocationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              RotationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength");

	ABP_Wheel_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.IK Limb Active
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::IK_Limb_Active(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, bool Active, TEnumAsByte<Animation_ELimbIKSpace> CoordinateSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.IK Limb Active");

	ABP_Wheel_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.IK Limb Stretch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ArmStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              SpineStretch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LegStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.IK Limb Stretch");

	ABP_Wheel_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.RequestStateChange
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::RequestStateChange(class AActor* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.RequestStateChange");

	ABP_Wheel_C_RequestStateChange_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Wheel_C::ExecuteUbergraph_BP_Wheel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel");

	ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Wheel_C::AfterRead()
{
	AWheel::AfterRead();

	READ_PTR_FULL(Wheel, USkeletalMeshComponent);
	READ_PTR_FULL(ProjectileCollision, USphereComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_Wheel_C::BeforeDelete()
{
	AWheel::BeforeDelete();

	DELE_PTR_FULL(Wheel);
	DELE_PTR_FULL(ProjectileCollision);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
