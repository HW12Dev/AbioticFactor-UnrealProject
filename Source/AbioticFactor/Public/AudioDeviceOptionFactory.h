#pragma once
#include "CoreMinimal.h"
#include "SettingOptionFactory.h"
#include "AudioDeviceOptionFactory.generated.h"

UCLASS(Blueprintable)
class ABIOTICFACTOR_API UAudioDeviceOptionFactory : public USettingOptionFactory {
    GENERATED_BODY()
public:
    UAudioDeviceOptionFactory();

};

