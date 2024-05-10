#pragma once
#include "CoreMinimal.h"
#include "ESteamActivateGameOverlayToWebPageMode.h"
#include "ESteamChatEntryType.h"
#include "ESteamFriendFlags.h"
#include "ESteamFriendRelationship.h"
#include "ESteamOverlayToStoreFlag.h"
#include "ESteamPersonaState.h"
#include "ESteamUserRestriction.h"
#include "OnAvatarImageLoadedDelegate.h"
#include "OnClanOfficerListResponseDelegate.h"
#include "OnDownloadClanActivityCountsDelegate.h"
#include "OnDownloadClanActivityCountsResultDelegate.h"
#include "OnEnumerateFollowingListDelegate.h"
#include "OnFriendRichPresenceUpdateDelegate.h"
#include "OnGameConnectedChatJoinDelegate.h"
#include "OnGameConnectedChatLeaveDelegate.h"
#include "OnGameConnectedClanChatMsgDelegate.h"
#include "OnGameConnectedFriendChatMsgDelegate.h"
#include "OnGameLobbyJoinRequestedDelegate.h"
#include "OnGameOverlayActivatedDelegate.h"
#include "OnGameRichPresenceJoinRequestedDelegate.h"
#include "OnGameServerChangeRequestedDelegate.h"
#include "OnGetFollowerCountDelegate.h"
#include "OnIsFollowingDelegate.h"
#include "OnJoinClanChatRoomCompletionResultDelegate.h"
#include "OnJoinClanChatRoomDelegate.h"
#include "OnPersonaStateChangeDelegate.h"
#include "OnRequestClanOfficerListDelegate.h"
#include "OnSetPersonaNameDelegate.h"
#include "OnSetPersonaNameResponseDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamFriendsGroupID.h"
#include "SteamGameID.h"
#include "SteamID.h"
#include "Friends.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class STEAMCORE_API UFriends : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAvatarImageLoaded AvatarImageLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendRichPresenceUpdate FriendRichPresenceUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameConnectedChatJoin GameConnectedChatJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameConnectedChatLeave GameConnectedChatLeave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameConnectedClanChatMsg GameConnectedClanChatMsg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameConnectedFriendChatMsg GameConnectedFriendChatMsg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameLobbyJoinRequested GameLobbyJoinRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameOverlayActivated GameOverlayActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameRichPresenceJoinRequested GameRichPresenceJoinRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameServerChangeRequested GameServerChangeRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPersonaStateChange PersonaStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPersonaNameResponse SetPersonaNameResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnJoinClanChatRoomCompletionResult JoinClanChatRoomCompletionResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClanOfficerListResponse ClanOfficerListResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadClanActivityCountsResult DownloadClanActivityCountsResult;
    
    UFriends();

    UFUNCTION(BlueprintCallable)
    static bool SetRichPresence(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayedWith(FSteamID SteamIDUserPlayedWith);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonaName(const FOnSetPersonaName& Callback, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool SetListenForFriendsMessages(bool bInterceptEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetInGameVoiceSpeaking(FSteamID SteamIDUser, bool bSpeaking);
    
    UFUNCTION(BlueprintCallable)
    static bool SendClanChatMessage(FSteamID SteamIDClanChat, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestUserInformation(FSteamID SteamIDUser, bool bRequireNameOnly);
    
    UFUNCTION(BlueprintCallable)
    static void RequestFriendRichPresence(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    void RequestClanOfficerList(const FOnRequestClanOfficerList& Callback, FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static bool ReplyToFriendMessage(FSteamID SteamIDFriend, const FString& MsgToSend);
    
    UFUNCTION(BlueprintCallable)
    static bool RegisterProtocolInOverlayBrowser(const FString& Protocol);
    
    UFUNCTION(BlueprintCallable)
    static bool OpenClanChatWindowInSteam(FSteamID SteamIDClanChat);
    
    UFUNCTION(BlueprintCallable)
    static bool LeaveClanChatRoom(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    void JoinClanChatRoom(const FOnJoinClanChatRoom& Callback, FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserInSource(FSteamID SteamIDUser, FSteamID SteamIDSource);
    
    UFUNCTION(BlueprintCallable)
    void IsFollowing(const FOnIsFollowing& Callback, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsClanPublic(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static bool IsClanOfficialGameGroup(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static bool IsClanChatWindowOpenInSteam(FSteamID SteamIDClanChat);
    
    UFUNCTION(BlueprintCallable)
    static bool IsClanChatAdmin(FSteamID SteamIDClanChat, FSteamID SteamIDUser);
    
    UFUNCTION(BlueprintCallable)
    static bool InviteUserToGame(FSteamID SteamIDFriend, const FString& ConnectString);
    
    UFUNCTION(BlueprintCallable)
    static bool HasFriend(FSteamID SteamIDFriend, TArray<ESteamFriendFlags> Flags);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ESteamUserRestriction> GetUserRestrictions();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetSmallFriendAvatar(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerNickname_Pure(FSteamID SteamIDPlayer);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlayerNickname(FSteamID SteamIDPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESteamPersonaState GetPersonaState_Pure();
    
    UFUNCTION(BlueprintCallable)
    static ESteamPersonaState GetPersonaState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPersonaName_Pure();
    
    UFUNCTION(BlueprintCallable)
    static FString GetPersonaName();
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetMediumFriendAvatar(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetLargeFriendAvatar(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendSteamLevel(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFriendsGroupName(FSteamFriendsGroupID FriendsGroupID);
    
    UFUNCTION(BlueprintCallable)
    static void GetFriendsGroupMembersList(FSteamFriendsGroupID FriendsGroupID, TArray<FSteamID>& SteamIDMembers, int32 MembersCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendsGroupMembersCount(FSteamFriendsGroupID FriendsGroupID);
    
    UFUNCTION(BlueprintCallable)
    static FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32 FriendGroup);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendsGroupCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendRichPresenceKeyCount(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFriendRichPresenceKeyByIndex(FSteamID SteamIDFriend, int32 Key);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFriendRichPresence(FSteamID SteamIDFriend, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static ESteamFriendRelationship GetFriendRelationship(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static ESteamPersonaState GetFriendPersonaState(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFriendPersonaNameHistory(FSteamID SteamIDFriend, int32 PersonaName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFriendPersonaName(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendMessage(FSteamID SteamIDFriend, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendGamePlayed(FSteamID SteamIDFriend, FSteamGameID& GameID, FString& GameIP, int32& ConnectionPort, int32& QueryPort, FSteamID& SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetFriendFromSourceByIndex(FSteamID SteamIDSource, int32 Ifriend);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendCountFromSource(FSteamID SteamIDSource);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendCount(TArray<ESteamFriendFlags> Flags);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendCoplayTime(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFriendCoplayGame(FSteamID SteamIDFriend);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetFriendByIndex(int32 Ifriend, TArray<ESteamFriendFlags> Flags);
    
    UFUNCTION(BlueprintCallable)
    void GetFollowerCount(const FOnGetFollowerCount& Callback, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCoplayFriendCount();
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetCoplayFriend(int32 CoplayFriend);
    
    UFUNCTION(BlueprintCallable)
    static FString GetClanTag(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetClanOwner(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetClanOfficerCount(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetClanOfficerByIndex(FSteamID SteamIDClan, int32 Officer);
    
    UFUNCTION(BlueprintCallable)
    static FString GetClanName(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetClanCount();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetClanChatMessage(FSteamID SteamIDClanChat, int32 MessageID, FString& Text, ESteamChatEntryType& ChatEntryType, FSteamID& SteamIDChatter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetClanChatMemberCount(FSteamID SteamIDClan);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetClanByIndex(int32 Clan);
    
    UFUNCTION(BlueprintCallable)
    static bool GetClanActivityCounts(FSteamID SteamIDClan, int32& Online, int32& InGame, int32& Chatting);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetChatMemberByIndex(FSteamID SteamIDClan, int32 User);
    
    UFUNCTION(BlueprintCallable)
    void EnumerateFollowingList(const FOnEnumerateFollowingList& Callback, int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    void DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& Callback, TArray<FSteamID> SteamIDClans);
    
    UFUNCTION(BlueprintCallable)
    static bool CloseClanChatWindowInSteam(FSteamID SteamIDClanChat);
    
    UFUNCTION(BlueprintCallable)
    static void ClearRichPresence();
    
    UFUNCTION(BlueprintCallable)
    static void ActivateGameOverlayToWebPage(const FString& URL, ESteamActivateGameOverlayToWebPageMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateGameOverlayToUser(const FString& Dialog, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateGameOverlayToStore(int32 AppID, ESteamOverlayToStoreFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateGameOverlayInviteDialogConnectString(const FString& ConnectString);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateGameOverlayInvitedialog(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateGameOverlay(const FString& Dialog);
    
};

