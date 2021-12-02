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

// Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
struct UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
struct UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIShipServiceDataAsset*                     ServiceParams;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIShipEncounterBattleDesc                  ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function AIShips.AthenaAIShipController.ApplyControllerParams
struct AAthenaAIShipController_ApplyControllerParams_Params
{
	class UAthenaAIControllerParamsDataAsset*          ParamsAsset;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       InPawn;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
struct UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params
{
	struct FAIShipSailData                             SailData;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
