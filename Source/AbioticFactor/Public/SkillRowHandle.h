#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "SkillRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FSkillRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FSkillRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FSkillRowHandle) { return 0; }

