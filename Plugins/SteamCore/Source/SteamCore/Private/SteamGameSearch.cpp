#include "SteamGameSearch.h"

USteamGameSearch::USteamGameSearch() {
}

ESteamGameSearchErrorCode USteamGameSearch::SubmitPlayerResult(const FString& UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::SetGameHostParams(const FString& Key, TArray<FString> Values) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::SetConnectionDetails(const FString& ConnectionDetails) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::SearchForGameWithLobby(FSteamID SteamIDLobby, int32 PlayerMin, int32 PlayerMax) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::SearchForGameSolo(int32 PlayerMin, int32 PlayerMax) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32 NumConnectionDetails) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::HostConfirmGameStart(const FString& UniqueGameID) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::EndGameSearch() {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::EndGame(const FString& UniqueGameID) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::DeclineGame() {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::CancelRequestPlayersForGame() {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::AddGameSearchParams(const FString& KeyToFind, TArray<FString> ValuesToFind) {
    return ESteamGameSearchErrorCode::Invalid;
}

ESteamGameSearchErrorCode USteamGameSearch::AcceptGame() {
    return ESteamGameSearchErrorCode::Invalid;
}


