#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebBroadcastService.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebBroadcastService : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebBroadcastService();

    UFUNCTION(BlueprintCallable)
    void PostGameDataFrame(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, const FString& SteamID, const FString& BroadcastId, const FString& FrameData);
    
};

