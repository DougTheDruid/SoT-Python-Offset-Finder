#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x48
struct RotatingCompassAudioParams
{
public:
	char                                                         pad0x20_8BYOS[0x20];                               // 0x0(0x20)
	class WwiseObjectPoolWrapper*                                EmitterPool;                                       // 0x20(0x8)
	struct FName                                                 EmitterName;                                       // 0x28(0x8)
	class WwiseEvent*                                            OneShotRotationSfx;                                // 0x30(0x8)
	class WwiseEvent*                                            StartRotationSequenceSfx;                          // 0x38(0x8)
	class WwiseEvent*                                            StopRotationSequenceSfx;                           // 0x40(0x8)
};


// Size 0xc
struct CompassTargetSet
{
public:
	struct Vector                                                TargetLocation;                                    // 0x0(0xc)
};


// Size 0x1
struct RotatingCompassRotationCurveCompletedEvent
{
public:
	char                                                         pad0x1_YCA8R[0x1];                                 // 0x0(0x1)
};


// Size 0x1
struct RotatingCompassSplinePathCompletedEvent
{
public:
	char                                                         pad0x1_8ANXS[0x1];                                 // 0x0(0x1)
};


