// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
struct CaptureProtocolID
{
public:
	struct FName                                                 Identifier;                                        // 0x0(0x8)
};


// Size 0x50
struct MovieSceneCaptureSettings
{
public:
	struct DirectoryPath                                         OutputDirectory;                                   // 0x0(0x10)
	bool                                                         bCreateTemporaryCopiesOfLevels;                    // 0x10(0x1)
	char                                                         pad0x7_MR8J9[0x7];                                 // 0x11(0x7)
	class UClass*                                                GameModeOverride;                                  // 0x18(0x8)
	struct FString                                               OutputFormat;                                      // 0x20(0x10)
	bool                                                         bOverwriteExisting;                                // 0x30(0x1)
	bool                                                         bUseRelativeFrameNumbers;                          // 0x31(0x1)
	char                                                         pad0x2_D1C4B[0x2];                                 // 0x32(0x2)
	int                                                          HandleFrames;                                      // 0x34(0x4)
	byte                                                         ZeroPadFrameNumbers;                               // 0x38(0x1)
	char                                                         pad0x3_G3LTO[0x3];                                 // 0x39(0x3)
	int                                                          FrameRate;                                         // 0x3c(0x4)
	struct CaptureResolution                                     Resolution;                                        // 0x40(0x8)
	bool                                                         bEnableTextureStreaming;                           // 0x48(0x1)
	bool                                                         bCinematicEngineScalability;                       // 0x49(0x1)
	bool                                                         bCinematicMode;                                    // 0x4a(0x1)
	bool                                                         bAllowMovement;                                    // 0x4b(0x1)
	bool                                                         bAllowTurning;                                     // 0x4c(0x1)
	bool                                                         bShowPlayer;                                       // 0x4d(0x1)
	bool                                                         bShowHUD;                                          // 0x4e(0x1)
	char                                                         pad0x1_6LDPU[0x1];                                 // 0x4f(0x1)
};


// Size 0x8
struct CaptureResolution
{
public:
	char                                                         pad0x8_3EDHN[0x8];                                 // 0x0(0x8)
};


// Size 0x10
struct CompositionGraphCapturePasses
{
public:
	TArray<Str Value>                                            Value;                                             // 0x0(0x10)
};


}