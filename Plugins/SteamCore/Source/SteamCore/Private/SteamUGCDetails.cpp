#include "SteamUGCDetails.h"

FSteamUGCDetails::FSteamUGCDetails() {
    this->Result = ESteamResult::None;
    this->FileType = ESteamWorkshopFileType::Community;
    this->CreatorAppID = 0;
    this->ConsumerAppID = 0;
    this->TimeCreated = 0;
    this->TimeUpdated = 0;
    this->TimeAddedToUserList = 0;
    this->Visibility = ESteamRemoteStoragePublishedFileVisibility::Public;
    this->bBanned = false;
    this->bAcceptedForUse = false;
    this->bTagsTruncated = false;
    this->fileSize = 0;
    this->PreviewFileSize = 0;
    this->VotesUp = 0;
    this->VotesDown = 0;
    this->Score = 0.00f;
    this->NumChildren = 0;
}

