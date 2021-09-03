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

// BlueprintGeneratedClass BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_LocomotionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LocomotionFunctionLibrary.BP_LocomotionFunctionLibrary_C");
		return ptr;
	}



	void STATIC_DriveValueToClampByDelta(float* Value, float Min, float Max, float Delta, class UObject* __WorldContext, bool* Hit_Min, bool* Hit_Max);
	void STATIC_FindSailControlHandIKPositionFromAnimation(const struct FVector& Animation_Hand_IK_Location, const struct FVector& LowerRopeLocation, const struct FVector& UpperRopeLocation, class UObject* __WorldContext, struct FVector* Location_On_Rope);
	void STATIC_ArrayLoadingFromDataDrivenBlendSpace(TArray<class UBlendSpace*>* TargetArrayBlendspace, TArray<class UBlendSpace*>* LoadedArrayDataBlendspace, class UBlendSpace* FallbackBlendspace, class UObject* __WorldContext);
	void STATIC_ArrayLoadingFromDataDriven1DBlendSpace(TArray<class UBlendSpace1D*>* TargetArray_1D, TArray<class UBlendSpace1D*>* LoadedArrayData_1D, class UBlendSpace1D* FallbackBlendspace1D, class UObject* __WorldContext);
	void STATIC_ArrayLoadingFromDataDriven(TArray<class UAnimSequence*>* TargetArray, TArray<class UAnimSequence*>* LoadedArrayData, class UAnimSequence* FallBackAnimation, class UObject* __WorldContext);
	void STATIC_Update_IK_Limb_Controls(class USkeletalMeshComponent* SkeletalMeshComponent, TEnumAsByte<EIKLimbName_EIKLimbName> Limb_ID, bool Active, TEnumAsByte<Animation_ELimbIKSpace> Coordinate_Space, float Translation_Strength, float Rotation_Strength, const struct FTransform& Transform, float BlendIn, float BlendOut, class UObject* __WorldContext);
	void STATIC_Decrement_Integer(int* Value, int Decrement, class UObject* __WorldContext);
	void STATIC_Increment_Integer(int* integer, int Increment, class UObject* __WorldContext);
	void STATIC_Calculate_Turn_Times(bool TurnLeft, float CurrentControllerYaw, float* PreviousControllerYaw, struct FBP_Turning* Turning, class UObject* __WorldContext);
	bool STATIC_InRangeAndRate(bool InZone, float Min, float Max, struct FBP_Turning* Turning, class UObject* __WorldContext);
	void STATIC_Turn_State_Change_Check(struct FBP_Turning* Turning, bool InZone, class UObject* __WorldContext);
	bool STATIC_Not_In_Range(float Value, float Min, float Max, class UObject* __WorldContext);
	void STATIC_Update_Animation_Turn_State(struct FBP_Turning* Turning, class UObject* __WorldContext);
	void STATIC_Update_Animation_Turn_Time(bool TurningLeft, float* CurrentTurnAngle, float Reset_Angle, float* Previous_Controller_Yaw, float Current_Controller_Yaw, float* Animation_Time, class UObject* __WorldContext);
	void STATIC_JumpingLogic(class ACharacter* PlayerCharacter, float MovementSpeed, float FrameDelta, float* JumpImpactTimerMax, TEnumAsByte<EJumping_EJumping>* JumpingState, float* PreImpactTime, float* JumpImpactTimer, class UObject* __WorldContext);
	void STATIC_Ik_Blending(float* BlendCounter, bool IKON, float* Translation_Strength, float* Rotation_Strength, TEnumAsByte<Engine_EEasingFunc> EaseingType, float BlendMax, float FrameDeltaTime, class UObject* __WorldContext);
	void STATIC_Increment_Counter(float Counter, float CounterMax, float DeltaTime, class UObject* __WorldContext, bool* Hit_Max_Count, float* IncrementedCounter);
	void STATIC_Decrement_Counter(float Counter, float CounterMin, float DeltaTime, class UObject* __WorldContext, bool* Hit_Min_Count, float* DecrementedCounter);
	void STATIC_Out_Over_Time(float CurrentTime, float MaxTime, TEnumAsByte<Engine_EEasingFunc> EasingType, class UObject* __WorldContext, float* Return_Val___0_1);
	void STATIC_Update_Animation_Times(bool TurningLeft, float Current_Controller_Yaw, float* Previous_Controller_Yaw, struct FBP_Turning* Turning, class UObject* __WorldContext);
	void STATIC_Update_Turn_Animations(bool TurningLeft, float CurrentYaw, float PreviousYaw, float FrameDeltaTime, struct FBP_Turning* Turning, class UObject* __WorldContext);
	void STATIC_Fix_Yaw_Wraparound(float CurrentYaw, float PreviousYaw, class UObject* __WorldContext, float* NewPreviousYaw);
	void STATIC_ReflexAngleCheck(float Direction_A, float Direction_B, class UObject* __WorldContext, bool* ReflexAngle);
	void STATIC_ControllerRotation(class ACharacter* Character, class UObject* __WorldContext, float* Pitch, float* Yaw);
	void STATIC_Character_Speed(class ACharacter* Character, class UObject* __WorldContext, struct FVector* Velocity, float* Speed);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
