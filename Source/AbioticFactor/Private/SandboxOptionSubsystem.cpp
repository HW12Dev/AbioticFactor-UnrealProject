#include "SandboxOptionSubsystem.h"

USandboxOptionSubsystem::USandboxOptionSubsystem() {
}

bool USandboxOptionSubsystem::WriteSandboxSettingsToFile(const FString& FilePath, const TMap<FName, FString>& Settings) {
    return false;
}

bool USandboxOptionSubsystem::ReadSandboxSettingsFromFile(const FString& FilePath, TMap<FName, FString>& OutSettings) {
    return false;
}

TMap<FName, FString> USandboxOptionSubsystem::MergeLoadedSandboxSettingsWithDefault(const TMap<FName, FString>& InSettings, EModifiedRuleset& OutModifiedRuleset) {
    return TMap<FName, FString>();
}

FString USandboxOptionSubsystem::GetSandboxStringValue(const FString& InValue, const FSandboxOption& SandboxData) {
    return TEXT("");
}

FString USandboxOptionSubsystem::GetSandboxOption_String(const UObject* WorldContextObject, FSandboxOptionRowHandle Option) {
    return TEXT("");
}

int32 USandboxOptionSubsystem::GetSandboxOption_Int(const UObject* WorldContextObject, FSandboxOptionRowHandle Option) {
    return 0;
}

float USandboxOptionSubsystem::GetSandboxOption_Float(const UObject* WorldContextObject, FSandboxOptionRowHandle Option) {
    return 0.0f;
}

bool USandboxOptionSubsystem::GetSandboxOption_Bool(const UObject* WorldContextObject, FSandboxOptionRowHandle Option) {
    return false;
}

TMap<FName, FString> USandboxOptionSubsystem::GetDefaultSandboxSettings() {
    return TMap<FName, FString>();
}


