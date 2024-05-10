#pragma once
#include "CoreMinimal.h"
#include "EDayOfTheWeek.generated.h"

UENUM(BlueprintType)
enum class EDayOfTheWeek : uint8 {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday,
};

