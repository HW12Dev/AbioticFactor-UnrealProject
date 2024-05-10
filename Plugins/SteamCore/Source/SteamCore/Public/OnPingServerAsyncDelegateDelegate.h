#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnPingServerAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPingServerAsyncDelegate, const FGameServerItem&, Data, bool, bWasSuccessful);

