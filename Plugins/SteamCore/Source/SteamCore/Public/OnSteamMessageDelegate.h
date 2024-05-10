#pragma once
#include "CoreMinimal.h"
#include "ESteamMessageType.h"
#include "OnSteamMessageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamMessage, ESteamMessageType, Type, const FString&, Message);

