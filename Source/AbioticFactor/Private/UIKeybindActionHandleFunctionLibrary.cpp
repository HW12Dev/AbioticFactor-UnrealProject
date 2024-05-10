#include "UIKeybindActionHandleFunctionLibrary.h"

UUIKeybindActionHandleFunctionLibrary::UUIKeybindActionHandleFunctionLibrary() {
}

FUIKeybindActionRowHandle UUIKeybindActionHandleFunctionLibrary::MakeUIKeybindActionRowHandle(const FName RowName) {
    return FUIKeybindActionRowHandle{};
}

FUIKeybindActionRowHandle UUIKeybindActionHandleFunctionLibrary::MakeLiteralUIKeybindActionRowHandle(FUIKeybindActionRowHandle RowHandle) {
    return FUIKeybindActionRowHandle{};
}

void UUIKeybindActionHandleFunctionLibrary::GetUIKeybindActionRow(FUIKeybindActionRowHandle RowHandle, FUIKeybindAction& Data, ERowValid& ReturnPath) {
}

void UUIKeybindActionHandleFunctionLibrary::GetAllUIKeybindActionRowNames(TArray<FName>& OutRowNames) {
}

void UUIKeybindActionHandleFunctionLibrary::GetAllUIKeybindActionRowHandles(TArray<FUIKeybindActionRowHandle>& OutRowHandles) {
}

bool UUIKeybindActionHandleFunctionLibrary::Equal_UIKeybindActionRowHandle(FUIKeybindActionRowHandle A, FUIKeybindActionRowHandle B) {
    return false;
}

bool UUIKeybindActionHandleFunctionLibrary::DoesUIKeybindActionRowExist(FName RowName) {
    return false;
}

FName UUIKeybindActionHandleFunctionLibrary::BreakUIKeybindActionRowHandle(const FUIKeybindActionRowHandle RowHandle) {
    return NAME_None;
}


