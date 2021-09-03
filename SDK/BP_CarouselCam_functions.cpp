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

// Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CarouselCam_C::resetLockIconVis()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis");

	ABP_CarouselCam_C_resetLockIconVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IconFadeDone                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::fadeLockIcon(int CharID, bool* IconFadeDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon");

	ABP_CarouselCam_C_fadeLockIcon_Params params;
	params.CharID = CharID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IconFadeDone != nullptr)
		*IconFadeDone = params.IconFadeDone;

}


// Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CharID                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::toggleLockIcon(int CharID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon");

	ABP_CarouselCam_C_toggleLockIcon_Params params;
	params.CharID = CharID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CarouselCam_C::resetCamLoc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc");

	ABP_CarouselCam_C_resetCamLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.initLights
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_CarouselCam_C::initLights()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.initLights");

	ABP_CarouselCam_C_initLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        Camera                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveVector*            Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveVector*            Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCurveFloat*             FOV                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Reverse                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           done                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DeltaTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 cameraLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::camAnimViaCurves(class UCameraComponent* Camera, class UCurveVector* Location, class UCurveVector* Rotation, class UCurveFloat* FOV, float Time, bool Reverse, float PlayRate, bool* done, float* DeltaTime, struct FVector* cameraLoc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves");

	ABP_CarouselCam_C_camAnimViaCurves_Params params;
	params.Camera = Camera;
	params.Location = Location;
	params.Rotation = Rotation;
	params.FOV = FOV;
	params.Time = Time;
	params.Reverse = Reverse;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (done != nullptr)
		*done = params.done;
	if (DeltaTime != nullptr)
		*DeltaTime = params.DeltaTime;
	if (cameraLoc != nullptr)
		*cameraLoc = params.cameraLoc;

}


// Function BP_CarouselCam.BP_CarouselCam_C.setLightSector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            sectorID                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::setLightSector(int sectorID, struct FRotator* Rotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.setLightSector");

	ABP_CarouselCam_C_setLightSector_Params params;
	params.sectorID = sectorID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           onLights                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           offLights                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Timespan                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ULightComponent*> LightSet                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  LightSetIntensity              (Parm, OutParm, ZeroConstructor, ReferenceParm)
void ABP_CarouselCam_C::lightSwitch(bool onLights, bool offLights, float Timespan, TArray<class ULightComponent*>* LightSet, TArray<float>* LightSetIntensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch");

	ABP_CarouselCam_C_lightSwitch_Params params;
	params.onLights = onLights;
	params.offLights = offLights;
	params.Timespan = Timespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LightSet != nullptr)
		*LightSet = params.LightSet;
	if (LightSetIntensity != nullptr)
		*LightSetIntensity = params.LightSetIntensity;

}


// Function BP_CarouselCam.BP_CarouselCam_C.getSectorID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            sectorID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Remainder                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::getSectorID(int* sectorID, float* Remainder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getSectorID");

	ABP_CarouselCam_C_getSectorID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (sectorID != nullptr)
		*sectorID = params.sectorID;
	if (Remainder != nullptr)
		*Remainder = params.Remainder;

}


// Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          IdleTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          MaxIdleTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           idleStatus                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::getCamIdleTime(float Time, float* IdleTime, float* MaxIdleTime, bool* idleStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime");

	ABP_CarouselCam_C_getCamIdleTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IdleTime != nullptr)
		*IdleTime = params.IdleTime;
	if (MaxIdleTime != nullptr)
		*MaxIdleTime = params.MaxIdleTime;
	if (idleStatus != nullptr)
		*idleStatus = params.idleStatus;

}


// Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          rotDelta                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::getCamRotDelta(float* rotDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta");

	ABP_CarouselCam_C_getCamRotDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (rotDelta != nullptr)
		*rotDelta = params.rotDelta;

}


// Function BP_CarouselCam.BP_CarouselCam_C.zeroTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Float                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::zeroTest(float Float, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.zeroTest");

	ABP_CarouselCam_C_zeroTest_Params params;
	params.Float = Float;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function BP_CarouselCam.BP_CarouselCam_C.zoomCam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           zoomInTrigger                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           zoomOutTrigger                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           selectedZoomTrigger            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           zoomInDone                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           zoomOutDone                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::zoomCam(float Time, bool zoomInTrigger, bool zoomOutTrigger, bool selectedZoomTrigger, bool* zoomInDone, bool* zoomOutDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.zoomCam");

	ABP_CarouselCam_C_zoomCam_Params params;
	params.Time = Time;
	params.zoomInTrigger = zoomInTrigger;
	params.zoomOutTrigger = zoomOutTrigger;
	params.selectedZoomTrigger = selectedZoomTrigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (zoomInDone != nullptr)
		*zoomInDone = params.zoomInDone;
	if (zoomOutDone != nullptr)
		*zoomOutDone = params.zoomOutDone;

}


// Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CameraRef                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 CamLoc                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::getCamLoc(class USceneComponent* CameraRef, struct FVector* CamLoc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc");

	ABP_CarouselCam_C_getCamLoc_Params params;
	params.CameraRef = CameraRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CamLoc != nullptr)
		*CamLoc = params.CamLoc;

}


// Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           rotMatch                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::matchRotPerChar(bool* rotMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar");

	ABP_CarouselCam_C_matchRotPerChar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (rotMatch != nullptr)
		*rotMatch = params.rotMatch;

}


// Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Timespan                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::set_timeSpan(float StartTime, float* Timespan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan");

	ABP_CarouselCam_C_set_timeSpan_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Timespan != nullptr)
		*Timespan = params.Timespan;

}


// Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           timesup                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::matchTimespan(bool* timesup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan");

	ABP_CarouselCam_C_matchTimespan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (timesup != nullptr)
		*timesup = params.timesup;

}


// Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          YawValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Timespan                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Continuous                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ResultYawValue                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           rotSnapDone                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::set_camAimRot(float YawValue, float Timespan, bool Continuous, float* ResultYawValue, bool* rotSnapDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot");

	ABP_CarouselCam_C_set_camAimRot_Params params;
	params.YawValue = YawValue;
	params.Timespan = Timespan;
	params.Continuous = Continuous;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultYawValue != nullptr)
		*ResultYawValue = params.ResultYawValue;
	if (rotSnapDone != nullptr)
		*rotSnapDone = params.rotSnapDone;

}


// Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::get_camAimRot(struct FRotator* Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot");

	ABP_CarouselCam_C_get_camAimRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

}


// Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          cameraMoveTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::set_maxTimespan(float* cameraMoveTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan");

	ABP_CarouselCam_C_set_maxTimespan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (cameraMoveTime != nullptr)
		*cameraMoveTime = params.cameraMoveTime;

}


// Function BP_CarouselCam.BP_CarouselCam_C.Reset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           lockIconVis                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Continuous                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Stop                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          initTime                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::Reset(bool lockIconVis, bool Continuous, bool Stop, float* initTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.Reset");

	ABP_CarouselCam_C_Reset_Params params;
	params.lockIconVis = lockIconVis;
	params.Continuous = Continuous;
	params.Stop = Stop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (initTime != nullptr)
		*initTime = params.initTime;

}


// Function BP_CarouselCam.BP_CarouselCam_C.moveCam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           rotTrigger                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          rotFactor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Continuous                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           rotSnap                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Mouse                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            sectorID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           atDefaultZoom                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           rotSnapDone                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                sectorRotator                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::moveCam(float Time, bool rotTrigger, float rotFactor, bool Continuous, bool rotSnap, bool Mouse, int* sectorID, bool* atDefaultZoom, bool* rotSnapDone, struct FRotator* sectorRotator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.moveCam");

	ABP_CarouselCam_C_moveCam_Params params;
	params.Time = Time;
	params.rotTrigger = rotTrigger;
	params.rotFactor = rotFactor;
	params.Continuous = Continuous;
	params.rotSnap = rotSnap;
	params.Mouse = Mouse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (sectorID != nullptr)
		*sectorID = params.sectorID;
	if (atDefaultZoom != nullptr)
		*atDefaultZoom = params.atDefaultZoom;
	if (rotSnapDone != nullptr)
		*rotSnapDone = params.rotSnapDone;
	if (sectorRotator != nullptr)
		*sectorRotator = params.sectorRotator;

}


// Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CarouselCam_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript");

	ABP_CarouselCam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_CarouselCam_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay");

	ABP_CarouselCam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick");

	ABP_CarouselCam_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CarouselCam_C::ExecuteUbergraph_BP_CarouselCam(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam");

	ABP_CarouselCam_C_ExecuteUbergraph_BP_CarouselCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CarouselCam_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(lockedIcon07, UDecalComponent);
	READ_PTR_FULL(lockedIcon06, UDecalComponent);
	READ_PTR_FULL(lockedIcon05, UDecalComponent);
	READ_PTR_FULL(lockedIcon04, UDecalComponent);
	READ_PTR_FULL(lockedIcon03, UDecalComponent);
	READ_PTR_FULL(lockedIcon02, UDecalComponent);
	READ_PTR_FULL(lockedIcon01, UDecalComponent);
	READ_PTR_FULL(lockedIcon00, UDecalComponent);
	READ_PTR_FULL(charLight_floor_Select_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_rear_Select_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_left_Select_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_right_Select_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_right_Far_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_rear_Far_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_floor_Far_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_left_Far_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_floor_HighL_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_rear_HighL_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_left_HighL_SpotL, USpotLightComponent);
	READ_PTR_FULL(charLight_right_HighL_SpotL, USpotLightComponent);
	READ_PTR_FULL(Lights, USceneComponent);
	READ_PTR_FULL(Camera, UCameraComponent);
	READ_PTR_FULL(_camAim, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(camSpeed, UCurveFloat);
	READ_PTR_FULL(camZoom, UCurveFloat);
	READ_PTR_FULL(lightFade, UCurveFloat);
	READ_PTR_FULL(HighLight_camFOV, UCurveFloat);
	READ_PTR_FULL(HighLight_camRot, UCurveVector);
	READ_PTR_FULL(HighLight_camLoc, UCurveVector);
	READ_PTR_FULL(select_camZoomRot, UCurveVector);
	READ_PTR_FULL(Select_camZoomFOV, UCurveFloat);
	READ_PTR_FULL(select_camZoomLoc, UCurveVector);
	READ_PTR_FULL(camRot, UCurveVector);
	READ_PTR_FULL(CamLoc, UCurveVector);
	READ_PTR_FULL(camFOV, UCurveFloat);
	READ_PTR_FULL(MI_lockIcon, UMaterialInstance);
	READ_PTR_FULL(DM_lockIcon00, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon01, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon02, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon03, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon04, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon05, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon06, UMaterialInstanceDynamic);
	READ_PTR_FULL(DM_lockIcon07, UMaterialInstanceDynamic);
}

void ABP_CarouselCam_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(lockedIcon07);
	DELE_PTR_FULL(lockedIcon06);
	DELE_PTR_FULL(lockedIcon05);
	DELE_PTR_FULL(lockedIcon04);
	DELE_PTR_FULL(lockedIcon03);
	DELE_PTR_FULL(lockedIcon02);
	DELE_PTR_FULL(lockedIcon01);
	DELE_PTR_FULL(lockedIcon00);
	DELE_PTR_FULL(charLight_floor_Select_SpotL);
	DELE_PTR_FULL(charLight_rear_Select_SpotL);
	DELE_PTR_FULL(charLight_left_Select_SpotL);
	DELE_PTR_FULL(charLight_right_Select_SpotL);
	DELE_PTR_FULL(charLight_right_Far_SpotL);
	DELE_PTR_FULL(charLight_rear_Far_SpotL);
	DELE_PTR_FULL(charLight_floor_Far_SpotL);
	DELE_PTR_FULL(charLight_left_Far_SpotL);
	DELE_PTR_FULL(charLight_floor_HighL_SpotL);
	DELE_PTR_FULL(charLight_rear_HighL_SpotL);
	DELE_PTR_FULL(charLight_left_HighL_SpotL);
	DELE_PTR_FULL(charLight_right_HighL_SpotL);
	DELE_PTR_FULL(Lights);
	DELE_PTR_FULL(Camera);
	DELE_PTR_FULL(_camAim);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(camSpeed);
	DELE_PTR_FULL(camZoom);
	DELE_PTR_FULL(lightFade);
	DELE_PTR_FULL(HighLight_camFOV);
	DELE_PTR_FULL(HighLight_camRot);
	DELE_PTR_FULL(HighLight_camLoc);
	DELE_PTR_FULL(select_camZoomRot);
	DELE_PTR_FULL(Select_camZoomFOV);
	DELE_PTR_FULL(select_camZoomLoc);
	DELE_PTR_FULL(camRot);
	DELE_PTR_FULL(CamLoc);
	DELE_PTR_FULL(camFOV);
	DELE_PTR_FULL(MI_lockIcon);
	DELE_PTR_FULL(DM_lockIcon00);
	DELE_PTR_FULL(DM_lockIcon01);
	DELE_PTR_FULL(DM_lockIcon02);
	DELE_PTR_FULL(DM_lockIcon03);
	DELE_PTR_FULL(DM_lockIcon04);
	DELE_PTR_FULL(DM_lockIcon05);
	DELE_PTR_FULL(DM_lockIcon06);
	DELE_PTR_FULL(DM_lockIcon07);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
