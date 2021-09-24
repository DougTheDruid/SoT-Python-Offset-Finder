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
// Classes
//---------------------------------------------------------------------------

// Class Reviving.ReviveSettings
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UReviveSettings : public UDeveloperSettings
{
public:
	float                                              HealthRegained;                                            // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumReviveDistance;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FadeColour;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldFadeAudio;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EIIX[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ServerWaitTimeBeforeFullyReviving;                         // 0x0054(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReviveTime;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxRevertEvaporateDuration;                                // 0x005C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<AthenaEngine_EPlayMode>>        UnsupportedPlayModes;                                      // 0x0060(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	TArray<struct FModeSpecificReviveSettings>         ModeSpecificSettings;                                      // 0x0070(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	float                                              GiveUpHoldTime;                                            // 0x0080(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GiveUpFadeDuration;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GiveUpEvaporateDuration;                                   // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5DMS[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.DeathSelfInteractionComponent
// 0x0060 (FullSize[0x0178] - InheritedSize[0x0118])
class UDeathSelfInteractionComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData_YBGJ[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HasGivenUp;                                                // 0x0120(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_C34P[0x57];                                    // 0x0121(0x0057) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.DeathSelfInteractionComponent");
		return ptr;
	}



	void SetGiveUpAvaliable();
	void OnRep_HasGivenUp();
	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.PostReviveLocomotionActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPostReviveLocomotionActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.PostReviveLocomotionActionStateId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.RevivableStatus
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class URevivableStatus : public UStatusBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.RevivableStatus");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveableActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReviveableActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveableActionStateId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveableCharacterInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReviveableCharacterInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveableCharacterInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveableRepresentationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReviveableRepresentationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveableRepresentationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveAudioComponent
// 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
class UReviveAudioComponent : public UWwiseEmitterComponent
{
public:
	class UReviveEffectsDataAsset*                     ReviveEffectsDataAsset;                                    // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EKMD[0x18];                                    // 0x02E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveAudioComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UReviveInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveComponent
// 0x0140 (FullSize[0x0258] - InheritedSize[0x0118])
class UReviveComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData_QV0Y[0x10];                                    // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  OwningCharacter;                                           // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ReviveableRepresentationActor;                             // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Reviving_EReviveState>                 ReviveState;                                               // 0x0138(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EInteractableState>             InteractionState;                                          // 0x0139(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TQ3J[0x6];                                     // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReviveableRepresentationClass;                             // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AVX3[0xC];                                     // 0x0148(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               ReviveWindowIsOpen;                                        // 0x0154(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8JIK[0xD3];                                    // 0x0155(0x00D3) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStatus                                     RevivableStatus;                                           // 0x0228(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_7EYZ[0x18];                                    // 0x0240(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveComponent");
		return ptr;
	}



	void OnRep_ReviveState(TEnumAsByte<Reviving_EReviveState> PreviousReviveState);
	void HandleOwningCharacterEndPlay();
	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveConditionalStatTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UReviveConditionalStatTrigger : public UConditionalStatsTriggerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveConditionalStatTrigger");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.RevivedActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URevivedActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.RevivedActionStateId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveDebugComponent
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UReviveDebugComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_BZUG[0x98];                                    // 0x00C8(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveDebugComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveEffectsDataAsset
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UReviveEffectsDataAsset : public UDataAsset
{
public:
	class UMaterialParameterCollection*                ReviveMaterialParameterCollection;                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AstralCordReviveInProgressMaterialCollectionScalarParameterName; // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AstralCordFadeMaterialCollectionScalarParameterName;       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AstralCordBorderMaterialCollectionScalarParameterName;     // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 AstralCordBorderParamValueByAbsoluteTimeSinceDeath;        // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                                   ReviveePostProcessMaterial;                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GhostShaderGhostEffectInterpolationValue;                  // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReviveSuccessfulEffectDuration;                            // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ReviveSuccessfulOneShotVFX;                                // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ReviveSuccessfulOneShotVFX_Revivee;                        // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ReviveInProgressLoopingVFX;                                // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AstralCordReviveInProgressInterpolationSpeed;              // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AstralCordReviveNotInProgressInterpolationSpeed;           // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContinuousBodyLoopingVFX;                                  // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AstralCordFadeInInterpolationSpeed;                        // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AstralCordFadeOutInterpolationSpeed;                       // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DefaultAstralCordHeight;                                   // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AstralCordHeightOffsetFromTheGhost;                        // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     DeadPlayerBodyEvaporatesOneShotVFX;                        // 0x0098(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 OtherPlayers_ReviveGhostAmbientStart;                      // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 OtherPlayers_ReviveGhostAmbientStop;                       // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 DeadPlayer_ReviveInProgressStart;                          // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 DeadPlayer_ReviveInProgressStop;                           // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 OtherPlayers_ReviveInProgressStart;                        // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 OtherPlayers_ReviveInProgressStop;                         // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveEffectsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.ReviveGhost
// 0x0258 (FullSize[0x0628] - InheritedSize[0x03D0])
class AReviveGhost : public AActor
{
public:
	unsigned char                                      UnknownData_XNK9[0x10];                                    // 0x03D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            CorpseMaterials;                                           // 0x03E0(0x0010) (ZeroConstructor, Protected)
	class USceneComponent*                             Root;                                                      // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AstralCordContainer;                                       // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationDataStoreComponent*                AnimationDataStoreComponent;                               // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcessComponent;                                      // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDitherComponent*                            DitherComponent;                                           // 0x0418(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReviveAudioComponent*                       AudioComponent;                                            // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6HLF[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_ENetRole>                       RevivableOwnerNetRole;                                     // 0x0438(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H2E7[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGhostDataAsset*                             ReviveGhostDataAsset;                                      // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UReviveEffectsDataAsset*                     ReviveEffectsDataAsset;                                    // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReviveEffectsValues                        ReviveEffectsValues;                                       // 0x0450(0x0020)
	struct FModeSpecificReviveSettings                 ReviveSettings;                                            // 0x0470(0x0030)
	unsigned char                                      UnknownData_MZZ6[0x13C];                                   // 0x04A0(0x013C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UParticleSystemComponent>     ContinuousOnTheBodyLoopingVFX;                             // 0x05DC(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UParticleSystemComponent>     ReviveInProgressLoopingVFX;                                // 0x05E4(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_QWWK[0x1C];                                    // 0x05EC(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            AstralCordDynamicMaterials;                                // 0x0608(0x0010) (ZeroConstructor, Transient)
	struct FGhostPlayModeParameters                    GhostPlayModeSpecificParameters;                           // 0x0618(0x000C) (Transient)
	unsigned char                                      UnknownData_VW3Q[0x4];                                     // 0x0624(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.ReviveGhost");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Reviving.RevivePlayerActionStateId
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URevivePlayerActionStateId : public UActionStateId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Reviving.RevivePlayerActionStateId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
