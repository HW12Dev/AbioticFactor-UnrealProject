#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "WorldFlagRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FWorldFlagRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FWorldFlagRowHandle();
};

