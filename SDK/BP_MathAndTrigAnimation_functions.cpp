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
//		Name   -> Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAthenaCharacter*                            Athena_Character                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MathAndTrigAnimation_C::STATIC_DisplayAllCharacterSockets(class AAthenaCharacter* Athena_Character, float Size, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DisplayAllCharacterSockets");

	UBP_MathAndTrigAnimation_C_DisplayAllCharacterSockets_Params params {};
	params.Athena_Character = Athena_Character;
	params.Size = Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              DecrementValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MathAndTrigAnimation_C::STATIC_DecrementFloat(float* Float, float DecrementValue, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.DecrementFloat");

	UBP_MathAndTrigAnimation_C_DecrementFloat_Params params {};
	params.DecrementValue = DecrementValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              Incement_Value                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MathAndTrigAnimation_C::STATIC_Increment_Float(float* Float, float Incement_Value, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Increment Float");

	UBP_MathAndTrigAnimation_C_Increment_Float_Params params {};
	params.Incement_Value = Incement_Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  RelativeTransform                                          (Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  BaseTransform                                              (Parm, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  CombinedTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBP_MathAndTrigAnimation_C::STATIC_Apply_Relative_Transform(const struct FTransform& RelativeTransform, const struct FTransform& BaseTransform, class UObject* __WorldContext, struct FTransform* CombinedTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Apply Relative Transform");

	UBP_MathAndTrigAnimation_C_Apply_Relative_Transform_Params params {};
	params.RelativeTransform = RelativeTransform;
	params.BaseTransform = BaseTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CombinedTransform != nullptr)
		*CombinedTransform = params.CombinedTransform;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  RelativeObjectsWorldTransform                              (Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  BaseObjectsWorldTransform                                  (Parm, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTransform                                  RealtiveOffsetTransform                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBP_MathAndTrigAnimation_C::STATIC_Calculate_Relative_Transform(const struct FTransform& RelativeObjectsWorldTransform, const struct FTransform& BaseObjectsWorldTransform, class UObject* __WorldContext, struct FTransform* RealtiveOffsetTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MathAndTrigAnimation.BP_MathAndTrigAnimation_C.Calculate Relative Transform");

	UBP_MathAndTrigAnimation_C_Calculate_Relative_Transform_Params params {};
	params.RelativeObjectsWorldTransform = RelativeObjectsWorldTransform;
	params.BaseObjectsWorldTransform = BaseObjectsWorldTransform;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RealtiveOffsetTransform != nullptr)
		*RealtiveOffsetTransform = params.RealtiveOffsetTransform;

}


void UBP_MathAndTrigAnimation_C::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBP_MathAndTrigAnimation_C::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
