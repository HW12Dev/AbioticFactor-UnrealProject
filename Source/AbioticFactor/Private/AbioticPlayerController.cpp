#include "AbioticPlayerController.h"

AAbioticPlayerController::AAbioticPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->PlayerCharacter = NULL;
}


void AAbioticPlayerController::SetUseSoftwareCursor(bool bEnabled) {
}


