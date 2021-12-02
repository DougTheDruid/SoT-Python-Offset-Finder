#pragma once

// Name: SoT, Version: 2.4.0


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

// Enum SpireFramework.EDirectionOfMovement
enum class SpireFramework_EDirectionOfMovement : uint8_t
{
	EDirectionOfMovement__None     = 0,
	EDirectionOfMovement__Rising   = 1,
	EDirectionOfMovement__Lowering = 2,
	EDirectionOfMovement__EDirectionOfMovement_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SpireFramework.SpireInfo
// 0x0008
struct FSpireInfo
{
	int                                                LevelId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldBeLoaded;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldBeVisible;                                           // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DKJP[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SpireFramework.ServerSpireInfo
// 0x0068
struct FServerSpireInfo
{
	int                                                LevelId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      SpireActor;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FString, struct FName>                 InstancedLevelPaths;                                       // 0x0018(0x0050) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SpireFramework.SpireEntry
// 0x0014
struct FSpireEntry
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       IslandName;                                                // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
