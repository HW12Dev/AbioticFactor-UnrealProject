#include "ClientGameServerDeny.h"

FClientGameServerDeny::FClientGameServerDeny() {
    this->AppID = 0;
    this->GameServerPort = 0;
    this->BSecure = false;
    this->Reason = ESteamDenyReason::Invalid;
}

