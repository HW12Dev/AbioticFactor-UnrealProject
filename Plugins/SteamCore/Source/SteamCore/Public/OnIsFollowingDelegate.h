#pragma once
#include "CoreMinimal.h"
#include "FriendsIsFollowing.h"
#include "OnIsFollowingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnIsFollowing, const FFriendsIsFollowing&, Data, bool, bWasSuccessful);

