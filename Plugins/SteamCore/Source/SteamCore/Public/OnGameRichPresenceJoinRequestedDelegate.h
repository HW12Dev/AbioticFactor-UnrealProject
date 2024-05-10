#pragma once
#include "CoreMinimal.h"
#include "GameRichPresenceJoinRequested.h"
#include "OnGameRichPresenceJoinRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameRichPresenceJoinRequested, const FGameRichPresenceJoinRequested&, Data);

