#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AutoSettingsInputValidationSubsystem.generated.h"

UCLASS(Blueprintable)
class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAutoSettingsInputValidationSubsystem();

};

