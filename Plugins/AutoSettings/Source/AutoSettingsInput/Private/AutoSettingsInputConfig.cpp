#include "AutoSettingsInputConfig.h"

UAutoSettingsInputConfig::UAutoSettingsInputConfig() {
    this->bAutoInitializePlayerInputOverrides = true;
    this->AllowModifierKeys = true;
    this->ShiftModifierOverrideText = FText::FromString(TEXT("Shift"));
    this->CtrlModifierOverrideText = FText::FromString(TEXT("Ctrl"));
    this->AltModifierOverrideText = FText::FromString(TEXT("Alt"));
    this->CmdModifierOverrideText = FText::FromString(TEXT("Cmd"));
    this->AllowMultipleBindingsPerKey = false;
    this->MouseMoveCaptureDistance = 80.00f;
    this->AxisAssociations.AddDefaulted(6);
}


