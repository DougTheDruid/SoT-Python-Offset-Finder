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

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
struct UInstancedRopeComponent_SetUnderwater_Params
{
	bool                                               Underwater;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaRigging.InstancedRopeComponent.SetRopes
struct UInstancedRopeComponent_SetRopes_Params
{
	TArray<struct FInstancedRopeParams>                InRopes;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
struct URiggingSystemComponent_SetSocketLookupSource_Params
{
	class AActor*                                      InSocketSource;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
struct URiggingSystemComponent_ConvertLineToRopeIndex_Params
{
	struct FName                                       InLineGroupName;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InLineOffset;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaRigging.RopeInterface.SetRopeUVOffset
struct URopeInterface_SetRopeUVOffset_Params
{
	float                                              InUVOffset;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaRigging.RopeInterface.SetRopeEndpoints
struct URopeInterface_SetRopeEndpoints_Params
{
	struct FVector                                     InWorldSpaceStart;                                         // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     InWorldSpaceEnd;                                           // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
