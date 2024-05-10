#pragma once
#include "CoreMinimal.h"
#include "AchievementRowHandle.h"
#include "AchievementStatListener.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAchievementStatListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FAchievementRowHandle, int32> LinkedAchievements;
    
    FAchievementStatListener();
};

