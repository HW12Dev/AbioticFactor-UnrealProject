#include "SettingContainerUtils.h"

USettingContainerUtils::USettingContainerUtils() {
}

void USettingContainerUtils::SaveChildSettings(UUserWidget* UserWidget, UWidget* Parent) {
}

TArray<UAutoSettingWidget*> USettingContainerUtils::GetChildSettings(UUserWidget* UserWidget, UWidget* Parent) {
    return TArray<UAutoSettingWidget*>();
}

bool USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(UUserWidget* UserWidget, UWidget* Parent) {
    return false;
}

bool USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(UUserWidget* UserWidget, UWidget* Parent) {
    return false;
}

void USettingContainerUtils::CancelChildSettings(UUserWidget* UserWidget, UWidget* Parent) {
}

void USettingContainerUtils::ApplyChildSettings(UUserWidget* UserWidget, UWidget* Parent) {
}


