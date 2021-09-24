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

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
struct UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params
{
	int                                                InThreshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
struct UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params
{
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function RareEngine.StallDetector.Deactivate
struct UStallDetector_Deactivate_Params
{
};

// Function RareEngine.StallDetector.CreateStallDetector
struct UStallDetector_CreateStallDetector_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CreateActive;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStallDetector*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.StallDetector.Activate
struct UStallDetector_Activate_Params
{
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         MeshFilter;                                                // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor)
	TArray<struct FStaticMeshComponentList>            OutComponentLists;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	class ULevel*                                      RestrictToLevel;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                         MeshFilter;                                                // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor)
	TArray<struct FStaticMeshActorList>                OutActorLists;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	class ULevel*                                      RestrictToLevel;                                           // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
