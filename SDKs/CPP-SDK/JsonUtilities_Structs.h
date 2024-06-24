#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x1
struct TestEnumObject
{
public:
	char                                                         TestEnum;                                          // 0x0(0x1)
};


// Size 0x8
struct TestMessageDateTime
{
public:
	struct DateTime                                              DateTime;                                          // 0x0(0x8)
};


// Size 0x8
struct TestFloatObject
{
public:
	float                                                        TestFloat1;                                        // 0x0(0x4)
	float                                                        TestFloat2;                                        // 0x4(0x4)
};


// Size 0x50
struct TestUStructMapSerializationObject
{
public:
	map                                                          StructMap;                                         // 0x0(0x50)
};


// Size 0x50
struct TestInt32MapSerializationObject
{
public:
	map                                                          Int32Map;                                          // 0x0(0x50)
};


// Size 0x8
struct TestMessageInt64
{
public:
	int64                                                        TestInt;                                           // 0x0(0x8)
};


// Size 0x50
struct TestInvalidStringMapSerializationObject
{
public:
	map                                                          StringMap;                                         // 0x0(0x50)
};


// Size 0x28
struct TestSerializationObject
{
public:
	bool                                                         TestBool;                                          // 0x0(0x1)
	int                                                          TestInt;                                           // 0x4(0x4)
	struct FString                                               TestString;                                        // 0x8(0x10)
	struct Guid                                                  TestGuid;                                          // 0x18(0x10)
};


// Size 0x8
struct TestMessageUInt64
{
public:
	uint64                                                       TestInt;                                           // 0x0(0x8)
};


// Size 0x8
struct TestMessageTimespan
{
public:
	struct Timespan                                              Timespan;                                          // 0x0(0x8)
};


// Size 0x70
struct TestTextObject
{
public:
	struct FText                                                 TestText;                                          // 0x0(0x38)
	struct FText                                                 TestTextExport;                                    // 0x38(0x38)
};


// Size 0x50
struct TestStringMapSerializationObject
{
public:
	map                                                          StringMap;                                         // 0x0(0x50)
};


// Size 0x28
struct TestSerializationNestedObject
{
public:
	struct TestSerializationObject                               NestedObject;                                      // 0x0(0x28)
};


