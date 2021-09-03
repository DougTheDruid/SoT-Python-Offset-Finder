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

// Enum NetCore.ERareNetworkEventType
enum class NetCore_ERareNetworkEventType : uint8_t
{
	ERareNetworkEventType__FrameBegin = 0,
	ERareNetworkEventType__SendRPC = 1,
	ERareNetworkEventType__QueuedRPC = 2,
	ERareNetworkEventType__ActorReplicated = 3,
	ERareNetworkEventType__PropertyMadeDirty = 4,
	ERareNetworkEventType__PropertyReplicated = 5,
	ERareNetworkEventType__WritePropertyHeader = 6,
	ERareNetworkEventType__Misc    = 7,
	ERareNetworkEventType__SocketSendTo = 8,
	ERareNetworkEventType__SendBunch = 9,
	ERareNetworkEventType__SendAck = 10,
	ERareNetworkEventType__MustBeMappedGuids = 11,
	ERareNetworkEventType__ExportBunch = 12,
	ERareNetworkEventType__BeginContentBlock = 13,
	ERareNetworkEventType__EndContentBlock = 14,
	ERareNetworkEventType__WritePropertyHandle = 15,
	ERareNetworkEventType__PushBunch = 16,
	ERareNetworkEventType__PopBunch = 17,
	ERareNetworkEventType__Max     = 18,
	ERareNetworkEventType__ERareNetworkEventType_MAX = 19,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
