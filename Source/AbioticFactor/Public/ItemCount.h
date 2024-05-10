#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemCount.generated.h"

USTRUCT(BlueprintType)
struct ABIOTICFACTOR_API FItemCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FItemCount();
};

