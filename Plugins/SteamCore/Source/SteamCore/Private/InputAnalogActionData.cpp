#include "InputAnalogActionData.h"

FInputAnalogActionData::FInputAnalogActionData() {
    this->Mode = ESteamCoreInputSourceMode::None;
    this->X = 0.00f;
    this->Y = 0.00f;
    this->bActive = false;
}

