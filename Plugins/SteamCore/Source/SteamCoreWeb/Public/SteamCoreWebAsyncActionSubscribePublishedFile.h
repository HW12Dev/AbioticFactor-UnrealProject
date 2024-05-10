#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionSubscribePublishedFile.generated.h"

class UObject;
class USteamCoreWebAsyncActionSubscribePublishedFile;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionSubscribePublishedFile();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs);
    
};

