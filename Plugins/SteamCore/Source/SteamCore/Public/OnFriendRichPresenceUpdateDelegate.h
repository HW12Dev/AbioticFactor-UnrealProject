#pragma once
#include "CoreMinimal.h"
#include "FriendRichPresenceUpdate.h"
#include "OnFriendRichPresenceUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFriendRichPresenceUpdate, const FFriendRichPresenceUpdate&, Data);

