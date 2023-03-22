// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xf8 (Full Size[0x3a0] - InheritedSize[0x2a8]
class LevelSequence: public MovieSceneSequence
{
public:
	Class MovieScene*                                            MovieScene;                                        // 0x2a8(0x8)
	Struct LevelSequenceObjectReferenceMap                       ObjectReferences;                                  // 0x2b0(0xa0)
	char                                                         pad0x50_NSHMM[0x50];                               // 0x350(0x50)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LevelSequenceSubtitlesInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0x648] - InheritedSize[0x608]
class LevelSequencePlayer: public MovieSceneSequencePlayer
{
public:
	Class Actor*                                                 SpawnablesParent;                                  // 0x608(0x8)
	char                                                         pad0x38_JFIFT[0x38];                               // 0x610(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LevelSequenceBurnInInitSettings: public Object
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class LevelSequenceBurnInOptions: public Object
{
public:
	bool                                                         bUseBurnIn;                                        // 0x28(0x1)
	char                                                         pad0x7_EQKNA[0x7];                                 // 0x29(0x7)
	Struct StringClassReference                                  BurnInClass;                                       // 0x30(0x10)
	Class LevelSequenceBurnInInitSettings*                       Settings;                                          // 0x40(0x8)
};


// Size 0x70 (Full Size[0x438] - InheritedSize[0x3c8]
class LevelSequenceActor: public Actor
{
public:
	char                                                         pad0x8_3M402[0x8];                                 // 0x3c8(0x8)
	bool                                                         bAutoPlay;                                         // 0x3d0(0x1)
	char                                                         pad0x7_LUN5E[0x7];                                 // 0x3d1(0x7)
	Struct MovieSceneSequencePlaybackSettings                    PlaybackSettings;                                  // 0x3d8(0x28)
	Class LevelSequencePlayer*                                   SequencePlayer;                                    // 0x400(0x8)
	Struct StringAssetReference                                  LevelSequence;                                     // 0x408(0x10)
	Class LevelSequenceBurnInOptions*                            BurnInOptions;                                     // 0x418(0x8)
	Class MovieSceneBindingOverrides*                            BindingOverrides;                                  // 0x420(0x8)
	Class Actor*                                                 SpawnablesParent;                                  // 0x428(0x8)
	Class LevelSequenceBurnIn*                                   BurnInInstance;                                    // 0x430(0x8)
};


// Size 0x98 (Full Size[0x2c8] - InheritedSize[0x230]
class LevelSequenceBurnIn: public UserWidget
{
public:
	Struct LevelSequencePlayerSnapshot                           FrameInformation;                                  // 0x230(0x90)
	Class LevelSequenceActor*                                    LevelSequenceActor;                                // 0x2c0(0x8)
};


}