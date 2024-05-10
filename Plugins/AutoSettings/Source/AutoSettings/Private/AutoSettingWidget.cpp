#include "AutoSettingWidget.h"

UAutoSettingWidget::UAutoSettingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsVariable = false;
    this->ValueMask = NULL;
    this->bAutoSave = true;
    this->bAutoApply = true;
    this->bIsSandboxSetting = false;
    this->bHasUnappliedChange = false;
    this->bHasUnsavedChange = false;
    this->bUpdatingSettingSelection = false;
}

void UAutoSettingWidget::UpdateSelection_Implementation(const FString& Value) {
}

void UAutoSettingWidget::Save() {
}

void UAutoSettingWidget::SandboxSettingsUpdated() {
}

bool UAutoSettingWidget::HasUnsavedChange() const {
    return false;
}

bool UAutoSettingWidget::HasUnappliedChange() const {
    return false;
}

FString UAutoSettingWidget::GetCurrentValue() const {
    return TEXT("");
}

void UAutoSettingWidget::Cancel(bool bResetToDefaultValue) {
}

void UAutoSettingWidget::ApplySettingValue(const FString& Value, bool bSaveIfPossible) {
}

void UAutoSettingWidget::Apply() {
}


