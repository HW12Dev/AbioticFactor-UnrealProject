#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "UIPopupRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FUIPopupRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FUIPopupRowHandle();
};

