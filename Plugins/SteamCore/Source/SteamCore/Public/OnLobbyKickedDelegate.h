#pragma once
#include "CoreMinimal.h"
#include "LobbyKickedData.h"
#include "OnLobbyKickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyKicked, const FLobbyKickedData&, Data);

