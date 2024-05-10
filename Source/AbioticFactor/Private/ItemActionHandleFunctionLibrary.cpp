#include "ItemActionHandleFunctionLibrary.h"

UItemActionHandleFunctionLibrary::UItemActionHandleFunctionLibrary() {
}

FItemActionRowHandle UItemActionHandleFunctionLibrary::MakeLiteralItemActionRowHandle(FItemActionRowHandle RowHandle) {
    return FItemActionRowHandle{};
}

FItemActionRowHandle UItemActionHandleFunctionLibrary::MakeItemActionRowHandle(const FName RowName) {
    return FItemActionRowHandle{};
}

void UItemActionHandleFunctionLibrary::GetItemActionRow(FItemActionRowHandle RowHandle, FItemAction& Data, ERowValid& ReturnPath) {
}

void UItemActionHandleFunctionLibrary::GetAllItemActionRowNames(TArray<FName>& OutRowNames) {
}

void UItemActionHandleFunctionLibrary::GetAllItemActionRowHandles(TArray<FItemActionRowHandle>& OutRowHandles) {
}

bool UItemActionHandleFunctionLibrary::Equal_ItemActionRowHandle(FItemActionRowHandle A, FItemActionRowHandle B) {
    return false;
}

bool UItemActionHandleFunctionLibrary::DoesItemActionRowExist(FName RowName) {
    return false;
}

FName UItemActionHandleFunctionLibrary::BreakItemActionRowHandle(const FItemActionRowHandle RowHandle) {
    return NAME_None;
}


