#pragma once
#include "CoreMinimal.h"
#include "ESteamAuthSessionResponse.generated.h"

UENUM(BlueprintType)
enum class ESteamAuthSessionResponse : uint8 {
    OK,
    UserNotConnectedToSteam,
    NoLicenseOrExpired,
    VACBanned,
    LoggedInElseWhere,
    VACCheckTimedOut,
    AuthTicketCanceled,
    AuthTicketInvalidAlreadyUsed,
    AuthTicketInvalid,
    PublisherIssuedBan,
};

