#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AchievementStatRowHandle.h"
#include "Achievement.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAchievement : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAchievementStatRowHandle ProgressStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressMaxValue;
    
    FAchievement();
};

