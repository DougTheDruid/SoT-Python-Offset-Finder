#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class MoviePlayerSettings: public Object
{
public:
	bool                                                         bWaitForMoviesToComplete;                          // 0x28(0x1)
	bool                                                         bMoviesAreSkippable;                               // 0x29(0x1)
	char                                                         pad0x6_FT0GQ[0x6];                                 // 0x2a(0x6)
	TArray<String>                                               StartupMovies;                                     // 0x30(0x10)
};


