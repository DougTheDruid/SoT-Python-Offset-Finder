namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class ExtraWind: public None
{
public:
	Class Object*                                      Source                                             // 0x0(0x8)
	Class Actor*                                       Basis                                              // 0x8(0x8)
};


// Size 0x24
class WindServiceParams: public None
{
public:
	float                                              MinAngleChange                                     // 0x0(0x4)
	float                                              MaxAngleChange                                     // 0x4(0x4)
	float                                              MinTimeChange                                      // 0x8(0x4)
	float                                              MaxTimeChange                                      // 0xc(0x4)
	float                                              MinWindMagnitude                                   // 0x10(0x4)
	float                                              MaxWindMagnitude                                   // 0x14(0x4)
	float                                              AbsoluteMaxWindMagnitude                           // 0x18(0x4)
	float                                              MinBlendTimeBetweenChanges                         // 0x1c(0x4)
	float                                              MaxBlendTimeBetweenChanges                         // 0x20(0x4)
};


// Size 0x8
class WindZoneTurbulence: public None
{
public:
	float                                              Base                                               // 0x0(0x4)
	float                                              Current                                            // 0x4(0x4)
};


// Size 0x10
class WindZoneParams: public None
{
public:
	float                                              OuterRadius                                        // 0x0(0x4)
	float                                              InnerRadius                                        // 0x4(0x4)
	float                                              TurbulenceScalar                                   // 0x8(0x4)
	bool                                               WindOnlyAffectsTrees                               // 0xc(0x1)
};


// Size 0x70
class WindTurbulenceParameters: public None
{
public:
	Struct FloatRange                                  GustPower                                          // 0x0(0x10)
	Struct WeightedProbabilityRangeOfRanges            GustTime                                           // 0x10(0x30)
	Struct WeightedProbabilityRangeOfRanges            CalmTime                                           // 0x40(0x30)
};


// Size 0x1
class WindMagnitudeChanged: public None
{
public:
};


// Size 0x1
class WindDirectionChanged: public None
{
public:
};


}