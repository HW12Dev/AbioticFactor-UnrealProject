#include "BuffDebuff.h"

FBuffDebuff::FBuffDebuff() {
    this->BuffType = EBuffType::Any;
    this->DefaultDuration = 0.00f;
    this->bNoExpiration = false;
    this->ApplyStyle = EBuffApplyStyle::Stack;
    this->BuffTickRate = 0.00f;
    this->Severity = EBuffSeverity::Positive;
    this->BuffVisibility = EBuffVisibility::FullVisibility;
    this->bRunTickOnApply = false;
    this->bRemoveOnMaxLimbHP = false;
    this->PlayerVoiceLine = EVoiceLineType::None;
    this->PlayerDialogLineDelay = 0.00f;
    this->bStrippedFromBuild = false;
}

