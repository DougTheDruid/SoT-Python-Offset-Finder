// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1
struct ShantyPuzzleUnlockCanceledEvent
{
public:
};


// Size 0x10
struct ShantyPuzzleSingleInteractionZoneStopInteractingEvent
{
public:
	Class Actor*                                                 Player;                                            // 0x0(0x8)
	int                                                          InteractionZoneIdx;                                // 0x8(0x4)
};


// Size 0x10
struct ShantyPuzzleSingleInteractionZoneUnlockEvent
{
public:
	Class Actor*                                                 Player;                                            // 0x0(0x8)
	int                                                          InteractionZoneIdx;                                // 0x8(0x4)
};


// Size 0x8
struct ShantyPuzzlePlayerExitInteractionZoneEvent
{
public:
	Class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x8
struct ShantyPuzzlePlayerEnterInteractionZoneEvent
{
public:
	Class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x1
struct ShantyPuzzleUnlockedCompleteEvent
{
public:
};


// Size 0x18
struct ShantyPuzzleInteractionZoneDefinition
{
public:
	Struct Vector                                                Location;                                          // 0x0(0xc)
	float                                                        Radius;                                            // 0xc(0x4)
	byte                                                         RequiredMusicalInstrumentType;                     // 0x10(0x1)
	char                                                         pad0x3_6PKKJ[0x3];                                 // 0x11(0x3)
	int                                                          RequiredNumInteractors;                            // 0x14(0x4)
};


// Size 0x10
struct ShantyPuzzleCompleteEvent
{
public:
	TArray<Struct Guid>                                          ParticipatingCrews;                                // 0x0(0x10)
};


}