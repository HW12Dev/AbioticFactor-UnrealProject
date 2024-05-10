#include "Screenshots.h"

UScreenshots::UScreenshots() {
}

FScreenshotHandle UScreenshots::WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height) {
    return FScreenshotHandle{};
}

void UScreenshots::TriggerScreenshot() {
}

bool UScreenshots::TagUser(FScreenshotHandle Handle, FSteamID SteamID) {
    return false;
}

bool UScreenshots::TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID) {
    return false;
}

bool UScreenshots::SetLocation(FScreenshotHandle Handle, const FString& Location) {
    return false;
}

bool UScreenshots::IsScreenshotsHooked() {
    return false;
}

void UScreenshots::HookScreenshots(bool bHook) {
}

FScreenshotHandle UScreenshots::AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, const FString& Filename, const FString& VRFileName) {
    return FScreenshotHandle{};
}

FScreenshotHandle UScreenshots::AddScreenshotToLibrary(const FString& Filename, const FString& ThumbnailFilename, int32 Width, int32 Height) {
    return FScreenshotHandle{};
}


