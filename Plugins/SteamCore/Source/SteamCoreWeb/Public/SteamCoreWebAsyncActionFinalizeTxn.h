#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionFinalizeTxn.generated.h"

class UObject;
class USteamCoreWebAsyncActionFinalizeTxn;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionFinalizeTxn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(UObject* WorldContextObject, const FString& Key, const FString& OrderID, int32 AppID);
    
};

