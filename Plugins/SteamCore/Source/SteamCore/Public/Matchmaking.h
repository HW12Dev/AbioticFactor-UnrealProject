#pragma once
#include "CoreMinimal.h"
#include "ESteamChatEntryType.h"
#include "ESteamFavoriteFlags.h"
#include "ESteamLobbyComparison.h"
#include "ESteamLobbyDistanceFilter.h"
#include "ESteamLobbyType.h"
#include "OnCreateLobbyDelegate.h"
#include "OnFavoritesListAccountsUpdatedDelegate.h"
#include "OnFavoritesListChangedDelegate.h"
#include "OnJoinLobbyDelegate.h"
#include "OnLobbyChatMsgDelegate.h"
#include "OnLobbyChatUpdateDelegate.h"
#include "OnLobbyDataUpdateDelegate.h"
#include "OnLobbyEnterDelegate.h"
#include "OnLobbyGameCreatedDelegate.h"
#include "OnLobbyInviteDelegate.h"
#include "OnLobbyKickedDelegate.h"
#include "OnRequestLobbyListDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "Matchmaking.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UMatchmaking : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFavoritesListAccountsUpdated FavoritesListAccountsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFavoritesListChanged FavoritesListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyChatMsg LobbyChatMsg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyChatUpdate LobbyChatUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyDataUpdate LobbyDataUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyEnter LobbyEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyGameCreated LobbyGameCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyInvite LobbyInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyKicked LobbyKicked;
    
    UMatchmaking();

    UFUNCTION(BlueprintCallable)
    static bool SetLobbyType(FSteamID SteamIDLobby, ESteamLobbyType LobbyType);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLobbyOwner(FSteamID SteamIDLobby, FSteamID SteamIDNewOwner);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLobbyMemberLimit(FSteamID SteamIDLobby, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyMemberData(FSteamID SteamIDLobby, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLobbyJoinable(FSteamID SteamIDLobby, bool bLobbyJoinable);
    
    UFUNCTION(BlueprintCallable)
    static void SetLobbyGameServer(FSteamID SteamIDLobby, const FString& GameServerIP, int32 GameServerPort, FSteamID SteamIDGameServer);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLobbyData(FSteamID SteamIDLobby, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetLinkedLobby(FSteamID SteamIDLobby, FSteamID SteamIDLobbyDependent);
    
    UFUNCTION(BlueprintCallable)
    static bool SendLobbyChatMsg(FSteamID SteamIDLobby, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void RequestLobbyList(const FOnRequestLobbyList& Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestLobbyData(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags);
    
    UFUNCTION(BlueprintCallable)
    static void LeaveLobby(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    void JoinLobby(const FOnJoinLobby& Callback, FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static bool InviteUserToLobby(FSteamID SteamIDLobby, FSteamID SteamIDInvitee);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumLobbyMembers(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetLobbyOwner(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLobbyMemberLimit(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLobbyMemberData(FSteamID SteamIDLobby, FSteamID SteamIDUser, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetLobbyMemberByIndex(FSteamID SteamIDLobby, int32 Member);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLobbyGameServer(FSteamID SteamIDLobby, FString& GameServerIP, int32& GameServerPort, FSteamID& SteamIDGameServer);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLobbyDataCount(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static bool GetLobbyDataByIndex(FSteamID SteamIDLobby, int32 LobbyData, FString& Key, FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLobbyData(FSteamID SteamIDLobby, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLobbyChatEntry(FSteamID SteamIDLobby, int32 MessageID, FSteamID& SteamIDUser, FString& Message, ESteamChatEntryType& ChatEntryType);
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetLobbyByIndex(int32 Lobby);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFavoriteGameCount();
    
    UFUNCTION(BlueprintCallable)
    static bool GetFavoriteGame(int32 Game, int32& AppID, FString& IP, int32& ConnectionPort, int32& QueryPort, TArray<ESteamFavoriteFlags>& Flags, int32& TimeLastPlayedOnServer);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteLobbyData(FSteamID SteamIDLobby, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void CreateLobby(const FOnCreateLobby& Callback, ESteamLobbyType LobbyType, int32 MaxMembers);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListStringFilter(const FString& KeyToMatch, const FString& ValueToMatch, ESteamLobbyComparison ComparisonType);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListResultCountFilter(int32 MaxResults);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListNumericalFilter(const FString& KeyToMatch, int32 ValueToMatch, ESteamLobbyComparison ComparisonType);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListNearValueFilter(const FString& KeyToMatch, int32 ValueToBeCloseTo);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListFilterSlotsAvailable(int32 SlotsAvailable);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter);
    
    UFUNCTION(BlueprintCallable)
    static void AddRequestLobbyListCompatibleMembersFilter(FSteamID SteamIDLobby);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddFavoriteGame(int32 AppID, const FString& IP, int32 ConnectionPort, int32 QueryPort, TArray<ESteamFavoriteFlags> Flags, int32 TimeLastPlayedOnServer);
    
};

