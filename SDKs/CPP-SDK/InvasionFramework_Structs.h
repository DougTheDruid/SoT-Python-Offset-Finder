#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x10
struct CrewJoinedInvasionBattleTelemetryEvent
{
public:
	TArray<String>                                               ItemsBroughtToBattle;                              // 0x0(0x10)
};


// Size 0x8
struct TaleDisplayedInvasionBanner
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x14
struct InvasionServiceMatchmakingCrewInfo
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	char                                                         CrewSessionType;                                   // 0x10(0x1)
	char                                                         pad0x3_VI5BA[0x3];                                 // 0x11(0x3)
};


// Size 0x10
struct CrewStoppedInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x20
struct InvasionCrewData
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
	char                                                         InvasionStatus;                                    // 0x10(0x1)
	char                                                         pad0x3_WMGJ3[0x3];                                 // 0x11(0x3)
	struct FName                                                 FactionIdentifier;                                 // 0x14(0x8)
	bool                                                         ReadyForInvasion;                                  // 0x1c(0x1)
	char                                                         pad0x3_M9Z9T[0x3];                                 // 0x1d(0x3)
};


// Size 0x10
struct CrewMatchmakingCancelledDueToInvasion
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


// Size 0x68
struct InvasionBannerNetworkEvent
{
public:
	char                                                         pad0x10_8C4G3[0x10];                               // 0x0(0x10)
	struct FText                                                 Message;                                           // 0x10(0x38)
	struct Guid                                                  CrewId;                                            // 0x48(0x10)
	char                                                         Faction;                                           // 0x58(0x1)
	char                                                         pad0x3_UAYCD[0x3];                                 // 0x59(0x3)
	struct FName                                                 Tag;                                               // 0x5c(0x8)
	bool                                                         DisableMusic;                                      // 0x64(0x1)
	char                                                         pad0x3_2U8Q0[0x3];                                 // 0x65(0x3)
};


// Size 0x10
struct CrewStartedInvasion
{
public:
	struct Guid                                                  CrewId;                                            // 0x0(0x10)
};


// Size 0x78
struct InvasionParticipatingCrewData
{
public:
	TArray<struct InvasionCrewData>                              CrewIds;                                           // 0x0(0x10)
	TArray<class CrewVoyageParticipant*>                         Participants;                                      // 0x10(0x10)
	char                                                         pad0x58_29I22[0x58];                               // 0x20(0x58)
};


// Size 0x50
struct InvasionEndedTelemetryEvent
{
public:
	TArray<struct InvasionCrewData>                              Participants;                                      // 0x0(0x10)
	struct InvasionCrewData                                      Winner;                                            // 0x10(0x20)
	float                                                        InvasionDurationInSeconds;                         // 0x30(0x4)
	char                                                         pad0x4_BCKF1[0x4];                                 // 0x34(0x4)
	TArray<struct CrewFactionTelemetryData>                      ParticipantFactionData;                            // 0x38(0x10)
	char                                                         InvasionEndedReason;                               // 0x48(0x1)
	char                                                         pad0x7_6T36R[0x7];                                 // 0x49(0x7)
};


