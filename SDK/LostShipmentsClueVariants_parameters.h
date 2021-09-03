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

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
struct UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params
{
};

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
struct UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params
{
};

// Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
struct AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params
{
};

// Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
struct UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params
{
	class AItemInfo*                                   ItemInfo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClueDescriptor*                             Clue;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
struct UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params
{
};

// Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
struct UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params
{
	class UClueDescriptor*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
struct UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params
{
	class UClueConnectionConfig*                       ConnectionConfiguration;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Difficulty;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              AllowedClueTypes;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper)
	class UTaleQuestSelectorService*                   SelectorService;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SourceLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AShipwreck*                                  Shipwreck;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClueDescriptor*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
struct UTaleQuestClueInventoryService_SetClueTitleText_Params
{
	struct FText                                       InTitleText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
struct UTaleQuestClueInventoryService_GetCollectedClueCount_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
