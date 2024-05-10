#pragma once
#include "CoreMinimal.h"
#include "OnSteamCoreWebCallbackDelegate.h"
#include "SteamCoreWebSubsystem.h"
#include "WebSteamNews.generated.h"

UCLASS(Blueprintable)
class STEAMCOREWEB_API UWebSteamNews : public USteamCoreWebSubsystem {
    GENERATED_BODY()
public:
    UWebSteamNews();

    UFUNCTION(BlueprintCallable)
    void GetNewsForAppAuthed(const FOnSteamCoreWebCallback& Callback, const FString& Key, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void GetNewsForApp(const FOnSteamCoreWebCallback& Callback, int32 AppID, int32 MaxLength, TArray<FString> Feeds, int32 EndDate, int32 Count);
    
};

