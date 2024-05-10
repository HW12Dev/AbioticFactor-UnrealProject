#pragma once
#include "CoreMinimal.h"
#include "SteamAppInstalled.h"
#include "OnSteamAppInstalledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamAppInstalled, const FSteamAppInstalled&, Data);

