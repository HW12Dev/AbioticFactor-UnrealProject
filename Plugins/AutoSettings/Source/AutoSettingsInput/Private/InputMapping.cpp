#include "InputMapping.h"

UInputMapping::UInputMapping() : UUserWidget(FObjectInitializer::Get()) {
    this->MappingGroup = -1;
    this->BindCaptureButton = NULL;
}

void UInputMapping::UpdateMapping_Implementation() {
}

void UInputMapping::UpdateLabel_Implementation() {
}

void UInputMapping::ChordCaptured(FCapturedInput CapturedInput) {
}

void UInputMapping::BindChord(FCapturedInput CapturedInput) {
}


