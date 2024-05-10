#include "QuestHandleFunctionLibrary.h"

UQuestHandleFunctionLibrary::UQuestHandleFunctionLibrary() {
}

FQuestRowHandle UQuestHandleFunctionLibrary::MakeQuestRowHandle(const FName RowName) {
    return FQuestRowHandle{};
}

FQuestRowHandle UQuestHandleFunctionLibrary::MakeLiteralQuestRowHandle(FQuestRowHandle RowHandle) {
    return FQuestRowHandle{};
}

void UQuestHandleFunctionLibrary::GetQuestRow(FQuestRowHandle RowHandle, FQuestData& Data, ERowValid& ReturnPath) {
}

void UQuestHandleFunctionLibrary::GetAllQuestRowNames(TArray<FName>& OutRowNames) {
}

void UQuestHandleFunctionLibrary::GetAllQuestRowHandles(TArray<FQuestRowHandle>& OutRowHandles) {
}

bool UQuestHandleFunctionLibrary::Equal_QuestRowHandle(FQuestRowHandle A, FQuestRowHandle B) {
    return false;
}

bool UQuestHandleFunctionLibrary::DoesQuestRowExist(FName RowName) {
    return false;
}

FName UQuestHandleFunctionLibrary::BreakQuestRowHandle(const FQuestRowHandle RowHandle) {
    return NAME_None;
}


