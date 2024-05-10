#pragma once
#include "CoreMinimal.h"
#include "ESteamBeginAuthSessionResult.h"
#include "ESteamUserHasLicenseForAppResult.h"
#include "OnAssociateWithClanDelegate.h"
#include "OnComputeNewPlayerCompatibilityDelegate.h"
#include "OnGSClientApproveDelegate.h"
#include "OnGSClientDenyDelegate.h"
#include "OnGSClientGroupStatusDelegate.h"
#include "OnGSPolicyResponseDelegate.h"
#include "OnGSValidateAuthTicketResponseDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamTicketHandle.h"
#include "SteamGameServer.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API USteamGameServer : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSPolicyResponse GSPolicyResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSClientGroupStatus GSClientGroupStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSValidateAuthTicketResponse GSValidateAuthTicketResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSClientApprove GSClientApprove;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSClientDeny GSClientDeny;
    
    USteamGameServer();

    UFUNCTION(BlueprintCallable)
    bool WasRestartRequested();
    
    UFUNCTION(BlueprintCallable)
    ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatorServerName(const FString& SpectatorServerName);
    
    UFUNCTION(BlueprintCallable)
    void SetSpectatorPort(int32 SpectatorPort);
    
    UFUNCTION(BlueprintCallable)
    void SetServerName(const FString& ServerName);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion(const FString& Region);
    
    UFUNCTION(BlueprintCallable)
    void SetProduct(const FString& Product);
    
    UFUNCTION(BlueprintCallable)
    void SetPasswordProtected(bool bPasswordProtected);
    
    UFUNCTION(BlueprintCallable)
    void SetModDir(const FString& ModDir);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxPlayerCount(int32 PlayersMax);
    
    UFUNCTION(BlueprintCallable)
    void SetMapName(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyValue(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeartbeatInterval(int32 HeartbeatInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetGameTags(const FString& GameTags);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDescription(const FString& GameDescription);
    
    UFUNCTION(BlueprintCallable)
    void SetGameData(const FString& GameData);
    
    UFUNCTION(BlueprintCallable)
    void SetDedicatedServer(bool bDedicated);
    
    UFUNCTION(BlueprintCallable)
    void SetBotPlayerCount(int32 BotPlayers);
    
    UFUNCTION(BlueprintCallable)
    void SetAdvertiseServerActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUserGroupStatus(FSteamID SteamIDUser, FSteamID SteamIDGroup);
    
    UFUNCTION(BlueprintCallable)
    void LogOnAnonymous();
    
    UFUNCTION(BlueprintCallable)
    void LogOn(const FString& token);
    
    UFUNCTION(BlueprintCallable)
    void LogOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSteamID GetServerSteamID_PureCompact();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSteamID GetServerSteamID_Pure();
    
    UFUNCTION(BlueprintCallable)
    FSteamID GetServerSteamID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerPublicIP_PureCompact();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerPublicIP_Pure();
    
    UFUNCTION(BlueprintCallable)
    FString GetServerPublicIP();
    
    UFUNCTION(BlueprintCallable)
    FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    void ForceHeartbeat();
    
    UFUNCTION(BlueprintCallable)
    void EndAuthSession(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void EnableHeartbeats(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    FSteamID CreateUnauthenticatedUserConnection();
    
    UFUNCTION(BlueprintCallable)
    void ComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility& Callback, FSteamID SteamIDNewPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllKeyValues();
    
    UFUNCTION(BlueprintCallable)
    void CancelAuthTicket(FSteamTicketHandle TicketHandle);
    
    UFUNCTION(BlueprintCallable)
    bool BUpdateUserData(FSteamID SteamIDUser, const FString& playerName, int32 Score);
    
    UFUNCTION(BlueprintCallable)
    bool BSecure();
    
    UFUNCTION(BlueprintCallable)
    bool BLoggedOn();
    
    UFUNCTION(BlueprintCallable)
    ESteamBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void AssociateWithClan(const FOnAssociateWithClan& Callback, FSteamID SteamIDClan);
    
};

