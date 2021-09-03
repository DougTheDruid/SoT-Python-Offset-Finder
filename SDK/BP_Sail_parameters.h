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

// Function BP_Sail.BP_Sail_C.Debug
struct ABP_Sail_C_Debug_Params
{
};

// Function BP_Sail.BP_Sail_C.Initialise
struct ABP_Sail_C_Initialise_Params
{
	bool                                               IsMainSail;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SailForceScalar;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Sail.BP_Sail_C.UserConstructionScript
struct ABP_Sail_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
