// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
struct EmissaryFactionActionRewardBoostServiceEvent
{
public:
	byte                                                         FactionActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_LO67V[0x3];                                 // 0x1(0x3)
	struct Guid                                                  AssociatedCrew;                                    // 0x4(0x10)
};


// Size 0x18
struct EmissaryGlobalActionRewardBoostServiceEvent
{
public:
	class UClass*                                                FinishedEventType;                                 // 0x0(0x8)
	struct Guid                                                  AssociatedCrew;                                    // 0x8(0x10)
};


// Size 0x1c
struct EmissaryCompanyActionRewardBoostServiceEvent
{
public:
	struct FName                                                 AssociatedCompany;                                 // 0x0(0x8)
	byte                                                         CompanyActionType;                                 // 0x8(0x1)
	char                                                         pad0x3_D6FBR[0x3];                                 // 0x9(0x3)
	struct Guid                                                  AssociatedCrew;                                    // 0xc(0x10)
};


// Size 0x8
struct EmissaryGlobalActionRewardBoostEvent
{
public:
	class UClass*                                                GameEventType;                                     // 0x0(0x8)
};


// Size 0x1
struct EmissaryNonQuestCompanyActionRewardBoostEvent
{
public:
	byte                                                         CompanyActionType;                                 // 0x0(0x1)
};


// Size 0x14
struct EmissaryQuestCompanyActionRewardBoostEvent
{
public:
	byte                                                         CompanyActionType;                                 // 0x0(0x1)
	char                                                         pad0x3_ONE4V[0x3];                                 // 0x1(0x3)
	struct Guid                                                  QuestId;                                           // 0x4(0x10)
};


// Size 0x10
struct EmissaryCompanyChangedEvent
{
public:
	char                                                         pad0x10_32MQV[0x10];                               // 0x0(0x10)
};


// Size 0x10
struct EmissaryLedgerVisited
{
public:
	struct FString                                               CompanyId;                                         // 0x0(0x10)
};


}