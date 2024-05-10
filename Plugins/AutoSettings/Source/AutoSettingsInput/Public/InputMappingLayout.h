#pragma once
#include "CoreMinimal.h"
#include "InputMappingGroup.h"
#include "InputMappingLayout.generated.h"

USTRUCT(BlueprintType)
struct AUTOSETTINGSINPUT_API FInputMappingLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingGroup> MappingGroups;
    
    FInputMappingLayout();
};

