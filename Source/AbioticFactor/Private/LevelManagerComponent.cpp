#include "LevelManagerComponent.h"

ULevelManagerComponent::ULevelManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
}

void ULevelManagerComponent::CheckLevelsForUnload() {
}

void ULevelManagerComponent::CheckLevelsForLoad() {
}


