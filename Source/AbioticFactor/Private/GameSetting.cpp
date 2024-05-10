#include "GameSetting.h"

FGameSetting::FGameSetting() {
    this->bUnimplemented = false;
    this->SettingType = EGameSettingType::Checkbox;
    this->bCustomCVar = false;
    this->bOverrideEngineDefault = false;
    this->CVarType = ECVarType::Bool;
    this->ValueMask = NULL;
    this->OptionFactory = NULL;
}

