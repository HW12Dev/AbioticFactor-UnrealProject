#pragma once
#include "CoreMinimal.h"
#include "LobbyInviteData.h"
#include "OnLobbyInviteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLobbyInvite, const FLobbyInviteData&, Data);

