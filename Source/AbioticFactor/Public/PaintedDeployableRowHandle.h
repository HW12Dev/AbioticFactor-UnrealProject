#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "PaintedDeployableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FPaintedDeployableRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FPaintedDeployableRowHandle();
};

