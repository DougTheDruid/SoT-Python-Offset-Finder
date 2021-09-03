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

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
struct UEndPlayHandler_OnEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
struct ULinkEndpointIdUtilities_IsValid_Params
{
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
struct ULinkEndpointIdUtilities_IsPathed_Params
{
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
struct ULinkEndpointIdUtilities_CreateEndpointId_Params
{
	struct FString                                     String;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
struct ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params
{
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
struct ULinkEndpointIdUtilities_CombineEndpointIds_Params
{
	struct FLinkEndpointId                             Root;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             path;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
struct ULinkEndpointInterface_ReceiveLink_Params
{
	struct FLinkEndpointId                             Id;                                                        // (Parm)
	class AActor*                                      Instance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
struct ULinkEndpointInterface_LoseLink_Params
{
	struct FLinkEndpointId                             Id;                                                        // (Parm)
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
struct ULinkerComponent_UnregisterLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             TargetID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
struct ULinkerComponent_UnregisterEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.SetParent
struct ULinkerComponent_SetParent_Params
{
	class AActor*                                      Parent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
struct ULinkerComponent_RegisterLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             TargetID;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<AthenaObjectLinkage_EAddLinkResult>    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
struct ULinkerComponent_RegisterEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaObjectLinkage_EAddEndpointResult> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
struct ULinkerComponent_OnEndpointRemovedFromChild_Params
{
	class AActor*                                      Child;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
struct ULinkerComponent_OnEndpointAddedToChild_Params
{
	class AActor*                                      Child;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Instance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
struct ULinkerComponent_LookupEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
struct ULinkerComponent_GetNumSetLinks_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
struct ULinkerComponent_GetNumRegisteredLinks_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
struct ULinkerComponent_GetNumRegisteredEndpoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
struct ULinkerComponent_GetNumPendingLinks_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.SetParent
struct ULinkerInterface_SetParent_Params
{
	class AActor*                                      Parent;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
struct ULinkerInterface_RemoveLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // (Parm)
	struct FLinkEndpointId                             TargetID;                                                  // (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
struct ULinkerInterface_RemoveEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
struct ULinkerInterface_OnEndpointRemovedFromChild_Params
{
	class AActor*                                      Child;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
struct ULinkerInterface_OnEndpointAddedToChild_Params
{
	class AActor*                                      Child;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // (Parm)
	class AActor*                                      Instance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
struct ULinkerInterface_LookupEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // (Parm)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.AddLink
struct ULinkerInterface_AddLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // (Parm)
	struct FLinkEndpointId                             TargetID;                                                  // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
struct ULinkerInterface_AddEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // (Parm)
	class AActor*                                      Instance;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
