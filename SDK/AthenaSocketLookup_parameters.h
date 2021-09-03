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

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
struct USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params
{
	struct FString                                     InPath;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSocketId                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
struct USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params
{
	struct FName                                       InSocketName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
struct USocketIdTestFunctions_MakeSocketId_Params
{
	struct FString                                     InPath;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FName                                       InSocketName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
struct USocketLookupCacheTestFunctions_IsInCache_Params
{
	struct FSocketLookupCache                          InCache;                                                   // (Parm, OutParm, ReferenceParm)
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
struct USocketLookupCacheTestFunctions_AddToCache_Params
{
	struct FSocketLookupCache                          InCache;                                                   // (Parm, OutParm, ReferenceParm)
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm)
	class USceneComponent*                             InSceneComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
struct USocketLookupFunctions_TryGetSocketTransformWithCache_Params
{
	struct FSocketLookupCache                          Cache;                                                     // (Parm, OutParm, ReferenceParm)
	class AActor*                                      InActor;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
struct USocketLookupFunctions_TryGetSocketTransform_Params
{
	class AActor*                                      InActor;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ERelativeTransformSpace>        Space;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
struct USocketLookupFunctions_TryGetRelativeSocketTransform_Params
{
	class AActor*                                      InActor;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             RelativeTo;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
struct USocketLookupFunctions_TryFindSocketOwner_Params
{
	class AActor*                                      InActor;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
struct USocketLookupInterface_FindSocket_Params
{
	struct FSocketId                                   InSocketId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                              // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
