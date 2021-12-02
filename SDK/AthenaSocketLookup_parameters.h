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

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithInvalidName
struct USocketIdTestFunctions_MakeSocketIdWithInvalidName_Params
{
	struct FString                                     InPath;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSocketId                                   ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketIdWithEmptyPath
struct USocketIdTestFunctions_MakeSocketIdWithEmptyPath_Params
{
	struct FName                                       InSocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   ReturnValue;                                               // 0x0008(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketIdTestFunctions.MakeSocketId
struct USocketIdTestFunctions_MakeSocketId_Params
{
	struct FString                                     InPath;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FName                                       InSocketName;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   ReturnValue;                                               // 0x0018(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.IsInCache
struct USocketLookupCacheTestFunctions_IsInCache_Params
{
	struct FSocketLookupCache                          InCache;                                                   // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm)
	struct FSocketId                                   InSocketId;                                                // 0x0050(0x0020)  (ConstParm, Parm)
	bool                                               ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupCacheTestFunctions.AddToCache
struct USocketLookupCacheTestFunctions_AddToCache_Params
{
	struct FSocketLookupCache                          InCache;                                                   // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm)
	struct FSocketId                                   InSocketId;                                                // 0x0050(0x0020)  (ConstParm, Parm)
	class USceneComponent*                             InSceneComponent;                                          // 0x0070(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransformWithCache
struct USocketLookupFunctions_TryGetSocketTransformWithCache_Params
{
	struct FSocketLookupCache                          Cache;                                                     // 0x0000(0x0050)  (Parm, OutParm, ReferenceParm)
	class AActor*                                      InActor;                                                   // 0x0050(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // 0x0058(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                              // 0x0080(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetSocketTransform
struct USocketLookupFunctions_TryGetSocketTransform_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                              // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ERelativeTransformSpace>        Space;                                                     // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryGetRelativeSocketTransform
struct USocketLookupFunctions_TryGetRelativeSocketTransform_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             RelativeTo;                                                // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  OutTransform;                                              // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AthenaSocketLookup.SocketLookupFunctions.TryFindSocketOwner
struct USocketLookupFunctions_TryFindSocketOwner_Params
{
	class AActor*                                      InActor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSocketId                                   InSocketId;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	class USceneComponent*                             ReturnValue;                                               // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AthenaSocketLookup.SocketLookupInterface.FindSocket
struct USocketLookupInterface_FindSocket_Params
{
	struct FSocketId                                   InSocketId;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutTransform;                                              // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
