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

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.GetDockableInfo
struct ABP_LargeShipLadderMainMast_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.Setup Spline
struct ABP_LargeShipLadderMainMast_C_Setup_Spline_Params
{
	class USplineComponent*                            Spline;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Positions;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.CanInteract
struct ABP_LargeShipLadderMainMast_C_CanInteract_Params
{
	class AActor*                                      InInteractor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LargeShipLadderMainMast.BP_LargeShipLadderMainMast_C.UserConstructionScript
struct ABP_LargeShipLadderMainMast_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
