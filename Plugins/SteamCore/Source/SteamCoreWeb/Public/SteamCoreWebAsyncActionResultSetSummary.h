#pragma once
#include "CoreMinimal.h"
#include "SteamCoreWebAsyncAction.h"
#include "SteamCoreWebAsyncActionResultSetSummary.generated.h"

class UObject;
class USteamCoreWebAsyncActionResultSetSummary;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction {
    GENERATED_BODY()
public:
    USteamCoreWebAsyncActionResultSetSummary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(UObject* WorldContextObject, const FString& Key, const FString& SteamID, int32 AppID, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> UserTag);
    
};

