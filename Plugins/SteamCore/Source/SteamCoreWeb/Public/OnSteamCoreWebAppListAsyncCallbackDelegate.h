#pragma once
#include "CoreMinimal.h"
#include "WebAppsGetAppList.h"
#include "OnSteamCoreWebAppListAsyncCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSteamCoreWebAppListAsyncCallback, const TArray<FWebAppsGetAppList>&, Data, bool, bWasSuccessful);

