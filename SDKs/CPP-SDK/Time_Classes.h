// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TimeInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomizableTimeInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DebugTimeInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LocationProviderInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TimeBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TimeFormatterInterface: public Interface
{
public:
};


// Size 0x128 (Full Size[0x4f0] - InheritedSize[0x3c8]
class TimeService: public Actor
{
public:
	char                                                         pad0x38_0D22O[0x38];                               // 0x3c8(0x38)
	Struct Timespan                                              GameWorldTimeOffset;                               // 0x400(0x8)
	char                                                         pad0x4_T4BM1[0x4];                                 // 0x408(0x4)
	double                                                       ServiceTimeQueryRapidFrequencyOffsetMax;           // 0x418(0x8)
	float                                                        ServiceTimeQueryRapidFrequencyInSeconds;           // 0x420(0x4)
	float                                                        ServiceTimeQueryFrequencyInSeconds;                // 0x424(0x4)
	float                                                        ClientTimeUpdateFrequencyInSeconds;                // 0x428(0x4)
	float                                                        SunriseTimeHours;                                  // 0x42c(0x4)
	float                                                        SunsetTimeHours;                                   // 0x430(0x4)
	float                                                        LocalTimeUpdateAdjustMaxTimeDelta;                 // 0x434(0x4)
	float                                                        MinLocalTimeUpdateAdjustPercentageToSlowDown;      // 0x438(0x4)
	float                                                        MaxLocalTimeUpdateAdjustPercentageToSlowDown;      // 0x43c(0x4)
	float                                                        MinLocalTimeUpdateAdjustPercentageToSpeedUp;       // 0x440(0x4)
	float                                                        MaxLocalTimeUpdateAdjustPercentageToSpeedUp;       // 0x444(0x4)
	Struct ReplicatedAuthoritativeTime                           ReplicatedServerTime;                              // 0x498(0x10)
	char                                                         pad0x68_9HM5H[0x68];                               // 0x4a6(0x68)
};


// Size 0x8 (Full Size[0x4f8] - InheritedSize[0x4f0]
class DebugTimeService: public TimeService
{
public:
};


// Size 0x8 (Full Size[0x500] - InheritedSize[0x4f8]
class CustomizableTimeService: public DebugTimeService
{
public:
};


}