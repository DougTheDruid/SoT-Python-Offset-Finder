namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class SessionTemplate: public None
{
public:
	Struct FString                                     TemplateName                                       // 0x0(0x10)
	byte                                               SessionType                                        // 0x10(0x1)
	int                                                MaxPlayers                                         // 0x14(0x4)
};


// Size 0x38
class CrewSessionTemplate: public None
{
public:
	Struct FString                                     MatchmakingHopper                                  // 0x18(0x10)
	class                                              ShipSize                                           // 0x28(0x8)
	int                                                MaxMatchmakingPlayers                              // 0x30(0x4)
};


// Size 0x28
class OnlineSessionMemberLostEvent: public None
{
public:
};


// Size 0x1
class SessionLostEvent: public None
{
public:
};


// Size 0x20
class SessionDetailsChangedEvent: public None
{
public:
};


// Size 0x10
class SessionInfoUpdateAvailableEvent: public None
{
public:
	Struct Guid                                        CrewId                                             // 0x0(0x10)
};


// Size 0x18
class CrewSessionOperationFailedTelemetryEvent: public None
{
public:
	Struct FString                                     ErrorMessage                                       // 0x0(0x10)
	int                                                OperationTypeCode                                  // 0x10(0x4)
	bool                                               WasCancelled                                       // 0x14(0x1)
};


// Size 0x78
class CrewSessionMatchmakingFollowedTelemetryEvent: public None
{
public:
	Struct Guid                                        NewCrewId                                          // 0x50(0x10)
	int                                                ResultCode                                         // 0x60(0x4)
	Struct FString                                     Message                                            // 0x68(0x10)
};


// Size 0x50
class CrewSessionBaseSessionTelemetryEvent: public None
{
public:
	Struct CrewSessionTelemetry                        Session                                            // 0x10(0x40)
};


// Size 0x10
class CrewSessionBaseTelemetryEvent: public None
{
public:
	Struct Guid                                        CrewId                                             // 0x0(0x10)
};


// Size 0x40
class CrewSessionTelemetry: public None
{
public:
	TArray<Struct CrewSessionMemberTelemetry>          SessionMembers                                     // 0x0(0x10)
	Struct FString                                     SessionTemplate                                    // 0x10(0x10)
	Struct FString                                     SessionVisibility                                  // 0x20(0x10)
	Struct FString                                     PlayMode                                           // 0x30(0x10)
};


// Size 0x28
class CrewSessionMemberTelemetry: public None
{
public:
	Struct FString                                     UserId                                             // 0x0(0x10)
	Struct FString                                     StatusString                                       // 0x10(0x10)
	bool                                               IsSessionHost                                      // 0x20(0x1)
};


// Size 0x98
class CrewSessionMatchmakingEndedTelemetryEvent: public None
{
public:
	Struct Guid                                        NewCrewId                                          // 0x10(0x10)
	Struct Guid                                        CrewMatchmakingAttemptId                           // 0x20(0x10)
	Struct FString                                     SessionType                                        // 0x30(0x10)
	Struct FString                                     MatchmakingHopper                                  // 0x40(0x10)
	Struct FString                                     MatchmakingType                                    // 0x50(0x10)
	Struct FString                                     MatchmakingResult                                  // 0x60(0x10)
	Struct FString                                     ErrorMessage                                       // 0x70(0x10)
	TArray<Int >                                       CrewSegmentValues                                  // 0x80(0x10)
	int                                                CurrentCrewCount                                   // 0x90(0x4)
	int                                                TotalWaitTime                                      // 0x94(0x4)
};


// Size 0x70
class CrewSessionMatchmakingStartedTelemetryEvent: public None
{
public:
	Struct Guid                                        CrewMatchmakingAttemptId                           // 0x10(0x10)
	Struct FString                                     SessionType                                        // 0x20(0x10)
	Struct FString                                     MatchmakingHopper                                  // 0x30(0x10)
	Struct FString                                     MatchmakingType                                    // 0x40(0x10)
	TArray<Int >                                       CrewSegmentValues                                  // 0x50(0x10)
	int                                                CurrentCrewCount                                   // 0x60(0x4)
	int                                                EstimatedWaitTime                                  // 0x64(0x4)
	int                                                MaxWaitTime                                        // 0x68(0x4)
};


// Size 0x10
class CrewSessionLeaveTelemetryEvent: public None
{
public:
};


// Size 0x70
class CrewSessionJoinedTelemetryEvent: public None
{
public:
	Struct FString                                     JoinMethod                                         // 0x50(0x10)
	TArray<Struct CrewSessionQoSMeasurementTelemetry>  QoSTelemetry                                       // 0x60(0x10)
};


// Size 0x20
class CrewSessionQoSMeasurementTelemetry: public None
{
public:
	Struct FString                                     Location                                           // 0x0(0x10)
	int                                                NumReceivedPings                                   // 0x14(0x4)
	int                                                NumFailedPings                                     // 0x18(0x4)
	byte                                               ResolveResult                                      // 0x1c(0x1)
	bool                                               LocationWasConsidered                              // 0x1d(0x1)
};


// Size 0x60
class CrewSessionCreatedTelemetryEvent: public None
{
public:
	TArray<Struct CrewTrackedItemOwnershipSet>         QoSTelemetry                                       // 0x50(0x10)
};


}