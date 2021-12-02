#pragma once

// Name: SoT, Version: 2.4.0


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

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
struct ABP_MediumShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params
{
	struct FVector                                     LineStart;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LineEnd;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Intersect;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     IntersectionPoint;                                         // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.GetWaterLevel
struct ABP_MediumShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params
{
	float                                              WaterLevel;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
struct ABP_MediumShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Distance;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.UserConstructionScript
struct ABP_MediumShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params
{
};

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.AddWater
struct ABP_MediumShip_StandardHull_InternalShipWater_C_AddWater_Params
{
	float                                              Water_Amount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
struct ABP_MediumShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params
{
};

// Function BP_MediumShip_StandardHull_InternalShipWater.BP_MediumShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_MediumShip_StandardHull_InternalShipWater
struct ABP_MediumShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_MediumShip_StandardHull_InternalShipWater_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
