#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionConsolidate.generated.h"

class UObject;
class USteamCoreWebAsyncActionConsolidate;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionConsolidate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, TArray<int32> ItemdefIDs, bool bForce);
    
};

