// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FActorSequenceObjectReference::AfterRead()
{
}

void FActorSequenceObjectReference::BeforeDelete()
{
}

void FActorSequenceObjectReferences::AfterRead()
{
}

void FActorSequenceObjectReferences::BeforeDelete()
{
}

void FActorSequenceObjectReferenceMap::AfterRead()
{
}

void FActorSequenceObjectReferenceMap::BeforeDelete()
{
}

void UActorSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void UActorSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

void UActorSequenceComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(Sequence, UActorSequence);
	READ_PTR_FULL(SequencePlayer, UActorSequencePlayer);
}

void UActorSequenceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(Sequence);
	DELE_PTR_FULL(SequencePlayer);
}

void UActorSequencePlayer::AfterRead()
{
	UMovieSceneSequencePlayer::AfterRead();

}

void UActorSequencePlayer::BeforeDelete()
{
	UMovieSceneSequencePlayer::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
