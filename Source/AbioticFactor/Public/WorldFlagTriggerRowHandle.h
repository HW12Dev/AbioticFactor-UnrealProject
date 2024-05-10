#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "WorldFlagTriggerRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FWorldFlagTriggerRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FWorldFlagTriggerRowHandle();
};

