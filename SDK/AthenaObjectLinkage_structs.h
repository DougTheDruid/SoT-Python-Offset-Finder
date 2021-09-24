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

// Enum AthenaObjectLinkage.EAddLinkResult
enum class AthenaObjectLinkage_EAddLinkResult : uint8_t
{
	EAddLinkResult__Success_Set    = 0,
	EAddLinkResult__Success_Pending = 1,
	EAddLinkResult__Failed_SourceEndpointIdInvalid = 2,
	EAddLinkResult__Failed_TargetEndpointIdInvalid = 3,
	EAddLinkResult__Failed_CoincidentEndpointIds = 4,
	EAddLinkResult__Failed_Duplicate = 5,
	EAddLinkResult__EAddLinkResult_MAX = 6,

};

// Enum AthenaObjectLinkage.EAddEndpointResult
enum class AthenaObjectLinkage_EAddEndpointResult : uint8_t
{
	EAddEndpointResult__Success    = 0,
	EAddEndpointResult__Failed_InvalidInstance = 1,
	EAddEndpointResult__Failed_InvalidId = 2,
	EAddEndpointResult__Failed_DuplicateId = 3,
	EAddEndpointResult__Failed_DoesntImplementEndpointInterface = 4,
	EAddEndpointResult__EAddEndpointResult_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaObjectLinkage.LinkEndpointId
// 0x0008
struct FLinkEndpointId
{
	struct FName                                       Raw;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
