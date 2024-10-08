#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x20
struct JupiterSessionJoinThroughServiceRequestModel
{
public:
	struct FString                                               OwningUserId;                                      // 0x0(0x10)
	struct FString                                               SessionTemplateName;                               // 0x10(0x10)
};


// Size 0x10
struct CrewSessionBaseTelemetryEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x40
struct SessionHostChangedEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x78
struct CrewSessionMatchmakingFollowedTelemetryEvent
{
public:
	struct Guid                                                  NewCrewId;                                         // 0x50(0x10)
	int                                                          ResultCode;                                        // 0x60(0x4)
	struct FString                                               Message;                                           // 0x68(0x10)
};


// Size 0x18
struct CrewSessionOperationFailedTelemetryEvent
{
public:
	struct FString                                               ErrorMessage;                                      // 0x0(0x10)
	int                                                          OperationTypeCode;                                 // 0x10(0x4)
	bool                                                         WasCancelled;                                      // 0x14(0x1)
};


// Size 0x28
struct CrewSessionMemberTelemetry
{
public:
	struct FString                                               UserId;                                            // 0x0(0x10)
	struct FString                                               StatusString;                                      // 0x10(0x10)
	bool                                                         IsSessionHost;                                     // 0x20(0x1)
};


// Size 0x38
struct CrewSessionTemplate
{
public:
	struct FString                                               MatchmakingHopper;                                 // 0x18(0x10)
	class UClass*                                                ShipSize;                                          // 0x28(0x8)
	int                                                          MaxMatchmakingPlayers;                             // 0x30(0x4)
};


// Size 0x20
struct SessionHostDeviceChangedEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	struct FString                                               NewHostDevice;                                     // 0x10(0x10)
};


// Size 0x18
struct SessionTemplate
{
public:
	struct FString                                               TemplateName;                                      // 0x0(0x10)
	char                                                         SessionType;                                       // 0x10(0x1)
	int                                                          MaxPlayers;                                        // 0x14(0x4)
};


// Size 0x28
struct CrewSessionKeepAliveFailedTelemetryEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	struct FString                                               UserStatus;                                        // 0x10(0x10)
	int                                                          ErrorCode;                                         // 0x20(0x4)
	int                                                          KeepAliveCounter;                                  // 0x24(0x4)
};


// Size 0x70
struct CrewSessionMatchmakingStartedTelemetryEvent
{
public:
	struct Guid                                                  CrewMatchmakingAttemptId;                          // 0x10(0x10)
	struct FString                                               SessionType;                                       // 0x20(0x10)
	struct FString                                               MatchmakingHopper;                                 // 0x30(0x10)
	struct FString                                               MatchmakingType;                                   // 0x40(0x10)
	TArray<int>                                                  CrewSegmentValues;                                 // 0x50(0x10)
	int                                                          CurrentCrewCount;                                  // 0x60(0x4)
	int                                                          EstimatedWaitTime;                                 // 0x64(0x4)
	int                                                          MaxWaitTime;                                       // 0x68(0x4)
};


// Size 0x20
struct CrewSessionQoSMeasurementTelemetry
{
public:
	struct FString                                               Location;                                          // 0x0(0x10)
	uint32                                                       AvgLatency;                                        // 0x10(0x4)
	int                                                          NumReceivedPings;                                  // 0x14(0x4)
	int                                                          NumFailedPings;                                    // 0x18(0x4)
	char                                                         ResolveResult;                                     // 0x1c(0x1)
	bool                                                         LocationWasConsidered;                             // 0x1d(0x1)
};


// Size 0x10
struct SessionInfoUpdateAvailableEvent
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x98
struct CrewSessionMatchmakingEndedTelemetryEvent
{
public:
	struct Guid                                                  NewCrewId;                                         // 0x10(0x10)
	struct Guid                                                  CrewMatchmakingAttemptId;                          // 0x20(0x10)
	struct FString                                               SessionType;                                       // 0x30(0x10)
	struct FString                                               MatchmakingHopper;                                 // 0x40(0x10)
	struct FString                                               MatchmakingType;                                   // 0x50(0x10)
	struct FString                                               MatchmakingResult;                                 // 0x60(0x10)
	struct FString                                               ErrorMessage;                                      // 0x70(0x10)
	TArray<int>                                                  CrewSegmentValues;                                 // 0x80(0x10)
	int                                                          CurrentCrewCount;                                  // 0x90(0x4)
	int                                                          TotalWaitTime;                                     // 0x94(0x4)
};


// Size 0x70
struct CrewSessionJoinedTelemetryEvent
{
public:
	struct FString                                               JoinMethod;                                        // 0x50(0x10)
	TArray<struct CrewSessionQoSMeasurementTelemetry>            QoSTelemetry;                                      // 0x60(0x10)
};


// Size 0x60
struct CrewSessionCreatedTelemetryEvent
{
public:
	TArray<struct CrewSessionQoSMeasurementTelemetry>            QoSTelemetry;                                      // 0x50(0x10)
};


// Size 0x40
struct CrewSessionTelemetry
{
public:
	TArray<struct CrewSessionMemberTelemetry>                    SessionMembers;                                    // 0x0(0x10)
	struct FString                                               SessionTemplate;                                   // 0x10(0x10)
	struct FString                                               SessionVisibility;                                 // 0x20(0x10)
	struct FString                                               PlayMode;                                          // 0x30(0x10)
};


// Size 0x50
struct CrewSessionBaseSessionTelemetryEvent
{
public:
	struct CrewSessionTelemetry                                  Session;                                           // 0x10(0x40)
};


