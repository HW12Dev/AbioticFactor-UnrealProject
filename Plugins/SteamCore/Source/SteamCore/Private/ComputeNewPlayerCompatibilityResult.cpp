#include "ComputeNewPlayerCompatibilityResult.h"

FComputeNewPlayerCompatibilityResult::FComputeNewPlayerCompatibilityResult() {
    this->Result = ESteamResult::None;
    this->PlayersThatDontLikeCandidate = 0;
    this->PlayersThatCandidateDoesntLike = 0;
    this->ClanPlayersThatDontLikeCandidate = 0;
}

