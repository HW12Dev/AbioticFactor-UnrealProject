#include "Matchmaking.h"

UMatchmaking::UMatchmaking() {
}

bool UMatchmaking::SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType) {
    return false;
}

bool UMatchmaking::SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner) {
    return false;
}

bool UMatchmaking::SetLobbyMemberLimit(FSteamID SteamIDLobby, int32 MaxMembers) {
    return false;
}

void UMatchmaking::SetLobbyMemberData(FSteamID SteamIDLobby, const FString& Key, const FString& Value) {
}

bool UMatchmaking::SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable) {
    return false;
}

void UMatchmaking::SetLobbyGameServer(FSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer) {
}

bool UMatchmaking::SetLobbyData(FSteamID SteamIDLobby, const FString& Key, const FString& Value) {
    return false;
}

bool UMatchmaking::SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent) {
    return false;
}

bool UMatchmaking::SendLobbyChatMsg(FSteamID SteamIDLobby, const FString& Message) {
    return false;
}

void UMatchmaking::RequestLobbyList(const FOnRequestLobbyList& Callback) {
}

bool UMatchmaking::RequestLobbyData(FSteamID SteamIDLobby) {
    return false;
}

bool UMatchmaking::RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags) {
    return false;
}

void UMatchmaking::LeaveLobby(FSteamID SteamIDLobby) {
}

void UMatchmaking::JoinLobby(const FOnJoinLobby& Callback, FSteamID SteamIDLobby) {
}

bool UMatchmaking::InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee) {
    return false;
}

int32 UMatchmaking::GetNumLobbyMembers(FSteamID SteamIDLobby) {
    return 0;
}

FSteamID UMatchmaking::GetLobbyOwner(FSteamID SteamIDLobby) {
    return FSteamID{};
}

int32 UMatchmaking::GetLobbyMemberLimit(FSteamID SteamIDLobby) {
    return 0;
}

FString UMatchmaking::GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, const FString& Key) {
    return TEXT("");
}

FSteamID UMatchmaking::GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 Member) {
    return FSteamID{};
}

bool UMatchmaking::GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer) {
    return false;
}

int32 UMatchmaking::GetLobbyDataCount(FSteamID SteamIDLobby) {
    return 0;
}

bool UMatchmaking::GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value) {
    return false;
}

FString UMatchmaking::GetLobbyData(FSteamID SteamIDLobby, const FString& Key) {
    return TEXT("");
}

int32 UMatchmaking::GetLobbyChatEntry(FSteamID SteamIDLobby, int32 MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType) {
    return 0;
}

FSteamID UMatchmaking::GetLobbyByIndex(int32 Lobby) {
    return FSteamID{};
}

int32 UMatchmaking::GetFavoriteGameCount() {
    return 0;
}

bool UMatchmaking::GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer) {
    return false;
}

bool UMatchmaking::DeleteLobbyData(FSteamID SteamIDLobby, const FString& Key) {
    return false;
}

void UMatchmaking::CreateLobby(const FOnCreateLobby& Callback, ESteamLobbyType LobbyType, int32 MaxMembers) {
}

void UMatchmaking::AddRequestLobbyListStringFilter(const FString& KeyToMatch, const FString& ValueToMatch, ESteamLobbyComparison ComparisonType) {
}

void UMatchmaking::AddRequestLobbyListResultCountFilter(int32 MaxResults) {
}

void UMatchmaking::AddRequestLobbyListNumericalFilter(const FString& KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType) {
}

void UMatchmaking::AddRequestLobbyListNearValueFilter(const FString& KeyToMatch, int32 ValueToBeCloseTo) {
}

void UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable) {
}

void UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter) {
}

void UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby) {
}

int32 UMatchmaking::AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags, int32 TimeLastPlayedOnServer) {
    return 0;
}


