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
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Hit_Min                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Hit_Max                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_DriveValueToClampByDelta(float* Value, float Min, float Max, float Delta, class UObject* __WorldContext, bool* Hit_Min, bool* Hit_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta");

	UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params params {};
	params.Min = Min;
	params.Max = Max;
	params.Delta = Delta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (Hit_Min != nullptr)
		*Hit_Min = params.Hit_Min;
	if (Hit_Max != nullptr)
		*Hit_Max = params.Hit_Max;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Animation_Hand_IK_Location                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     LowerRopeLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     UpperRopeLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Location_On_Rope                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_FindSailControlHandIKPositionFromAnimation(const struct FVector& Animation_Hand_IK_Location, const struct FVector& LowerRopeLocation, const struct FVector& UpperRopeLocation, class UObject* __WorldContext, struct FVector* Location_On_Rope)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation");

	UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params params {};
	params.Animation_Hand_IK_Location = Animation_Hand_IK_Location;
	params.LowerRopeLocation = LowerRopeLocation;
	params.UpperRopeLocation = UpperRopeLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location_On_Rope != nullptr)
		*Location_On_Rope = params.Location_On_Rope;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UBlendSpace*>                         TargetArrayBlendspace                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class UBlendSpace*>                         LoadedArrayDataBlendspace                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UBlendSpace*                                 FallbackBlendspace                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_ArrayLoadingFromDataDrivenBlendSpace(TArray<class UBlendSpace*>* TargetArrayBlendspace, TArray<class UBlendSpace*>* LoadedArrayDataBlendspace, class UBlendSpace* FallbackBlendspace, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace");

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params params {};
	params.FallbackBlendspace = FallbackBlendspace;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArrayBlendspace != nullptr)
		*TargetArrayBlendspace = params.TargetArrayBlendspace;
	if (LoadedArrayDataBlendspace != nullptr)
		*LoadedArrayDataBlendspace = params.LoadedArrayDataBlendspace;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UBlendSpace1D*>                       TargetArray_1D                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class UBlendSpace1D*>                       LoadedArrayData_1D                                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UBlendSpace1D*                               FallbackBlendspace1D                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_ArrayLoadingFromDataDriven1DBlendSpace(TArray<class UBlendSpace1D*>* TargetArray_1D, TArray<class UBlendSpace1D*>* LoadedArrayData_1D, class UBlendSpace1D* FallbackBlendspace1D, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace");

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params params {};
	params.FallbackBlendspace1D = FallbackBlendspace1D;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArray_1D != nullptr)
		*TargetArray_1D = params.TargetArray_1D;
	if (LoadedArrayData_1D != nullptr)
		*LoadedArrayData_1D = params.LoadedArrayData_1D;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UAnimSequence*>                       TargetArray                                                (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class UAnimSequence*>                       LoadedArrayData                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class UAnimSequence*                               FallBackAnimation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_ArrayLoadingFromDataDriven(TArray<class UAnimSequence*>* TargetArray, TArray<class UAnimSequence*>* LoadedArrayData, class UAnimSequence* FallBackAnimation, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven");

	UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params params {};
	params.FallBackAnimation = FallBackAnimation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
	if (LoadedArrayData != nullptr)
		*LoadedArrayData = params.LoadedArrayData;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      SkeletalMeshComponent                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EIKLimbName_EIKLimbName>               Limb_ID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Animation_ELimbIKSpace>                Coordinate_Space                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Translation_Strength                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Rotation_Strength                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor)
//		float                                              BlendIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Update_IK_Limb_Controls(class USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName_EIKLimbName> Limb_ID, bool Active, TEnumAsByte<Animation_ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const struct FTransform& Transform, float BlendIn, float BlendOut, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls");

	UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params params {};
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Limb_ID = Limb_ID;
	params.Active = Active;
	params.Coordinate_Space = Coordinate_Space;
	params.Translation_Strength = Translation_Strength;
	params.Rotation_Strength = Rotation_Strength;
	params.Transform = Transform;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		int                                                Decrement                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Decrement_Integer(int* Value, int Decrement, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer");

	UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params params {};
	params.Decrement = Decrement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                integer                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		int                                                Increment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Increment_Integer(int* integer, int Increment, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer");

	UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params params {};
	params.Increment = Increment;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (integer != nullptr)
		*integer = params.integer;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               TurnLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              CurrentControllerYaw                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              PreviousControllerYaw                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FBP_Turning                                 Turning                                                    (Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, float* PreviousControllerYaw, struct FBP_Turning* Turning, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times");

	UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params params {};
	params.TurnLeft = TurnLeft;
	params.CurrentControllerYaw = CurrentControllerYaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PreviousControllerYaw != nullptr)
		*PreviousControllerYaw = params.PreviousControllerYaw;
	if (Turning != nullptr)
		*Turning = params.Turning;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InZone                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FBP_Turning                                 Turning                                                    (Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_LocomotionFunctionLibrary_C::STATIC_InRangeAndRate(bool InZone, float Min, float Max, struct FBP_Turning* Turning, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate");

	UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params params {};
	params.InZone = InZone;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBP_Turning                                 Turning                                                    (Parm, OutParm, ReferenceParm)
//		bool                                               InZone                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Turn_State_Change_Check(struct FBP_Turning* Turning, bool InZone, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check");

	UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params params {};
	params.InZone = InZone;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_LocomotionFunctionLibrary_C::STATIC_Not_In_Range(float Value, float Min, float Max, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range");

	UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params params {};
	params.Value = Value;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBP_Turning                                 Turning                                                    (Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Update_Animation_Turn_State(struct FBP_Turning* Turning, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State");

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params params {};
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               TurningLeft                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              CurrentTurnAngle                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              Reset_Angle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Previous_Controller_Yaw                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              Current_Controller_Yaw                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Animation_Time                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Update_Animation_Turn_Time(bool TurningLeft, float* CurrentTurnAngle, float Reset_Angle, float* Previous_Controller_Yaw, float Current_Controller_Yaw, float* Animation_Time, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time");

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params params {};
	params.TurningLeft = TurningLeft;
	params.Reset_Angle = Reset_Angle;
	params.Current_Controller_Yaw = Current_Controller_Yaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentTurnAngle != nullptr)
		*CurrentTurnAngle = params.CurrentTurnAngle;
	if (Previous_Controller_Yaw != nullptr)
		*Previous_Controller_Yaw = params.Previous_Controller_Yaw;
	if (Animation_Time != nullptr)
		*Animation_Time = params.Animation_Time;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  PlayerCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              MovementSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              FrameDelta                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              JumpImpactTimerMax                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		TEnumAsByte<EJumping_EJumping>                     JumpingState                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              PreImpactTime                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              JumpImpactTimer                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_JumpingLogic(class ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, float* JumpImpactTimerMax, TEnumAsByte<EJumping_EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic");

	UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params params {};
	params.PlayerCharacter = PlayerCharacter;
	params.MovementSpeed = MovementSpeed;
	params.FrameDelta = FrameDelta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (JumpImpactTimerMax != nullptr)
		*JumpImpactTimerMax = params.JumpImpactTimerMax;
	if (JumpingState != nullptr)
		*JumpingState = params.JumpingState;
	if (PreImpactTime != nullptr)
		*PreImpactTime = params.PreImpactTime;
	if (JumpImpactTimer != nullptr)
		*JumpImpactTimer = params.JumpImpactTimer;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BlendCounter                                               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               IKON                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Translation_Strength                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              Rotation_Strength                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Engine_EEasingFunc>                    EaseingType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              BlendMax                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              FrameDeltaTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Ik_Blending(float* BlendCounter, bool IKON, float* Translation_Strength, float* Rotation_Strength, TEnumAsByte<Engine_EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending");

	UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params params {};
	params.IKON = IKON;
	params.EaseingType = EaseingType;
	params.BlendMax = BlendMax;
	params.FrameDeltaTime = FrameDeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlendCounter != nullptr)
		*BlendCounter = params.BlendCounter;
	if (Translation_Strength != nullptr)
		*Translation_Strength = params.Translation_Strength;
	if (Rotation_Strength != nullptr)
		*Rotation_Strength = params.Rotation_Strength;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Counter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              CounterMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Hit_Max_Count                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              IncrementedCounter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Increment_Counter(float Counter, float CounterMax, float DeltaTime, class UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter");

	UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params params {};
	params.Counter = Counter;
	params.CounterMax = CounterMax;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hit_Max_Count != nullptr)
		*Hit_Max_Count = params.Hit_Max_Count;
	if (IncrementedCounter != nullptr)
		*IncrementedCounter = params.IncrementedCounter;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Counter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              CounterMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Hit_Min_Count                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              DecrementedCounter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Decrement_Counter(float Counter, float CounterMin, float DeltaTime, class UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter");

	UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params params {};
	params.Counter = Counter;
	params.CounterMin = CounterMin;
	params.DeltaTime = DeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hit_Min_Count != nullptr)
		*Hit_Min_Count = params.Hit_Min_Count;
	if (DecrementedCounter != nullptr)
		*DecrementedCounter = params.DecrementedCounter;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              MaxTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Engine_EEasingFunc>                    EasingType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Return_Val___0_1                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<Engine_EEasingFunc> EasingType, class UObject* __WorldContext, float* Return_Val___0_1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time");

	UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params params {};
	params.CurrentTime = CurrentTime;
	params.MaxTime = MaxTime;
	params.EasingType = EasingType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Val___0_1 != nullptr)
		*Return_Val___0_1 = params.Return_Val___0_1;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               TurningLeft                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Current_Controller_Yaw                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Previous_Controller_Yaw                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FBP_Turning                                 Turning                                                    (Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, float* Previous_Controller_Yaw, struct FBP_Turning* Turning, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times");

	UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params params {};
	params.TurningLeft = TurningLeft;
	params.Current_Controller_Yaw = Current_Controller_Yaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Previous_Controller_Yaw != nullptr)
		*Previous_Controller_Yaw = params.Previous_Controller_Yaw;
	if (Turning != nullptr)
		*Turning = params.Turning;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               TurningLeft                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              CurrentYaw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              PreviousYaw                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              FrameDeltaTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FBP_Turning                                 Turning                                                    (Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, struct FBP_Turning* Turning, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations");

	UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params params {};
	params.TurningLeft = TurningLeft;
	params.CurrentYaw = CurrentYaw;
	params.PreviousYaw = PreviousYaw;
	params.FrameDeltaTime = FrameDeltaTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              CurrentYaw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              PreviousYaw                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              NewPreviousYaw                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, class UObject* __WorldContext, float* NewPreviousYaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound");

	UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params params {};
	params.CurrentYaw = CurrentYaw;
	params.PreviousYaw = PreviousYaw;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewPreviousYaw != nullptr)
		*NewPreviousYaw = params.NewPreviousYaw;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Direction_A                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Direction_B                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReflexAngle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_ReflexAngleCheck(float Direction_A, float Direction_B, class UObject* __WorldContext, bool* ReflexAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck");

	UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params params {};
	params.Direction_A = Direction_A;
	params.Direction_B = Direction_B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReflexAngle != nullptr)
		*ReflexAngle = params.ReflexAngle;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Pitch                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Yaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_ControllerRotation(class ACharacter* Character, class UObject* __WorldContext, float* Pitch, float* Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation");

	UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params params {};
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pitch != nullptr)
		*Pitch = params.Pitch;
	if (Yaw != nullptr)
		*Yaw = params.Yaw;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_LocomotionFunctionLibrary_C::STATIC_Character_Speed(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Velocity, float* Speed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed");

	UBP_LocomotionFunctionLibrary_C_Character_Speed_Params params {};
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (Speed != nullptr)
		*Speed = params.Speed;

}


void UBP_LocomotionFunctionLibrary_C::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBP_LocomotionFunctionLibrary_C::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
