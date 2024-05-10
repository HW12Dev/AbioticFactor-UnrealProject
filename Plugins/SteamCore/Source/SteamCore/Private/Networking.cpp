#include "Networking.h"

UNetworking::UNetworking() {
}

bool UNetworking::SendP2PPacket(FSteamID SteamIDRemote, TArray<uint8> Data, ESteamP2PSend P2PSendType, int32 Channel) {
    return false;
}

bool UNetworking::ReadP2PPacket(TArray<uint8>& Data, FSteamID& OutSteamIdRemote, int32 MessageSize, int32 Channel) {
    return false;
}

bool UNetworking::IsP2PPacketAvailable(int32& MessageSize, int32 Channel) {
    return false;
}

bool UNetworking::GetP2PSessionState(FSteamID SteamIDRemote, FSteamP2PSessionState& ConnectionState) {
    return false;
}

bool UNetworking::CloseP2PSessionWithUser(FSteamID SteamIDRemote) {
    return false;
}

bool UNetworking::CloseP2PChannelWithUser(FSteamID SteamIDRemote, int32 Channel) {
    return false;
}

bool UNetworking::AllowP2PPacketRelay(bool bAllow) {
    return false;
}

bool UNetworking::AcceptP2PSessionWithUser(FSteamID SteamIDRemote) {
    return false;
}


