#pragma once
#include "CoreMinimal.h"
#include "ClientGameServerDeny.h"
#include "OnClientGameServerDenyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClientGameServerDeny, const FClientGameServerDeny&, Data);

