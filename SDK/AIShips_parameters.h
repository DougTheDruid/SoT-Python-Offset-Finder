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

// Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
struct UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
struct UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIShipServiceDataAsset*                     ServiceParams;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIShipEncounterBattleDesc                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function AIShips.AthenaAIShipController.ApplyControllerParams
struct AAthenaAIShipController_ApplyControllerParams_Params
{
	class UAthenaAIControllerParamsDataAsset*          ParamsAsset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
struct UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params
{
	struct FAIShipSailData                             SailData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
