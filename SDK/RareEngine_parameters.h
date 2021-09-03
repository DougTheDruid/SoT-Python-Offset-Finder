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

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
struct UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params
{
	int                                                InThreshold;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
struct UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params
{
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareEngine.StallDetector.Deactivate
struct UStallDetector_Deactivate_Params
{
};

// Function RareEngine.StallDetector.CreateStallDetector
struct UStallDetector_CreateStallDetector_Params
{
	float                                              Delay;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CreateActive;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStallDetector*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.StallDetector.Activate
struct UStallDetector_Activate_Params
{
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         MeshFilter;                                                // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FStaticMeshComponentList>            OutComponentLists;                                         // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	class ULevel*                                      RestrictToLevel;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         MeshFilter;                                                // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FStaticMeshActorList>                OutActorLists;                                             // (Parm, OutParm, ZeroConstructor)
	class ULevel*                                      RestrictToLevel;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
