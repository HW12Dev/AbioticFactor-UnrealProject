#pragma once
#include "CoreMinimal.h"
#include "SteamRemotePlaySessionDisconnected.h"
#include "OnSteamRemotePlaySessionDisconnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamRemotePlaySessionDisconnected, const FSteamRemotePlaySessionDisconnected&, Data);

