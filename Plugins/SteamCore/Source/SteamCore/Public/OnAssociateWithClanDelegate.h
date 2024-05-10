#pragma once
#include "CoreMinimal.h"
#include "AssociateWithClanResult.h"
#include "OnAssociateWithClanDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAssociateWithClan, const FAssociateWithClanResult&, Data, bool, bWasSuccessful);

