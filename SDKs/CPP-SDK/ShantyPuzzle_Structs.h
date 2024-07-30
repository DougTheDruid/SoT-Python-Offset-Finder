#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18
struct ShantyPuzzleInteractionZoneDefinition
{
public:
	struct Vector                                                Location;                                          // 0x0(0xc)
	float                                                        Radius;                                            // 0xc(0x4)
	char                                                         RequiredMusicalInstrumentType;                     // 0x10(0x1)
	int                                                          RequiredNumInteractors;                            // 0x14(0x4)
};


// Size 0x10
struct ShantyPuzzleCompleteEvent
{
public:
	TArray<struct Guid>                                          ParticipatingCrews;                                // 0x0(0x10)
};


// Size 0x8
struct ShantyPuzzlePlayerEnterInteractionZoneEvent
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x10
struct ShantyPuzzleSingleInteractionZoneStopInteractingEvent
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
	int                                                          InteractionZoneIdx;                                // 0x8(0x4)
};


// Size 0x8
struct ShantyPuzzlePlayerExitInteractionZoneEvent
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
};


// Size 0x10
struct ShantyPuzzleSingleInteractionZoneUnlockEvent
{
public:
	class Actor*                                                 Player;                                            // 0x0(0x8)
	int                                                          InteractionZoneIdx;                                // 0x8(0x4)
};


