#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "MovieScene_Structs.h"


// Size 0x5e0 (Full Size[0x608] - InheritedSize[0x28]
class MovieSceneSequencePlayer: public Object
{
public:
	multicastinlinedelegate                                      OnPlay;                                            // 0x390(0x10)
	multicastinlinedelegate                                      OnStop;                                            // 0x3a0(0x10)
	multicastinlinedelegate                                      OnPause;                                           // 0x3b0(0x10)
	bool                                                         bIsPlaying;                                        // 0x3c0(0x1)
	bool                                                         bReversePlayback;                                  // 0x3c0(0x1)
	bool                                                         bPendingFirstUpdate;                               // 0x3c0(0x1)
	class MovieSceneSequence*                                    Sequence;                                          // 0x3c8(0x8)
	float                                                        TimeCursorPosition;                                // 0x3d0(0x4)
	float                                                        StartTime;                                         // 0x3d4(0x4)
	float                                                        EndTime;                                           // 0x3d8(0x4)
	int                                                          CurrentNumLoops;                                   // 0x3dc(0x4)
	struct MovieSceneSequencePlaybackSettings                    PlaybackSettings;                                  // 0x3f0(0x28)
	class Character*                                             InteractingCharacter;                              // 0x5e8(0x8)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class MovieSceneFolder: public Object
{
public:
	struct FName                                                 FolderName;                                        // 0x28(0x8)
	TArray<class MovieSceneFolder*>                              ChildFolders;                                      // 0x30(0x10)
	TArray<class MovieSceneTrack*>                               ChildMasterTracks;                                 // 0x40(0x10)
	TArray<String>                                               ChildObjectBindingStrings;                         // 0x50(0x10)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class MovieSceneBindingOverrides: public Object
{
public:
	TArray<struct MovieSceneBindingOverrideData>                 BindingData;                                       // 0x30(0x10)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class MovieSceneSignedObject: public Object
{
public:
	struct Guid                                                  Signature;                                         // 0x28(0x10)
};


// Size 0x228 (Full Size[0x2a8] - InheritedSize[0x80]
class MovieSceneSequence: public MovieSceneSignedObject
{
public:
	struct CachedMovieSceneEvaluationTemplate                    EvaluationTemplate;                                // 0x80(0x220)
	struct MovieSceneTrackCompilationParams                      TemplateParameters;                                // 0x2a0(0x1)
	bool                                                         bParentContextsAreSignificant;                     // 0x2a1(0x1)
};


// Size 0x18 (Full Size[0x98] - InheritedSize[0x80]
class MovieSceneSection: public MovieSceneSignedObject
{
public:
	struct MovieSceneSectionEvalOptions                          EvalOptions;                                       // 0x80(0x2)
	float                                                        StartTime;                                         // 0x84(0x4)
	float                                                        EndTime;                                           // 0x88(0x4)
	int                                                          RowIndex;                                          // 0x8c(0x4)
	int                                                          OverlapPriority;                                   // 0x90(0x4)
	bool                                                         bIsActive;                                         // 0x94(0x1)
	bool                                                         bIsLocked;                                         // 0x94(0x1)
	bool                                                         bIsInfinite;                                       // 0x94(0x1)
};


// Size 0x80 (Full Size[0x100] - InheritedSize[0x80]
class MovieScene: public MovieSceneSignedObject
{
public:
	TArray<struct MovieSceneSpawnable>                           Spawnables;                                        // 0x80(0x10)
	TArray<struct MovieScenePossessable>                         Possessables;                                      // 0x90(0x10)
	TArray<struct MovieSceneBinding>                             ObjectBindings;                                    // 0xa0(0x10)
	TArray<class MovieSceneTrack*>                               MasterTracks;                                      // 0xb0(0x10)
	class MovieSceneTrack*                                       CameraCutTrack;                                    // 0xc0(0x8)
	struct FloatRange                                            SelectionRange;                                    // 0xc8(0x10)
	struct FloatRange                                            PlaybackRange;                                     // 0xd8(0x10)
	bool                                                         bForceFixedFrameIntervalPlayback;                  // 0xe8(0x1)
	float                                                        FixedFrameInterval;                                // 0xec(0x4)
	float                                                        InTime;                                            // 0xf0(0x4)
	float                                                        OutTime;                                           // 0xf4(0x4)
	float                                                        StartTime;                                         // 0xf8(0x4)
	float                                                        EndTime;                                           // 0xfc(0x4)
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class MovieSceneTrack: public MovieSceneSignedObject
{
public:
	struct MovieSceneTrackEvalOptions                            EvalOptions;                                       // 0x80(0x4)
};


