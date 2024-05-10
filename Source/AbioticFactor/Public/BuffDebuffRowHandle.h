#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "BuffDebuffRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FBuffDebuffRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FBuffDebuffRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FBuffDebuffRowHandle) { return 0; }

