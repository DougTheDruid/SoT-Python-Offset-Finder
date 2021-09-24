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
//		Name   -> Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     LineEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Intersect                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     IntersectionPoint                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_InternalShipWaterInterface_C::GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane");

	UBP_InternalShipWaterInterface_C_GetLineIntersectionFromPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Intersect != nullptr)
		*Intersect = params.Intersect;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_InternalShipWaterInterface_C::GetDistanceFromPlane(const struct FVector& Location, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane");

	UBP_InternalShipWaterInterface_C_GetDistanceFromPlane_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              WaterLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_InternalShipWaterInterface_C::GetWaterLevel(float* WaterLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel");

	UBP_InternalShipWaterInterface_C_GetWaterLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WaterLevel != nullptr)
		*WaterLevel = params.WaterLevel;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Water_Amount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_InternalShipWaterInterface_C::AddWater(float Water_Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater");

	UBP_InternalShipWaterInterface_C_AddWater_Params params;
	params.Water_Amount = Water_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_InternalShipWaterInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBP_InternalShipWaterInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
