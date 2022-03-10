namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class ActorSequence: public MovieSceneSequence
{
public:
	Class MovieScene*                                  MovieScene                                         // 0x2a8(0x8)
	Struct ActorSequenceObjectReferenceMap             ObjectReferences                                   // 0x2b0(0x20)
};


// Size 0x40
class ActorSequenceComponent: public ActorComponent
{
public:
	Struct MovieSceneSequencePlaybackSettings          PlaybackSettings                                   // 0xc8(0x28)
	Class ActorSequence*                               Sequence                                           // 0xf0(0x8)
	Class ActorSequencePlayer*                         SequencePlayer                                     // 0xf8(0x8)
	bool                                               bAutoPlay                                          // 0x100(0x1)
};


// Size 0x0
class ActorSequencePlayer: public MovieSceneSequencePlayer
{
public:
};


}