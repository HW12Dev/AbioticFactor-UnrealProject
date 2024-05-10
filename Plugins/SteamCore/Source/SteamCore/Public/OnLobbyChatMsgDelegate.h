#pragma once
#include "CoreMinimal.h"
#include "LobbyChatMsg.h"
#include "OnLobbyChatMsgDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyChatMsg, const FLobbyChatMsg&, Data);

