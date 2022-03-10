namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xf8
class LevelSequence: public MovieSceneSequence
{
public:
	Class MovieScene*                                  MovieScene                                         // 0x2a8(0x8)
	Struct LevelSequenceObjectReferenceMap             ObjectReferences                                   // 0x2b0(0xa0)
};


// Size 0x0
class LevelSequenceSubtitlesInterface: public Interface
{
public:
};


// Size 0x40
class LevelSequencePlayer: public MovieSceneSequencePlayer
{
public:
	Class Actor*                                       SpawnablesParent                                   // 0x600(0x8)
};


// Size 0x0
class LevelSequenceBurnInInitSettings: public Object
{
public:
};


// Size 0x20
class LevelSequenceBurnInOptions: public Object
{
public:
	bool                                               bUseBurnIn                                         // 0x28(0x1)
	Struct StringClassReference                        BurnInClass                                        // 0x30(0x10)
	Class LevelSequenceBurnInInitSettings*             Settings                                           // 0x40(0x8)
};


// Size 0x70
class LevelSequenceActor: public Actor
{
public:
	bool                                               bAutoPlay                                          // 0x3d8(0x1)
	Struct MovieSceneSequencePlaybackSettings          PlaybackSettings                                   // 0x3e0(0x28)
	Class LevelSequencePlayer*                         SequencePlayer                                     // 0x408(0x8)
	Struct StringAssetReference                        LevelSequence                                      // 0x410(0x10)
	Class LevelSequenceBurnInOptions*                  BurnInOptions                                      // 0x420(0x8)
	Class MovieSceneBindingOverrides*                  BindingOverrides                                   // 0x428(0x8)
	Class Actor*                                       SpawnablesParent                                   // 0x430(0x8)
	Class LevelSequenceBurnIn*                         BurnInInstance                                     // 0x438(0x8)
};


// Size 0x98
class LevelSequenceBurnIn: public UserWidget
{
public:
	Struct LevelSequencePlayerSnapshot                 FrameInformation                                   // 0x230(0x90)
	Class LevelSequenceActor*                          LevelSequenceActor                                 // 0x2c0(0x8)
};


}