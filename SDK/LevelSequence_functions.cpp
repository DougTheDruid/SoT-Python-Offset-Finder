// Name: SoT, Version: 2.2.1.1

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

void FLevelSequenceObjectReferenceMap::AfterRead()
{
}

void FLevelSequenceObjectReferenceMap::BeforeDelete()
{
}

void FLevelSequenceObject::AfterRead()
{
}

void FLevelSequenceObject::BeforeDelete()
{
}

void FLevelSequenceSnapshotSettings::AfterRead()
{
}

void FLevelSequenceSnapshotSettings::BeforeDelete()
{
}

void FLevelSequencePlayerSnapshot::AfterRead()
{
	READ_PTR_FULL(CameraComponent, UCameraComponent);
}

void FLevelSequencePlayerSnapshot::BeforeDelete()
{
	DELE_PTR_FULL(CameraComponent);
}

void FLevelSequenceObjectReference::AfterRead()
{
}

void FLevelSequenceObjectReference::BeforeDelete()
{
}

void FLevelSequencePlaybackSettings::AfterRead()
{
	FMovieSceneSequencePlaybackSettings::AfterRead();

}

void FLevelSequencePlaybackSettings::BeforeDelete()
{
	FMovieSceneSequencePlaybackSettings::BeforeDelete();

}

void FBoundActorProxy::AfterRead()
{
}

void FBoundActorProxy::BeforeDelete()
{
}

void ULevelSequence::AfterRead()
{
	UMovieSceneSequence::AfterRead();

	READ_PTR_FULL(MovieScene, UMovieScene);
}

void ULevelSequence::BeforeDelete()
{
	UMovieSceneSequence::BeforeDelete();

	DELE_PTR_FULL(MovieScene);
}

void ULevelSequenceSubtitlesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void ULevelSequenceSubtitlesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelSequencePlayer::AfterRead()
{
	UMovieSceneSequencePlayer::AfterRead();

	READ_PTR_FULL(SpawnablesParent, AActor);
}

void ULevelSequencePlayer::BeforeDelete()
{
	UMovieSceneSequencePlayer::BeforeDelete();

	DELE_PTR_FULL(SpawnablesParent);
}

void ULevelSequenceBurnInInitSettings::AfterRead()
{
	UObject::AfterRead();

}

void ULevelSequenceBurnInInitSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULevelSequenceBurnInOptions::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Settings, ULevelSequenceBurnInInitSettings);
}

void ULevelSequenceBurnInOptions::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Settings);
}

// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           LoadSequence                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence, bool LoadSequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;
	params.LoadSequence = LoadSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
void ALevelSequenceActor::ResetBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ALevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Load                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ULevelSequence* ALevelSequenceActor::GetSequence(bool Load)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ALevelSequenceActor_GetSequence_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALevelSequenceActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SequencePlayer, ULevelSequencePlayer);
	READ_PTR_FULL(BurnInOptions, ULevelSequenceBurnInOptions);
	READ_PTR_FULL(BindingOverrides, UMovieSceneBindingOverrides);
	READ_PTR_FULL(SpawnablesParent, AActor);
	READ_PTR_FULL(BurnInInstance, ULevelSequenceBurnIn);
}

void ALevelSequenceActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SequencePlayer);
	DELE_PTR_FULL(BurnInOptions);
	DELE_PTR_FULL(BindingOverrides);
	DELE_PTR_FULL(SpawnablesParent);
	DELE_PTR_FULL(BurnInInstance);
}

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULevelSequenceBurnIn::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(LevelSequenceActor, ALevelSequenceActor);
}

void ULevelSequenceBurnIn::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(LevelSequenceActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
