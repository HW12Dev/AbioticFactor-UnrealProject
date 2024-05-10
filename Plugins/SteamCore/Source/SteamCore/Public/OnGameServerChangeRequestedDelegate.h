#pragma once
#include "CoreMinimal.h"
#include "GameServerChangeRequested.h"
#include "OnGameServerChangeRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServerChangeRequested, const FGameServerChangeRequested&, Data);

