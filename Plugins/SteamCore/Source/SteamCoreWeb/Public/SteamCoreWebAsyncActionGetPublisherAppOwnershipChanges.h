#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(UObject* WorldContextObject, const FString& Key, const FString& PackageRowVersion, const FString& CDKeyRowVersion);
    
};

