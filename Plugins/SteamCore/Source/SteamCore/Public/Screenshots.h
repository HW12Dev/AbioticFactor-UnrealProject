#pragma once
#include "CoreMinimal.h"
#include "ESteamVRScreenshotType.h"
#include "OnScreenshotReadyDelegate.h"
#include "OnScreenshotRequestedDelegate.h"
#include "PublishedFileID.h"
#include "ScreenshotHandle.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "Screenshots.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UScreenshots : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenshotReady ScreenshotReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenshotRequested ScreenshotRequested;
    
    UScreenshots();

    UFUNCTION(BlueprintCallable)
    static FScreenshotHandle WriteScreenshot(TArray<uint8> PubRGB, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void TriggerScreenshot();
    
    UFUNCTION(BlueprintCallable)
    static bool TagUser(FScreenshotHandle Handle, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static bool TagPublishedFile(FScreenshotHandle Handle, FPublishedFileID PublishedFileID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLocation(FScreenshotHandle Handle, const FString& Location);
    
    UFUNCTION(BlueprintCallable)
    static bool IsScreenshotsHooked();
    
    UFUNCTION(BlueprintCallable)
    static void HookScreenshots(bool bHook);
    
    UFUNCTION(BlueprintCallable)
    static FScreenshotHandle AddVRScreenshotToLibrary(ESteamVRScreenshotType EType, const FString& Filename, const FString& VRFileName);
    
    UFUNCTION(BlueprintCallable)
    static FScreenshotHandle AddScreenshotToLibrary(const FString& Filename, const FString& ThumbnailFilename, int32 Width, int32 Height);
    
};

