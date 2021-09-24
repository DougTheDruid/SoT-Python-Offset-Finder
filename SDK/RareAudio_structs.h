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
// Enums
//---------------------------------------------------------------------------

// Enum RareAudio.EEmitterRelationship
enum class RareAudio_EEmitterRelationship : uint8_t
{
	EEmitterRelationship__Audio_Remote = 0,
	EEmitterRelationship__Audio_Local = 1,
	EEmitterRelationship__Audio_Default = 2,
	EEmitterRelationship__Audio_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareAudio.WwiseEmitter
// 0x0020
struct FWwiseEmitter
{
	unsigned char                                      UnknownData_ODYT[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareAudio.EventToComponentMapping
// 0x0020
struct FEventToComponentMapping
{
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareAudio.WwiseEmitterCreationParams
// 0x0028
struct FWwiseEmitterCreationParams
{
	class UWwiseEvent*                                 Event;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RTPCName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RTPCValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SwitchGroup;                                               // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SwitchValue;                                               // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_85HR[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareAudio.StaticMeshWwiseEmitterData
// 0x0038
struct FStaticMeshWwiseEmitterData
{
	class UWwiseObjectPoolWrapper*                     Pool;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocalOriginOffset;                                         // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VFJW[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWwiseEvent*>                         StartEvents;                                               // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         StopEvents;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareAudio.StaticMeshAudioAssociation
// 0x0020
struct FStaticMeshAudioAssociation
{
	TArray<struct FStaticMeshWwiseEmitterData>         PlaybackDataArray;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UStaticMesh*>                         Meshes;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
// 0x0068
struct FStaticMeshComponentAudioAssociation
{
	struct FStaticMeshWwiseEmitterData                 PlaybackData;                                              // 0x0000(0x0038) (Edit)
	struct FVector                                     EmitterPositionRelativeToComponentOrigin;                  // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0YPH[0x24];                                    // 0x0044(0x0024) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
