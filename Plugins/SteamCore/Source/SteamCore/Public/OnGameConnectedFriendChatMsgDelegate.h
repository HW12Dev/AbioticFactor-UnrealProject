#pragma once
#include "CoreMinimal.h"
#include "GameConnectedFriendChatMsg.h"
#include "OnGameConnectedFriendChatMsgDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedFriendChatMsg, const FGameConnectedFriendChatMsg&, Data);

