#pragma once
#include "CoreMinimal.h"
#include "RowHandle.h"
#include "AchievementStatRowHandle.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAchievementStatRowHandle : public FRowHandle {
    GENERATED_BODY()
public:
    FAchievementStatRowHandle();
};
FORCEINLINE uint32 GetTypeHash(const FAchievementStatRowHandle) { return 0; }

