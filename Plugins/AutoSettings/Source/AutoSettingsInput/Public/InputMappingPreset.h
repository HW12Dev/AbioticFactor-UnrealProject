#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InputMappingGroup.h"
#include "InputMappingLayout.h"
#include "InputMappingPreset.generated.h"

USTRUCT(BlueprintType)
struct AUTOSETTINGSINPUT_API FInputMappingPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PresetTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputMappingLayout InputLayout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputMappingGroup> MappingGroups;
    
    FInputMappingPreset();
};

