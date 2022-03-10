namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class MovieSceneBinding: public None
{
public:
	Struct Guid                                        ObjectGuid                                         // 0x0(0x10)
	Struct FString                                     BindingName                                        // 0x10(0x10)
	TArray<class Tracks*>                              Tracks                                             // 0x20(0x10)
};


// Size 0x38
class MovieScenePossessable: public None
{
public:
	Struct Guid                                        Guid                                               // 0x0(0x10)
	Struct FString                                     Name                                               // 0x10(0x10)
	class                                              PossessedObjectClass                               // 0x20(0x8)
	Struct Guid                                        ParentGuid                                         // 0x28(0x10)
};


// Size 0x40
class MovieSceneSpawnable: public None
{
public:
	Struct Guid                                        Guid                                               // 0x0(0x10)
	Struct FString                                     Name                                               // 0x10(0x10)
	Class Object*                                      ObjectTemplate                                     // 0x20(0x8)
	TArray<Struct ObjectTemplate>                      ChildPossessables                                  // 0x28(0x10)
	byte                                               Ownership                                          // 0x38(0x1)
};


// Size 0x10
class MovieSceneTrackLabels: public None
{
public:
	TArray<Str None>                                   Strings                                            // 0x0(0x10)
};


// Size 0x70
class MovieSceneEditorData: public None
{
public:
	Struct FloatRange                                  WorkingRange                                       // 0x50(0x10)
	Struct FloatRange                                  ViewRange                                          // 0x60(0x10)
};


// Size 0x1
class MovieSceneExpansionState: public None
{
public:
	bool                                               bExpanded                                          // 0x0(0x1)
};


// Size 0x10
class MovieSceneObjectBindingPtr: public None
{
public:
	Struct Guid                                        Guid                                               // 0x0(0x10)
};


// Size 0x1c
class MovieSceneBindingOverrideData: public None
{
public:
	Struct MovieSceneObjectBindingPtr                  ObjectBindingId                                    // 0x0(0x10)
	bool                                               bOverridesDefault                                  // 0x18(0x1)
};


// Size 0x28
class MovieSceneSequencePlaybackSettings: public None
{
public:
	int                                                LoopCount                                          // 0x0(0x4)
	float                                              PlayRate                                           // 0x4(0x4)
	bool                                               bRandomStartTime                                   // 0x8(0x1)
	float                                              StartTime                                          // 0xc(0x4)
	bool                                               bRestoreState                                      // 0x10(0x1)
};


// Size 0x2
class MovieSceneSectionEvalOptions: public None
{
public:
	bool                                               bCanEditCompletionMode                             // 0x0(0x1)
	byte                                               CompletionMode                                     // 0x1(0x1)
};


// Size 0x4
class MovieSceneTrackIdentifier: public None
{
public:
};


// Size 0x4
class MovieSceneSequenceID: public None
{
public:
};


// Size 0x30
class MovieSceneEvaluationField: public None
{
public:
	TArray<Struct MovieSceneEvalTemplateBase>          Ranges                                             // 0x0(0x10)
	TArray<Struct MovieSceneEvaluationGroup>           Groups                                             // 0x10(0x10)
	TArray<Struct MovieSceneEvaluationMetaData>        MetaData                                           // 0x20(0x10)
};


// Size 0x10
class MovieSceneEvaluationMetaData: public None
{
public:
	TArray<Struct Groups>                              ActiveSequences                                    // 0x0(0x10)
};


// Size 0x20
class MovieSceneEvaluationGroup: public None
{
public:
	TArray<Struct MovieSceneEvaluationGroupLUTIndex>   LUTIndices                                         // 0x0(0x10)
	TArray<Struct MovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT                                      // 0x10(0x10)
};


// Size 0xc
class MovieSceneEvaluationFieldSegmentPtr: public None
{
public:
	int                                                SegmentIndex                                       // 0x8(0x4)
};


// Size 0x8
class MovieSceneEvaluationFieldTrackPtr: public None
{
public:
	Struct MovieSceneSequenceID                        SequenceId                                         // 0x0(0x4)
	Struct MovieSceneTrackIdentifier                   TrackIdentifier                                    // 0x4(0x4)
};


// Size 0x10
class MovieSceneEvaluationGroupLUTIndex: public None
{
public:
	bool                                               bRequiresImmediateFlush                            // 0x0(0x1)
	int                                                LUTOffset                                          // 0x4(0x4)
	int                                                NumInitPtrs                                        // 0x8(0x4)
	int                                                NumEvalPtrs                                        // 0xc(0x4)
};


// Size 0x10
class MovieSceneEvalTemplateBase: public None
{
public:
};


// Size 0x1
class MovieSceneEmptyStruct: public None
{
public:
};


// Size 0x38
class MovieSceneEvalTemplatePtr: public None
{
public:
};


// Size 0x18
class MovieSceneEvalTemplate: public None
{
public:
	byte                                               CompletionMode                                     // 0x10(0x1)
};


// Size 0x40
class MovieSceneSegment: public None
{
public:
};


// Size 0x8
class SectionEvaluationData: public None
{
public:
	int                                                ImplIndex                                          // 0x0(0x4)
	float                                              ForcedTime                                         // 0x4(0x4)
};


// Size 0x38
class MovieSceneTrackImplementationPtr: public None
{
public:
};


// Size 0x10
class MovieSceneTrackImplementation: public None
{
public:
};


// Size 0x80
class MovieSceneEvaluationTrack: public None
{
public:
	Struct Guid                                        ObjectBindingId                                    // 0x0(0x10)
	byte                                               EvaluationMethod                                   // 0x12(0x1)
	TArray<Struct EvaluationMethod>                    Segments                                           // 0x18(0x10)
	TArray<Struct Segments>                            ChildTemplates                                     // 0x28(0x10)
	Struct MovieSceneTrackImplementationPtr            TrackTemplate                                      // 0x38(0x38)
	struct FName                                       EvaluationGroup                                    // 0x70(0x8)
	bool                                               bEvaluateInPreroll                                 // 0x78(0x1)
	bool                                               bEvaluateInPostroll                                // 0x78(0x1)
};


// Size 0x8
class MovieSceneSequenceTransform: public None
{
public:
	float                                              TimeScale                                          // 0x0(0x4)
	float                                              Offset                                             // 0x4(0x4)
};


// Size 0x10
class MovieSceneSectionParameters: public None
{
public:
	float                                              StartOffset                                        // 0x0(0x4)
	float                                              TimeScale                                          // 0x4(0x4)
	float                                              PrerollTime                                        // 0x8(0x4)
	float                                              PostrollTime                                       // 0xc(0x4)
};


// Size 0xa0
class MovieSceneSequenceHierarchy: public None
{
public:
};


// Size 0x18
class MovieSceneSequenceHierarchyNode: public None
{
public:
	Struct MovieSceneSequenceID                        ParentID                                           // 0x0(0x4)
	TArray<Struct ParentID>                            Children                                           // 0x8(0x10)
};


// Size 0x28
class MovieSceneSubSequenceData: public None
{
public:
	Class MovieSceneSequence*                          Sequence                                           // 0x0(0x8)
	Struct MovieSceneSequenceTransform                 RootToSequenceTransform                            // 0x8(0x8)
	Struct Guid                                        SourceSequenceSignature                            // 0x10(0x10)
	Struct MovieSceneSequenceID                        DeterministicSequenceID                            // 0x20(0x4)
};


// Size 0x4
class MovieSceneTrackEvalOptions: public None
{
public:
	bool                                               bCanEvaluateNearestSection                         // 0x0(0x1)
	bool                                               bEvaluateNearestSection                            // 0x0(0x1)
	bool                                               bEvaluateInPreroll                                 // 0x0(0x1)
	bool                                               bEvaluateInPostroll                                // 0x0(0x1)
};


// Size 0x1
class MovieSceneTrackCompilationParams: public None
{
public:
	bool                                               bForEditorPreview                                  // 0x0(0x1)
};


// Size 0x220
class CachedMovieSceneEvaluationTemplate: public None
{
public:
};


// Size 0x220
class MovieSceneEvaluationTemplate: public None
{
public:
	Struct MovieSceneEvaluationField                   EvaluationField                                    // 0xa0(0x30)
	Struct MovieSceneSequenceHierarchy                 Hierarchy                                          // 0xd0(0xa0)
	Struct MovieSceneGenerationLedger                  Ledger                                             // 0x170(0xa8)
	bool                                               bHasLegacyTrackInstances                           // 0x218(0x1)
	bool                                               bKeepStaleTracks                                   // 0x218(0x1)
};


// Size 0xa8
class MovieSceneGenerationLedger: public None
{
public:
};


// Size 0x18
class MovieSceneSequenceCachedSignature: public None
{
public:
	Struct Guid                                        CachedSignature                                    // 0x8(0x10)
};


// Size 0x20
class MovieSceneLegacyTrackInstanceTemplate: public None
{
public:
	Class MovieSceneTrack*                             Track                                              // 0x18(0x8)
};


// Size 0x20
class MovieScenePropertySectionData: public None
{
public:
	struct FName                                       PropertyName                                       // 0x0(0x8)
	Struct FString                                     PropertyPath                                       // 0x8(0x10)
	struct FName                                       FunctionName                                       // 0x18(0x8)
};


// Size 0x8
class MovieSceneKeyStruct: public None
{
public:
};


}