#pragma once
#include "CoreMinimal.h"
#include "FriendsGetFollowerCount.h"
#include "OnGetFollowerCountDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetFollowerCount, const FFriendsGetFollowerCount&, Data, bool, bWasSuccessful);

