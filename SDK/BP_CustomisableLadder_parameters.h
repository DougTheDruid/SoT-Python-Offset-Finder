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

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetDockableInfo
struct ABP_CustomisableLadder_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Construct Ladder
struct ABP_CustomisableLadder_C_Construct_Ladder_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Total Height Before Cap
struct ABP_CustomisableLadder_C_Get_Total_Height_Before_Cap_Params
{
	float                                              Height;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get Steps
struct ABP_CustomisableLadder_C_Get_Steps_Params
{
	int                                                Num_Steps;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetBottomLadderRungTransform
struct ABP_CustomisableLadder_C_GetBottomLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.GetTopLadderRungTransform
struct ABP_CustomisableLadder_C_GetTopLadderRungTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.Get World Loc at Height Along Z
struct ABP_CustomisableLadder_C_Get_World_Loc_at_Height_Along_Z_Params
{
	float                                              Relative_Z;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Return_Value;                                              // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.SetupSpline
struct ABP_CustomisableLadder_C_SetupSpline_Params
{
	class USplineComponent*                            Spline_Component;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Positions;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.UserConstructionScript
struct ABP_CustomisableLadder_C_UserConstructionScript_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.ReceiveBeginPlay
struct ABP_CustomisableLadder_C_ReceiveBeginPlay_Params
{
};

// Function BP_CustomisableLadder.BP_CustomisableLadder_C.ExecuteUbergraph_BP_CustomisableLadder
struct ABP_CustomisableLadder_C_ExecuteUbergraph_BP_CustomisableLadder_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
