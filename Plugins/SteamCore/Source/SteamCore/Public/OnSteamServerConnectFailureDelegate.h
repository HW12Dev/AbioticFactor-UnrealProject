#pragma once
#include "CoreMinimal.h"
#include "SteamServerConnectFailure.h"
#include "OnSteamServerConnectFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServerConnectFailure, const FSteamServerConnectFailure&, Data);

