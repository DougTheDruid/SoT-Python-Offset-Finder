namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x128
class AthenaCharacterBaseInputComponent: public InputComponent
{
public:
};


// Size 0x8
class AthenaCharacterBaseInputComponentWithInterference: public AthenaCharacterBaseInputComponent
{
public:
};


// Size 0x8
class LookingAtWieldableInputComponent: public AthenaCharacterBaseInputComponent
{
public:
	Class Actor*                                       TargetWieldable                                    // 0x278(0x8)
};


// Size 0x20
class AthenaClampedFreelookInputComponent: public AthenaCharacterBaseInputComponent
{
public:
};


// Size 0x0
class ClampedFreelookXAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0
class ClampedFreelookYAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0
class ClampedFreelookMouseXInputId: public AnalogInputId
{
public:
};


// Size 0x0
class ClampedFreelookMouseYInputId: public AnalogInputId
{
public:
};


// Size 0x70
class MovementInterferenceComponent: public InputComponent
{
public:
};


}