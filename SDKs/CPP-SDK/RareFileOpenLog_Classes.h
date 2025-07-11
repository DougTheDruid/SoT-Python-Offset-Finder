#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class AggregateOpenOrderLogsCommandlet: public Commandlet
{
public:
	char                                                         pad0x8_Z2PVA[0x8];                                 // 0x80(0x8)
};


// Size 0x58 (Full Size[0x90] - InheritedSize[0x38]
class RareFileOpenLogSettings: public DeveloperSettings
{
public:
	int                                                          DataSizeSaveIncrement;                             // 0x38(0x4)
	float                                                        TimeSaveIncrement;                                 // 0x3c(0x4)
	char                                                         DataSource;                                        // 0x40(0x1)
	char                                                         pad0x7_N76O0[0x7];                                 // 0x41(0x7)
	TArray<String>                                               SandboxesToEnableByDefault;                        // 0x48(0x10)
	struct FString                                               OpenOrderLogDirectory;                             // 0x58(0x10)
	struct FString                                               OutputOrderLogDirectory;                           // 0x68(0x10)
	int                                                          NumberOfLogsToAggregate;                           // 0x78(0x4)
	char                                                         pad0x14_1G0NR[0x14];                               // 0x7c(0x14)
};


// Size 0x48 (Full Size[0x208] - InheritedSize[0x1c0]
class RareFileOpenFileHandler: public Class
{
public:
	char                                                         pad0x48_K4SGD[0x48];                               // 0x1c0(0x48)
};


// Size 0x0 (Full Size[0x208] - InheritedSize[0x208]
class RareFileOpenOnDiskFileHandler: public RareFileOpenFileHandler
{
public:
};


