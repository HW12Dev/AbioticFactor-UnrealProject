#pragma once
#include "CoreMinimal.h"
#include "LobbyMatchList.h"
#include "OnRequestLobbyListAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestLobbyListAsyncDelegate, const FLobbyMatchList&, Data, bool, bWasSuccessful);

