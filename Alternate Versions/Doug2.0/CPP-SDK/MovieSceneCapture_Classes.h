namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class MovieSceneCaptureInterface: public Interface
{
public:
};


// Size 0x0
class MovieSceneCaptureProtocolSettings: public Object
{
public:
};


// Size 0x1b8
class MovieSceneCapture: public Object
{
public:
	Struct CaptureProtocolID                           CaptureType                                        // 0x38(0x8)
	Class MovieSceneCaptureProtocolSettings*           ProtocolSettings                                   // 0x40(0x8)
	Struct MovieSceneCaptureSettings                   Settings                                           // 0x48(0x50)
	bool                                               bUseSeparateProcess                                // 0x98(0x1)
	bool                                               bCloseEditorWhenCaptureStarts                      // 0x99(0x1)
	Struct FString                                     AdditionalCommandLineArguments                     // 0xa0(0x10)
	Struct FString                                     InheritedCommandLineArguments                      // 0xb0(0x10)
};


// Size 0x0
class AutomatedLevelSequenceCapture: public MovieSceneCapture
{
public:
};


// Size 0x20
class LevelCapture: public MovieSceneCapture
{
public:
	bool                                               bAutoStartCapture                                  // 0x1e0(0x1)
	Struct Guid                                        PrerequisiteActorId                                // 0x1ec(0x10)
};


// Size 0x0
class MovieSceneCaptureEnvironment: public Object
{
public:
};


// Size 0x8
class FrameGrabberProtocolSettings: public MovieSceneCaptureProtocolSettings
{
public:
};


// Size 0x0
class BmpImageCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
};


// Size 0x8
class ImageCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	int                                                CompressionQuality                                 // 0x30(0x4)
};


// Size 0x30
class CompositionGraphCaptureSettings: public MovieSceneCaptureProtocolSettings
{
public:
	Struct CompositionGraphCapturePasses               IncludeRenderPasses                                // 0x28(0x10)
	bool                                               bCaptureFramesInHDR                                // 0x38(0x1)
	int                                                HDRCompressionQuality                              // 0x3c(0x4)
	byte                                               CaptureGamut                                       // 0x40(0x1)
	Struct StringAssetReference                        PostProcessingMaterial                             // 0x48(0x10)
};


// Size 0x18
class VideoCaptureSettings: public FrameGrabberProtocolSettings
{
public:
	bool                                               bUseCompression                                    // 0x30(0x1)
	float                                              CompressionQuality                                 // 0x34(0x4)
	Struct FString                                     VideoCodec                                         // 0x38(0x10)
};


}