#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "SetBonusRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSetBonusRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FSetBonusRowHandle();
};

