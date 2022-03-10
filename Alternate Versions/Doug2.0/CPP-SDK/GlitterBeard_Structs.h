namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class FinaleReplicationState: public None
{
public:
	byte                                               State                                              // 0x0(0x1)
	Class Object*                                      TargetEnsemble                                     // 0x8(0x8)
};


// Size 0x4
class UnlockEventData: public None
{
public:
	int                                                Idx                                                // 0x0(0x4)
};


// Size 0x4
class GlitterBeardVFXTransitionCompletedEvent: public None
{
public:
	int                                                Index                                              // 0x0(0x4)
};


// Size 0x8
class ChangeGlitterBeardVFXStateEvent: public None
{
public:
	int                                                Index                                              // 0x0(0x4)
	byte                                               Target                                             // 0x4(0x1)
};


// Size 0x10
class GlitterbeardPuzzleCancelTelemetryEvent: public None
{
public:
};


// Size 0x10
class GlitterbeardPuzzleUnlockTelemetryEvent: public None
{
public:
};


// Size 0x10
class GlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent: public None
{
public:
};


// Size 0x20
class GlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent: public None
{
public:
};


// Size 0x10
class GlitterbeardSessionEndTelemetryEvent: public None
{
public:
};


// Size 0x10
class GlitterbeardSessionBeginTelemetryEvent: public None
{
public:
};


}