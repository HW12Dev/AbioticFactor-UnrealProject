#pragma once
#include "CoreMinimal.h"
#include "FriendsEnumerateFollowingList.h"
#include "OnEnumerateFollowingListAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnumerateFollowingListAsyncDelegate, const FFriendsEnumerateFollowingList&, Data, bool, bWasSuccessful);

