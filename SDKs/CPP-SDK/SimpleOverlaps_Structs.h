#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct SimpleOverlapInfo
{
public:
	class Actor*                                                 OtherActor;                                        // 0x0(0x8)
	class PrimitiveComponent*                                    OtherComponent;                                    // 0x8(0x8)
};


// Size 0x10
struct SimpleOverlapBegin
{
public:
	struct SimpleOverlapInfo                                     OverlapInfo;                                       // 0x0(0x10)
};


// Size 0x10
struct SimpleOverlapEnd
{
public:
	struct SimpleOverlapInfo                                     OverlapInfo;                                       // 0x0(0x10)
};


