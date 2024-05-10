#include "GetUserItemVoteResult.h"

FGetUserItemVoteResult::FGetUserItemVoteResult() {
    this->Result = ESteamResult::None;
    this->bVotedUp = false;
    this->bVotedDown = false;
    this->bVoteSkipped = false;
}

