namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x4
class MaterialQualityOverrides: public None
{
public:
	bool                                               bEnableOverride                                    // 0x0(0x1)
	bool                                               bForceFullyRough                                   // 0x1(0x1)
	bool                                               bForceNonMetal                                     // 0x2(0x1)
	bool                                               bForceDisableLMDirectionality                      // 0x3(0x1)
};


// Size 0x20
class ShaderQualityOverridesListItem: public None
{
public:
	Struct FString                                     RangeName                                          // 0x0(0x10)
	Class BoolProperty*                                QualityProperty                                    // 0x10(0x8)
	Class ShaderPlatformQualitySettings*               SettingContainer                                   // 0x18(0x8)
};


}