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

// Enum EmissaryFramework.EEmisaryCompanyActionType
enum class EmissaryFramework_EEmisaryCompanyActionType : uint8_t
{
	EEmisaryCompanyActionType__CompleteRiddleStep = 0,
	EEmisaryCompanyActionType__CompleteRiddleQuest = 1,
	EEmisaryCompanyActionType__CompleteXMarksTheSpotQuest = 2,
	EEmisaryCompanyActionType__DefeatNamedSkeleton = 3,
	EEmisaryCompanyActionType__CompleteBountyQuest = 4,
	EEmisaryCompanyActionType__CompleteCargoRunStep = 5,
	EEmisaryCompanyActionType__CompleteCargoRunQuest = 6,
	EEmisaryCompanyActionType__CompleteMerchantStep = 7,
	EEmisaryCompanyActionType__CompleteMerchantQuest = 8,
	EEmisaryCompanyActionType__CompleteGhostShipQuest = 9,
	EEmisaryCompanyActionType__MapPieceFound = 10,
	EEmisaryCompanyActionType__CompleteWayfinderVoyage = 11,
	EEmisaryCompanyActionType__DiscoveredLostShipmentsClue = 12,
	EEmisaryCompanyActionType__CompleteLostShipmentsVoyage = 13,
	EEmisaryCompanyActionType__EEmisaryCompanyActionType_MAX = 14,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostServiceEvent
// 0x0018
struct FEmissaryGlobalActionRewardBoostServiceEvent
{
	class UClass*                                      FinishedEventType;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                       AssociatedCrew;                                            // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryFramework.EmissaryCompanyActionRewardBoostServiceEvent
// 0x001C
struct FEmissaryCompanyActionRewardBoostServiceEvent
{
	struct FName                                       AssociatedCompany;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EmissaryFramework_EEmisaryCompanyActionType> CompanyActionType;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ICUD[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       AssociatedCrew;                                            // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryFramework.EmissaryGlobalActionRewardBoostEvent
// 0x0008
struct FEmissaryGlobalActionRewardBoostEvent
{
	class UClass*                                      GameEventType;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryFramework.EmissaryNonQuestCompanyActionRewardBoostEvent
// 0x0001
struct FEmissaryNonQuestCompanyActionRewardBoostEvent
{
	TEnumAsByte<EmissaryFramework_EEmisaryCompanyActionType> CompanyActionType;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryFramework.EmissaryQuestCompanyActionRewardBoostEvent
// 0x0014
struct FEmissaryQuestCompanyActionRewardBoostEvent
{
	TEnumAsByte<EmissaryFramework_EEmisaryCompanyActionType> CompanyActionType;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JJA8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       QuestId;                                                   // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryFramework.EmissaryCompanyChangedEvent
// 0x0010
struct FEmissaryCompanyChangedEvent
{
	unsigned char                                      UnknownData_Y9GF[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct EmissaryFramework.EmissaryLedgerVisited
// 0x0010
struct FEmissaryLedgerVisited
{
	struct FString                                     CompanyId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
