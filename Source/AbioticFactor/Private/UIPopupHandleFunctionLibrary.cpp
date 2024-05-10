#include "UIPopupHandleFunctionLibrary.h"

UUIPopupHandleFunctionLibrary::UUIPopupHandleFunctionLibrary() {
}

FUIPopupRowHandle UUIPopupHandleFunctionLibrary::MakeUIPopupRowHandle(const FName RowName) {
    return FUIPopupRowHandle{};
}

FUIPopupRowHandle UUIPopupHandleFunctionLibrary::MakeLiteralUIPopupRowHandle(FUIPopupRowHandle RowHandle) {
    return FUIPopupRowHandle{};
}

void UUIPopupHandleFunctionLibrary::GetUIPopupRow(FUIPopupRowHandle RowHandle, FUIPopup& Data, ERowValid& ReturnPath) {
}

void UUIPopupHandleFunctionLibrary::GetAllUIPopupRowNames(TArray<FName>& OutRowNames) {
}

void UUIPopupHandleFunctionLibrary::GetAllUIPopupRowHandles(TArray<FUIPopupRowHandle>& OutRowHandles) {
}

bool UUIPopupHandleFunctionLibrary::Equal_UIPopupRowHandle(FUIPopupRowHandle A, FUIPopupRowHandle B) {
    return false;
}

bool UUIPopupHandleFunctionLibrary::DoesUIPopupRowExist(FName RowName) {
    return false;
}

FName UUIPopupHandleFunctionLibrary::BreakUIPopupRowHandle(const FUIPopupRowHandle RowHandle) {
    return NAME_None;
}


