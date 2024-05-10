#pragma once
#include "CoreMinimal.h"
#include "FileDetailsResult.h"
#include "OnFileDetailsResultDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileDetailsResultDelegate, const FFileDetailsResult&, Data);

