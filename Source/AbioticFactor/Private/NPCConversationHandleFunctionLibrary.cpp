#include "NPCConversationHandleFunctionLibrary.h"

UNPCConversationHandleFunctionLibrary::UNPCConversationHandleFunctionLibrary() {
}

FNPCConversationRowHandle UNPCConversationHandleFunctionLibrary::MakeNPCConversationRowHandle(const FName RowName) {
    return FNPCConversationRowHandle{};
}

FNPCConversationRowHandle UNPCConversationHandleFunctionLibrary::MakeLiteralNPCConversationRowHandle(FNPCConversationRowHandle RowHandle) {
    return FNPCConversationRowHandle{};
}

void UNPCConversationHandleFunctionLibrary::GetNPCConversationRow(FNPCConversationRowHandle RowHandle, FNPCConversation& Data, ERowValid& ReturnPath) {
}

void UNPCConversationHandleFunctionLibrary::GetAllNPCConversationRowNames(TArray<FName>& OutRowNames) {
}

void UNPCConversationHandleFunctionLibrary::GetAllNPCConversationRowHandles(TArray<FNPCConversationRowHandle>& OutRowHandles) {
}

bool UNPCConversationHandleFunctionLibrary::Equal_NPCConversationRowHandle(FNPCConversationRowHandle A, FNPCConversationRowHandle B) {
    return false;
}

bool UNPCConversationHandleFunctionLibrary::DoesNPCConversationRowExist(FName RowName) {
    return false;
}

FName UNPCConversationHandleFunctionLibrary::BreakNPCConversationRowHandle(const FNPCConversationRowHandle RowHandle) {
    return NAME_None;
}


