#pragma once
#include "CoreMinimal.h"
#include "BlackboardName.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FBlackboardName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FBlackboardName();
};

