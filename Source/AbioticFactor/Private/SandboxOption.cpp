#include "SandboxOption.h"

FSandboxOption::FSandboxOption() {
    this->bUnimplemented = false;
    this->ModifiedRuleset = EModifiedRuleset::Normal;
    this->OptionType = EGameSettingType::Checkbox;
    this->DataType = ECVarType::Bool;
    this->OptionFactory = NULL;
}

