#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionReportAbuse.generated.h"

class UObject;
class USteamCoreWebAsyncActionReportAbuse;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionReportAbuse();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamIdActor, const FString& SteamIdTarget, int32 AppID, int32 AbuseType, int32 ContentType, const FString& Description, const FString& Gid);
    
};

