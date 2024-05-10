#include "SteamServerConnectFailure.h"

FSteamServerConnectFailure::FSteamServerConnectFailure() {
    this->Result = ESteamResult::None;
    this->bStillRetrying = false;
}

