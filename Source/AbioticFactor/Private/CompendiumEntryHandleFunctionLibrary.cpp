#include "CompendiumEntryHandleFunctionLibrary.h"

UCompendiumEntryHandleFunctionLibrary::UCompendiumEntryHandleFunctionLibrary() {
}

FCompendiumEntryRowHandle UCompendiumEntryHandleFunctionLibrary::MakeLiteralCompendiumEntryRowHandle(FCompendiumEntryRowHandle RowHandle) {
    return FCompendiumEntryRowHandle{};
}

FCompendiumEntryRowHandle UCompendiumEntryHandleFunctionLibrary::MakeCompendiumEntryRowHandle(const FName RowName) {
    return FCompendiumEntryRowHandle{};
}

void UCompendiumEntryHandleFunctionLibrary::GetCompendiumEntryRow(FCompendiumEntryRowHandle RowHandle, FCompendiumEntry& Data, ERowValid& ReturnPath) {
}

void UCompendiumEntryHandleFunctionLibrary::GetAllCompendiumEntryRowNames(TArray<FName>& OutRowNames) {
}

void UCompendiumEntryHandleFunctionLibrary::GetAllCompendiumEntryRowHandles(TArray<FCompendiumEntryRowHandle>& OutRowHandles) {
}

bool UCompendiumEntryHandleFunctionLibrary::Equal_CompendiumEntryRowHandle(FCompendiumEntryRowHandle A, FCompendiumEntryRowHandle B) {
    return false;
}

bool UCompendiumEntryHandleFunctionLibrary::DoesCompendiumEntryRowExist(FName RowName) {
    return false;
}

FName UCompendiumEntryHandleFunctionLibrary::BreakCompendiumEntryRowHandle(const FCompendiumEntryRowHandle RowHandle) {
    return NAME_None;
}


