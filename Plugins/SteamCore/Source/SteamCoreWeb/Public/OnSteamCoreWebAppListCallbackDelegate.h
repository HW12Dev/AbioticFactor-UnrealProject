#pragma once
#include "CoreMinimal.h"
#include "WebAppsGetAppList.h"
#include "OnSteamCoreWebAppListCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamCoreWebAppListCallback, const TArray<FWebAppsGetAppList>&, Data, bool, bWasSuccessful);

