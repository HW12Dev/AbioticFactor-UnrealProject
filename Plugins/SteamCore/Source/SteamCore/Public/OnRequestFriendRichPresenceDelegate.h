#pragma once
#include "CoreMinimal.h"
#include "FriendRichPresenceUpdate.h"
#include "OnRequestFriendRichPresenceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestFriendRichPresence, const FFriendRichPresenceUpdate&, Data, bool, bWasSuccessful);

