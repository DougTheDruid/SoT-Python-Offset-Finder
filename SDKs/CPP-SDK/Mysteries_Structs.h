#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x78
struct AbandonedNoteWeightedTextEntry
{
public:
	struct FText                                                 Title;                                             // 0x0(0x38)
	struct FText                                                 Body;                                              // 0x38(0x38)
	float                                                        Weight;                                            // 0x70(0x4)
	char                                                         pad0x4_P0XKC[0x4];                                 // 0x74(0x4)
};


// Size 0x30
struct SirenPuzzleLockState
{
public:
	struct Guid                                                  LockId;                                            // 0x0(0x10)
	TArray<struct LandmarkReactionKeyFrame>                      UnlockReactions;                                   // 0x10(0x10)
	TArray<struct Guid>                                          UnlockingCrews;                                    // 0x20(0x10)
};


// Size 0x1
struct SirenPuzzleCompleteEvent
{
public:
	char                                                         pad0x1_N2XZJ[0x1];                                 // 0x0(0x1)
};


