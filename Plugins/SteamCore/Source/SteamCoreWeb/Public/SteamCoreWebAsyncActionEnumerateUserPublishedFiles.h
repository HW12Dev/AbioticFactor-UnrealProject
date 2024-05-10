#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionEnumerateUserPublishedFiles.generated.h"

class UObject;
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionEnumerateUserPublishedFiles();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID);
    
};

