#pragma once
#include "CoreMinimal.h"
#include "SteamServersDisconnected.h"
#include "OnSteamServersDisconnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServersDisconnected, const FSteamServersDisconnected&, Data);

