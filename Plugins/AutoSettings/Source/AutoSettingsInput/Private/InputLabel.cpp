#include "InputLabel.h"

UInputLabel::UInputLabel() : UUserWidget(FObjectInitializer::Get()) {
    this->MappingGroup = -1;
    this->bUsePlayerKeyGroup = true;
}

void UInputLabel::UpdateLabel_Implementation() {
}

void UInputLabel::MappingsChanged(APlayerController* Player) {
}


