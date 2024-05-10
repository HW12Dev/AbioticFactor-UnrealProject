#include "BindCapturePrompt.h"

UBindCapturePrompt::UBindCapturePrompt() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsFocusable = true;
    this->bIgnoreGameViewportInputWhileCapturing = true;
    this->bRestrictKeyGroup = false;
    this->CaptureMode = EBindingCaptureMode::OnReleased;
    this->PreviousIgnoreInput = false;
}

bool UBindCapturePrompt::IsKeyAllowed_Implementation(FKey PrimaryKey) {
    return false;
}

FGameplayTag UBindCapturePrompt::GetKeyGroup() const {
    return FGameplayTag{};
}

void UBindCapturePrompt::Cancel() {
}


