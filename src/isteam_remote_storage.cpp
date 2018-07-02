#include "steakworms.hpp"

bool ISteamRemoteStorage::FileWrite(const char *pchFile, const void *pvData,
                                    int32_t cubData) {
  debug("ISteamRemoteStorage::FileWrite()");
  return true;
}

int32_t ISteamRemoteStorage::FileRead(const char *pchFile, void *pvData,
                                      int32_t cubDataToRead) {
  debug("ISteamRemoteStorage::FileRead()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::FileWriteAsync(const char *pchFile,
                                                   const void *pvData,
                                                   uint32_t    cubData) {
  debug("ISteamRemoteStorage::FileWriteAsync()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::FileReadAsync(const char *pchFile,
                                                  uint32_t    nOffset,
                                                  uint32_t    cubToRead) {
  debug("ISteamRemoteStorage::FileReadAsync()");
  return true;
}

bool ISteamRemoteStorage::FileReadAsyncComplete(SteamAPICall_t hReadCall,
                                                void *         pvBuffer,
                                                uint32_t       cubToRead) {
  debug("ISteamRemoteStorage::FileReadAsyncComplete()");
  return true;
}

bool ISteamRemoteStorage::FileForget(const char *pchFile) {
  debug("ISteamRemoteStorage::FileForget()");
  return true;
}

bool ISteamRemoteStorage::FileDelete(const char *pchFile) {
  debug("ISteamRemoteStorage::FileDelete()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::FileShare(const char *pchFile) {
  debug("ISteamRemoteStorage::FileShare()");
  return true;
}

bool ISteamRemoteStorage::SetSyncPlatforms(
    const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) {
  debug("ISteamRemoteStorage::SetSyncPlatforms()");
  return true;
}

UGCFileWriteStreamHandle_t
ISteamRemoteStorage::FileWriteStreamOpen(const char *pchFile) {
  debug("ISteamRemoteStorage::FileWriteStreamOpen()");
  return true;
}

bool ISteamRemoteStorage::FileWriteStreamWriteChunk(
    UGCFileWriteStreamHandle_t writeHandle, const void *pvData,
    int32_t cubData) {
  debug("ISteamRemoteStorage::FileWriteStreamWriteChunk()");
  return true;
}

bool ISteamRemoteStorage::FileWriteStreamClose(
    UGCFileWriteStreamHandle_t writeHandle) {
  debug("ISteamRemoteStorage::FileWriteStreamClose()");
  return true;
}

bool ISteamRemoteStorage::FileWriteStreamCancel(
    UGCFileWriteStreamHandle_t writeHandle) {
  debug("ISteamRemoteStorage::FileWriteStreamCancel()");
  return true;
}

bool ISteamRemoteStorage::FileExists(const char *pchFile) {
  debug("ISteamRemoteStorage::FileExists()");
  return true;
}

bool ISteamRemoteStorage::FilePersisted(const char *pchFile) {
  debug("ISteamRemoteStorage::FilePersisted()");
  return true;
}

int32_t ISteamRemoteStorage::GetFileSize(const char *pchFile) {
  debug("ISteamRemoteStorage::GetFileSize()");
  return true;
}

int64 ISteamRemoteStorage::GetFileTimestamp(const char *pchFile) {
  debug("ISteamRemoteStorage::GetFileTimestamp()");
  return true;
}

ERemoteStoragePlatform
ISteamRemoteStorage::GetSyncPlatforms(const char *pchFile) {
  debug("ISteamRemoteStorage::GetSyncPlatforms()");
  return k_ERemoteStoragePlatformNone;
}

int32_t ISteamRemoteStorage::GetFileCount() {
  debug("ISteamRemoteStorage::GetFileCount()");
  return true;
}

const char *
ISteamRemoteStorage::GetFileNameAndSize(int iFile, int32_t *pnFileSizeInBytes) {
  debug("ISteamRemoteStorage::GetFileNameAndSize()");
  return "";
}

bool ISteamRemoteStorage::GetQuota(uint64 *pnTotalBytes,
                                   uint64 *puAvailableBytes) {
  debug("ISteamRemoteStorage::GetQuota()");
  return true;
}

bool ISteamRemoteStorage::IsCloudEnabledForAccount() {
  debug("ISteamRemoteStorage::IsCloudEnabledForAccount()");
  return true;
}

bool ISteamRemoteStorage::IsCloudEnabledForApp() {
  debug("ISteamRemoteStorage::IsCloudEnabledForApp()");
  return true;
}

void ISteamRemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
  debug("ISteamRemoteStorage::SetCloudEnabledForApp()");
}

SteamAPICall_t ISteamRemoteStorage::UGCDownload(UGCHandle_t hContent,
                                                uint32_t    unPriority) {
  debug("ISteamRemoteStorage::UGCDownload()");
  return true;
}

bool ISteamRemoteStorage::GetUGCDownloadProgress(UGCHandle_t hContent,
                                                 int32_t *   pnBytesDownloaded,
                                                 int32_t *   pnBytesExpected) {
  debug("ISteamRemoteStorage::GetUGCDownloadProgress()");
  return true;
}

bool ISteamRemoteStorage::GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID,
                                        char **   ppchName,
                                        int32_t * pnFileSizeInBytes,
                                        CSteamID *pSteamIDOwner) {
  debug("ISteamRemoteStorage::GetUGCDetails()");
  return true;
}

int32_t ISteamRemoteStorage::UGCRead(UGCHandle_t hContent, void *pvData,
                                     int32_t cubDataToRead, uint32_t cOffset,
                                     EUGCReadAction eAction) {
  debug("ISteamRemoteStorage::UGCRead()");
  return true;
}

int32_t ISteamRemoteStorage::GetCachedUGCCount() {
  debug("ISteamRemoteStorage::GetCachedUGCCount()");
  return true;
}

UGCHandle_t ISteamRemoteStorage::GetCachedUGCHandle(int32_t iCachedContent) {
  debug("ISteamRemoteStorage::GetCachedUGCHandle()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::PublishWorkshopFile(
    const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId,
    const char *pchTitle, const char *pchDescription,
    ERemoteStoragePublishedFileVisibility eVisibility,
    struct SteamParamStringArray_t *      pTags,
    EWorkshopFileType                     eWorkshopFileType) {
  debug("ISteamRemoteStorage::PublishWorkshopFile()");
  return true;
}

PublishedFileUpdateHandle_t
ISteamRemoteStorage::CreatePublishedFileUpdateRequest(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::CreatePublishedFileUpdateRequest()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileFile(
    PublishedFileUpdateHandle_t updateHandle, const char *pchFile) {
  debug("ISteamRemoteStorage::UpdatePublishedFileFile()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFilePreviewFile(
    PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile) {
  debug("ISteamRemoteStorage::UpdatePublishedFilePreviewFile()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileTitle(
    PublishedFileUpdateHandle_t updateHandle, const char *pchTitle) {
  debug("ISteamRemoteStorage::UpdatePublishedFileTitle()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileDescription(
    PublishedFileUpdateHandle_t updateHandle, const char *pchDescription) {
  debug("ISteamRemoteStorage::UpdatePublishedFileDescription()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileVisibility(
    PublishedFileUpdateHandle_t           updateHandle,
    ERemoteStoragePublishedFileVisibility eVisibility) {
  debug("ISteamRemoteStorage::UpdatePublishedFileVisibility()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileTags(
    PublishedFileUpdateHandle_t     updateHandle,
    struct SteamParamStringArray_t *pTags) {
  debug("ISteamRemoteStorage::UpdatePublishedFileTags()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::CommitPublishedFileUpdate(
    PublishedFileUpdateHandle_t updateHandle) {
  debug("ISteamRemoteStorage::CommitPublishedFileUpdate()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::GetPublishedFileDetails(
    PublishedFileId_t unPublishedFileId, uint32_t unMaxSecondsOld) {
  debug("ISteamRemoteStorage::GetPublishedFileDetails()");
  return true;
}

SteamAPICall_t
ISteamRemoteStorage::DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::DeletePublishedFile()");
  return true;
}

SteamAPICall_t
ISteamRemoteStorage::EnumerateUserPublishedFiles(uint32_t unStartIndex) {
  debug("ISteamRemoteStorage::EnumerateUserPublishedFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::SubscribePublishedFile(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::SubscribePublishedFile()");
  return true;
}

SteamAPICall_t
ISteamRemoteStorage::EnumerateUserSubscribedFiles(uint32_t unStartIndex) {
  debug("ISteamRemoteStorage::EnumerateUserSubscribedFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::UnsubscribePublishedFile(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::UnsubscribePublishedFile()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileSetChangeDescription(
    PublishedFileUpdateHandle_t updateHandle,
    const char *                pchChangeDescription) {
  debug("ISteamRemoteStorage::UpdatePublishedFileSetChangeDescription()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::GetPublishedItemVoteDetails(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::GetPublishedItemVoteDetails()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::UpdateUserPublishedItemVote(
    PublishedFileId_t unPublishedFileId, bool bVoteUp) {
  debug("ISteamRemoteStorage::UpdateUserPublishedItemVote()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::GetUserPublishedItemVoteDetails(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::GetUserPublishedItemVoteDetails()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::EnumerateUserSharedWorkshopFiles(
    CSteamID steamId, uint32_t unStartIndex,
    struct SteamParamStringArray_t *pRequiredTags,
    struct SteamParamStringArray_t *pExcludedTags) {
  debug("ISteamRemoteStorage::EnumerateUserSharedWorkshopFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::PublishVideo(
    EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount,
    const char *pchVideoIdentifier, const char *pchPreviewFile,
    AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription,
    ERemoteStoragePublishedFileVisibility eVisibility,
    struct SteamParamStringArray_t *      pTags) {
  debug("ISteamRemoteStorage::PublishVideo()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::SetUserPublishedFileAction(
    PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) {
  debug("ISteamRemoteStorage::SetUserPublishedFileAction()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::EnumeratePublishedFilesByUserAction(
    EWorkshopFileAction eAction, uint32_t unStartIndex) {
  debug("ISteamRemoteStorage::EnumeratePublishedFilesByUserAction()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::EnumeratePublishedWorkshopFiles(
    EWorkshopEnumerationType eEnumerationType, uint32_t unStartIndex,
    uint32_t unCount, uint32_t unDays, struct SteamParamStringArray_t *pTags,
    struct SteamParamStringArray_t *pUserTags) {
  debug("ISteamRemoteStorage::EnumeratePublishedWorkshopFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::UGCDownloadToLocation(
    UGCHandle_t hContent, const char *pchLocation, uint32_t unPriority) {
  debug("ISteamRemoteStorage::UGCDownloadToLocation()");
  return true;
}
