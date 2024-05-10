#pragma once
#include "CoreMinimal.h"
#include "LobbyGameCreated.h"
#include "OnLobbyGameCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyGameCreated, const FLobbyGameCreated&, Data);

