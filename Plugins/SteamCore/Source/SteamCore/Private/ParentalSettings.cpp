#include "ParentalSettings.h"

UParentalSettings::UParentalSettings() {
}

bool UParentalSettings::BIsParentalLockLocked() {
    return false;
}

bool UParentalSettings::BIsParentalLockEnabled() {
    return false;
}

bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature Feature) {
    return false;
}

bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature Feature) {
    return false;
}

bool UParentalSettings::BIsAppInBlockList(int32 AppID) {
    return false;
}

bool UParentalSettings::BIsAppBlocked(int32 AppID) {
    return false;
}


