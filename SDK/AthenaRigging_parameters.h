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

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
struct UInstancedRopeComponent_SetUnderwater_Params
{
	bool                                               Underwater;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AthenaRigging.InstancedRopeComponent.SetRopes
struct UInstancedRopeComponent_SetRopes_Params
{
	TArray<struct FInstancedRopeParams>                InRopes;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
struct URiggingSystemComponent_SetSocketLookupSource_Params
{
	class AActor*                                      InSocketSource;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
struct URiggingSystemComponent_ConvertLineToRopeIndex_Params
{
	struct FName                                       InLineGroupName;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InLineOffset;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaRigging.RopeInterface.SetRopeUVOffset
struct URopeInterface_SetRopeUVOffset_Params
{
	float                                              InUVOffset;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaRigging.RopeInterface.SetRopeEndpoints
struct URopeInterface_SetRopeEndpoints_Params
{
	struct FVector                                     InWorldSpaceStart;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     InWorldSpaceEnd;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
