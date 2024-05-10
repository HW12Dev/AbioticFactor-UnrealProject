#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "ErrorMessageRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FErrorMessageRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FErrorMessageRowHandle();
};

