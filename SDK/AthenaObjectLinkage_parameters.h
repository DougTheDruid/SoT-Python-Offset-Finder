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

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
struct UEndPlayHandler_OnEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
struct ULinkEndpointIdUtilities_IsValid_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
struct ULinkEndpointIdUtilities_IsPathed_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
struct ULinkEndpointIdUtilities_CreateEndpointId_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
struct ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
struct ULinkEndpointIdUtilities_CombineEndpointIds_Params
{
	struct FLinkEndpointId                             Root;                                                      // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             path;                                                      // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
struct ULinkEndpointInterface_ReceiveLink_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (Parm)
	class AActor*                                      Instance;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
struct ULinkEndpointInterface_LoseLink_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (Parm)
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
struct ULinkerComponent_UnregisterLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             TargetID;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
struct ULinkerComponent_UnregisterEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.SetParent
struct ULinkerComponent_SetParent_Params
{
	class AActor*                                      Parent;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
struct ULinkerComponent_RegisterLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FLinkEndpointId                             TargetID;                                                  // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<AthenaObjectLinkage_EAddLinkResult>    ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
struct ULinkerComponent_RegisterEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Source;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaObjectLinkage_EAddEndpointResult> ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
struct ULinkerComponent_OnEndpointRemovedFromChild_Params
{
	class AActor*                                      Child;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
struct ULinkerComponent_OnEndpointAddedToChild_Params
{
	class AActor*                                      Child;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Instance;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
struct ULinkerComponent_LookupEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
struct ULinkerComponent_GetNumSetLinks_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
struct ULinkerComponent_GetNumRegisteredLinks_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
struct ULinkerComponent_GetNumRegisteredEndpoints_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
struct ULinkerComponent_GetNumPendingLinks_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.SetParent
struct ULinkerInterface_SetParent_Params
{
	class AActor*                                      Parent;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
struct ULinkerInterface_RemoveLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // 0x0000(0x0008)  (Parm)
	struct FLinkEndpointId                             TargetID;                                                  // 0x0008(0x0008)  (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
struct ULinkerInterface_RemoveEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
struct ULinkerInterface_OnEndpointRemovedFromChild_Params
{
	class AActor*                                      Child;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // 0x0008(0x0008)  (Parm)
};

// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
struct ULinkerInterface_OnEndpointAddedToChild_Params
{
	class AActor*                                      Child;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinkEndpointId                             Id;                                                        // 0x0008(0x0008)  (Parm)
	class AActor*                                      Instance;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
struct ULinkerInterface_LookupEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (Parm)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaObjectLinkage.LinkerInterface.AddLink
struct ULinkerInterface_AddLink_Params
{
	struct FLinkEndpointId                             SourceId;                                                  // 0x0000(0x0008)  (Parm)
	struct FLinkEndpointId                             TargetID;                                                  // 0x0008(0x0008)  (Parm)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
struct ULinkerInterface_AddEndpoint_Params
{
	struct FLinkEndpointId                             Id;                                                        // 0x0000(0x0008)  (Parm)
	class AActor*                                      Instance;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
