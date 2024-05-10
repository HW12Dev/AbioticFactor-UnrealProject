#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetCollectionDetails.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetCollectionDetails;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetCollectionDetails();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(UObject* WorldContextObject, TArray<FString> PublishedFileIDs);
    
};

