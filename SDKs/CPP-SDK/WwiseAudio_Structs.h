#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x28
struct WwiseNativeEmitterPoolDensityParams
{
public:
	bool                                                         PlayPoolDensityAudio;                              // 0x0(0x1)
	class WwiseEvent*                                            PoolDensityAudioPlayEvent;                         // 0x8(0x8)
	class WwiseEvent*                                            PoolDensityAudioStopEvent;                         // 0x10(0x8)
	struct FName                                                 DensityRtpcName;                                   // 0x18(0x8)
	int                                                          FullDensityAmount;                                 // 0x20(0x4)
	float                                                        DensityDistance;                                   // 0x24(0x4)
};


// Size 0x88
struct MovieSceneAkAudioRTPCSectionData
{
public:
	struct FString                                               RTPCName;                                          // 0x0(0x10)
	struct RichCurve                                             RTPCCurve;                                         // 0x10(0x78)
};


// Size 0x8
struct WwiseAudioAcousticSurfaceParams
{
public:
	float                                                        Thickness;                                         // 0x0(0x4)
	float                                                        Reflectivity;                                      // 0x4(0x4)
};


// Size 0x20
struct MovieSceneAkAudioRTPCTemplate
{
public:
	class MovieSceneAkAudioRTPCSection*                          Section;                                           // 0x18(0x8)
};


// Size 0x2
struct WwiseEmitterParams
{
public:
	bool                                                         bEnableObstructionAndOcclusion;                    // 0x0(0x1)
	bool                                                         bEnableAccoustics;                                 // 0x1(0x1)
};


// Size 0x28
struct MultiEmitterData
{
public:
	class WwiseObjectPoolWrapper*                                PoolWrapper;                                       // 0x0(0x8)
	class WwiseEvent*                                            PlayEvent;                                         // 0x8(0x8)
	struct FName                                                 Name;                                              // 0x10(0x8)
	struct Vector                                                Offset;                                            // 0x18(0xc)
};


// Size 0x3c
struct WwiseListenerInfo
{
public:
	struct Vector                                                Position;                                          // 0x0(0xc)
	struct Vector                                                Up;                                                // 0xc(0xc)
	struct Vector                                                Right;                                             // 0x18(0xc)
	struct Vector                                                Front;                                             // 0x24(0xc)
	struct Vector                                                Velocity;                                          // 0x30(0xc)
};


// Size 0x20
struct MovieSceneAkAudioEventTemplate
{
public:
	class MovieSceneAkAudioEventSection*                         Section;                                           // 0x18(0x8)
};


// Size 0x10
struct WwiseSubtitle
{
public:
	struct FString                                               Subtitle;                                          // 0x0(0x10)
};


// Size 0x10
struct WwiseExternalSource
{
public:
	struct FString                                               path;                                              // 0x0(0x10)
};


