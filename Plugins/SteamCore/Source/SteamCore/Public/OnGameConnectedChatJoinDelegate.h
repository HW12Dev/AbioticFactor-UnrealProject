#pragma once
#include "CoreMinimal.h"
#include "GameConnectedChatJoin.h"
#include "OnGameConnectedChatJoinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedChatJoin, const FGameConnectedChatJoin&, Data);

