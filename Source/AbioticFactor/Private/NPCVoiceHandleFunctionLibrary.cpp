#include "NPCVoiceHandleFunctionLibrary.h"

UNPCVoiceHandleFunctionLibrary::UNPCVoiceHandleFunctionLibrary() {
}

FNPCVoiceRowHandle UNPCVoiceHandleFunctionLibrary::MakeNPCVoiceRowHandle(const FName RowName) {
    return FNPCVoiceRowHandle{};
}

FNPCVoiceRowHandle UNPCVoiceHandleFunctionLibrary::MakeLiteralNPCVoiceRowHandle(FNPCVoiceRowHandle RowHandle) {
    return FNPCVoiceRowHandle{};
}

void UNPCVoiceHandleFunctionLibrary::GetNPCVoiceRow(FNPCVoiceRowHandle RowHandle, FNPCVoice& Data, ERowValid& ReturnPath) {
}

void UNPCVoiceHandleFunctionLibrary::GetAllNPCVoiceRowNames(TArray<FName>& OutRowNames) {
}

void UNPCVoiceHandleFunctionLibrary::GetAllNPCVoiceRowHandles(TArray<FNPCVoiceRowHandle>& OutRowHandles) {
}

bool UNPCVoiceHandleFunctionLibrary::Equal_NPCVoiceRowHandle(FNPCVoiceRowHandle A, FNPCVoiceRowHandle B) {
    return false;
}

bool UNPCVoiceHandleFunctionLibrary::DoesNPCVoiceRowExist(FName RowName) {
    return false;
}

FName UNPCVoiceHandleFunctionLibrary::BreakNPCVoiceRowHandle(const FNPCVoiceRowHandle RowHandle) {
    return NAME_None;
}


