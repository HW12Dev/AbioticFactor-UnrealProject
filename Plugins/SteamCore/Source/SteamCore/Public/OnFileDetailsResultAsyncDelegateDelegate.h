#pragma once
#include "CoreMinimal.h"
#include "FileDetailsResult.h"
#include "OnFileDetailsResultAsyncDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFileDetailsResultAsyncDelegate, const FFileDetailsResult&, Data, bool, bWasSuccessful);

