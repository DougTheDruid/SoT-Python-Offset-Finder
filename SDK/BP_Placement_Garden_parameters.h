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

// Function BP_Placement_Garden.BP_Placement_Garden_C.Set Garden Parameters
struct ABP_Placement_Garden_C_Set_Garden_Parameters_Params
{
	float                                              Radius;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Int;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Instances_Created;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Create Garden
struct ABP_Placement_Garden_C_Create_Garden_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Initialise Instances
struct ABP_Placement_Garden_C_Initialise_Instances_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.UserConstructionScript
struct ABP_Placement_Garden_C_UserConstructionScript_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.Force Create Garden
struct ABP_Placement_Garden_C_Force_Create_Garden_Params
{
};

// Function BP_Placement_Garden.BP_Placement_Garden_C.ExecuteUbergraph_BP_Placement_Garden
struct ABP_Placement_Garden_C_ExecuteUbergraph_BP_Placement_Garden_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
