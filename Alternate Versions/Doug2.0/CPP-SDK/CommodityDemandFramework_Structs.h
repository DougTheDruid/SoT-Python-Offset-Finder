namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class CommoditySelectionType: public None
{
public:
	struct FName                                       CommodityType                                      // 0x0(0x8)
};


// Size 0x20
class ActiveNPCDemands: public None
{
public:
	TArray<UInt32 None>                                NPCIdHashes                                        // 0x0(0x10)
	TArray<Struct ActiveCommodityDemands>              NPCDemands                                         // 0x10(0x10)
};


// Size 0x20
class ActiveCommodityDemands: public None
{
public:
	TArray<UInt32 >                                    CommodityIdHashes                                  // 0x0(0x10)
	TArray<Byte CommodityIdHashes>                     CommodityDemands                                   // 0x10(0x10)
};


// Size 0x10
class CommodityDescWithRedeemId: public None
{
public:
	Struct CommoditySelectionType                      RedeemId                                           // 0x0(0x8)
	class                                              RedeemItemDesc                                     // 0x8(0x8)
};


// Size 0x18
class EntitlementToRedeemItems: public None
{
public:
	class                                              RequiredEntitlement                                // 0x0(0x8)
	TArray<Struct RequiredEntitlement>                 RedeemItems                                        // 0x8(0x10)
};


// Size 0x10
class CommodityTypeDataEntry: public None
{
public:
	struct FName                                       CommodityType                                      // 0x0(0x8)
	struct FName                                       DisplayName                                        // 0x8(0x8)
};


// Size 0x18
class EventCommodityCrateRedeemed: public None
{
public:
};


// Size 0x10
class CommodityRedemptionTrackingModel: public None
{
public:
	byte                                               NPCName                                            // 0x2(0x1)
};


// Size 0x20
class CommodityTrackingModel: public None
{
public:
	Struct Guid                                        ItemOfferId                                        // 0x0(0x10)
	byte                                               NPCName                                            // 0x10(0x1)
};


// Size 0x40
class TrackCommodityPurchaseOnServerRpc: public None
{
public:
	Class Object*                                      CommodityDemandStorageObject                       // 0x10(0x8)
	struct FName                                       NPCName                                            // 0x18(0x8)
	Struct Guid                                        ItemOfferId                                        // 0x20(0x10)
	Struct FString                                     ItemClientId                                       // 0x30(0x10)
};


}