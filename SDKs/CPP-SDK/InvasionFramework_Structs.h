#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x20
struct InvasionCrewData
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	char                                                         InvasionStatus;                                    // 0x10(0x1)
	struct FName                                                 FactionIdentifier;                                 // 0x14(0x8)
	bool                                                         ReadyForInvasion;                                  // 0x1c(0x1)
};


// Size 0x8
struct TaleDisplayedInvasionBanner
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x28
struct MatchesTriggerStartMatchRpc
{
public:
	struct FString                                               MatchID;                                           // 0x18(0x10)
};


// Size 0x14
struct InvasionServiceMatchmakingCrewInfo
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	char                                                         CrewSessionType;                                   // 0x10(0x1)
};


// Size 0x28
struct ReplicatedInvasionCrewMusicState
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	struct TimeStampedShipDiveMusicState                         CurrentTimeStampedMusicState;                      // 0x10(0x18)
};


// Size 0x10
struct CrewMatchmakingCancelledDueToInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x70
struct InvasionBannerNetworkEvent
{
public:
	struct FText                                                 Message;                                           // 0x18(0x38)
	struct Guid                                                  CrewId;                                            // 0x50(0x10)
	char                                                         Faction;                                           // 0x60(0x1)
	struct FName                                                 Tag;                                               // 0x64(0x8)
	bool                                                         DisableMusic;                                      // 0x6c(0x1)
};


// Size 0x28
struct MatchesTriggerUpdateMatchRpc
{
public:
	struct FString                                               MatchID;                                           // 0x18(0x10)
};


// Size 0x28
struct PlayerData
{
public:
	struct FString                                               PlayerId;                                          // 0x0(0x10)
	struct FString                                               PlayerName;                                        // 0x10(0x10)
	char                                                         PlatformId;                                        // 0x20(0x1)
};


// Size 0x10
struct CrewStartedInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x10
struct CrewJoinedInvasionBattleTelemetryEvent
{
public:
	TArray<String>                                               ItemsBroughtToBattle;                              // 0x0(0x10)
};


// Size 0x48
struct MatchesTriggerEndMatchRpc
{
public:
	struct FString                                               MatchID;                                           // 0x18(0x10)
	struct FString                                               WinningTeamId;                                     // 0x28(0x10)
	struct FString                                               LosingTeamId;                                      // 0x38(0x10)
};


// Size 0x28
struct MatchesCreateMatchSuccessfulRpc
{
public:
	struct FString                                               MatchID;                                           // 0x18(0x10)
};


// Size 0x10
struct CrewStoppedInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x60
struct MatchesTriggerPlayerJoinRpc
{
public:
	struct FString                                               MatchID;                                           // 0x18(0x10)
	struct PlayerData                                            PlayerData;                                        // 0x28(0x28)
	struct Guid                                                  CrewId;                                            // 0x50(0x10)
};


// Size 0x78
struct MatchesTriggerCreateMatchRpc
{
public:
	struct FString                                               ActivityId;                                        // 0x18(0x10)
	int                                                          InactivityExpirationTimeSeconds;                   // 0x28(0x4)
	TArray<struct PlayerData>                                    PlayersTeamA;                                      // 0x30(0x10)
	TArray<struct PlayerData>                                    PlayersTeamB;                                      // 0x40(0x10)
	char                                                         TypeTeamA;                                         // 0x50(0x1)
	char                                                         TypeTeamB;                                         // 0x51(0x1)
	struct FString                                               IdTeamA;                                           // 0x58(0x10)
	struct FString                                               IdTeamB;                                           // 0x68(0x10)
};


// Size 0x50
struct MatchesTriggerPlayerLeaveRpc
{
public:
	struct FString                                               MatchID;                                           // 0x18(0x10)
	struct PlayerData                                            PlayerData;                                        // 0x28(0x28)
};


// Size 0x50
struct InvasionEndedTelemetryEvent
{
public:
	TArray<struct InvasionCrewData>                              Participants;                                      // 0x0(0x10)
	struct InvasionCrewData                                      Winner;                                            // 0x10(0x20)
	float                                                        InvasionDurationInSeconds;                         // 0x30(0x4)
	TArray<struct CrewFactionTelemetryData>                      ParticipantFactionData;                            // 0x38(0x10)
	char                                                         InvasionEndedReason;                               // 0x48(0x1)
};


// Size 0x78
struct InvasionParticipatingCrewData
{
public:
	TArray<struct InvasionCrewData>                              CrewIds;                                           // 0x0(0x10)
	TArray<class CrewVoyageParticipant*>                         Participants;                                      // 0x10(0x10)
};


