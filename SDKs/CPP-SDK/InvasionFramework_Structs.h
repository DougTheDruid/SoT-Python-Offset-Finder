// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
struct InvasionCrewData
{
public:
	Struct Guid                                                  CrewId;                                            // 0x0(0x10)
	byte                                                         InvasionStatus;                                    // 0x10(0x1)
	bool                                                         ReadyForInvasion;                                  // 0x11(0x1)
};


// Size 0x70
struct InvasionParticipatingCrewData
{
public:
	TArray<Struct InvasionCrewData>                              CrewIds;                                           // 0x0(0x10)
	TArray<class CrewVoyageParticipant*>                         Participants;                                      // 0x10(0x10)
};


// Size 0x40
struct InvasionEndedTelemetryEvent
{
public:
	TArray<Struct InvasionCrewData>                              Participants;                                      // 0x0(0x10)
	Struct InvasionCrewData                                      Winner;                                            // 0x10(0x14)
	float                                                        InvasionDurationInSeconds;                         // 0x24(0x4)
	TArray<Struct CrewFactionTelemetryData>                      ParticipantFactionData;                            // 0x28(0x10)
	byte                                                         InvasionEndedReason;                               // 0x38(0x1)
};


}