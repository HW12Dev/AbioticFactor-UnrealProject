#pragma once
#include "CoreMinimal.h"
#include "GameLobbyJoinRequested.h"
#include "OnGameLobbyJoinRequestedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameLobbyJoinRequested, const FGameLobbyJoinRequested&, Data);

