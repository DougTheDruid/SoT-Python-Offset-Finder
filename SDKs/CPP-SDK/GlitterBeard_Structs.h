#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x4
struct GlitterBeardVFXTransitionCompletedEvent
{
public:
	int                                                          Index;                                             // 0x0(0x4)
};


// Size 0x10
struct FinaleReplicationState
{
public:
	char                                                         State;                                             // 0x0(0x1)
	class Object*                                                TargetEnsemble;                                    // 0x8(0x8)
};


// Size 0x4
struct UnlockEventData
{
public:
	int                                                          Idx;                                               // 0x0(0x4)
};


// Size 0x8
struct ChangeGlitterBeardVFXStateEvent
{
public:
	int                                                          Index;                                             // 0x0(0x4)
	char                                                         Target;                                            // 0x4(0x1)
};


