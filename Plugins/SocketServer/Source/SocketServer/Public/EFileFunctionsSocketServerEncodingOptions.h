#pragma once
#include "CoreMinimal.h"
#include "EFileFunctionsSocketServerEncodingOptions.generated.h"

UENUM(BlueprintType)
enum class EFileFunctionsSocketServerEncodingOptions : uint8 {
    E_AutoDetect,
    E_ForceAnsi,
    E_ForceUnicode,
    E_ForceUTF8,
    E_ForceUTF8WithoutBOM,
};

