#include "AchievementsSubsystem.h"

UAchievementsSubsystem::UAchievementsSubsystem() {
    this->bHasLoadedStats = false;
    this->bPendingStats = true;
    this->PlayerStatsSave = NULL;
}

bool UAchievementsSubsystem::UploadAchievementData() {
    return false;
}

void UAchievementsSubsystem::TriggerAchievement(FAchievementRowHandle Achievement, bool bSkipStore) {
}

void UAchievementsSubsystem::RetryStatRequest() {
}

void UAchievementsSubsystem::OnUserStatsStored(const FUserStatsStored& Data) {
}

void UAchievementsSubsystem::OnUserStatsReceived(const FUserStatsReceived& Data) {
}

void UAchievementsSubsystem::OnUserAchievementStored(const FUserAchievementStored& Data) {
}

bool UAchievementsSubsystem::InitializeAchievements() {
    return false;
}

void UAchievementsSubsystem::IncrementAchievementStat_Int(FAchievementStatRowHandle Stat, int32 Value) {
}

void UAchievementsSubsystem::IncrementAchievementStat_Float(FAchievementStatRowHandle Stat, float Value) {
}

bool UAchievementsSubsystem::HasUnlockedAchievement(FAchievementRowHandle Achievement) {
    return false;
}

int32 UAchievementsSubsystem::GetAchievementStat_Int(FAchievementStatRowHandle Stat) {
    return 0;
}

float UAchievementsSubsystem::GetAchievementStat_Float(FAchievementStatRowHandle Stat) {
    return 0.0f;
}

bool UAchievementsSubsystem::ClearStatsAndAchievements() {
    return false;
}


