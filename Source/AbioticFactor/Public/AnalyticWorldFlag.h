#pragma once
#include "CoreMinimal.h"
#include "AnalyticWorldFlag.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticWorldFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimePlayed;
    
    ABIOTICFACTOR_API FAnalyticWorldFlag();
};

