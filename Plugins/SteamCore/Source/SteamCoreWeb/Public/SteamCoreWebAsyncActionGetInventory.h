#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetInventory.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetInventory;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetInventory();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID);
    
};

