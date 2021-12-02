// Name: SoT, Version: 2.4.0

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

void FEmoteId::AfterRead()
{
}

void FEmoteId::BeforeDelete()
{
}

void FEmoteData::AfterRead()
{
	READ_PTR_FULL(EmotePropDataAsset, UEmotePropData);
}

void FEmoteData::BeforeDelete()
{
	DELE_PTR_FULL(EmotePropDataAsset);
}

void FEventEmoteEndRequested::AfterRead()
{
}

void FEventEmoteEndRequested::BeforeDelete()
{
}

void FEventEndEmoteAnimation::AfterRead()
{
}

void FEventEndEmoteAnimation::BeforeDelete()
{
}

void FEventEmoteSwapped::AfterRead()
{
}

void FEventEmoteSwapped::BeforeDelete()
{
}

void FEventEmoteCompleted::AfterRead()
{
}

void FEventEmoteCompleted::BeforeDelete()
{
}

void FEventEmoteStarted::AfterRead()
{
}

void FEventEmoteStarted::BeforeDelete()
{
}

void FEventEmoteRequested::AfterRead()
{
}

void FEventEmoteRequested::BeforeDelete()
{
}

void FEmoteDiceOutcomeTelemetryEvent::AfterRead()
{
}

void FEmoteDiceOutcomeTelemetryEvent::BeforeDelete()
{
}

void FEventDisableLookAtEmoteCamera::AfterRead()
{
}

void FEventDisableLookAtEmoteCamera::BeforeDelete()
{
}

void FEventEnableLookAtEmoteCamera::AfterRead()
{
}

void FEventEnableLookAtEmoteCamera::BeforeDelete()
{
}

void UEmoteCameraInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UEmoteCameraInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AEmoteCard::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DynamicCardSelectionMaterialInstance, UMaterialInstanceDynamic);
	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
}

void AEmoteCard::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DynamicCardSelectionMaterialInstance);
	DELE_PTR_FULL(MeshComponent);
}

void AEmoteCoin::AfterRead()
{
	AActor::AfterRead();

}

void AEmoteCoin::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UEmotePropData::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEmotePropData::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEmotePropDiceData::AfterRead()
{
	UEmotePropData::AfterRead();

}

void UEmotePropDiceData::BeforeDelete()
{
	UEmotePropData::BeforeDelete();

}

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function EmotingFramework.EmoteDice.SetDiceMesh
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EmotingFramework_EDiceType>            DiceType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEmoteDice::SetDiceMesh(TEnumAsByte<EmotingFramework_EDiceType> DiceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmotingFramework.EmoteDice.SetDiceMesh");

	AEmoteDice_SetDiceMesh_Params params {};
	params.DiceType = DiceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032FC4B0
//		Name   -> Function EmotingFramework.EmoteDice.SendTelemetryData
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  OrientationUsed                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		int                                                RollNumber                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EmotingFramework_EDiceType>            DiceType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEmoteDice::SendTelemetryData(const struct FTransform& OrientationUsed, int RollNumber, TEnumAsByte<EmotingFramework_EDiceType> DiceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmotingFramework.EmoteDice.SendTelemetryData");

	AEmoteDice_SendTelemetryData_Params params {};
	params.OrientationUsed = OrientationUsed;
	params.RollNumber = RollNumber;
	params.DiceType = DiceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x032FC3E0
//		Name   -> Function EmotingFramework.EmoteDice.RollDice
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                RollNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EmotingFramework_EDiceType>            DiceType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEmoteDice::RollDice(int RollNumber, TEnumAsByte<EmotingFramework_EDiceType> DiceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EmotingFramework.EmoteDice.RollDice");

	AEmoteDice_RollDice_Params params {};
	params.RollNumber = RollNumber;
	params.DiceType = DiceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AEmoteDice::AfterRead()
{
	AActor::AfterRead();

}

void AEmoteDice::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UEmoteIdListingAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UEmoteIdListingAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UEmoteSettings::AfterRead()
{
	UDeveloperSettings::AfterRead();

}

void UEmoteSettings::BeforeDelete()
{
	UDeveloperSettings::BeforeDelete();

}

void UEmoteZoomInAnalogInputId::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UEmoteZoomInAnalogInputId::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

void UEmoteZoomMouseAnalogInputId::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UEmoteZoomMouseAnalogInputId::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

void UEmoteZoomOutAnalogInputId::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UEmoteZoomOutAnalogInputId::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
