#pragma once
#include "CoreMinimal.h"
#include "SteamShutdown.h"
#include "OnSteamShutdownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamShutdown, const FSteamShutdown&, Data);

