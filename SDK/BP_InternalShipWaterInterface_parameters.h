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
// Parameters
//---------------------------------------------------------------------------

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
struct UBP_InternalShipWaterInterface_C_GetLineIntersectionFromPlane_Params
{
	struct FVector                                     LineStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LineEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Intersect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     IntersectionPoint;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane
struct UBP_InternalShipWaterInterface_C_GetDistanceFromPlane_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel
struct UBP_InternalShipWaterInterface_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater
struct UBP_InternalShipWaterInterface_C_AddWater_Params
{
	float                                              Water_Amount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
