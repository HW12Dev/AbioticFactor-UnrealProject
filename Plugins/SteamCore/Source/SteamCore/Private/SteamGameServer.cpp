#include "SteamGameServer.h"

USteamGameServer::USteamGameServer() {
}

bool USteamGameServer::WasRestartRequested() {
    return false;
}

ESteamUserHasLicenseForAppResult USteamGameServer::UserHasLicenseForApp(FSteamID SteamID, int32 AppID) {
    return ESteamUserHasLicenseForAppResult::HasLicense;
}

void USteamGameServer::SetSpectatorServerName(const FString& SpectatorServerName) {
}

void USteamGameServer::SetSpectatorPort(int32 SpectatorPort) {
}

void USteamGameServer::SetServerName(const FString& ServerName) {
}

void USteamGameServer::SetRegion(const FString& Region) {
}

void USteamGameServer::SetProduct(const FString& Product) {
}

void USteamGameServer::SetPasswordProtected(bool bPasswordProtected) {
}

void USteamGameServer::SetModDir(const FString& ModDir) {
}

void USteamGameServer::SetMaxPlayerCount(int32 PlayersMax) {
}

void USteamGameServer::SetMapName(const FString& MapName) {
}

void USteamGameServer::SetKeyValue(const FString& Key, const FString& Value) {
}

void USteamGameServer::SetHeartbeatInterval(int32 HeartbeatInterval) {
}

void USteamGameServer::SetGameTags(const FString& GameTags) {
}

void USteamGameServer::SetGameDescription(const FString& GameDescription) {
}

void USteamGameServer::SetGameData(const FString& GameData) {
}

void USteamGameServer::SetDedicatedServer(bool bDedicated) {
}

void USteamGameServer::SetBotPlayerCount(int32 BotPlayers) {
}

void USteamGameServer::SetAdvertiseServerActive(bool bActive) {
}

bool USteamGameServer::RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup) {
    return false;
}

void USteamGameServer::LogOnAnonymous() {
}

void USteamGameServer::LogOn(const FString& token) {
}

void USteamGameServer::LogOff() {
}

FSteamID USteamGameServer::GetServerSteamID_PureCompact() {
    return FSteamID{};
}

FSteamID USteamGameServer::GetServerSteamID_Pure() {
    return FSteamID{};
}

FSteamID USteamGameServer::GetServerSteamID() {
    return FSteamID{};
}

FString USteamGameServer::GetServerPublicIP_PureCompact() {
    return TEXT("");
}

FString USteamGameServer::GetServerPublicIP_Pure() {
    return TEXT("");
}

FString USteamGameServer::GetServerPublicIP() {
    return TEXT("");
}

FSteamTicketHandle USteamGameServer::GetAuthSessionTicket(TArray<uint8>& Ticket) {
    return FSteamTicketHandle{};
}

void USteamGameServer::ForceHeartbeat() {
}

void USteamGameServer::EndAuthSession(FSteamID SteamID) {
}

void USteamGameServer::EnableHeartbeats(bool bActive) {
}

FSteamID USteamGameServer::CreateUnauthenticatedUserConnection() {
    return FSteamID{};
}

void USteamGameServer::ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& Callback, FSteamID SteamIDNewPlayer) {
}

void USteamGameServer::ClearAllKeyValues() {
}

void USteamGameServer::CancelAuthTicket(FSteamTicketHandle TicketHandle) {
}

bool USteamGameServer::BUpdateUserData(FSteamID SteamIDUser, const FString& playerName, int32 Score) {
    return false;
}

bool USteamGameServer::BSecure() {
    return false;
}

bool USteamGameServer::BLoggedOn() {
    return false;
}

ESteamBeginAuthSessionResult USteamGameServer::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID) {
    return ESteamBeginAuthSessionResult::OK;
}

void USteamGameServer::AssociateWithClan(const FOnAssociateWithClan& Callback, FSteamID SteamIDClan) {
}


