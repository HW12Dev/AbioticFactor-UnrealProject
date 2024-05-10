#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "VideoSettingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FVideoSettingRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FVideoSettingRowHandle();
};

