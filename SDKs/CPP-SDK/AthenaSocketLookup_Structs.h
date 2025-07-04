#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x8
struct SocketPathNode
{
public:
	struct FName                                                 Name;                                              // 0x0(0x8)
};


// Size 0x50
struct SocketLookupCache
{
public:
	char                                                         pad0x50_9CRFJ[0x50];                               // 0x0(0x50)
};


// Size 0x18
struct SocketPath
{
public:
	TArray<struct SocketPathNode>                                Nodes;                                             // 0x0(0x10)
	char                                                         pad0x8_MW50Q[0x8];                                 // 0x10(0x8)
};


// Size 0x20
struct SocketId
{
public:
	struct SocketPath                                            path;                                              // 0x0(0x18)
	struct FName                                                 Name;                                              // 0x18(0x8)
};


