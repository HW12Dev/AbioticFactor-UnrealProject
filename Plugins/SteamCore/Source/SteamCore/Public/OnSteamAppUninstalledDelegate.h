#pragma once
#include "CoreMinimal.h"
#include "SteamAppUninstalled.h"
#include "OnSteamAppUninstalledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamAppUninstalled, const FSteamAppUninstalled&, Data);

