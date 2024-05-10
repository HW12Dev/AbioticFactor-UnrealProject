#include "Spinner.h"

USpinner::USpinner() : UUserWidget(FObjectInitializer::Get()) {
    this->bAllowWrapping = false;
}

void USpinner::SelectValue(const FString& Value) {
}

void USpinner::SelectIndex(int32 Index) {
}

void USpinner::Previous() {
}

void USpinner::OnSelectionChanged_Implementation(FSettingOption SelectedOption) {
}

void USpinner::Next() {
}

bool USpinner::HasValidPrevious() const {
    return false;
}

bool USpinner::HasValidNext() const {
    return false;
}

FSettingOption USpinner::GetCurrentOption() const {
    return FSettingOption{};
}

int32 USpinner::GetCurrentIndex() const {
    return 0;
}


