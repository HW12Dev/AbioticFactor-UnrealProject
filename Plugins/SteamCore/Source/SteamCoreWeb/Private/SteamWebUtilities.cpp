#include "SteamWebUtilities.h"

USteamWebUtilities::USteamWebUtilities() {
}

bool USteamWebUtilities::ParseJson(const FString& JsonString, TArray<FSteamCoreJson>& Data) {
    return false;
}

FString USteamWebUtilities::GetProjectKey() {
    return TEXT("");
}

int32 USteamWebUtilities::GetProjectAppID() {
    return 0;
}

FString USteamWebUtilities::GetDevSteamID() {
    return TEXT("");
}

void USteamWebUtilities::FindJsonStrings(const FString& JsonString, const FString& Key, TArray<FString>& Values, ESteamJsonResult& Result) {
}

void USteamWebUtilities::FindJsonString(const FString& JsonString, const FString& Key, FString& Value, ESteamJsonResult& Result) {
}

void USteamWebUtilities::FindJsonNumbers(const FString& JsonString, const FString& Key, TArray<int32>& Values, ESteamJsonResult& Result) {
}

void USteamWebUtilities::FindJsonNumber(const FString& JsonString, const FString& Key, int32& Value, ESteamJsonResult& Result) {
}

void USteamWebUtilities::FindJsonBools(const FString& JsonString, const FString& Key, TArray<bool>& bValues, ESteamJsonResult& Result) {
}

void USteamWebUtilities::FindJsonBool(const FString& JsonString, const FString& Key, bool& bValue, ESteamJsonResult& Result) {
}


