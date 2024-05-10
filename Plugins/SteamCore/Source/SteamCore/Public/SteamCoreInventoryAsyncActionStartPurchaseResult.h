#pragma once
#include "CoreMinimal.h"
#include "OnSteamInventoryStartPurchaseResultAsyncDelegateDelegate.h"
#include "SteamCoreAsyncAction.h"
#include "SteamInventoryStartPurchaseResult.h"
#include "SteamItemDef.h"
#include "SteamCoreInventoryAsyncActionStartPurchaseResult.generated.h"

class UObject;
class USteamCoreInventoryAsyncActionStartPurchaseResult;

UCLASS(Blueprintable)
class STEAMCORE_API USteamCoreInventoryAsyncActionStartPurchaseResult : public USteamCoreAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamInventoryStartPurchaseResultAsyncDelegate OnCallback;
    
    USteamCoreInventoryAsyncActionStartPurchaseResult();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreInventoryAsyncActionStartPurchaseResult* StartPurchaseAsync(UObject* WorldContextObject, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void HandleCallback(const FSteamInventoryStartPurchaseResult& Data, bool bWasSuccessful);
    
};

