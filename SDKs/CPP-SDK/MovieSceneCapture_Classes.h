#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "MovieSceneCapture_Structs.h"


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class CompositionGraphCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
	struct CompositionGraphCapturePasses                         IncludeRenderPasses;                               // 0x28(0x10)
	bool                                                         bCaptureFramesInHDR;                               // 0x38(0x1)
	int                                                          HDRCompressionQuality;                             // 0x3c(0x4)
	char                                                         CaptureGamut;                                      // 0x40(0x1)
	struct StringAssetReference                                  PostProcessingMaterial;                            // 0x48(0x10)
};


// Size 0x18 (Full Size[0x48] - InheritedSize[0x30]
class VideoCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	bool                                                         bUseCompression;                                   // 0x30(0x1)
	float                                                        CompressionQuality;                                // 0x34(0x4)
	struct FString                                               VideoCodec;                                        // 0x38(0x10)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class ImageCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	int                                                          CompressionQuality;                                // 0x30(0x4)
};


// Size 0x1b8 (Full Size[0x1e0] - InheritedSize[0x28]
class MovieSceneCapture: public Object
{
public:
	struct CaptureProtocolID                                     CaptureType;                                       // 0x38(0x8)
	class MovieSceneCaptureProtocolSettings*                     ProtocolSettings;                                  // 0x40(0x8)
	struct MovieSceneCaptureSettings                             Settings;                                          // 0x48(0x50)
	bool                                                         bUseSeparateProcess;                               // 0x98(0x1)
	bool                                                         bCloseEditorWhenCaptureStarts;                     // 0x99(0x1)
	struct FString                                               AdditionalCommandLineArguments;                    // 0xa0(0x10)
	struct FString                                               InheritedCommandLineArguments;                     // 0xb0(0x10)
};


// Size 0x20 (Full Size[0x200] - InheritedSize[0x1e0]
class LevelCapture: public MovieSceneCapture
{
public:
	bool                                                         bAutoStartCapture;                                 // 0x1e0(0x1)
	struct Guid                                                  PrerequisiteActorId;                               // 0x1ec(0x10)
};


