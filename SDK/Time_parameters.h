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

// Function Time.TimeInterface.GetTime
struct UTimeInterface_GetTime_Params
{
	struct FGameTime                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.GetSmoothRealWorldTime
struct UTimeInterface_GetSmoothRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.GetPreciseRealWorldTime
struct UTimeInterface_GetPreciseRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
struct UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params
{
	struct FDateTime                                   RealWorldTime;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FGameTime                                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
struct UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params
{
	struct FGameTime                                   GameWorldTime;                                             // (ConstParm, Parm)
	struct FDateTime                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.CustomizableTimeInterface.SetTimeScalar
struct UCustomizableTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.SetSunset
struct UCustomizableTimeInterface_SetSunset_Params
{
	float                                              SunsetHours;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.SetSunrise
struct UCustomizableTimeInterface_SetSunrise_Params
{
	float                                              SunriseHours;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.SetGameWorldTime
struct UCustomizableTimeInterface_SetGameWorldTime_Params
{
	struct FGameTime                                   RequestedTime;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.CustomizableTimeInterface.GetTimeScalar
struct UCustomizableTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.EnableQueryServiceTime
struct UCustomizableTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Time.DebugTimeInterface.SetTimeScalar
struct UDebugTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.SetSunset
struct UDebugTimeInterface_SetSunset_Params
{
	float                                              SunsetHours;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.SetSunrise
struct UDebugTimeInterface_SetSunrise_Params
{
	float                                              SunriseHours;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.SetGameWorldTime
struct UDebugTimeInterface_SetGameWorldTime_Params
{
	struct FGameTime                                   RequestedTime;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.DebugTimeInterface.GetTimeScalar
struct UDebugTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.EnableQueryServiceTime
struct UDebugTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
struct UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params
{
	struct FDateTime                                   InDateTime;                                                // (Parm, ZeroConstructor)
	struct FReplicatedDateTime                         ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
struct UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params
{
	struct FReplicatedDateTime                         InDateTime;                                                // (Parm)
	struct FDateTime                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
struct UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params
{
	int                                                Year;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Month;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Day;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hour;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Minute;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Second;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Millisecond;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
struct UTimeBlueprintLibrary_DateTimesWithinTolerance_Params
{
	struct FDateTime                                   FirstDateTime;                                             // (Parm, ZeroConstructor)
	struct FDateTime                                   SecondDateTime;                                            // (Parm, ZeroConstructor)
	struct FTimespan                                   Tolerance;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Time.TimeService.OnRep_ReplicatedServerTime
struct ATimeService_OnRep_ReplicatedServerTime_Params
{
};

// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
struct ATimeService_MulticastOnServiceTimeChangedRPC_Params
{
	int64_t                                            ServiceTimeInTicks;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
struct ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
struct ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
