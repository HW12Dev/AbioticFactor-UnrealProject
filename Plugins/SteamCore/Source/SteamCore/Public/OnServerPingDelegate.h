#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnServerPingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerPing, const FGameServerItem&, Data, bool, bWasSuccessful);

