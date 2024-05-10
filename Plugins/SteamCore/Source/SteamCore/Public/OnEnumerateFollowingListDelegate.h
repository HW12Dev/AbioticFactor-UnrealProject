#pragma once
#include "CoreMinimal.h"
#include "FriendsEnumerateFollowingList.h"
#include "OnEnumerateFollowingListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEnumerateFollowingList, const FFriendsEnumerateFollowingList&, Data, bool, bWasSuccessful);

