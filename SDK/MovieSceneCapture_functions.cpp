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

void FCaptureProtocolID::AfterRead()
{
}

void FCaptureProtocolID::BeforeDelete()
{
}

void FCaptureResolution::AfterRead()
{
}

void FCaptureResolution::BeforeDelete()
{
}

void FMovieSceneCaptureSettings::AfterRead()
{
	READ_PTR_FULL(GameModeOverride, UClass);
}

void FMovieSceneCaptureSettings::BeforeDelete()
{
	DELE_PTR_FULL(GameModeOverride);
}

void FCompositionGraphCapturePasses::AfterRead()
{
}

void FCompositionGraphCapturePasses::BeforeDelete()
{
}

void UMovieSceneCaptureInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneCaptureInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneCaptureProtocolSettings::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneCaptureProtocolSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneCapture::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ProtocolSettings, UMovieSceneCaptureProtocolSettings);
}

void UMovieSceneCapture::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ProtocolSettings);
}

void UAutomatedLevelSequenceCapture::AfterRead()
{
	UMovieSceneCapture::AfterRead();

}

void UAutomatedLevelSequenceCapture::BeforeDelete()
{
	UMovieSceneCapture::BeforeDelete();

}

void ULevelCapture::AfterRead()
{
	UMovieSceneCapture::AfterRead();

}

void ULevelCapture::BeforeDelete()
{
	UMovieSceneCapture::BeforeDelete();

}

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UMovieSceneCaptureEnvironment::STATIC_GetCaptureFrameNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");

	UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneCaptureEnvironment::STATIC_GetCaptureElapsedTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");

	UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMovieSceneCaptureEnvironment::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneCaptureEnvironment::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UFrameGrabberProtocolSettings::AfterRead()
{
	UMovieSceneCaptureProtocolSettings::AfterRead();

}

void UFrameGrabberProtocolSettings::BeforeDelete()
{
	UMovieSceneCaptureProtocolSettings::BeforeDelete();

}

void UBmpImageCaptureSettings::AfterRead()
{
	UMovieSceneCaptureProtocolSettings::AfterRead();

}

void UBmpImageCaptureSettings::BeforeDelete()
{
	UMovieSceneCaptureProtocolSettings::BeforeDelete();

}

void UImageCaptureSettings::AfterRead()
{
	UFrameGrabberProtocolSettings::AfterRead();

}

void UImageCaptureSettings::BeforeDelete()
{
	UFrameGrabberProtocolSettings::BeforeDelete();

}

void UCompositionGraphCaptureSettings::AfterRead()
{
	UMovieSceneCaptureProtocolSettings::AfterRead();

}

void UCompositionGraphCaptureSettings::BeforeDelete()
{
	UMovieSceneCaptureProtocolSettings::BeforeDelete();

}

void UVideoCaptureSettings::AfterRead()
{
	UFrameGrabberProtocolSettings::AfterRead();

}

void UVideoCaptureSettings::BeforeDelete()
{
	UFrameGrabberProtocolSettings::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
