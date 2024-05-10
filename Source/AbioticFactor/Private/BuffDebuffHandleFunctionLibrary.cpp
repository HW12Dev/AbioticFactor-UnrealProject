#include "BuffDebuffHandleFunctionLibrary.h"

UBuffDebuffHandleFunctionLibrary::UBuffDebuffHandleFunctionLibrary() {
}

FBuffDebuffRowHandle UBuffDebuffHandleFunctionLibrary::MakeLiteralBuffDebuffRowHandle(FBuffDebuffRowHandle RowHandle) {
    return FBuffDebuffRowHandle{};
}

FBuffDebuffRowHandle UBuffDebuffHandleFunctionLibrary::MakeBuffDebuffRowHandle(const FName RowName) {
    return FBuffDebuffRowHandle{};
}

void UBuffDebuffHandleFunctionLibrary::GetBuffDebuffRow(FBuffDebuffRowHandle RowHandle, FBuffDebuff& Data, ERowValid& ReturnPath) {
}

void UBuffDebuffHandleFunctionLibrary::GetAllBuffDebuffRowNames(TArray<FName>& OutRowNames) {
}

void UBuffDebuffHandleFunctionLibrary::GetAllBuffDebuffRowHandles(TArray<FBuffDebuffRowHandle>& OutRowHandles) {
}

bool UBuffDebuffHandleFunctionLibrary::Equal_BuffDebuffRowHandle(FBuffDebuffRowHandle A, FBuffDebuffRowHandle B) {
    return false;
}

bool UBuffDebuffHandleFunctionLibrary::DoesBuffDebuffRowExist(FName RowName) {
    return false;
}

FName UBuffDebuffHandleFunctionLibrary::BreakBuffDebuffRowHandle(const FBuffDebuffRowHandle RowHandle) {
    return NAME_None;
}


