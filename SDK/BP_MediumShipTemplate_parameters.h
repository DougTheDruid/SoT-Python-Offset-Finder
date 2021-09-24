#pragma once

// Name: SoT, Version: 2.3.0.Brig


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

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.GetPxActorCapacityForPhysXAggregate
struct ABP_MediumShipTemplate_C_GetPxActorCapacityForPhysXAggregate_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.SetupMastControls
struct ABP_MediumShipTemplate_C_SetupMastControls_Params
{
	class UChildActorComponent*                        LeftHoist;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChildActorComponent*                        RightHoist;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChildActorComponent*                        LeftAngle;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UChildActorComponent*                        RightAngle;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       RiggingGroupName;                                          // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MediumShipTemplate.BP_MediumShipTemplate_C.UserConstructionScript
struct ABP_MediumShipTemplate_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
