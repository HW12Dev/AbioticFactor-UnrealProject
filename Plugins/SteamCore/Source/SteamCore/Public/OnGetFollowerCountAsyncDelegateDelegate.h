#pragma once
#include "CoreMinimal.h"
#include "FriendsGetFollowerCount.h"
#include "OnGetFollowerCountAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGetFollowerCountAsyncDelegate, const FFriendsGetFollowerCount&, Data, bool, bWasSuccessful);

