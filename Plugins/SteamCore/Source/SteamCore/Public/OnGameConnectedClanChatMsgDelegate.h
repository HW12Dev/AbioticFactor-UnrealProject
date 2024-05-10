#pragma once
#include "CoreMinimal.h"
#include "GameConnectedClanChatMsg.h"
#include "OnGameConnectedClanChatMsgDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedClanChatMsg, const FGameConnectedClanChatMsg&, Data);

