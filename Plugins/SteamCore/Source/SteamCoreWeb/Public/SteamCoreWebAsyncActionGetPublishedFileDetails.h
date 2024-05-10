#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPublishedFileDetails.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPublishedFileDetails;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPublishedFileDetails();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(UObject* WorldContextObject, const FString& PublishedFileIDs);
    
};

