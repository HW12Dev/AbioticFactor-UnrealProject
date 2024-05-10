#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSteamCoreWebAppListAsyncCallbackDelegate.h"
#include "WebAppsGetAppList.h"
#include "SteamCoreAppsAsyncActionGetAppList.generated.h"

class UObject;
class USteamCoreAppsAsyncActionGetAppList;

UCLASS(Blueprintable)
class STEAMCOREWEB_API USteamCoreAppsAsyncActionGetAppList : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamCoreWebAppListAsyncCallback OnCallback;
    
    USteamCoreAppsAsyncActionGetAppList();

    UFUNCTION(BlueprintCallable)
    void HandleCallback(const TArray<FWebAppsGetAppList>& Data, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(UObject* WorldContextObject);
    
};

