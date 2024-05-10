#pragma once
#include "CoreMinimal.h"
#include "AvatarImageLoaded.h"
#include "OnAvatarImageLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAvatarImageLoaded, const FAvatarImageLoaded&, Data);

