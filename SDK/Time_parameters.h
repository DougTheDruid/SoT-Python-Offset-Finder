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

// Function Time.TimeInterface.GetTime
struct UTimeInterface_GetTime_Params
{
	struct FGameTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.GetSmoothRealWorldTime
struct UTimeInterface_GetSmoothRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.GetPreciseRealWorldTime
struct UTimeInterface_GetPreciseRealWorldTime_Params
{
	struct FDateTime                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeInterface.ConvertRealWorldTimeToGameWorldTime
struct UTimeInterface_ConvertRealWorldTimeToGameWorldTime_Params
{
	struct FDateTime                                   RealWorldTime;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor)
	struct FGameTime                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function Time.TimeInterface.ConvertGameWorldTimeToRealWorldTime
struct UTimeInterface_ConvertGameWorldTimeToRealWorldTime_Params
{
	struct FGameTime                                   GameWorldTime;                                             // 0x0000(0x0008)  (ConstParm, Parm)
	struct FDateTime                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.CustomizableTimeInterface.SetTimeScalar
struct UCustomizableTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.SetSunset
struct UCustomizableTimeInterface_SetSunset_Params
{
	float                                              SunsetHours;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.SetSunrise
struct UCustomizableTimeInterface_SetSunrise_Params
{
	float                                              SunriseHours;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.SetGameWorldTime
struct UCustomizableTimeInterface_SetGameWorldTime_Params
{
	struct FGameTime                                   RequestedTime;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.CustomizableTimeInterface.GetTimeScalar
struct UCustomizableTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeInterface.EnableQueryServiceTime
struct UCustomizableTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Time.DebugTimeInterface.SetTimeScalar
struct UDebugTimeInterface_SetTimeScalar_Params
{
	int                                                RequestedTimeScalar;                                       // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.SetSunset
struct UDebugTimeInterface_SetSunset_Params
{
	float                                              SunsetHours;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.SetSunrise
struct UDebugTimeInterface_SetSunrise_Params
{
	float                                              SunriseHours;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.SetGameWorldTime
struct UDebugTimeInterface_SetGameWorldTime_Params
{
	struct FGameTime                                   RequestedTime;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Time.DebugTimeInterface.GetTimeScalar
struct UDebugTimeInterface_GetTimeScalar_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeInterface.EnableQueryServiceTime
struct UDebugTimeInterface_EnableQueryServiceTime_Params
{
	bool                                               Enable;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Time.TimeBlueprintLibrary.MakeReplicatedDateTimeFromDateTime
struct UTimeBlueprintLibrary_MakeReplicatedDateTimeFromDateTime_Params
{
	struct FDateTime                                   InDateTime;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor)
	struct FReplicatedDateTime                         ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromReplicatedDateTime
struct UTimeBlueprintLibrary_MakeDateTimeFromReplicatedDateTime_Params
{
	struct FReplicatedDateTime                         InDateTime;                                                // 0x0000(0x0008)  (Parm)
	struct FDateTime                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.MakeDateTimeFromRaw
struct UTimeBlueprintLibrary_MakeDateTimeFromRaw_Params
{
	int                                                Year;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Month;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Day;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hour;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Minute;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Second;                                                    // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Millisecond;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Time.TimeBlueprintLibrary.DateTimesWithinTolerance
struct UTimeBlueprintLibrary_DateTimesWithinTolerance_Params
{
	struct FDateTime                                   FirstDateTime;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor)
	struct FDateTime                                   SecondDateTime;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor)
	struct FTimespan                                   Tolerance;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Time.TimeService.OnRep_ReplicatedServerTime
struct ATimeService_OnRep_ReplicatedServerTime_Params
{
};

// Function Time.TimeService.MulticastOnServiceTimeChangedRPC
struct ATimeService_MulticastOnServiceTimeChangedRPC_Params
{
	int64_t                                            ServiceTimeInTicks;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.DebugTimeService.MulticastOnTimeScalarOffsetRPC
struct ADebugTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            Offset;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Time.CustomizableTimeService.MulticastOnTimeScalarOffsetRPC
struct ACustomizableTimeService_MulticastOnTimeScalarOffsetRPC_Params
{
	int                                                Scalar;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64_t                                            Offset;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
