#pragma once
#include "CoreMinimal.h"
#include "GSPolicyResponse.generated.h"

USTRUCT(BlueprintType)
struct FGSPolicyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BSecure;
    
    STEAMCORE_API FGSPolicyResponse();
};

