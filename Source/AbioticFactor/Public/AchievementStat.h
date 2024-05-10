#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AchievementStat.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FAchievementStat : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFloatStat;
    
    FAchievementStat();
};

