#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetQuantity.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetQuantity;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetQuantity();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> ItemdefIDs, bool bForce);
    
};

