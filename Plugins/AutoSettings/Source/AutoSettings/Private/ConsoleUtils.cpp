#include "ConsoleUtils.h"

UConsoleUtils::UConsoleUtils() {
}

void UConsoleUtils::SetStringCVar(FName Name, const FString& Value) {
}

void UConsoleUtils::SetIntCVar(FName Name, int32 Value) {
}

void UConsoleUtils::SetFloatCVar(FName Name, float Value) {
}

void UConsoleUtils::SetBoolCVar(FName Name, bool Value) {
}

bool UConsoleUtils::IsCVarRegistered(FName Name) {
    return false;
}

FString UConsoleUtils::GetStringCVar(FName Name) {
    return TEXT("");
}

int32 UConsoleUtils::GetIntCVar(FName Name) {
    return 0;
}

float UConsoleUtils::GetFloatCVar(FName Name) {
    return 0.0f;
}

bool UConsoleUtils::GetBoolCVar(FName Name) {
    return false;
}


