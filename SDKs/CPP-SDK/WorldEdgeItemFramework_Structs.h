#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x10
struct WorldEdgeItemServiceBatchCompletedEvent
{
public:
	struct                                                       BatchId;                                           // 0x0(0x10)
};


// Size 0x18
struct WorldEdgeItemDroppedInRedSeaTelemetryEvent
{
public:
	struct                                                       DropLocation;                                      // 0x0(0xc)
	struct                                                       TeleportLocation;                                  // 0xc(0xc)
};


// Size 0x1c
struct WorldEdgeItemBatchTelemetryEvent
{
public:
	struct                                                       ShipLocation;                                      // 0x0(0xc)
	struct                                                       TeleportLocation;                                  // 0xc(0xc)
	int                                                          NumItems;                                          // 0x18(0x4)
};


