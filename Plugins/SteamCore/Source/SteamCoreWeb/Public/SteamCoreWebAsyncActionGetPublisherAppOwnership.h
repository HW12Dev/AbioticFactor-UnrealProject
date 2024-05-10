#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPublisherAppOwnership.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPublisherAppOwnership;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPublisherAppOwnership();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID);
    
};

