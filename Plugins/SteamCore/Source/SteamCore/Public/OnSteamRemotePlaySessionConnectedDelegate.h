#pragma once
#include "CoreMinimal.h"
#include "SteamRemotePlaySessionConnected.h"
#include "OnSteamRemotePlaySessionConnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionConnected, const FSteamRemotePlaySessionConnected&, Data);

