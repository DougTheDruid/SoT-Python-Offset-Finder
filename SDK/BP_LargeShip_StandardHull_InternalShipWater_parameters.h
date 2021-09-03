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

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
struct ABP_LargeShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params
{
	struct FVector                                     LineStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LineEnd;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Intersect;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     IntersectionPoint;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetWaterLevel
struct ABP_LargeShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
struct ABP_LargeShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.UserConstructionScript
struct ABP_LargeShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params
{
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.AddWater
struct ABP_LargeShip_StandardHull_InternalShipWater_C_AddWater_Params
{
	float                                              Water_Amount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
struct ABP_LargeShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params
{
};

// Function BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater
struct ABP_LargeShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
