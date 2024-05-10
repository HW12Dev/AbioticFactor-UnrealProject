#pragma once
#include "CoreMinimal.h"
#include "JoinClanChatRoomCompletionResult.h"
#include "OnJoinClanChatRoomDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinClanChatRoom, const FJoinClanChatRoomCompletionResult&, Data, bool, bWasSuccessful);

