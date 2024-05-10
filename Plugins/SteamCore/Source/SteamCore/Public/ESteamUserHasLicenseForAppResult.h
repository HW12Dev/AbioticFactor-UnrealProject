#pragma once
#include "CoreMinimal.h"
#include "ESteamUserHasLicenseForAppResult.generated.h"

UENUM(BlueprintType)
enum class ESteamUserHasLicenseForAppResult : uint8 {
    HasLicense,
    DoesNotHaveLicense,
    NoAuth,
};

