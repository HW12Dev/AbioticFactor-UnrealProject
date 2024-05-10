#include "RequestPlayersForGameResultCallback.h"

FRequestPlayersForGameResultCallback::FRequestPlayersForGameResultCallback() {
    this->Result = ESteamResult::None;
    this->PlayerAcceptState = ESteamPlayerAcceptState::Unknown;
    this->PlayerIndex = 0;
    this->TotalPlayersFound = 0;
    this->TotalPlayersAcceptedGame = 0;
    this->SuggestedTeamIndex = 0;
}

