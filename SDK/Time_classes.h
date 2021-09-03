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
// Classes
//---------------------------------------------------------------------------

// Class Time.TimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.TimeInterface");
		return ptr;
	}



	struct FGameTime GetTime();
	struct FDateTime GetSmoothRealWorldTime();
	struct FDateTime GetPreciseRealWorldTime();
	struct FGameTime ConvertRealWorldTimeToGameWorldTime(const struct FDateTime& RealWorldTime);
	struct FDateTime ConvertGameWorldTimeToRealWorldTime(const struct FGameTime& GameWorldTime);
	void AfterRead();
	void BeforeDelete();

};

// Class Time.CustomizableTimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCustomizableTimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.CustomizableTimeInterface");
		return ptr;
	}



	void SetTimeScalar(int RequestedTimeScalar);
	void SetSunset(float SunsetHours);
	void SetSunrise(float SunriseHours);
	void SetGameWorldTime(const struct FGameTime& RequestedTime);
	int GetTimeScalar();
	void EnableQueryServiceTime(bool Enable);
	void AfterRead();
	void BeforeDelete();

};

// Class Time.DebugTimeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugTimeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.DebugTimeInterface");
		return ptr;
	}



	void SetTimeScalar(int RequestedTimeScalar);
	void SetSunset(float SunsetHours);
	void SetSunrise(float SunriseHours);
	void SetGameWorldTime(const struct FGameTime& RequestedTime);
	int GetTimeScalar();
	void EnableQueryServiceTime(bool Enable);
	void AfterRead();
	void BeforeDelete();

};

// Class Time.LocationProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocationProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.LocationProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Time.TimeBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.TimeBlueprintLibrary");
		return ptr;
	}



	struct FReplicatedDateTime STATIC_MakeReplicatedDateTimeFromDateTime(const struct FDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromReplicatedDateTime(const struct FReplicatedDateTime& InDateTime);
	struct FDateTime STATIC_MakeDateTimeFromRaw(int Year, int Month, int Day, int Hour, int Minute, int Second, int Millisecond);
	bool STATIC_DateTimesWithinTolerance(const struct FDateTime& FirstDateTime, const struct FDateTime& SecondDateTime, const struct FTimespan& Tolerance);
	void AfterRead();
	void BeforeDelete();

};

// Class Time.TimeFormatterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeFormatterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.TimeFormatterInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Time.TimeService
// 0x0110 (FullSize[0x04E0] - InheritedSize[0x03D0])
class ATimeService : public AActor
{
public:
	unsigned char                                      UnknownData_YD4J[0x38];                                    // 0x03D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimespan                                   GameWorldTimeOffset;                                       // 0x0408(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_HZZ6[0x4];                                     // 0x0410(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           TimeScalar;                                                // 0x0414(0x0004) (Edit, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	uint32_t                                           NumberOfDaysInEachGameMonth;                               // 0x0418(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EWZB[0x4];                                     // 0x041C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             ServiceTimeQueryRapidFrequencyOffsetMax;                   // 0x0420(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ServiceTimeQueryRapidFrequencyInSeconds;                   // 0x0428(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ServiceTimeQueryFrequencyInSeconds;                        // 0x042C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              ClientTimeUpdateFrequencyInSeconds;                        // 0x0430(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SunriseTimeHours;                                          // 0x0434(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              SunsetTimeHours;                                           // 0x0438(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              LocalTimeUpdateAdjustMaxTimeDelta;                         // 0x043C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinLocalTimeUpdateAdjustPercentageToSlowDown;              // 0x0440(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSlowDown;              // 0x0444(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MinLocalTimeUpdateAdjustPercentageToSpeedUp;               // 0x0448(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              MaxLocalTimeUpdateAdjustPercentageToSpeedUp;               // 0x044C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	uint32_t                                           MaxNumReplicatedTimeEntriesToAverage;                      // 0x0450(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BW26[0x4C];                                    // 0x0454(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FReplicatedAuthoritativeTime                ReplicatedServerTime;                                      // 0x04A0(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify)
	unsigned char                                      UnknownData_5JEX[0x30];                                    // 0x04B0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.TimeService");
		return ptr;
	}



	void OnRep_ReplicatedServerTime();
	void MulticastOnServiceTimeChangedRPC(int64_t ServiceTimeInTicks);
	void AfterRead();
	void BeforeDelete();

};

// Class Time.DebugTimeService
// 0x0008 (FullSize[0x04E8] - InheritedSize[0x04E0])
class ADebugTimeService : public ATimeService
{
public:
	unsigned char                                      UnknownData_8VLL[0x8];                                     // 0x04E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.DebugTimeService");
		return ptr;
	}



	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
	void AfterRead();
	void BeforeDelete();

};

// Class Time.CustomizableTimeService
// 0x0008 (FullSize[0x04F0] - InheritedSize[0x04E8])
class ACustomizableTimeService : public ADebugTimeService
{
public:
	unsigned char                                      UnknownData_I0UO[0x8];                                     // 0x04E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Time.CustomizableTimeService");
		return ptr;
	}



	void MulticastOnTimeScalarOffsetRPC(int Scalar, int64_t Offset);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
