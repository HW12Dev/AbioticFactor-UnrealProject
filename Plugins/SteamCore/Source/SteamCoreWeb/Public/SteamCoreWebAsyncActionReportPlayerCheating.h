#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionReportPlayerCheating.generated.h"

class UObject;
class USteamCoreWebAsyncActionReportPlayerCheating;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionReportPlayerCheating();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(UObject* WorldContextObject, const FString& Key, int32 AppID, const FString& SteamID, const FString& SteamIdReporter, const FString& AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32 GameMode, int32 SuspicionStartTime, int32 Severity);
    
};

