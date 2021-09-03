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

// Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPosBasisSpace
struct ABP_CapstanArm_C_GetLookAtPosBasisSpace_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector
struct ABP_CapstanArm_C_GetFrontFacingVector_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront
struct ABP_CapstanArm_C_DoesRequireFacingFront_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo
struct ABP_CapstanArm_C_GetDockableInfo_Params
{
	struct FDockableInfo                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint
struct ABP_CapstanArm_C_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos
struct ABP_CapstanArm_C_GetLookAtPos_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript
struct ABP_CapstanArm_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
