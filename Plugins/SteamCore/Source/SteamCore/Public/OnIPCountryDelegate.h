#pragma once
#include "CoreMinimal.h"
#include "IPCountry.h"
#include "OnIPCountryDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIPCountry, const FIPCountry&, Data);

