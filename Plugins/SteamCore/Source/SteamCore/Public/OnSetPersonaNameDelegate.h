#pragma once
#include "CoreMinimal.h"
#include "SetPersonaNameResponse.h"
#include "OnSetPersonaNameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSetPersonaName, const FSetPersonaNameResponse&, Data, bool, bWasSuccessful);

