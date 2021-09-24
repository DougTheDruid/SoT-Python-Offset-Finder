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

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
struct UBP_InternalShipWaterInterface_C_GetLineIntersectionFromPlane_Params
{
	struct FVector                                     LineStart;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LineEnd;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Intersect;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     IntersectionPoint;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane
struct UBP_InternalShipWaterInterface_C_GetDistanceFromPlane_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Distance;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel
struct UBP_InternalShipWaterInterface_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater
struct UBP_InternalShipWaterInterface_C_AddWater_Params
{
	float                                              Water_Amount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
