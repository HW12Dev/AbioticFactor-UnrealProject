#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionStartAssetTransaction.generated.h"

class UObject;
class USteamCoreWebAsyncActionStartAssetTransaction;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionStartAssetTransaction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& AssetId, int32 AssetQuantity, const FString& Currency, const FString& Language, const FString& Ipaddress, const FString& Referer, bool bClientAuth);
    
};

