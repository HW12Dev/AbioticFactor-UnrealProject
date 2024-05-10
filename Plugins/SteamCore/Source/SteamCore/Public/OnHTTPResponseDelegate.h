#pragma once
#include "CoreMinimal.h"
#include "OnHTTPResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHTTPResponse, const FString&, Response);

