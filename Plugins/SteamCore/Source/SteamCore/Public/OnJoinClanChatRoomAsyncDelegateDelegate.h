#pragma once
#include "CoreMinimal.h"
#include "JoinClanChatRoomCompletionResult.h"
#include "OnJoinClanChatRoomAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoinClanChatRoomAsyncDelegate, const FJoinClanChatRoomCompletionResult&, Data, bool, bWasSuccessful);

