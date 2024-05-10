#pragma once
#include "CoreMinimal.h"
#include "JoinLobbyData.h"
#include "OnJoinLobbyAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinLobbyAsyncDelegate, const FJoinLobbyData&, Data, bool, bWasSuccessful);

