#pragma once
#include "CoreMinimal.h"
#include "NumberOfCurrentPlayers.h"
#include "OnGetNumberOfCurrentPlayersAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetNumberOfCurrentPlayersAsyncDelegate, const FNumberOfCurrentPlayers&, Data, bool, bWasSuccessful);

