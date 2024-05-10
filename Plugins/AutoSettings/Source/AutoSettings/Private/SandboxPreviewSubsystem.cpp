#include "SandboxPreviewSubsystem.h"

USandboxPreviewSubsystem::USandboxPreviewSubsystem() {
}

void USandboxPreviewSubsystem::SetSandboxPreviewSettings(const TMap<FName, FString>& Settings, const TMap<FName, FString>& DefaultSettings) {
}

bool USandboxPreviewSubsystem::IsPreviewSettingModified(FName SettingName) {
    return false;
}

TMap<FName, FString> USandboxPreviewSubsystem::GetModifiedPreviewSettings() const {
    return TMap<FName, FString>();
}


