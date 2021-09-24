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
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		TArray<class ACapstanArm*>                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class ACapstanArm*> ABP_Base_Capstan_C::GetArms()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms");

	ABP_Base_Capstan_C_GetArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_Capstan_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript");

	ABP_Base_Capstan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAthenaCharacter*                            AthenaCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::Update_Athena_Character(class AAthenaCharacter* AthenaCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character");

	ABP_Base_Capstan_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RotationSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::CapstanRotationSpeed(float RotationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed");

	ABP_Base_Capstan_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBP_Docking                                 Docking                                                    (Parm)
void ABP_Base_Capstan_C::DockingInterface(const struct FBP_Docking& Docking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface");

	ABP_Base_Capstan_C_DockingInterface_Params params;
	params.Docking = Docking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              IndividualForce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  LH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  RH_IK                                                      (Parm, IsPlainOldData, NoDestructor)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce");

	ABP_Base_Capstan_C_CapstanForce_Params params;
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
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  TransformUpdate                                            (Parm, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, const struct FTransform& TransformUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform");

	ABP_Base_Capstan_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing");

	ABP_Base_Capstan_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LocationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              RotationStrength                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength");

	ABP_Base_Capstan_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EIKLimbName_EIKLimbName>               LimbId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Animation_ELimbIKSpace>                CoordinateSpace                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::IK_Limb_Active(TEnumAsByte<EIKLimbName_EIKLimbName> LimbId, bool Active, TEnumAsByte<Animation_ELimbIKSpace> CoordinateSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active");

	ABP_Base_Capstan_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ArmStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              SpineStretch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              LegStretch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch");

	ABP_Base_Capstan_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_Capstan_C::ExecuteUbergraph_BP_Base_Capstan(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan");

	ABP_Base_Capstan_C_ExecuteUbergraph_BP_Base_Capstan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Base_Capstan_C::AfterRead()
{
	ACapstan::AfterRead();

	READ_PTR_FULL(ProjectileCollision, USphereComponent);
	READ_PTR_FULL(NewVar_1, UWwiseEmitterComponent);
}

void ABP_Base_Capstan_C::BeforeDelete()
{
	ACapstan::BeforeDelete();

	DELE_PTR_FULL(ProjectileCollision);
	DELE_PTR_FULL(NewVar_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
