// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MovieSceneCaptureInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MovieSceneCaptureProtocolSettings: public Object
{
public:
};


// Size 0x1b8 (Full Size[0x1e0] - InheritedSize[0x28]
class MovieSceneCapture: public Object
{
public:
	char                                                         pad0x10_FXDDP[0x10];                               // 0x28(0x10)
	Struct CaptureProtocolID                                     CaptureType;                                       // 0x38(0x8)
	Class MovieSceneCaptureProtocolSettings*                     ProtocolSettings;                                  // 0x40(0x8)
	Struct MovieSceneCaptureSettings                             Settings;                                          // 0x48(0x50)
	bool                                                         bUseSeparateProcess;                               // 0x98(0x1)
	bool                                                         bCloseEditorWhenCaptureStarts;                     // 0x99(0x1)
	char                                                         pad0x6_BJ9LT[0x6];                                 // 0x9a(0x6)
	Struct FString                                               AdditionalCommandLineArguments;                    // 0xa0(0x10)
	Struct FString                                               InheritedCommandLineArguments;                     // 0xb0(0x10)
	char                                                         pad0x140_XZCR5[0x140];                             // 0xbe(0x140)
};


// Size 0x0 (Full Size[0x1e0] - InheritedSize[0x1e0]
class AutomatedLevelSequenceCapture: public MovieSceneCapture
{
public:
};


// Size 0x20 (Full Size[0x200] - InheritedSize[0x1e0]
class LevelCapture: public MovieSceneCapture
{
public:
	bool                                                         bAutoStartCapture;                                 // 0x1e0(0x1)
	char                                                         pad0xb_OUV9I[0xb];                                 // 0x1e1(0xb)
	Struct Guid                                                  PrerequisiteActorId;                               // 0x1ec(0x10)
	char                                                         pad0x24_D9K0N[0x24];                               // 0x1fa(0x24)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MovieSceneCaptureEnvironment: public Object
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class FrameGrabberProtocolSettings: public MovieSceneCaptureProtocolSettings
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BmpImageCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class ImageCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	int                                                          CompressionQuality;                                // 0x30(0x4)
	char                                                         pad0xc_IADUZ[0xc];                                 // 0x32(0xc)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class CompositionGraphCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
	Struct CompositionGraphCapturePasses                         IncludeRenderPasses;                               // 0x28(0x10)
	bool                                                         bCaptureFramesInHDR;                               // 0x38(0x1)
	char                                                         pad0x3_Q6S0Q[0x3];                                 // 0x39(0x3)
	int                                                          HDRCompressionQuality;                             // 0x3c(0x4)
	byte                                                         CaptureGamut;                                      // 0x40(0x1)
	char                                                         pad0x7_XIYX3[0x7];                                 // 0x41(0x7)
	Struct StringAssetReference                                  PostProcessingMaterial;                            // 0x48(0x10)
};


// Size 0x18 (Full Size[0x48] - InheritedSize[0x30]
class VideoCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	bool                                                         bUseCompression;                                   // 0x30(0x1)
	char                                                         pad0x3_PH5T6[0x3];                                 // 0x31(0x3)
	float                                                        CompressionQuality;                                // 0x34(0x4)
	Struct FString                                               VideoCodec;                                        // 0x38(0x10)
};


}