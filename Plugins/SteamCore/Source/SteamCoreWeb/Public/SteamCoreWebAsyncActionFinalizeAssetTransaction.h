#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFinalizeAssetTransaction.generated.h"

class UObject;
class USteamCoreWebAsyncActionFinalizeAssetTransaction;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFinalizeAssetTransaction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& TxnId, const FString& Language);
    
};

