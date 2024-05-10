#include "Friends.h"

UFriends::UFriends() {
}

bool UFriends::SetRichPresence(const FString& Key, const FString& Value) {
    return false;
}

void UFriends::SetPlayedWith(FSteamID SteamIDUserPlayedWith) {
}

void UFriends::SetPersonaName(const FOnSetPersonaName& Callback, const FString& Name) {
}

bool UFriends::SetListenForFriendsMessages(bool bInterceptEnabled) {
    return false;
}

void UFriends::SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking) {
}

bool UFriends::SendClanChatMessage(FSteamID SteamIDClanChat, const FString& Text) {
    return false;
}

bool UFriends::RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly) {
    return false;
}

void UFriends::RequestFriendRichPresence(FSteamID SteamIDFriend) {
}

void UFriends::RequestClanOfficerList(const FOnRequestClanOfficerList& Callback, FSteamID SteamIDClan) {
}

bool UFriends::ReplyToFriendMessage(FSteamID SteamIDFriend, const FString& MsgToSend) {
    return false;
}

bool UFriends::RegisterProtocolInOverlayBrowser(const FString& Protocol) {
    return false;
}

bool UFriends::OpenClanChatWindowInSteam(FSteamID SteamIDClanChat) {
    return false;
}

bool UFriends::LeaveClanChatRoom(FSteamID SteamIDClan) {
    return false;
}

void UFriends::JoinClanChatRoom(const FOnJoinClanChatRoom& Callback, FSteamID SteamIDClan) {
}

bool UFriends::IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource) {
    return false;
}

void UFriends::IsFollowing(const FOnIsFollowing& Callback, FSteamID SteamID) {
}

bool UFriends::IsClanPublic(FSteamID SteamIDClan) {
    return false;
}

bool UFriends::IsClanOfficialGameGroup(FSteamID SteamIDClan) {
    return false;
}

bool UFriends::IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat) {
    return false;
}

bool UFriends::IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser) {
    return false;
}

bool UFriends::InviteUserToGame(FSteamID SteamIDFriend, const FString& ConnectString) {
    return false;
}

bool UFriends::HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags) {
    return false;
}

TArray<ESteamUserRestriction> UFriends::GetUserRestrictions() {
    return TArray<ESteamUserRestriction>();
}

UTexture2D* UFriends::GetSmallFriendAvatar(FSteamID SteamIDFriend) {
    return NULL;
}

FString UFriends::GetPlayerNickname_Pure(FSteamID SteamIDPlayer) {
    return TEXT("");
}

FString UFriends::GetPlayerNickname(FSteamID SteamIDPlayer) {
    return TEXT("");
}

ESteamPersonaState UFriends::GetPersonaState_Pure() {
    return ESteamPersonaState::Offline;
}

ESteamPersonaState UFriends::GetPersonaState() {
    return ESteamPersonaState::Offline;
}

FString UFriends::GetPersonaName_Pure() {
    return TEXT("");
}

FString UFriends::GetPersonaName() {
    return TEXT("");
}

UTexture2D* UFriends::GetMediumFriendAvatar(FSteamID SteamIDFriend) {
    return NULL;
}

UTexture2D* UFriends::GetLargeFriendAvatar(FSteamID SteamIDFriend) {
    return NULL;
}

int32 UFriends::GetFriendSteamLevel(FSteamID SteamIDFriend) {
    return 0;
}

FString UFriends::GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID) {
    return TEXT("");
}

void UFriends::GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32 MembersCount) {
}

int32 UFriends::GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID) {
    return 0;
}

FSteamFriendsGroupID UFriends::GetFriendsGroupIDByIndex(int32 FriendGroup) {
    return FSteamFriendsGroupID{};
}

int32 UFriends::GetFriendsGroupCount() {
    return 0;
}

int32 UFriends::GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend) {
    return 0;
}

FString UFriends::GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32 Key) {
    return TEXT("");
}

FString UFriends::GetFriendRichPresence(FSteamID SteamIDFriend, const FString& Key) {
    return TEXT("");
}

ESteamFriendRelationship UFriends::GetFriendRelationship(FSteamID SteamIDFriend) {
    return ESteamFriendRelationship::None;
}

ESteamPersonaState UFriends::GetFriendPersonaState(FSteamID SteamIDFriend) {
    return ESteamPersonaState::Offline;
}

FString UFriends::GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32 PersonaName) {
    return TEXT("");
}

FString UFriends::GetFriendPersonaName(FSteamID SteamIDFriend) {
    return TEXT("");
}

int32 UFriends::GetFriendMessage(FSteamID SteamIDFriend, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType) {
    return 0;
}

bool UFriends::GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FSteamID& SteamIDLobby) {
    return false;
}

FSteamID UFriends::GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32 Ifriend) {
    return FSteamID{};
}

int32 UFriends::GetFriendCountFromSource(FSteamID SteamIDSource) {
    return 0;
}

int32 UFriends::GetFriendCount(TArray<ESteamFriendFlags> Flags) {
    return 0;
}

int32 UFriends::GetFriendCoplayTime(FSteamID SteamIDFriend) {
    return 0;
}

int32 UFriends::GetFriendCoplayGame(FSteamID SteamIDFriend) {
    return 0;
}

FSteamID UFriends::GetFriendByIndex(int32 Ifriend, TArray<ESteamFriendFlags> Flags) {
    return FSteamID{};
}

void UFriends::GetFollowerCount(const FOnGetFollowerCount& Callback, FSteamID SteamID) {
}

int32 UFriends::GetCoplayFriendCount() {
    return 0;
}

FSteamID UFriends::GetCoplayFriend(int32 CoplayFriend) {
    return FSteamID{};
}

FString UFriends::GetClanTag(FSteamID SteamIDClan) {
    return TEXT("");
}

FSteamID UFriends::GetClanOwner(FSteamID SteamIDClan) {
    return FSteamID{};
}

int32 UFriends::GetClanOfficerCount(FSteamID SteamIDClan) {
    return 0;
}

FSteamID UFriends::GetClanOfficerByIndex(FSteamID SteamIDClan, int32 Officer) {
    return FSteamID{};
}

FString UFriends::GetClanName(FSteamID SteamIDClan) {
    return TEXT("");
}

int32 UFriends::GetClanCount() {
    return 0;
}

int32 UFriends::GetClanChatMessage(FSteamID SteamIDClanChat, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter) {
    return 0;
}

int32 UFriends::GetClanChatMemberCount(FSteamID SteamIDClan) {
    return 0;
}

FSteamID UFriends::GetClanByIndex(int32 Clan) {
    return FSteamID{};
}

bool UFriends::GetClanActivityCounts(FSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting) {
    return false;
}

FSteamID UFriends::GetChatMemberByIndex(FSteamID SteamIDClan, int32 User) {
    return FSteamID{};
}

void UFriends::EnumerateFollowingList(const FOnEnumerateFollowingList& Callback, int32 StartIndex) {
}

void UFriends::DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& Callback, TArray<FSteamID> SteamIDClans) {
}

bool UFriends::CloseClanChatWindowInSteam(FSteamID SteamIDClanChat) {
    return false;
}

void UFriends::ClearRichPresence() {
}

void UFriends::ActivateGameOverlayToWebPage(const FString& URL, ESteamActivateGameOverlayToWebPageMode Mode) {
}

void UFriends::ActivateGameOverlayToUser(const FString& Dialog, FSteamID SteamID) {
}

void UFriends::ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag Flag) {
}

void UFriends::ActivateGameOverlayInviteDialogConnectString(const FString& ConnectString) {
}

void UFriends::ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby) {
}

void UFriends::ActivateGameOverlay(const FString& Dialog) {
}


