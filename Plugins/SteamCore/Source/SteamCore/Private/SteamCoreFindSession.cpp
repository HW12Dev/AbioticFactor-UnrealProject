#include "SteamCoreFindSession.h"

USteamCoreFindSession::USteamCoreFindSession() {
}

void USteamCoreFindSession::OnCompleted(bool bSuccessful) {
}

USteamCoreFindSession* USteamCoreFindSession::FindSteamCoreSessions(UObject* WorldContextObject, TMap<FString, FSteamSessionSearchSetting> SearchSettings, int32 MaxResults, bool bUseLAN, ESteamSessionFindType ServerType, bool bEmptyServersOnly, bool bSecureServersOnly, float Timeout) {
    return NULL;
}


