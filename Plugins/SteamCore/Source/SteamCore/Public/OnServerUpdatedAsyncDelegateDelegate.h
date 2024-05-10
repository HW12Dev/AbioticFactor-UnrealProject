#pragma once
#include "CoreMinimal.h"
#include "GameServerItem.h"
#include "OnServerUpdatedAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnServerUpdatedAsyncDelegate, const FGameServerItem&, Data);

