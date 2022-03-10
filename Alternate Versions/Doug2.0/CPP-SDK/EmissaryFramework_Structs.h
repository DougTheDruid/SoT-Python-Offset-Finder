namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class EmissaryGlobalActionRewardBoostServiceEvent: public None
{
public:
	class                                              FinishedEventType                                  // 0x0(0x8)
	Struct Guid                                        AssociatedCrew                                     // 0x8(0x10)
};


// Size 0x1c
class EmissaryCompanyActionRewardBoostServiceEvent: public None
{
public:
	struct FName                                       AssociatedCompany                                  // 0x0(0x8)
	byte                                               CompanyActionType                                  // 0x8(0x1)
	Struct Guid                                        AssociatedCrew                                     // 0xc(0x10)
};


// Size 0x8
class EmissaryGlobalActionRewardBoostEvent: public None
{
public:
	class                                              GameEventType                                      // 0x0(0x8)
};


// Size 0x1
class EmissaryNonQuestCompanyActionRewardBoostEvent: public None
{
public:
	byte                                               CompanyActionType                                  // 0x0(0x1)
};


// Size 0x14
class EmissaryQuestCompanyActionRewardBoostEvent: public None
{
public:
	byte                                               CompanyActionType                                  // 0x0(0x1)
	Struct Guid                                        QuestId                                            // 0x4(0x10)
};


// Size 0x10
class EmissaryCompanyChangedEvent: public None
{
public:
};


// Size 0x10
class EmissaryLedgerVisited: public None
{
public:
	Struct FString                                     CompanyId                                          // 0x0(0x10)
};


}