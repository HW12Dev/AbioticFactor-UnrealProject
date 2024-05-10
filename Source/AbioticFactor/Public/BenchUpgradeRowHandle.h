#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "BenchUpgradeRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FBenchUpgradeRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FBenchUpgradeRowHandle();
};

