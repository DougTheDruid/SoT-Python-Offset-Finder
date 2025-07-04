#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct GetPvPSkillForCrewRequestModel
{
public:
	TArray<String>                                               CrewMemberIds;                                     // 0x0(0x10)
};


// Size 0x8
struct ReportMatchConclusionResponse
{
public:
	int                                                          WinningCrewNewSkillValue;                          // 0x0(0x4)
	int                                                          LosingCrewNewSkillValue;                           // 0x4(0x4)
};


// Size 0x4
struct GetPvPSkillForCrewResponseModel
{
public:
	int                                                          CrewSkillRating;                                   // 0x0(0x4)
};


// Size 0x20
struct ReportMatchConclusionRequest
{
public:
	TArray<String>                                               WinningUserIds;                                    // 0x0(0x10)
	TArray<String>                                               LosingUserIds;                                     // 0x10(0x10)
};


