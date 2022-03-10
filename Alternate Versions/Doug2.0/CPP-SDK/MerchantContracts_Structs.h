namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class MerchantContractItemDesc: public None
{
public:
	class                                              AllocatedCrate                                     // 0x0(0x8)
	TArray<Struct ItemAndReward>                       ItemData                                           // 0x8(0x10)
	class                                              FaunaSpecies                                       // 0x18(0x8)
	class                                              FaunaBreed                                         // 0x20(0x8)
};


// Size 0x10
class ItemAndReward: public None
{
public:
	class                                              ItemDesc                                           // 0x0(0x8)
	Struct RewardId                                    HandInOnTimeRewardId                               // 0x8(0x8)
};


// Size 0x40
class MerchantContractDeliveryRequest: public None
{
public:
	int                                                Id                                                 // 0x0(0x4)
	Struct MerchantContractItemDesc                    ItemDesc                                           // 0x8(0x28)
	int                                                NumToAllocate                                      // 0x30(0x4)
	int                                                NumToCollect                                       // 0x34(0x4)
	int                                                NumToDeliver                                       // 0x38(0x4)
};


// Size 0xc0
class MerchantContract: public None
{
public:
	TArray<Struct MerchantMapLayoutItem>               DeliveryRequests                                   // 0x18(0x10)
};


// Size 0x28
class PlayerMerchantContract: public None
{
public:
	Struct Guid                                        Id                                                 // 0x0(0x10)
	struct FName                                       IslandName                                         // 0x10(0x8)
	TArray<Struct IslandName>                          Requests                                           // 0x18(0x10)
};


}