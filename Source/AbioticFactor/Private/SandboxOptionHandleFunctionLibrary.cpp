#include "SandboxOptionHandleFunctionLibrary.h"

USandboxOptionHandleFunctionLibrary::USandboxOptionHandleFunctionLibrary() {
}

FSandboxOptionRowHandle USandboxOptionHandleFunctionLibrary::MakeSandboxOptionRowHandle(const FName RowName) {
    return FSandboxOptionRowHandle{};
}

FSandboxOptionRowHandle USandboxOptionHandleFunctionLibrary::MakeLiteralSandboxOptionRowHandle(FSandboxOptionRowHandle RowHandle) {
    return FSandboxOptionRowHandle{};
}

void USandboxOptionHandleFunctionLibrary::GetSandboxOptionRow(FSandboxOptionRowHandle RowHandle, FSandboxOption& Data, ERowValid& ReturnPath) {
}

void USandboxOptionHandleFunctionLibrary::GetAllSandboxOptionRowNames(TArray<FName>& OutRowNames) {
}

void USandboxOptionHandleFunctionLibrary::GetAllSandboxOptionRowHandles(TArray<FSandboxOptionRowHandle>& OutRowHandles) {
}

bool USandboxOptionHandleFunctionLibrary::Equal_SandboxOptionRowHandle(FSandboxOptionRowHandle A, FSandboxOptionRowHandle B) {
    return false;
}

bool USandboxOptionHandleFunctionLibrary::DoesSandboxOptionRowExist(FName RowName) {
    return false;
}

FName USandboxOptionHandleFunctionLibrary::BreakSandboxOptionRowHandle(const FSandboxOptionRowHandle RowHandle) {
    return NAME_None;
}


