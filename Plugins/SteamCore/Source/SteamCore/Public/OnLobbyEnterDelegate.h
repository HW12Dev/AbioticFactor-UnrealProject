#pragma once
#include "CoreMinimal.h"
#include "LobbyEnterData.h"
#include "OnLobbyEnterDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyEnter, const FLobbyEnterData&, Data);

