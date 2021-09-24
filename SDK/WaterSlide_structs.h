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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WaterSlide.WaterSlideParams
// 0x0028
struct FWaterSlideParams
{
	float                                              ForwardSpeed;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IncreaseForwardSpeedMultiplier;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseForwardSpeedMultiplier;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VeeringSpeed;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LeftVeeringDistance;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RightVeeringDistance;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerStat                                 StatToFireForRouteChange;                                  // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData_W5MA[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             PlayerSplashingVFXOverride;                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.WaterSlideActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FWaterSlideActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class USceneComponent*                             SceneComponent;                                            // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.WaterSlideActionStateParams
// 0x0024
struct FWaterSlideActionStateParams
{
	float                                              ForcedFieldOfView;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceStash;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F011[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLookAtOffsetParams                         LookAtOffsetParams;                                        // 0x0008(0x001C) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.OnPlayerSpeedOnWaterSlideChangedActionStateEvent
// 0x000C
struct FOnPlayerSpeedOnWaterSlideChangedActionStateEvent
{
	unsigned char                                      UnknownData_3XJW[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.OnPlayerChangedWaterSlideRouteActionStateEvent
// 0x0010
struct FOnPlayerChangedWaterSlideRouteActionStateEvent
{
	unsigned char                                      UnknownData_7AEC[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 WaterSlideChangeForkOneShot;                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.OnEndWaterSlideActionStateEvent
// 0x0018
struct FOnEndWaterSlideActionStateEvent
{
	unsigned char                                      UnknownData_WZE3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 WaterSlideEnd;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WaterSlideIsEndOneShot;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.OnStartWaterSlideActionStateEvent
// 0x0010
struct FOnStartWaterSlideActionStateEvent
{
	class UWwiseEvent*                                 WaterSlideStart;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             WaterSlideVfxOverride;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct WaterSlide.OnExitedWaterSlideEvent
// 0x0001
struct FOnExitedWaterSlideEvent
{
	unsigned char                                      UnknownData_E1YC[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
