#include "SubmitItemUpdateResult.h"

FSubmitItemUpdateResult::FSubmitItemUpdateResult() {
    this->Result = ESteamResult::None;
    this->bUserNeedsToAcceptWorkshopLegalAgreement = false;
}

