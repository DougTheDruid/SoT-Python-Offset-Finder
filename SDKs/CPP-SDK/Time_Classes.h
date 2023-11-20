// Generated by dougthedruid on Discord
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


// Size 0x130 (Full Size[0x4f8] - InheritedSize[0x3c8]
class TimeService: public Actor
{
public:
	char                                                         pad0x38_Y1AKV[0x38];                               // 0x3c8(0x38)
	struct Timespan                                              GameWorldTimeOffset;                               // 0x400(0x8)
	char                                                         pad0x4_FUZ9Z[0x4];                                 // 0x408(0x4)
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
	struct ReplicatedAuthoritativeTime                           ReplicatedServerTime;                              // 0x498(0x10)
	char                                                         pad0x50_QUO3Q[0x50];                               // 0x4a8(0x50)
};


// Size 0x8 (Full Size[0x500] - InheritedSize[0x4f8]
class DebugTimeService: public TimeService
{
public:
	char                                                         pad0x8_ZL4VH[0x8];                                 // 0x4f8(0x8)
};


// Size 0x8 (Full Size[0x508] - InheritedSize[0x500]
class CustomizableTimeService: public DebugTimeService
{
public:
	char                                                         pad0x8_FX7MO[0x8];                                 // 0x500(0x8)
};


}