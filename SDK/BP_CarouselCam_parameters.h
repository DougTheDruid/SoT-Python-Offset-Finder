#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis
struct ABP_CarouselCam_C_resetLockIconVis_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon
struct ABP_CarouselCam_C_fadeLockIcon_Params
{
	int                                                CharID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IconFadeDone;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon
struct ABP_CarouselCam_C_toggleLockIcon_Params
{
	int                                                CharID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc
struct ABP_CarouselCam_C_resetCamLoc_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.initLights
struct ABP_CarouselCam_C_initLights_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves
struct ABP_CarouselCam_C_camAnimViaCurves_Params
{
	class UCameraComponent*                            Camera;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCurveVector*                                Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCurveVector*                                Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCurveFloat*                                 FOV;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Reverse;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PlayRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               done;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DeltaTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     cameraLoc;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.setLightSector
struct ABP_CarouselCam_C_setLightSector_Params
{
	int                                                sectorID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch
struct ABP_CarouselCam_C_lightSwitch_Params
{
	bool                                               onLights;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               offLights;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timespan;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ULightComponent*>                     LightSet;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      LightSetIntensity;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getSectorID
struct ABP_CarouselCam_C_getSectorID_Params
{
	int                                                sectorID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Remainder;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime
struct ABP_CarouselCam_C_getCamIdleTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              IdleTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaxIdleTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               idleStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta
struct ABP_CarouselCam_C_getCamRotDelta_Params
{
	float                                              rotDelta;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.zeroTest
struct ABP_CarouselCam_C_zeroTest_Params
{
	float                                              Float;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Result;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.zoomCam
struct ABP_CarouselCam_C_zoomCam_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               zoomInTrigger;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               zoomOutTrigger;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               selectedZoomTrigger;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               zoomInDone;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               zoomOutDone;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc
struct ABP_CarouselCam_C_getCamLoc_Params
{
	class USceneComponent*                             CameraRef;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CamLoc;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar
struct ABP_CarouselCam_C_matchRotPerChar_Params
{
	bool                                               rotMatch;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan
struct ABP_CarouselCam_C_set_timeSpan_Params
{
	float                                              StartTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timespan;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan
struct ABP_CarouselCam_C_matchTimespan_Params
{
	bool                                               timesup;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot
struct ABP_CarouselCam_C_set_camAimRot_Params
{
	float                                              YawValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timespan;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Continuous;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ResultYawValue;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               rotSnapDone;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot
struct ABP_CarouselCam_C_get_camAimRot_Params
{
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan
struct ABP_CarouselCam_C_set_maxTimespan_Params
{
	float                                              cameraMoveTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.Reset
struct ABP_CarouselCam_C_Reset_Params
{
	bool                                               lockIconVis;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Continuous;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Stop;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              initTime;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.moveCam
struct ABP_CarouselCam_C_moveCam_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               rotTrigger;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              rotFactor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Continuous;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               rotSnap;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Mouse;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                sectorID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               atDefaultZoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               rotSnapDone;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    sectorRotator;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript
struct ABP_CarouselCam_C_UserConstructionScript_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay
struct ABP_CarouselCam_C_ReceiveBeginPlay_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick
struct ABP_CarouselCam_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam
struct ABP_CarouselCam_C_ExecuteUbergraph_BP_CarouselCam_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
