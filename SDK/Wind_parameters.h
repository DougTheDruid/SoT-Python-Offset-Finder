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

// Function Wind.WindZoneInterface.GetWindZoneParams
struct UWindZoneInterface_GetWindZoneParams_Params
{
	struct FWindZoneParams                             ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindZoneInterface.GetWindZoneLocation
struct UWindZoneInterface_GetWindZoneLocation_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindZoneInterface.GetTurbulence
struct UWindZoneInterface_GetTurbulence_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FWindZoneTurbulence                         ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindInterface.UnregisterWindZone
struct UWindInterface_UnregisterWindZone_Params
{
};

// Function Wind.WindInterface.TriggerChange
struct UWindInterface_TriggerChange_Params
{
	bool                                               ChangeInstantly;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Wind.WindInterface.SetParams
struct UWindInterface_SetParams_Params
{
	struct FWindServiceParams                          Params;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Wind.WindInterface.SetGlobalWindVector
struct UWindInterface_SetGlobalWindVector_Params
{
	struct FVector                                     InWindVector;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindInterface.SetGlobalWindMagnitude
struct UWindInterface_SetGlobalWindMagnitude_Params
{
	float                                              InWindMagnitude;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wind.WindInterface.SetGlobalWindDirection
struct UWindInterface_SetGlobalWindDirection_Params
{
	struct FVector                                     InWindDirection;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindInterface.SetGlobalWindAngle
struct UWindInterface_SetGlobalWindAngle_Params
{
	float                                              InAngle;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wind.WindInterface.RegisterWindZone
struct UWindInterface_RegisterWindZone_Params
{
};

// Function Wind.WindInterface.GetWindZoneAtLocation
struct UWindInterface_GetWindZoneAtLocation_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindInterface.GetWindVector
struct UWindInterface_GetWindVector_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindInterface.GetWindMagnitude
struct UWindInterface_GetWindMagnitude_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wind.WindInterface.GetWindDirection
struct UWindInterface_GetWindDirection_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindInterface.GetWindAngle
struct UWindInterface_GetWindAngle_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wind.WindInterface.GetTurbulenceForTrees
struct UWindInterface_GetTurbulenceForTrees_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FWindZoneTurbulence                         ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindInterface.GetTurbulence
struct UWindInterface_GetTurbulence_Params
{
	struct FVector                                     SamplePosition;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FWindZoneTurbulence                         ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindInterface.GetMaxWindMagnitude
struct UWindInterface_GetMaxWindMagnitude_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
struct UWindFunctions_SetDefaultWindBlowingNorth_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wind.WindFunctions.GetWindAtLocation
struct UWindFunctions_GetWindAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Wind.WindService.OnRep_WindMagnitude
struct AWindService_OnRep_WindMagnitude_Params
{
};

// Function Wind.WindService.OnRep_WindAngle
struct AWindService_OnRep_WindAngle_Params
{
};

// Function Wind.WindService.GetWindParams
struct AWindService_GetWindParams_Params
{
	struct FWindServiceParams                          ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
struct UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params
{
	struct FWindServiceParams                          Params1;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FWindServiceParams                          Params2;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
