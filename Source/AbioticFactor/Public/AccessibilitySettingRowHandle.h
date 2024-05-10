#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "AccessibilitySettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAccessibilitySettingRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FAccessibilitySettingRowHandle();
};

