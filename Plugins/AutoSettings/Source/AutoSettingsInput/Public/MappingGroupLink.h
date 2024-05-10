#pragma once
#include "CoreMinimal.h"
#include "MappingGroupLink.generated.h"

USTRUCT(BlueprintType)
struct FMappingGroupLink {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MappingGroups;
    
    AUTOSETTINGSINPUT_API FMappingGroupLink();
};

