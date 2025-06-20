#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x28
struct MatchesCreateMatchSuccessfulRpc
{
public:
	char                                                         pad0x18_L9B0Y[0x18];                               // 0x0(0x18)
	struct FString                                               MatchID;                                           // 0x18(0x10)
};


// Size 0x20
struct InvasionCrewData
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	char                                                         InvasionStatus;                                    // 0x10(0x1)
	char                                                         pad0x3_SWLD3[0x3];                                 // 0x11(0x3)
	struct FName                                                 FactionIdentifier;                                 // 0x14(0x8)
	bool                                                         ReadyForInvasion;                                  // 0x1c(0x1)
	char                                                         pad0x3_51JSL[0x3];                                 // 0x1d(0x3)
};


// Size 0x10
struct CrewStoppedInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x70
struct InvasionBannerNetworkEvent
{
public:
	char                                                         pad0x18_H75RI[0x18];                               // 0x0(0x18)
	struct FText                                                 Message;                                           // 0x18(0x38)
	struct Guid                                                  CrewId;                                            // 0x50(0x10)
	char                                                         Faction;                                           // 0x60(0x1)
	char                                                         pad0x3_REN3B[0x3];                                 // 0x61(0x3)
	struct FName                                                 Tag;                                               // 0x64(0x8)
	bool                                                         DisableMusic;                                      // 0x6c(0x1)
	char                                                         pad0x3_E7EQV[0x3];                                 // 0x6d(0x3)
};


// Size 0x28
struct MatchesTriggerUpdateMatchRpc
{
public:
	char                                                         pad0x18_NS9Q9[0x18];                               // 0x0(0x18)
	struct FString                                               MatchID;                                           // 0x18(0x10)
};


// Size 0x8
struct TaleDisplayedInvasionBanner
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x28
struct PlayerData
{
public:
	struct FString                                               PlayerId;                                          // 0x0(0x10)
	struct FString                                               PlayerName;                                        // 0x10(0x10)
	char                                                         PlatformId;                                        // 0x20(0x1)
	char                                                         pad0x7_Y1P0K[0x7];                                 // 0x21(0x7)
};


// Size 0x28
struct MatchesTriggerStartMatchRpc
{
public:
	char                                                         pad0x18_DAFLF[0x18];                               // 0x0(0x18)
	struct FString                                               MatchID;                                           // 0x18(0x10)
};


// Size 0x10
struct CrewStartedInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x28
struct ReplicatedInvasionCrewMusicState
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	struct TimeStampedShipDiveMusicState                         CurrentTimeStampedMusicState;                      // 0x10(0x18)
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
	char                                                         pad0x18_QK53G[0x18];                               // 0x0(0x18)
	struct FString                                               MatchID;                                           // 0x18(0x10)
	struct FString                                               WinningTeamId;                                     // 0x28(0x10)
	struct FString                                               LosingTeamId;                                      // 0x38(0x10)
};


// Size 0x10
struct CrewMatchmakingCancelledDueToInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x14
struct InvasionServiceMatchmakingCrewInfo
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	char                                                         CrewSessionType;                                   // 0x10(0x1)
	char                                                         pad0x3_56S1A[0x3];                                 // 0x11(0x3)
};


// Size 0x78
struct InvasionParticipatingCrewData
{
public:
	TArray<struct InvasionCrewData>                              CrewIds;                                           // 0x0(0x10)
	TArray<class CrewVoyageParticipant*>                         Participants;                                      // 0x10(0x10)
	char                                                         pad0x58_ZUQEW[0x58];                               // 0x20(0x58)
};


// Size 0x78
struct MatchesTriggerCreateMatchRpc
{
public:
	char                                                         pad0x18_KS2OC[0x18];                               // 0x0(0x18)
	struct FString                                               ActivityId;                                        // 0x18(0x10)
	int                                                          InactivityExpirationTimeSeconds;                   // 0x28(0x4)
	char                                                         pad0x4_Z1ZWD[0x4];                                 // 0x2c(0x4)
	TArray<struct PlayerData>                                    PlayersTeamA;                                      // 0x30(0x10)
	TArray<struct PlayerData>                                    PlayersTeamB;                                      // 0x40(0x10)
	char                                                         TypeTeamA;                                         // 0x50(0x1)
	char                                                         TypeTeamB;                                         // 0x51(0x1)
	char                                                         pad0x6_B8H3S[0x6];                                 // 0x52(0x6)
	struct FString                                               IdTeamA;                                           // 0x58(0x10)
	struct FString                                               IdTeamB;                                           // 0x68(0x10)
};


// Size 0x50
struct InvasionEndedTelemetryEvent
{
public:
	TArray<struct InvasionCrewData>                              Participants;                                      // 0x0(0x10)
	struct InvasionCrewData                                      Winner;                                            // 0x10(0x20)
	float                                                        InvasionDurationInSeconds;                         // 0x30(0x4)
	char                                                         pad0x4_JHM0O[0x4];                                 // 0x34(0x4)
	TArray<struct CrewFactionTelemetryData>                      ParticipantFactionData;                            // 0x38(0x10)
	char                                                         InvasionEndedReason;                               // 0x48(0x1)
	char                                                         pad0x7_O593O[0x7];                                 // 0x49(0x7)
};


// Size 0x60
struct MatchesTriggerPlayerJoinRpc
{
public:
	char                                                         pad0x18_MDZ2W[0x18];                               // 0x0(0x18)
	struct FString                                               MatchID;                                           // 0x18(0x10)
	struct PlayerData                                            PlayerData;                                        // 0x28(0x28)
	struct Guid                                                  CrewId;                                            // 0x50(0x10)
};


// Size 0x50
struct MatchesTriggerPlayerLeaveRpc
{
public:
	char                                                         pad0x18_52SN0[0x18];                               // 0x0(0x18)
	struct FString                                               MatchID;                                           // 0x18(0x10)
	struct PlayerData                                            PlayerData;                                        // 0x28(0x28)
};


