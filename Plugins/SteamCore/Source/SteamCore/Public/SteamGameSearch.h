#pragma once
#include "CoreMinimal.h"
#include "ESteamGameSearchErrorCode.h"
#include "ESteamPlayerResult.h"
#include "EndGameResultDelegateDelegate.h"
#include "RequestPlayersForGameFinalResultDelegateDelegate.h"
#include "RequestPlayersForGameProgressDelegateDelegate.h"
#include "RequestPlayersForGameResultDelegateDelegate.h"
#include "SearchForGameProgressDelegateDelegate.h"
#include "SearchForGameResultDelegateDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SubmitPlayerResultResultDelegateDelegate.h"
#include "SteamGameSearch.generated.h"

UCLASS(Blueprintable)
class STEAMCORE_API USteamGameSearch : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSearchForGameProgressDelegate SearchForGameProgressDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSearchForGameResultDelegate SearchForGameResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayersForGameProgressDelegate RequestPlayersForGameProgressDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayersForGameResultDelegate RequestPlayersForGameResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestPlayersForGameFinalResultDelegate RequestPlayersForGameFinalResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubmitPlayerResultResultDelegate SubmitPlayerResultResultDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndGameResultDelegate EndGameResultDelegate;
    
    USteamGameSearch();

    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode SubmitPlayerResult(const FString& UniqueGameID, FSteamID SteamIDPlayer, ESteamPlayerResult PlayerResult);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode SetGameHostParams(const FString& Key, TArray<FString> Values);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode SetConnectionDetails(const FString& ConnectionDetails);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode SearchForGameWithLobby(FSteamID SteamIDLobby, int32 PlayerMin, int32 PlayerMax);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode SearchForGameSolo(int32 PlayerMin, int32 PlayerMax);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode RetrieveConnectionDetails(FSteamID SteamIDHost, FString& ConnectionDetails, int32 NumConnectionDetails);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode RequestPlayersForGame(int32 PlayerMin, int32 PlayerMax, int32 MaxTeamSize);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode HostConfirmGameStart(const FString& UniqueGameID);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode EndGameSearch();
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode EndGame(const FString& UniqueGameID);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode DeclineGame();
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode CancelRequestPlayersForGame();
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode AddGameSearchParams(const FString& KeyToFind, TArray<FString> ValuesToFind);
    
    UFUNCTION(BlueprintCallable)
    ESteamGameSearchErrorCode AcceptGame();
    
};

