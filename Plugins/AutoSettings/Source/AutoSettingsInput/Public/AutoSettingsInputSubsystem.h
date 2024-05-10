#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AutoSettingsInputSubsystem.generated.h"

UCLASS(Blueprintable)
class AUTOSETTINGSINPUT_API UAutoSettingsInputSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAutoSettingsInputSubsystem();

};

