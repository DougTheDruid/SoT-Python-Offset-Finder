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
// Enums
//---------------------------------------------------------------------------

// Enum Time.ETimeOfDay
enum class Time_ETimeOfDay : uint8_t
{
	ETimeOfDay__Day                = 0,
	ETimeOfDay__Night              = 1,
	ETimeOfDay__ETimeOfDay_MAX     = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Time.GameTime
// 0x0008
struct FGameTime
{
	struct FDateTime                                   DateTimeRepresentation;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Time.ReplicatedDateTime
// 0x0008
struct FReplicatedDateTime
{
	int64_t                                            Ticks;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Time.ReplicatedAuthoritativeTime
// 0x0010
struct FReplicatedAuthoritativeTime
{
	struct FReplicatedDateTime                         WorldTime;                                                 // 0x0000(0x0008)
	struct FReplicatedDateTime                         SyncTime;                                                  // 0x0008(0x0008)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Time.GameTimeRange
// 0x0010
struct FGameTimeRange
{
	struct FGameTime                                   Start;                                                     // 0x0000(0x0008) (Edit)
	struct FGameTime                                   End;                                                       // 0x0008(0x0008) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Time.EventSetDateTime
// 0x0014
struct FEventSetDateTime
{
	int                                                Year;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Month;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Day;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Hour;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Minute;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
