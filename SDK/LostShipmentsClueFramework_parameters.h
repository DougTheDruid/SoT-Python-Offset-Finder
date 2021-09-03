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

// Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
struct UClueDestinationDescriptor_OnRep_DestinationInfo_Params
{
};

// Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
struct UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params
{
	class UClueConnectionConfig*                       ConnectionConfiguration;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Difficulty;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              AllowedClueTypes;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	class UTaleQuestSelectorService*                   SelectorService;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SourceLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FClueSite                                   TargetSite;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClueDescriptor*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
struct UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params
{
	class AActor*                                      Participant;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClueDescriptor*                             Clue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClueSite;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
struct UTaleQuestClueSiteService_GetClueSites_Params
{
	TArray<struct FClueSite>                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
