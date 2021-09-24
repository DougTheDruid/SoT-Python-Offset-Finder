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
// Parameters
//---------------------------------------------------------------------------

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.DriveValueToClampByDelta
struct UBP_LocomotionFunctionLibrary_C_DriveValueToClampByDelta_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Min;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Max;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delta;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Hit_Min;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Hit_Max;                                                   // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.FindSailControlHandIKPositionFromAnimation
struct UBP_LocomotionFunctionLibrary_C_FindSailControlHandIKPositionFromAnimation_Params
{
	struct FVector                                     Animation_Hand_IK_Location;                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LowerRopeLocation;                                         // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     UpperRopeLocation;                                         // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location_On_Rope;                                          // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDrivenBlendSpace
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDrivenBlendSpace_Params
{
	TArray<class UBlendSpace*>                         TargetArrayBlendspace;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBlendSpace*>                         LoadedArrayDataBlendspace;                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UBlendSpace*                                 FallbackBlendspace;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven1DBlendSpace
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven1DBlendSpace_Params
{
	TArray<class UBlendSpace1D*>                       TargetArray_1D;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UBlendSpace1D*>                       LoadedArrayData_1D;                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UBlendSpace1D*                               FallbackBlendspace1D;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ArrayLoadingFromDataDriven
struct UBP_LocomotionFunctionLibrary_C_ArrayLoadingFromDataDriven_Params
{
	TArray<class UAnimSequence*>                       TargetArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAnimSequence*>                       LoadedArrayData;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAnimSequence*                               FallBackAnimation;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update IK Limb Controls
struct UBP_LocomotionFunctionLibrary_C_Update_IK_Limb_Controls_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<EIKLimbName_EIKLimbName>               Limb_ID;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Active;                                                    // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Animation_ELimbIKSpace>                Coordinate_Space;                                          // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Translation_Strength;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Rotation_Strength;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	float                                              BlendIn;                                                   // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendOut;                                                  // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Integer
struct UBP_LocomotionFunctionLibrary_C_Decrement_Integer_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                Decrement;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Integer
struct UBP_LocomotionFunctionLibrary_C_Increment_Integer_Params
{
	int                                                integer;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                Increment;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Calculate Turn Times
struct UBP_LocomotionFunctionLibrary_C_Calculate_Turn_Times_Params
{
	bool                                               TurnLeft;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CurrentControllerYaw;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PreviousControllerYaw;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FBP_Turning                                 Turning;                                                   // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.InRangeAndRate
struct UBP_LocomotionFunctionLibrary_C_InRangeAndRate_Params
{
	bool                                               InZone;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Min;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Max;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBP_Turning                                 Turning;                                                   // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Turn State Change Check
struct UBP_LocomotionFunctionLibrary_C_Turn_State_Change_Check_Params
{
	struct FBP_Turning                                 Turning;                                                   // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
	bool                                               InZone;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Not In Range
struct UBP_LocomotionFunctionLibrary_C_Not_In_Range_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Min;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Max;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn State
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_State_Params
{
	struct FBP_Turning                                 Turning;                                                   // 0x0000(0x0018)  (Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Turn Time
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Turn_Time_Params
{
	bool                                               TurningLeft;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CurrentTurnAngle;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Reset_Angle;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Previous_Controller_Yaw;                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Current_Controller_Yaw;                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Animation_Time;                                            // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.JumpingLogic
struct UBP_LocomotionFunctionLibrary_C_JumpingLogic_Params
{
	class ACharacter*                                  PlayerCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MovementSpeed;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FrameDelta;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              JumpImpactTimerMax;                                        // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TEnumAsByte<EJumping_EJumping>                     JumpingState;                                              // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              PreImpactTime;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              JumpImpactTimer;                                           // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Ik Blending
struct UBP_LocomotionFunctionLibrary_C_Ik_Blending_Params
{
	float                                              BlendCounter;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               IKON;                                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Translation_Strength;                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              Rotation_Strength;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EEasingFunc>                    EaseingType;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendMax;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FrameDeltaTime;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Increment Counter
struct UBP_LocomotionFunctionLibrary_C_Increment_Counter_Params
{
	float                                              Counter;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CounterMax;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Hit_Max_Count;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              IncrementedCounter;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Decrement Counter
struct UBP_LocomotionFunctionLibrary_C_Decrement_Counter_Params
{
	float                                              Counter;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CounterMin;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Hit_Min_Count;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DecrementedCounter;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Out Over Time
struct UBP_LocomotionFunctionLibrary_C_Out_Over_Time_Params
{
	float                                              CurrentTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxTime;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_EEasingFunc>                    EasingType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Return_Val___0_1;                                          // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Animation Times
struct UBP_LocomotionFunctionLibrary_C_Update_Animation_Times_Params
{
	bool                                               TurningLeft;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Current_Controller_Yaw;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Previous_Controller_Yaw;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FBP_Turning                                 Turning;                                                   // 0x000C(0x0018)  (Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Update Turn Animations
struct UBP_LocomotionFunctionLibrary_C_Update_Turn_Animations_Params
{
	bool                                               TurningLeft;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CurrentYaw;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PreviousYaw;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FrameDeltaTime;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FBP_Turning                                 Turning;                                                   // 0x0010(0x0018)  (Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Fix Yaw Wraparound
struct UBP_LocomotionFunctionLibrary_C_Fix_Yaw_Wraparound_Params
{
	float                                              CurrentYaw;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PreviousYaw;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NewPreviousYaw;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ReflexAngleCheck
struct UBP_LocomotionFunctionLibrary_C_ReflexAngleCheck_Params
{
	float                                              Direction_A;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Direction_B;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReflexAngle;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.ControllerRotation
struct UBP_LocomotionFunctionLibrary_C_ControllerRotation_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Pitch;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Yaw;                                                       // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C.Character Speed
struct UBP_LocomotionFunctionLibrary_C_Character_Speed_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Velocity;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Speed;                                                     // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
