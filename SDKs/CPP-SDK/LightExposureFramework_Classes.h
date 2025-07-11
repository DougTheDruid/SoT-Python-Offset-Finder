#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x58 (Full Size[0x3f8] - InheritedSize[0x3a0]
class LightSourceManager: public Actor
{
public:
	char                                                         pad0x8_NIMZL[0x8];                                 // 0x3a0(0x8)
	TArray<class Actor*>                                         LightEmittingActors;                               // 0x3a8(0x10)
	TArray<class Actor*>                                         LightSensitiveActors;                              // 0x3b8(0x10)
	float                                                        UpdateTimeThreshold;                               // 0x3c8(0x4)
	bool                                                         ShouldUseTimeThreshold;                            // 0x3cc(0x1)
	char                                                         pad0x1f_V3A5Y[0x1f];                               // 0x3cd(0x1f)
	int                                                          MaxLightsourceParamCount;                          // 0x3f4(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LightSensitivityInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LightSourceManagerInterface: public Interface
{
public:
};


// Size 0x60 (Full Size[0x118] - InheritedSize[0xb8]
class DebugLightSensitiveComponent: public ActorComponent
{
public:
	char                                                         pad0x8_QEYBX[0x8];                                 // 0xb8(0x8)
	struct FName                                                 ConstellationID;                                   // 0xc0(0x8)
	char                                                         pad0x50_7NHPM[0x50];                               // 0xc8(0x50)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LightEmitterInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LightReceptorInterface: public Interface
{
public:
};


// Size 0x78 (Full Size[0x130] - InheritedSize[0xb8]
class LightSensitiveComponent: public ActorComponent
{
public:
	char                                                         pad0x68_9Z0TG[0x68];                               // 0xb8(0x68)
	class Actor*                                                 LightSourceManager;                                // 0x120(0x8)
	char                                                         pad0x8_KRRZW[0x8];                                 // 0x128(0x8)
};


