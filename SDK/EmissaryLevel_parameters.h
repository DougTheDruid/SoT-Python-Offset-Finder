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

// Function EmissaryLevel.EmissaryActiveTableVisualiserComponent.OnControllerEndPlay
struct UEmissaryActiveTableVisualiserComponent_OnControllerEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_EmissaryLevel
struct UEmissaryParticipantComponent_OnRep_EmissaryLevel_Params
{
};

// Function EmissaryLevel.EmissaryParticipantComponent.OnRep_AffiliatedCompany
struct UEmissaryParticipantComponent_OnRep_AffiliatedCompany_Params
{
	struct FName                                       PreviousId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EmissaryLevel.EmissaryShipAffiliationTrackerComponent.OnRep_EmissaryCount
struct UEmissaryShipAffiliationTrackerComponent_OnRep_EmissaryCount_Params
{
};

// Function EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase.OnRep_Votes
struct UEmissaryVoyageInlineVoteConsumerBase_OnRep_Votes_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
