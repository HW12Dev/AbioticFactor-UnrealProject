#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "AchievementRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAchievementRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FAchievementRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FAchievementRowHandle) { return 0; }

