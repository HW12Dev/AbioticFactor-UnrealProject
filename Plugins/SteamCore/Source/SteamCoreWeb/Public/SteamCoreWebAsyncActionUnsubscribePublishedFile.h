#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionUnsubscribePublishedFile.generated.h"

class UObject;
class USteamCoreWebAsyncActionUnsubscribePublishedFile;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionUnsubscribePublishedFile();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, const FString& PublishedFileIDs);
    
};

