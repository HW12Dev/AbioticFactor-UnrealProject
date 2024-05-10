#include "RadioSelect.h"

URadioSelect::URadioSelect() : UUserWidget(FObjectInitializer::Get()) {
    this->RadioButtonClass = NULL;
    this->ButtonContainer = NULL;
}

void URadioSelect::SetOptions(TArray<FSettingOption> InOptions) {
}

void URadioSelect::Select(const FString& Value) {
}

void URadioSelect::OnButtonCreated_Implementation(URadioButton* Button, UPanelSlot* NewSlot) {
}

TArray<URadioButton*> URadioSelect::GetRadioButtonWidgets() const {
    return TArray<URadioButton*>();
}

TArray<FSettingOption> URadioSelect::GetOptions() const {
    return TArray<FSettingOption>();
}

void URadioSelect::ButtonSelected(const FString& Value) {
}


