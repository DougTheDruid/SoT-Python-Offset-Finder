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

// BlueprintGeneratedClass BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C
// 0x0060 (FullSize[0x0440] - InheritedSize[0x03E0])
class ABP_DynamicDensityFogVolume_C : public AFogVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              StateBlend_BlendAmount_F79089CA4C773743F03F4C978EB7C986;   // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             StateBlend__Direction_F79089CA4C773743F03F4C978EB7C986;    // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PLNA[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          StateBlend;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    UpdateMaterial;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCanvasRenderTarget2D*                       Canvas;                                                    // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                CurrentState;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                NextState;                                                 // 0x040C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	TArray<class UTexture2D*>                          StateTextures;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Width;                                                     // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Height;                                                    // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseStateParameters;                                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M14Q[0x7];                                     // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBP_Struct_DynamicFogVolumeParams>   StateParams;                                               // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C");
		return ptr;
	}



	void BlendParams(float BlendAmount);
	void OnRep_NextState();
	void UserConstructionScript();
	void StateBlend__FinishedFunc();
	void StateBlend__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateCanvas(class UCanvas* Canvas, int Width, int Height);
	void ChangeState(int State);
	void SetState();
	void ExecuteUbergraph_BP_DynamicDensityFogVolume(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
