#pragma once

// Name: SoT, Version: 2.3.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              LevelSequence;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                  // 0x0010(0x0028)  (Parm)
	class ULevelSequencePlayer*                        ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoadSequence;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequenceActor_SetBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                   // 0x0000(0x0010)  (Parm)
	TArray<class AActor*>                              Actors;                                                    // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                   // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ALevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequenceActor_ResetBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                   // 0x0000(0x0010)  (Parm)
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequenceActor_RemoveBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                   // 0x0000(0x0010)  (Parm)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
	bool                                               Load;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULevelSequence*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequenceActor_AddBinding_Params
{
	struct FMovieSceneObjectBindingPtr                 Binding;                                                   // 0x0000(0x0010)  (Parm)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bAllowBindingsFromAsset;                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
	class UObject*                                     InSettings;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
