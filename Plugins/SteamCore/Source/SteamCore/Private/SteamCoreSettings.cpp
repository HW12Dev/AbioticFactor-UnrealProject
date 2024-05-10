#include "SteamCoreSettings.h"

USteamCoreSettings::USteamCoreSettings() {
    this->bEnabled = true;
    this->bRelaunchInSteam = false;
    this->bVACEnabled = false;
    this->bAllowP2PPacketRelay = true;
    this->P2PConnectionTimeout = 90;
    this->SteamAppID = 480;
    this->SteamDevAppId = 427410;
    this->Port = 7777;
    this->GameServerQueryPort = 27015;
    this->GameVersion = TEXT("1.0.0.0");
}


