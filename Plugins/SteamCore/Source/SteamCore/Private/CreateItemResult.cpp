#include "CreateItemResult.h"

FCreateItemResult::FCreateItemResult() {
    this->Result = ESteamResult::None;
    this->bUserNeedsToAcceptWorkshopLegalAgreement = false;
}

