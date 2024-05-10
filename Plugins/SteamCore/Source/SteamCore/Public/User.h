#pragma once
#include "CoreMinimal.h"
#include "ESteamBeginAuthSessionResult.h"
#include "ESteamUserHasLicenseForAppResult.h"
#include "ESteamVoiceResult.h"
#include "OnClientGameServerDenyDelegate.h"
#include "OnGameWebCallbackDelegate.h"
#include "OnGetAuthSessionTicketResponseDelegate.h"
#include "OnIPCFailureDelegate.h"
#include "OnLicensesUpdatedDelegate.h"
#include "OnMicroTxnAuthorizationResponseDelegate.h"
#include "OnRequestEncryptedAppTicketDelegate.h"
#include "OnRequestEncryptedAppTicketResponseDelegate.h"
#include "OnSteamServerConnectFailureDelegate.h"
#include "OnSteamServersConnectedDelegate.h"
#include "OnSteamServersDisconnectedDelegate.h"
#include "OnStoreAuthURLResponseDelegate.h"
#include "OnValidateAuthTicketResponseDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamTicketHandle.h"
#include "User.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API UUser : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientGameServerDeny ClientGameServerDeny;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameWebCallback GameWebCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetAuthSessionTicketResponse GetAuthSessionTicketResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIPCFailure IPCFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLicensesUpdated LicensesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMicroTxnAuthorizationResponse MicroTxnAuthorizationResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamServerConnectFailure SteamServerConnectFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamServersConnected SteamServersConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamServersDisconnected SteamServersDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValidateAuthTicketResponse ValidateAuthTicketResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestEncryptedAppTicketResponse EncryptedAppTicketResponse;
    
    UUser();

    UFUNCTION(BlueprintCallable)
    static ESteamUserHasLicenseForAppResult UserHasLicenseForApp(FSteamID SteamID, int32 AppID);
    
    UFUNCTION(BlueprintCallable)
    static void StopVoiceRecording();
    
    UFUNCTION(BlueprintCallable)
    static void StartVoiceRecording();
    
    UFUNCTION(BlueprintCallable)
    void RequestStoreAuthURL(const FOnStoreAuthURLResponse& Callback, const FString& RedirectURL);
    
    UFUNCTION(BlueprintCallable)
    void RequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket& Callback, TArray<uint8> DataToInclude);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetVoiceOptimalSampleRate();
    
    UFUNCTION(BlueprintCallable)
    static ESteamVoiceResult GetVoice(TArray<uint8>& DestBuffer, int32& BytesWritten);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSteamID GetSteamID_Pure();
    
    UFUNCTION(BlueprintCallable)
    static FSteamID GetSteamID();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPlayerSteamLevel();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGameBadgeLevel(int32 Series, bool bFoil);
    
    UFUNCTION(BlueprintCallable)
    static bool GetEncryptedAppTicket(TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    static ESteamVoiceResult GetAvailableVoice(int32& CompressedBytes, int32& UncompressedBytes, int32 UncompressedVoiceDesiredSampleRate);
    
    UFUNCTION(BlueprintCallable)
    static FSteamTicketHandle GetAuthSessionTicket(TArray<uint8>& Ticket);
    
    UFUNCTION(BlueprintCallable)
    static void EndAuthSession(FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static ESteamVoiceResult DecompressVoice(const TArray<uint8>& CompressedBuffer, int32 DesiredSampleRate, TArray<uint8>& DestBuffer);
    
    UFUNCTION(BlueprintCallable)
    static void CancelAuthTicket(FSteamTicketHandle TicketHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool BLoggedOn();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsTwoFactorEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsPhoneVerified();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsPhoneRequiringVerification();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsPhoneIdentifying();
    
    UFUNCTION(BlueprintCallable)
    static bool BIsBehindNAT();
    
    UFUNCTION(BlueprintCallable)
    static ESteamBeginAuthSessionResult BeginAuthSession(TArray<uint8> Ticket, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    static void AdvertiseGame(FSteamID SteamIDGameServer, const FString& ServerIP, int32 ServerPort);
    
};

