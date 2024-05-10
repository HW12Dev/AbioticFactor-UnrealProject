#include "Utils.h"

UUtils::UUtils() {
}

void UUtils::StartVRDashboard() {
}

bool UUtils::ShowGamepadTextInput(ESteamGamepadTextInputMode InputMode, ESteamGamepadTextInputLineMode LineInputMode, const FString& Description, int32 CharMax, const FString& ExistingText) {
    return false;
}

void UUtils::SetVRHeadsetStreamingEnabled(bool bEnabled) {
}

void UUtils::SetOverlayNotificationPosition(ESteamNotificationPosition NotificationPosition) {
}

void UUtils::SetOverlayNotificationInset(int32 HorizontalInset, int32 VerticalInset) {
}

bool UUtils::IsVRHeadsetStreamingEnabled() {
    return false;
}

bool UUtils::IsSteamRunningOnSteamDeck() {
    return false;
}

bool UUtils::IsSteamRunningInVR() {
    return false;
}

bool UUtils::IsSteamInBigPictureMode() {
    return false;
}

bool UUtils::IsSteamChinaLauncher() {
    return false;
}

bool UUtils::IsOverlayEnabled() {
    return false;
}

bool UUtils::InitFilterText() {
    return false;
}

FString UUtils::GetSteamUILanguage() {
    return TEXT("");
}

int32 UUtils::GetServerRealTime() {
    return 0;
}

int32 UUtils::GetSecondsSinceComputerActive() {
    return 0;
}

int32 UUtils::GetSecondsSinceAppActive() {
    return 0;
}

FString UUtils::GetIPCountry() {
    return TEXT("");
}

int32 UUtils::GetIPCCallCount() {
    return 0;
}

bool UUtils::GetImageSize(int32 iImage, int32& Width, int32& Height) {
    return false;
}

bool UUtils::GetImageRGBA(int32 iImage, TArray<uint8>& OutBuffer) {
    return false;
}

int32 UUtils::GetEnteredGamepadTextLength() {
    return 0;
}

bool UUtils::GetEnteredGamepadTextInput(FString& Text) {
    return false;
}

int32 UUtils::GetCurrentBatteryPower() {
    return 0;
}

ESteamUniverse UUtils::GetConnectedUniverse() {
    return ESteamUniverse::Invalid;
}

int32 UUtils::GetAppID_Pure() {
    return 0;
}

int32 UUtils::GetAppID() {
    return 0;
}

bool UUtils::BOverlayNeedsPresent() {
    return false;
}


