#include "RemotePlay.h"

URemotePlay::URemotePlay() {
}

FSteamID URemotePlay::GetSessionSteamID(int32 SessionID) {
    return FSteamID{};
}

int32 URemotePlay::GetSessionID(int32 SessionIndex) {
    return 0;
}

int32 URemotePlay::GetSessionCount() {
    return 0;
}

FString URemotePlay::GetSessionClientName(int32 SessionID) {
    return TEXT("");
}

ESteamCoreDeviceFormFactor URemotePlay::GetSessionClientFormFactor(int32 SessionID) {
    return ESteamCoreDeviceFormFactor::Unknown;
}

bool URemotePlay::BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend) {
    return false;
}

bool URemotePlay::BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY) {
    return false;
}


