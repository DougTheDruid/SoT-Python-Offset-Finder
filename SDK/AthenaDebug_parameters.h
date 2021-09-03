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

// Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged
struct ADrawDebugService_OnRep_PersistentShapeChanged_Params
{
};

// Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged
struct ADrawDebugService_OnRep_IsDrawDebugActiveChanged_Params
{
};

// Function AthenaDebug.DrawDebugService.Multicast_ClearGroup
struct ADrawDebugService_Multicast_ClearGroup_Params
{
	struct FName                                       GroupName;                                                 // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaDebug.DrawDebugService.Multicast_AddStrings
struct ADrawDebugService_Multicast_AddStrings_Params
{
	TArray<struct FDrawDebugItemString>                Strings;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDebug.DrawDebugService.Multicast_AddSpheres
struct ADrawDebugService_Multicast_AddSpheres_Params
{
	TArray<struct FDrawDebugItemSphere>                Spheres;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDebug.DrawDebugService.Multicast_AddSectors
struct ADrawDebugService_Multicast_AddSectors_Params
{
	TArray<struct FDrawDebugItemSector>                Sectors;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDebug.DrawDebugService.Multicast_AddLines
struct ADrawDebugService_Multicast_AddLines_Params
{
	TArray<struct FDrawDebugItemLine>                  Lines;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDebug.DrawDebugService.Multicast_AddCapsules
struct ADrawDebugService_Multicast_AddCapsules_Params
{
	TArray<struct FDrawDebugItemCapsule>               Capsules;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDebug.DrawDebugService.Multicast_AddBoxes
struct ADrawDebugService_Multicast_AddBoxes_Params
{
	TArray<struct FDrawDebugItemBox>                   Boxes;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
