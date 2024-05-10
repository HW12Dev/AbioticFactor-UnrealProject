#include "AbioticWidget.h"

UAbioticWidget::UAbioticWidget() : UUserWidget(FObjectInitializer::Get()) {
}

FEventReply UAbioticWidget::ProcessKeybindOnKeyUp(const FKeyEvent& Key, bool& bHandled) {
    return FEventReply{};
}

FEventReply UAbioticWidget::ProcessKeybindOnKeyDown(const FKeyEvent& Key, bool& bHandled) {
    return FEventReply{};
}


