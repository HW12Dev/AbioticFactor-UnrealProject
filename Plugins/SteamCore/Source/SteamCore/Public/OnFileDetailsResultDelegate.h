#pragma once
#include "CoreMinimal.h"
#include "FileDetailsResult.h"
#include "OnFileDetailsResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileDetailsResult, const FFileDetailsResult&, Data, bool, bWasSuccessful);

