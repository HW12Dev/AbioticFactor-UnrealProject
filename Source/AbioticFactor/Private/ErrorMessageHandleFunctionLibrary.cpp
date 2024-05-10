#include "ErrorMessageHandleFunctionLibrary.h"

UErrorMessageHandleFunctionLibrary::UErrorMessageHandleFunctionLibrary() {
}

FErrorMessageRowHandle UErrorMessageHandleFunctionLibrary::MakeLiteralErrorMessageRowHandle(FErrorMessageRowHandle RowHandle) {
    return FErrorMessageRowHandle{};
}

FErrorMessageRowHandle UErrorMessageHandleFunctionLibrary::MakeErrorMessageRowHandle(const FName RowName) {
    return FErrorMessageRowHandle{};
}

void UErrorMessageHandleFunctionLibrary::GetErrorMessageRow(FErrorMessageRowHandle RowHandle, FErrorMessage& Data, ERowValid& ReturnPath) {
}

void UErrorMessageHandleFunctionLibrary::GetAllErrorMessageRowNames(TArray<FName>& OutRowNames) {
}

void UErrorMessageHandleFunctionLibrary::GetAllErrorMessageRowHandles(TArray<FErrorMessageRowHandle>& OutRowHandles) {
}

bool UErrorMessageHandleFunctionLibrary::Equal_ErrorMessageRowHandle(FErrorMessageRowHandle A, FErrorMessageRowHandle B) {
    return false;
}

bool UErrorMessageHandleFunctionLibrary::DoesErrorMessageRowExist(FName RowName) {
    return false;
}

FName UErrorMessageHandleFunctionLibrary::BreakErrorMessageRowHandle(const FErrorMessageRowHandle RowHandle) {
    return NAME_None;
}


