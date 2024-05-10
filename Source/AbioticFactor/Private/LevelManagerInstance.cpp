#include "LevelManagerInstance.h"

ULevelManagerInstance::ULevelManagerInstance() {
    this->LevelStreaming = NULL;
}

void ULevelManagerInstance::OnPlayerLeaveLevel(AActor* OverlappedActor, AActor* OtherActor) {
}

void ULevelManagerInstance::OnPlayerEnterLevel(AActor* OverlappedActor, AActor* OtherActor) {
}

void ULevelManagerInstance::OnLevelUnloaded() {
}

void ULevelManagerInstance::OnLevelLoaded() {
}


