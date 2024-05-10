#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "ControlSettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FControlSettingRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FControlSettingRowHandle();
};

