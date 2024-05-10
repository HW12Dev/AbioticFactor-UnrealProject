#include "RemoteStorageFileReadAsyncComplete.h"

FRemoteStorageFileReadAsyncComplete::FRemoteStorageFileReadAsyncComplete() {
    this->Result = ESteamResult::None;
    this->Offset = 0;
    this->Read = 0;
}

