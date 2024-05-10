#pragma once
#include "CoreMinimal.h"
#include "ReservationNotificationData.h"
#include "OnReservationNotificationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReservationNotificationDelegate, const FReservationNotificationData&, Data);

