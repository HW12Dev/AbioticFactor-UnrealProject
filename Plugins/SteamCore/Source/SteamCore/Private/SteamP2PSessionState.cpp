#include "SteamP2PSessionState.h"

FSteamP2PSessionState::FSteamP2PSessionState() {
    this->bConnectionActive = false;
    this->bConnecting = false;
    this->P2PSessionError = ESteamP2PSessionError::None;
    this->bUsingRelay = false;
    this->BytesQueuedForSend = 0;
    this->PacketsQueuedForSend = 0;
    this->RemotePort = 0;
}

