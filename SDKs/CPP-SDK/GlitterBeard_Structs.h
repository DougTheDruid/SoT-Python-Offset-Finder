// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
struct FinaleReplicationState
{
public:
	byte                                                         State;                                             // 0x0(0x1)
	char                                                         pad0x7_Z6RUZ[0x7];                                 // 0x1(0x7)
	class Object*                                                TargetEnsemble;                                    // 0x8(0x8)
};


// Size 0x4
struct UnlockEventData
{
public:
	int                                                          Idx;                                               // 0x0(0x4)
};


// Size 0x4
struct GlitterBeardVFXTransitionCompletedEvent
{
public:
	int                                                          Index;                                             // 0x0(0x4)
};


// Size 0x8
struct ChangeGlitterBeardVFXStateEvent
{
public:
	int                                                          Index;                                             // 0x0(0x4)
	byte                                                         Target;                                            // 0x4(0x1)
	char                                                         pad0x3_UXI8R[0x3];                                 // 0x5(0x3)
};


// Size 0x10
struct GlitterbeardPuzzleCancelTelemetryEvent
{
public:
	char                                                         pad0x10_86UYD[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct GlitterbeardPuzzleUnlockTelemetryEvent
{
public:
	char                                                         pad0x10_9LFHX[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct GlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent
{
public:
	char                                                         pad0x10_PYG7V[0x10];                               // 0x0(0x10)
};


// Size 0x20
struct GlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent
{
public:
	char                                                         pad0x20_W1TRM[0x20];                               // 0x0(0x20)
};


// Size 0x10
struct GlitterbeardSessionEndTelemetryEvent
{
public:
	char                                                         pad0x10_57EM1[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct GlitterbeardSessionBeginTelemetryEvent
{
public:
	char                                                         pad0x10_NNBLL[0x10];                               // 0x0(0x10)
};


}