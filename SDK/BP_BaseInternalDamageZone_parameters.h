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

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted
struct ABP_BaseInternalDamageZone_C_OnRepairMounted_Params
{
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation
struct ABP_BaseInternalDamageZone_C_GetRepairMountLocation_Params
{
	class USceneComponent*                             MountLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       MountSocket;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace
struct ABP_BaseInternalDamageZone_C_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DesiredTooltipWorldPosition;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript
struct ABP_BaseInternalDamageZone_C_UserConstructionScript_Params
{
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay
struct ABP_BaseInternalDamageZone_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone
struct ABP_BaseInternalDamageZone_C_ExecuteUbergraph_BP_BaseInternalDamageZone_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
