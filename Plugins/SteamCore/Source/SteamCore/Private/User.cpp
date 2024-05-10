#include "User.h"

UUser::UUser() {
}

ESteamUserHasLicenseForAppResult UUser::UserHasLicenseForApp(FSteamID SteamID, int32 AppID) {
    return ESteamUserHasLicenseForAppResult::HasLicense;
}

void UUser::StopVoiceRecording() {
}

void UUser::StartVoiceRecording() {
}

void UUser::RequestStoreAuthURL(const FOnStoreAuthURLResponse& Callback, const FString& RedirectURL) {
}

void UUser::RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& Callback, TArray<uint8> DataToInclude) {
}

int32 UUser::GetVoiceOptimalSampleRate() {
    return 0;
}

ESteamVoiceResult UUser::GetVoice(TArray<uint8>& DestBuffer, int32& BytesWritten) {
    return ESteamVoiceResult::OK;
}

FSteamID UUser::GetSteamID_Pure() {
    return FSteamID{};
}

FSteamID UUser::GetSteamID() {
    return FSteamID{};
}

int32 UUser::GetPlayerSteamLevel() {
    return 0;
}

int32 UUser::GetGameBadgeLevel(int32 Series, bool bFoil) {
    return 0;
}

bool UUser::GetEncryptedAppTicket(TArray<uint8>& Ticket) {
    return false;
}

ESteamVoiceResult UUser::GetAvailableVoice(int32& CompressedBytes, int32& UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate) {
    return ESteamVoiceResult::OK;
}

FSteamTicketHandle UUser::GetAuthSessionTicket(TArray<uint8>& Ticket) {
    return FSteamTicketHandle{};
}

void UUser::EndAuthSession(FSteamID SteamID) {
}

ESteamVoiceResult UUser::DecompressVoice(const TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>& DestBuffer) {
    return ESteamVoiceResult::OK;
}

void UUser::CancelAuthTicket(FSteamTicketHandle TicketHandle) {
}

bool UUser::BLoggedOn() {
    return false;
}

bool UUser::BIsTwoFactorEnabled() {
    return false;
}

bool UUser::BIsPhoneVerified() {
    return false;
}

bool UUser::BIsPhoneRequiringVerification() {
    return false;
}

bool UUser::BIsPhoneIdentifying() {
    return false;
}

bool UUser::BIsBehindNAT() {
    return false;
}

ESteamBeginAuthSessionResult UUser::BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID) {
    return ESteamBeginAuthSessionResult::OK;
}

void UUser::AdvertiseGame(FSteamID SteamIDGameServer, const FString& ServerIP, int32 ServerPort) {
}


