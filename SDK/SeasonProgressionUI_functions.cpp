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

void FSeasonGoalPopupAsset::AfterRead()
{
}

void FSeasonGoalPopupAsset::BeforeDelete()
{
}

void FSeasonIconPopupAsset::AfterRead()
{
}

void FSeasonIconPopupAsset::BeforeDelete()
{
}

void FSeasonProgressionUIEventTypeTelemetryFragment::AfterRead()
{
}

void FSeasonProgressionUIEventTypeTelemetryFragment::BeforeDelete()
{
}

void FSeasonProgressionUITelemetryFragment::AfterRead()
{
}

void FSeasonProgressionUITelemetryFragment::BeforeDelete()
{
}

void FNavigationDesc::AfterRead()
{
}

void FNavigationDesc::BeforeDelete()
{
}

void FEnableMoreButtonEvent::AfterRead()
{
}

void FEnableMoreButtonEvent::BeforeDelete()
{
}

void FSeasonNotificationContent::AfterRead()
{
}

void FSeasonNotificationContent::BeforeDelete()
{
}

void FDeedProgressDesc::AfterRead()
{
}

void FDeedProgressDesc::BeforeDelete()
{
}

void FSeasonsChatNotification::AfterRead()
{
}

void FSeasonsChatNotification::BeforeDelete()
{
}

void FOpenSeasonsMenuEvent::AfterRead()
{
}

void FOpenSeasonsMenuEvent::BeforeDelete()
{
}

void FDisableMoreButtonEvent::AfterRead()
{
}

void FDisableMoreButtonEvent::BeforeDelete()
{
}

void FShowDeedProgressEvent::AfterRead()
{
}

void FShowDeedProgressEvent::BeforeDelete()
{
}

void FSeasonsChatNotificationEvent::AfterRead()
{
}

void FSeasonsChatNotificationEvent::BeforeDelete()
{
}

void FSeasonProgressionUITelemetryFragmentInput::AfterRead()
{
	FTelemetryFragmentInput::AfterRead();

}

void FSeasonProgressionUITelemetryFragmentInput::BeforeDelete()
{
	FTelemetryFragmentInput::BeforeDelete();

}

void FSeasonsPopupEvent::AfterRead()
{
}

void FSeasonsPopupEvent::BeforeDelete()
{
}

void USeasonPopupAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void USeasonPopupAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void USeasonPopupListAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void USeasonPopupListAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void USeasonProgressionUIInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USeasonProgressionUIInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void USeasonProgressionUITelemetryInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USeasonProgressionUITelemetryInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed
// (Final, Native, Private)
void USeasonProgressionUIComponent::OnHUDDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed");

	USeasonProgressionUIComponent_OnHUDDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USeasonProgressionUIComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(InputBinder, USeasonProgressionUIInputBinder);
	READ_PTR_FULL(InputHandler, USeasonProgressionUICompositeInputHandler);
}

void USeasonProgressionUIComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(InputBinder);
	DELE_PTR_FULL(InputHandler);
}

// Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> USeasonProgressionUICompositeInputHandler::OnMenuButtonPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed");

	USeasonProgressionUICompositeInputHandler_OnMenuButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USeasonProgressionUICompositeInputHandler::AfterRead()
{
	UCompositeInputHandler::AfterRead();

}

void USeasonProgressionUICompositeInputHandler::BeforeDelete()
{
	UCompositeInputHandler::BeforeDelete();

}

void USeasonProgressionUIInputBinder::AfterRead()
{
	UInputBinder::AfterRead();

}

void USeasonProgressionUIInputBinder::BeforeDelete()
{
	UInputBinder::BeforeDelete();

}

void USeasonProgressionUIServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USeasonProgressionUIServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ASeasonProgressionUIService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SeasonPopupListAsset, USeasonPopupListAsset);
}

void ASeasonProgressionUIService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SeasonPopupListAsset);
}

void USeasonProgressionUISettings::AfterRead()
{
	UObject::AfterRead();

}

void USeasonProgressionUISettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
