#pragma once
#include "CoreMinimal.h"
#include "SteamServersConnected.h"
#include "OnSteamServersConnectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamServersConnected, const FSteamServersConnected&, Data);

