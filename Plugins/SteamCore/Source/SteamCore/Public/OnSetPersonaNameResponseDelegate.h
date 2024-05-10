#pragma once
#include "CoreMinimal.h"
#include "SetPersonaNameResponse.h"
#include "OnSetPersonaNameResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetPersonaNameResponse, const FSetPersonaNameResponse&, Data);

