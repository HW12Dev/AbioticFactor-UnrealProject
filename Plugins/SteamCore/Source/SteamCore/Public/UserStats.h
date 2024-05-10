#pragma once
#include "CoreMinimal.h"
#include "ESteamLeaderboardDataRequest.h"
#include "ESteamLeaderboardDisplayType.h"
#include "ESteamLeaderboardSortMethod.h"
#include "ESteamLeaderboardUploadScoreMethod.h"
#include "OnAttachLeaderboardUGCDelegate.h"
#include "OnDownloadLeaderboardEntriesDelegate.h"
#include "OnDownloadLeaderboardEntriesForUsersDelegate.h"
#include "OnFindLeaderboardDelegate.h"
#include "OnFindOrCreateLeaderboardDelegate.h"
#include "OnGetNumberOfCurrentPlayersDelegate.h"
#include "OnRequestGlobalAchievementPercentagesDelegate.h"
#include "OnRequestGlobalStatsDelegate.h"
#include "OnRequestUserStatsDelegate.h"
#include "OnUploadLeaderboardScoreDelegate.h"
#include "OnUserAchievementIconFetchedDelegate.h"
#include "OnUserAchievementStoredDelegate.h"
#include "OnUserStatsReceivedDelegate.h"
#include "OnUserStatsStoredDelegate.h"
#include "OnUserStatsUnloadedDelegate.h"
#include "SteamCoreSubsystem.h"
#include "SteamID.h"
#include "SteamLeaderboard.h"
#include "SteamLeaderboardEntries.h"
#include "SteamLeaderboardEntry.h"
#include "SteamUGCHandle.h"
#include "UserStats.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class STEAMCORE_API UUserStats : public USteamCoreSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserAchievementIconFetched UserAchievementIconFetched;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserAchievementStored UserAchievementStored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserStatsReceived UserStatsReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserStatsStored UserStatsStored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserStatsUnloaded UserStatsUnloaded;
    
    UUserStats();

    UFUNCTION(BlueprintCallable)
    void UploadLeaderboardScore(const FOnUploadLeaderboardScore& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdateAvgRateStat(const FString& Name, float CountThisSession, float SessionLength);
    
    UFUNCTION(BlueprintCallable)
    static bool StoreStats();
    
    UFUNCTION(BlueprintCallable)
    static bool SetStatInt(const FString& Name, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetStatFloat(const FString& Name, float Data);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAchievement(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool ResetAllStats(bool bAchievementsToo);
    
    UFUNCTION(BlueprintCallable)
    void RequestUserStats(const FOnRequestUserStats& Callback, FSteamID SteamID);
    
    UFUNCTION(BlueprintCallable)
    void RequestGlobalStats(const FOnRequestGlobalStats& Callback, int32 HistoryDays);
    
    UFUNCTION(BlueprintCallable)
    void RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& Callback);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestCurrentStats();
    
    UFUNCTION(BlueprintCallable)
    static bool IndicateAchievementProgress(const FString& Name, int32 CurrentProgress, int32 MaxProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserStatInteger(FSteamID SteamIDUser, const FString& Name, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserStatFloat(FSteamID SteamIDUser, const FString& Name, float& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, const FString& Name, bool& bAchieved, int32& UnlockTime);
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserAchievement(FSteamID SteamIDUser, const FString& Name, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    static bool GetStatInt(const FString& Name, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool GetStatFloat(const FString& Name, float& Data);
    
    UFUNCTION(BlueprintCallable)
    void GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& Callback);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumAchievements();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& Percent, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMostAchievedAchievementInfo(FString& Name, float& Percent, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    static ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    static FString GetLeaderboardName(FSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    static ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGlobalStatInt(const FString& StatName, int32& Data);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalStatHistoryInt(const FString& StatName, int32 HistoryDays, TArray<int32>& Data);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalStatHistoryFloat(const FString& StatName, int32 HistoryDays, TArray<float>& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGlobalStatFloat(const FString& StatName, float& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& LeaderboardEntry, TArray<int32> Details, TArray<int32>& outDetails);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementProgressLimitsFloat(const FString& Name, float& MinProgress, float& MaxProgress);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementProgressLimits(const FString& Name, int32& MinProgress, int32& MaxProgress);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAchievementName(int32 Achievement);
    
    UFUNCTION(BlueprintCallable)
    static UTexture2D* GetAchievementIcon(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAchievementDisplayAttribute(const FString& Name, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementAndUnlockTime(const FString& Name, bool& bAchieved, int32& UnlockTime);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievementAchievedPercent(const FString& Name, float& Percent);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAchievement(const FString& Name, bool& bAchieved);
    
    UFUNCTION(BlueprintCallable)
    void FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& Callback, const FString& LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType);
    
    UFUNCTION(BlueprintCallable)
    void FindLeaderboard(const FOnFindLeaderboard& Callback, const FString& LeaderboardName);
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users);
    
    UFUNCTION(BlueprintCallable)
    void DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearAchievement(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle);
    
};

