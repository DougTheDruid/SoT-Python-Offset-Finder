#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct ClientMatchmakingResponseModel
{
public:
	struct Timespan                                              EstimatedWaitTime;                                 // 0x0(0x8)
	struct Timespan                                              RetryAfter;                                        // 0x8(0x8)
};


// Size 0x58
struct ExistingServerCrewModel
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	int                                                          SessionType;                                       // 0x10(0x4)
	char                                                         AlignedFaction;                                    // 0x14(0x1)
	char                                                         pad0x3_HQ7VW[0x3];                                 // 0x15(0x3)
	int                                                          PvPSkillLevel;                                     // 0x18(0x4)
	char                                                         pad0x4_K6Z7J[0x4];                                 // 0x1c(0x4)
	struct Timespan                                              TimeInMatchmaking;                                 // 0x20(0x8)
	struct FString                                               ForcedStamp;                                       // 0x28(0x10)
	struct Guid                                                  GuildId;                                           // 0x38(0x10)
	TArray<struct UniqueNetIdRepl>                               CrewMemberUserIds;                                 // 0x48(0x10)
};


// Size 0xc
struct ServerRegionModel
{
public:
	struct Vector2D                                              Position;                                          // 0x0(0x8)
	float                                                        Radius;                                            // 0x8(0x4)
};


// Size 0x20
struct ServerQueueWaitTimeModel
{
public:
	struct FString                                               QueueScopeId;                                      // 0x0(0x10)
	struct Timespan                                              AvgWaitTime;                                       // 0x10(0x8)
	struct Timespan                                              MaxWaitTime;                                       // 0x18(0x8)
};


// Size 0x10
struct ContestMatchmakingFactionMapEntry
{
public:
	class UClass*                                                GameFaction;                                       // 0x0(0x8)
	char                                                         MatchmakingFaction;                                // 0x8(0x1)
	char                                                         pad0x7_5Z41B[0x7];                                 // 0x9(0x7)
};


// Size 0xd8
struct ServerCrewModel
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	struct UniqueNetIdRepl                                       UserId;                                            // 0x10(0x18)
	struct Guid                                                  ServerId;                                          // 0x28(0x10)
	struct FString                                               ServerAddress;                                     // 0x38(0x10)
	int                                                          SessionType;                                       // 0x48(0x4)
	char                                                         pad0x4_HRLNT[0x4];                                 // 0x4c(0x4)
	TArray<struct Vector2D>                                      Positions;                                         // 0x50(0x10)
	TArray<int>                                                  Resources;                                         // 0x60(0x10)
	char                                                         PvPFaction;                                        // 0x70(0x1)
	char                                                         pad0x3_9NEWS[0x3];                                 // 0x71(0x3)
	int                                                          PvPSkillLevel;                                     // 0x74(0x4)
	int                                                          PvPRivalSessionType;                               // 0x78(0x4)
	struct Guid                                                  RivalCrewId;                                       // 0x7c(0x10)
	char                                                         MatchmakingRequestReason;                          // 0x8c(0x1)
	char                                                         pad0x3_G6QPK[0x3];                                 // 0x8d(0x3)
	struct FString                                               RequestedGameEvent;                                // 0x90(0x10)
	struct Timespan                                              TimeWaitingForMatch;                               // 0xa0(0x8)
	struct FString                                               ForcedStamp;                                       // 0xa8(0x10)
	struct Guid                                                  GuildId;                                           // 0xb8(0x10)
	TArray<struct UniqueNetIdRepl>                               CrewMemberUserIds;                                 // 0xc8(0x10)
};


// Size 0x68
struct ServerQueueWaitTimesRequestModel
{
public:
	struct Guid                                                  ServerId;                                          // 0x0(0x10)
	struct FString                                               ServerLocation;                                    // 0x10(0x10)
	struct FString                                               PrivateServerId;                                   // 0x28(0x10)
	struct FString                                               ServerForcedPlatform;                              // 0x38(0x10)
	TArray<String>                                               PlayModeTags;                                      // 0x48(0x10)
	struct FString                                               PlayModeState;                                     // 0x58(0x10)
};


// Size 0x38
struct GameMainEventTypeModel
{
public:
	struct FString                                               EventName;                                         // 0x0(0x10)
	TArray<String>                                               ExcludedEvents;                                    // 0x10(0x10)
	TArray<struct Guid>                                          ExcludedCrewIds;                                   // 0x20(0x10)
	char                                                         Status;                                            // 0x30(0x1)
	char                                                         ShipSizeLimit;                                     // 0x31(0x1)
	char                                                         pad0x6_RJHQQ[0x6];                                 // 0x32(0x6)
};


// Size 0x18
struct GameSubEventTypeModel
{
public:
	struct FString                                               EventName;                                         // 0x0(0x10)
	int                                                          MaxCount;                                          // 0x10(0x4)
	char                                                         pad0x4_WZZV8[0x4];                                 // 0x14(0x4)
};


// Size 0x50
struct OptionalPlayModeModel
{
public:
	char                                                         pad0x50_3NSDT[0x50];                               // 0x0(0x50)
};


// Size 0x80
struct ServerCrewResponseModel
{
public:
	char                                                         ResultCode;                                        // 0x0(0x1)
	char                                                         pad0x7_3AZDG[0x7];                                 // 0x1(0x7)
	TArray<struct ServerCrewModel>                               Crews;                                             // 0x8(0x10)
	struct Timespan                                              RetryAfter;                                        // 0x68(0x8)
	struct Timespan                                              MigrationThreshold;                                // 0x70(0x8)
	struct Timespan                                              ExpireAfter;                                       // 0x78(0x8)
};


// Size 0xc0
struct ContestMatchmakingServerRequestModel
{
public:
	struct Guid                                                  ServerId;                                          // 0x0(0x10)
	struct FString                                               ServerAddress;                                     // 0x10(0x10)
	struct FString                                               VmId;                                              // 0x20(0x10)
	struct FString                                               PrivateServerId;                                   // 0x30(0x10)
	struct FString                                               ServerLocation;                                    // 0x40(0x10)
	struct FString                                               ServerForcedPlatform;                              // 0x50(0x10)
	TArray<String>                                               PlayModeTags;                                      // 0x68(0x10)
	TArray<String>                                               PlayModeStates;                                    // 0x78(0x10)
	TArray<struct ServerCrewModel>                               Crews;                                             // 0x88(0x10)
	char                                                         MatchmakingRequestReason;                          // 0x98(0x1)
	char                                                         pad0x3_1URDQ[0x3];                                 // 0x99(0x3)
	struct Guid                                                  RequestCorrelationId;                              // 0x9c(0x10)
	struct Guid                                                  SaferSeasServerIdOverride;                         // 0xac(0x10)
	char                                                         pad0x4_E4WIP[0x4];                                 // 0xbc(0x4)
};


// Size 0x20
struct GameEventAvailabilityModel
{
public:
	TArray<struct GameMainEventTypeModel>                        MainEvents;                                        // 0x0(0x10)
	TArray<struct GameSubEventTypeModel>                         SubEvents;                                         // 0x10(0x10)
};


// Size 0x30
struct ServerContendedModel
{
public:
	TArray<struct Vector2D>                                      Positions;                                         // 0x0(0x10)
	TArray<struct ServerRegionModel>                             Regions;                                           // 0x10(0x10)
	TArray<int>                                                  Resources;                                         // 0x20(0x10)
};


// Size 0x10
struct ServerQueueWaitTimesResponseModel
{
public:
	TArray<struct ServerQueueWaitTimeModel>                      QueueWaitTimes;                                    // 0x0(0x10)
};


// Size 0x120
struct ServerCrewRequestModel
{
public:
	struct Guid                                                  ServerId;                                          // 0x0(0x10)
	struct FString                                               VmId;                                              // 0x10(0x10)
	struct FString                                               PrivateServerId;                                   // 0x20(0x10)
	struct Guid                                                  SaferSeasServerId;                                 // 0x30(0x10)
	struct FString                                               ServerLocation;                                    // 0x40(0x10)
	struct FString                                               ServerForcedPlatform;                              // 0x50(0x10)
	struct FString                                               StampId;                                           // 0x60(0x10)
	TArray<String>                                               PlayModeTags;                                      // 0x78(0x10)
	struct FString                                               PlayModeState;                                     // 0x88(0x10)
	int                                                          CrewCount;                                         // 0x98(0x4)
	int                                                          CrewCountBucket;                                   // 0x9c(0x4)
	int                                                          CrewMin;                                           // 0xa0(0x4)
	int                                                          CrewMax;                                           // 0xa4(0x4)
	TArray<int>                                                  CrewSessionTypes;                                  // 0xa8(0x10)
	TArray<struct ExistingServerCrewModel>                       Crews;                                             // 0xb8(0x10)
	struct Timespan                                              Uptime;                                            // 0xc8(0x8)
	struct ServerContendedModel                                  Contended;                                         // 0xd0(0x30)
	struct GameEventAvailabilityModel                            GameEvents;                                        // 0x100(0x20)
};


