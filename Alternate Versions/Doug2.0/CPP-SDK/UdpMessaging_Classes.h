namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x78
class UdpMessagingSettings: public Object
{
public:
	bool                                               EnableTransport                                    // 0x28(0x1)
	Struct FString                                     UnicastEndpoint                                    // 0x30(0x10)
	Struct FString                                     MulticastEndpoint                                  // 0x40(0x10)
	byte                                               MulticastTimeToLive                                // 0x50(0x1)
	TArray<Str >                                       StaticEndpoints                                    // 0x58(0x10)
	bool                                               EnableTunnel                                       // 0x68(0x1)
	Struct FString                                     TunnelUnicastEndpoint                              // 0x70(0x10)
	Struct FString                                     TunnelMulticastEndpoint                            // 0x80(0x10)
	TArray<Str >                                       RemoteTunnelEndpoints                              // 0x90(0x10)
};


}