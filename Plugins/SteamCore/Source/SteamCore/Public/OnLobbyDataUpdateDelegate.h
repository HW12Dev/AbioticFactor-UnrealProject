#pragma once
#include "CoreMinimal.h"
#include "LobbyDataUpdate.h"
#include "OnLobbyDataUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyDataUpdate, FLobbyDataUpdate, Data);

