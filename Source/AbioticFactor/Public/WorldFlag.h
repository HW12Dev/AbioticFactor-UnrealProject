#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WorldFlag.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FWorldFlag : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStrippedFromBuild;
    
    FWorldFlag();
};

