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

// Function Tales.TaleQuestCargoRunContractsService.GetContract
struct UTaleQuestCargoRunContractsService_GetContract_Params
{
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTaleQuestCargoRunContract*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestCargoRunContractsService.AddContract
struct UTaleQuestCargoRunContractsService_AddContract_Params
{
	TArray<class UClass*>                              InItems;                                                   // (Parm, ZeroConstructor, UObjectWrapper)
	class AActor*                                      InCollectFromNPC;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InDeliverToNPC;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InTimeLimitInMinutes;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tales.TaleQuestMerchantContractsService.GetContract
struct UTaleQuestMerchantContractsService_GetContract_Params
{
	struct FGuid                                       Guid;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTaleQuestMerchantContract*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestMerchantContractsService.AddContract
struct UTaleQuestMerchantContractsService_AddContract_Params
{
	TArray<struct FTaleQuestDeliveryRequest>           Requests;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       InDeliveryDestination;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeLimit;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params
{
	int                                                Seed;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params
{
};

// Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
struct UCutsceneResponsesTaleService_TrackResponseCoordinator_Params
{
	class UCutsceneResponseCoordinator*                Coordinator;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
struct UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ResponseSheetClass;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCutsceneResponseSheet*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
struct UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params
{
};

// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
struct UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
struct UTaleQuestSelectorService_GetRandomIntegerInRange_Params
{
	int                                                Minimum;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Maximum;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestMapService.UpdateMerchantMap
struct UTaleQuestMapService_UpdateMerchantMap_Params
{
	struct FName                                       MapId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTaleQuestDeliverableItem                   Deliverable;                                               // (Parm)
};

// Function Tales.TaleQuestMapService.AdvanceRiddleMap
struct UTaleQuestMapService_AdvanceRiddleMap_Params
{
	struct FName                                       MapId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
