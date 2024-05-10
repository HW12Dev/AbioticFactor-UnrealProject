#pragma once
#include "CoreMinimal.h"
#include "GSPolicyResponse.h"
#include "OnGSPolicyResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSPolicyResponse, const FGSPolicyResponse&, Data);

