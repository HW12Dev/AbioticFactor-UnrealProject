#include "AutoSettingsInputProjectConfig.h"

UAutoSettingsInputProjectConfig::UAutoSettingsInputProjectConfig() {
    this->InputPresets.AddDefaulted(1);
    this->AllowMultipleBindingsPerKey = true;
    this->KeyIconSets.AddDefaulted(3);
    this->KeyGroups.AddDefaulted(2);
    this->DisallowedKeys.AddDefaulted(2);
    this->BindingEscapeKeys.AddDefaulted(2);
    this->BindingClearKeys.AddDefaulted(2);
    this->AxisAssociations.AddDefaulted(6);
}

TArray<UTexture*> UAutoSettingsInputProjectConfig::LoadKeyIcons(FGameplayTagContainer KeyIconTags) {
    return TArray<UTexture*>();
}

FGameplayTag UAutoSettingsInputProjectConfig::GetKeyGroupStatic(FKey Key) {
    return FGameplayTag{};
}

FText UAutoSettingsInputProjectConfig::GetKeyFriendlyNameStatic(FKey Key) {
    return FText::GetEmpty();
}


