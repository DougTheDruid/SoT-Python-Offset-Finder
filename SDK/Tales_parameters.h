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

// Function Tales.TaleQuestStep.Signal
struct UTaleQuestStep_Signal_Params
{
};

// Function Tales.TaleQuestCargoRunContractsService.GetContract
struct UTaleQuestCargoRunContractsService_GetContract_Params
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTaleQuestCargoRunContract*                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestCargoRunContractsService.AddContract
struct UTaleQuestCargoRunContractsService_AddContract_Params
{
	TArray<class UClass*>                              InItems;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, UObjectWrapper)
	class AActor*                                      InCollectFromNPC;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InDeliverToNPC;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InTimeLimitInMinutes;                                      // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ReturnValue;                                               // 0x0024(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tales.TaleQuestMerchantContractsService.GetContract
struct UTaleQuestMerchantContractsService_GetContract_Params
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTaleQuestMerchantContract*                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestMerchantContractsService.AddContract
struct UTaleQuestMerchantContractsService_AddContract_Params
{
	TArray<struct FTaleQuestDeliveryRequest>           Requests;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       InDeliveryDestination;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeLimit;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       ReturnValue;                                               // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params
{
	int                                                Seed;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params
{
};

// Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
struct UCutsceneResponsesTaleService_TrackResponseCoordinator_Params
{
	class UCutsceneResponseCoordinator*                Coordinator;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
struct UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ResponseSheetClass;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCutsceneResponseSheet*                      ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
struct UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params
{
};

// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
struct UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
struct UTaleQuestSelectorService_GetRandomIntegerInRange_Params
{
	int                                                Minimum;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Maximum;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tales.TaleQuestMapService.UpdateMerchantMap
struct UTaleQuestMapService_UpdateMerchantMap_Params
{
	struct FName                                       MapId;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTaleQuestDeliverableItem                   Deliverable;                                               // 0x0010(0x0040)  (Parm)
};

// Function Tales.TaleQuestMapService.AdvanceRiddleMap
struct UTaleQuestMapService_AdvanceRiddleMap_Params
{
	struct FName                                       MapId;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
