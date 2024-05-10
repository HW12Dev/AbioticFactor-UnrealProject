#pragma once
#include "CoreMinimal.h"
#include "GameConnectedChatLeave.h"
#include "OnGameConnectedChatLeaveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedChatLeave, const FGameConnectedChatLeave&, Data);

