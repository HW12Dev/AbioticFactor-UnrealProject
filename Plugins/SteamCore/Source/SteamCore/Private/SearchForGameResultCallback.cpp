#include "SearchForGameResultCallback.h"

FSearchForGameResultCallback::FSearchForGameResultCallback() {
    this->Result = ESteamResult::None;
    this->CountPlayersInGame = 0;
    this->CountAcceptedGame = 0;
    this->bFinalCallback = false;
}

