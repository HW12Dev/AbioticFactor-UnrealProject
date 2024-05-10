#pragma once
#include "CoreMinimal.h"
#include "JoinClanChatRoomCompletionResult.h"
#include "OnJoinClanChatRoomCompletionResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinClanChatRoomCompletionResult, const FJoinClanChatRoomCompletionResult&, Data);

