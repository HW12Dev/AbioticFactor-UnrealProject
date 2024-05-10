#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionPostGameDataFrame.generated.h"

class UObject;
class USteamCoreWebAsyncActionPostGameDataFrame;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionPostGameDataFrame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& BroadcastId, const FString& FrameData);
    
};

