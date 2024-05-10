#include "SteamUGCQueryCompleted.h"

FSteamUGCQueryCompleted::FSteamUGCQueryCompleted() {
    this->Result = ESteamResult::None;
    this->NumResultsReturned = 0;
    this->TotalMatchingResults = 0;
    this->bCachedData = false;
}

