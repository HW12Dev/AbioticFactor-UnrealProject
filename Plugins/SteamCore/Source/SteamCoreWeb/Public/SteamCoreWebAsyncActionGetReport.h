#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionGetReport.generated.h"

class UObject;
class USteamCoreWebAsyncActionGetReport;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionGetReport();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionGetReport* GetReportAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& Time, const FString& Type, int32 MaxResults);
    
};

