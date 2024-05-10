#include "LeaderboardScoreUploaded.h"

FLeaderboardScoreUploaded::FLeaderboardScoreUploaded() {
    this->bSuccess = false;
    this->Score = 0;
    this->bScoreChanged = false;
    this->GlobalRankNew = 0;
    this->GlobalRankPrevious = 0;
}

