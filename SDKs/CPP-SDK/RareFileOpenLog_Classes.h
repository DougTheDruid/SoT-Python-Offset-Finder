#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x58 (Full Size[0x90] - InheritedSize[0x38]
class RareFileOpenLogSettings: public DeveloperSettings
{
public:
	int                                                          DataSizeSaveIncrement;                             // 0x38(0x4)
	float                                                        TimeSaveIncrement;                                 // 0x3c(0x4)
	char                                                         DataSource;                                        // 0x40(0x1)
	TArray<String>                                               SandboxesToEnableByDefault;                        // 0x48(0x10)
	struct FString                                               OpenOrderLogDirectory;                             // 0x58(0x10)
	struct FString                                               OutputOrderLogDirectory;                           // 0x68(0x10)
	int                                                          NumberOfLogsToAggregate;                           // 0x78(0x4)
};


