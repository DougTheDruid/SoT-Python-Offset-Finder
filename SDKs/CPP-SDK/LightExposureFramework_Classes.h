#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class DebugLightSensitiveComponent: public ActorComponent
{
public:
	struct FName                                                 ConstellationID;                                   // 0xd0(0x8)
};


// Size 0x70 (Full Size[0x138] - InheritedSize[0xc8]
class LightSensitiveComponent: public ActorComponent
{
public:
	class LightSourceManager*                                    LightSourceManager;                                // 0x130(0x8)
};


// Size 0x58 (Full Size[0x420] - InheritedSize[0x3c8]
class LightSourceManager: public Actor
{
public:
	TArray<class Actor*>                                         LightEmittingActors;                               // 0x3d0(0x10)
	TArray<class Actor*>                                         LightSensitiveActors;                              // 0x3e0(0x10)
	float                                                        UpdateTimeThreshold;                               // 0x3f0(0x4)
	bool                                                         ShouldUseTimeThreshold;                            // 0x3f4(0x1)
	uint32                                                       StayActiveForNumberOfTicks;                        // 0x414(0x4)
	int                                                          MaxLightsourceParamCount;                          // 0x41c(0x4)
};

