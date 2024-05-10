#include "SearchForGameProgressCallback.h"

FSearchForGameProgressCallback::FSearchForGameProgressCallback() {
    this->Result = ESteamResult::None;
    this->SecondsRemainingEstimate = 0;
    this->PlayersSearching = 0;
}

