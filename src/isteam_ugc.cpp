#include "steakworms.hpp"

UGCQueryHandle_t ISteamUGC::CreateQueryUserUGCRequest(
    AccountID_t unAccountID, EUserUGCList eListType,
    EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
  debug("ISteamUGC::CreateQueryUserUGCRequest()");
  return {};
}

UGCQueryHandle_t ISteamUGC::CreateQueryAllUGCRequest(
    EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
  debug("ISteamUGC::CreateQueryAllUGCRequest()");
  return {};
}

UGCQueryHandle_t
ISteamUGC::CreateQueryUGCDetailsRequest(PublishedFileId_t *pvecPublishedFileID,
                                        uint32 unNumPublishedFileIDs) {
  debug("ISteamUGC::CreateQueryUGCDetailsRequest()");
  return {};
}

SteamAPICall_t ISteamUGC::SendQueryUGCRequest(UGCQueryHandle_t handle) {
  debug("ISteamUGC::SendQueryUGCRequest()");
  return {};
}

bool ISteamUGC::GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index,
                                  struct SteamUGCDetails_t *pDetails) {
  debug("ISteamUGC::GetQueryUGCResult()");
  return true;
}

bool ISteamUGC::GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index,
                                      char *pchURL, uint32 cchURLSize) {
  debug("ISteamUGC::GetQueryUGCPreviewURL()");
  return true;
}

bool ISteamUGC::GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index,
                                    char *pchMetadata, uint32 cchMetadatasize) {
  debug("ISteamUGC::GetQueryUGCMetadata()");
  return true;
}

bool ISteamUGC::GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index,
                                    PublishedFileId_t *pvecPublishedFileID,
                                    uint32             cMaxEntries) {
  debug("ISteamUGC::GetQueryUGCChildren()");
  return true;
}

bool ISteamUGC::GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index,
                                     EItemStatistic eStatType,
                                     uint64 *       pStatValue) {
  debug("ISteamUGC::GetQueryUGCStatistic()");
  return true;
}

uint32 ISteamUGC::GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle,
                                                   uint32           index) {
  debug("ISteamUGC::GetQueryUGCNumAdditionalPreviews()");
  return 0;
}

bool ISteamUGC::GetQueryUGCAdditionalPreview(
    UGCQueryHandle_t handle, uint32 index, uint32 previewIndex,
    char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName,
    uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType) {
  debug("ISteamUGC::GetQueryUGCAdditionalPreview()");
  return true;
}

uint32 ISteamUGC::GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle,
                                             uint32           index) {
  debug("ISteamUGC::GetQueryUGCNumKeyValueTags()");
  return 0;
}

bool ISteamUGC::GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index,
                                       uint32 keyValueTagIndex, char *pchKey,
                                       uint32 cchKeySize, char *pchValue,
                                       uint32 cchValueSize) {
  debug("ISteamUGC::GetQueryUGCKeyValueTag()");
  return true;
}

bool ISteamUGC::ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
  debug("ISteamUGC::ReleaseQueryUGCRequest()");
  return true;
}

bool ISteamUGC::AddRequiredTag(UGCQueryHandle_t handle, const char *pTagName) {
  debug("ISteamUGC::AddRequiredTag()");
  return true;
}

bool ISteamUGC::AddExcludedTag(UGCQueryHandle_t handle, const char *pTagName) {
  debug("ISteamUGC::AddExcludedTag()");
  return true;
}

bool ISteamUGC::SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) {
  debug("ISteamUGC::SetReturnOnlyIDs()");
  return true;
}

bool ISteamUGC::SetReturnKeyValueTags(UGCQueryHandle_t handle,
                                      bool             bReturnKeyValueTags) {
  debug("ISteamUGC::SetReturnKeyValueTags()");
  return true;
}

bool ISteamUGC::SetReturnLongDescription(UGCQueryHandle_t handle,
                                         bool bReturnLongDescription) {
  debug("ISteamUGC::SetReturnLongDescription()");
  return true;
}

bool ISteamUGC::SetReturnMetadata(UGCQueryHandle_t handle,
                                  bool             bReturnMetadata) {
  debug("ISteamUGC::SetReturnMetadata()");
  return true;
}

bool ISteamUGC::SetReturnChildren(UGCQueryHandle_t handle,
                                  bool             bReturnChildren) {
  debug("ISteamUGC::SetReturnChildren()");
  return true;
}

bool ISteamUGC::SetReturnAdditionalPreviews(UGCQueryHandle_t handle,
                                            bool bReturnAdditionalPreviews) {
  debug("ISteamUGC::SetReturnAdditionalPreviews()");
  return true;
}

bool ISteamUGC::SetReturnTotalOnly(UGCQueryHandle_t handle,
                                   bool             bReturnTotalOnly) {
  debug("ISteamUGC::SetReturnTotalOnly()");
  return true;
}

bool ISteamUGC::SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays) {
  debug("ISteamUGC::SetReturnPlaytimeStats()");
  return true;
}

bool ISteamUGC::SetLanguage(UGCQueryHandle_t handle, const char *pchLanguage) {
  debug("ISteamUGC::SetLanguage()");
  return true;
}

bool ISteamUGC::SetAllowCachedResponse(UGCQueryHandle_t handle,
                                       uint32           unMaxAgeSeconds) {
  debug("ISteamUGC::SetAllowCachedResponse()");
  return true;
}

bool ISteamUGC::SetCloudFileNameFilter(UGCQueryHandle_t handle,
                                       const char *     pMatchCloudFileName) {
  debug("ISteamUGC::SetCloudFileNameFilter()");
  return true;
}

bool ISteamUGC::SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
  debug("ISteamUGC::SetMatchAnyTag()");
  return true;
}

bool ISteamUGC::SetSearchText(UGCQueryHandle_t handle,
                              const char *     pSearchText) {
  debug("ISteamUGC::SetSearchText()");
  return true;
}

bool ISteamUGC::SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
  debug("ISteamUGC::SetRankedByTrendDays()");
  return true;
}

bool ISteamUGC::AddRequiredKeyValueTag(UGCQueryHandle_t handle,
                                       const char *pKey, const char *pValue) {
  debug("ISteamUGC::AddRequiredKeyValueTag()");
  return true;
}

SteamAPICall_t ISteamUGC::RequestUGCDetails(PublishedFileId_t nPublishedFileID,
                                            uint32            unMaxAgeSeconds) {
  debug("ISteamUGC::RequestUGCDetails()");
  return {};
}

SteamAPICall_t ISteamUGC::CreateItem(AppId_t           nConsumerAppId,
                                     EWorkshopFileType eFileType) {
  debug("ISteamUGC::CreateItem()");
  return {};
}

UGCUpdateHandle_t
ISteamUGC::StartItemUpdate(AppId_t           nConsumerAppId,
                           PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::StartItemUpdate()");
  return {};
}

bool ISteamUGC::SetItemTitle(UGCUpdateHandle_t handle, const char *pchTitle) {
  debug("ISteamUGC::SetItemTitle()");
  return true;
}

bool ISteamUGC::SetItemDescription(UGCUpdateHandle_t handle,
                                   const char *      pchDescription) {
  debug("ISteamUGC::SetItemDescription()");
  return true;
}

bool ISteamUGC::SetItemUpdateLanguage(UGCUpdateHandle_t handle,
                                      const char *      pchLanguage) {
  debug("ISteamUGC::SetItemUpdateLanguage()");
  return true;
}

bool ISteamUGC::SetItemMetadata(UGCUpdateHandle_t handle,
                                const char *      pchMetaData) {
  debug("ISteamUGC::SetItemMetadata()");
  return true;
}

bool ISteamUGC::SetItemVisibility(
    UGCUpdateHandle_t                     handle,
    ERemoteStoragePublishedFileVisibility eVisibility) {
  debug("ISteamUGC::SetItemVisibility()");
  return true;
}

bool ISteamUGC::SetItemTags(UGCUpdateHandle_t                     updateHandle,
                            const struct SteamParamStringArray_t *pTags) {
  debug("ISteamUGC::SetItemTags()");
  return true;
}

bool ISteamUGC::SetItemContent(UGCUpdateHandle_t handle,
                               const char *      pszContentFolder) {
  debug("ISteamUGC::SetItemContent()");
  return true;
}

bool ISteamUGC::SetItemPreview(UGCUpdateHandle_t handle,
                               const char *      pszPreviewFile) {
  debug("ISteamUGC::SetItemPreview()");
  return true;
}

bool ISteamUGC::RemoveItemKeyValueTags(UGCUpdateHandle_t handle,
                                       const char *      pchKey) {
  debug("ISteamUGC::RemoveItemKeyValueTags()");
  return true;
}

bool ISteamUGC::AddItemKeyValueTag(UGCUpdateHandle_t handle, const char *pchKey,
                                   const char *pchValue) {
  debug("ISteamUGC::AddItemKeyValueTag()");
  return true;
}

bool ISteamUGC::AddItemPreviewFile(UGCUpdateHandle_t handle,
                                   const char *      pszPreviewFile,
                                   EItemPreviewType  type) {
  debug("ISteamUGC::AddItemPreviewFile()");
  return true;
}

bool ISteamUGC::AddItemPreviewVideo(UGCUpdateHandle_t handle,
                                    const char *      pszVideoID) {
  debug("ISteamUGC::AddItemPreviewVideo()");
  return true;
}

bool ISteamUGC::UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index,
                                      const char *pszPreviewFile) {
  debug("ISteamUGC::UpdateItemPreviewFile()");
  return true;
}

bool ISteamUGC::UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index,
                                       const char *pszVideoID) {
  debug("ISteamUGC::UpdateItemPreviewVideo()");
  return true;
}

bool ISteamUGC::RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) {
  debug("ISteamUGC::RemoveItemPreview()");
  return true;
}

SteamAPICall_t ISteamUGC::SubmitItemUpdate(UGCUpdateHandle_t handle,
                                           const char *      pchChangeNote) {
  debug("ISteamUGC::SubmitItemUpdate()");
  return {};
}

EItemUpdateStatus ISteamUGC::GetItemUpdateProgress(UGCUpdateHandle_t handle,
                                                   uint64 *punBytesProcessed,
                                                   uint64 *punBytesTotal) {
  debug("ISteamUGC::GetItemUpdateProgress()");
  return {};
}

SteamAPICall_t ISteamUGC::SetUserItemVote(PublishedFileId_t nPublishedFileID,
                                          bool              bVoteUp) {
  debug("ISteamUGC::SetUserItemVote()");
  return {};
}

SteamAPICall_t ISteamUGC::GetUserItemVote(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::GetUserItemVote()");
  return {};
}

SteamAPICall_t
ISteamUGC::AddItemToFavorites(AppId_t           nAppId,
                              PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::AddItemToFavorites()");
  return {};
}

SteamAPICall_t
ISteamUGC::RemoveItemFromFavorites(AppId_t           nAppId,
                                   PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::RemoveItemFromFavorites()");
  return {};
}

SteamAPICall_t ISteamUGC::SubscribeItem(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::SubscribeItem()");
  return {};
}

SteamAPICall_t ISteamUGC::UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::UnsubscribeItem()");
  return {};
}

uint32 ISteamUGC::GetNumSubscribedItems() {
  debug("ISteamUGC::GetNumSubscribedItems()");
  return 0;
}

uint32 ISteamUGC::GetSubscribedItems(PublishedFileId_t *pvecPublishedFileID,
                                     uint32             cMaxEntries) {
  debug("ISteamUGC::GetSubscribedItems()");
  return 0;
}

uint32 ISteamUGC::GetItemState(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::GetItemState()");
  return 0;
}

bool ISteamUGC::GetItemInstallInfo(PublishedFileId_t nPublishedFileID,
                                   uint64 *punSizeOnDisk, char *pchFolder,
                                   uint32 cchFolderSize, uint32 *punTimeStamp) {
  debug("ISteamUGC::GetItemInstallInfo()");
  return true;
}

bool ISteamUGC::GetItemDownloadInfo(PublishedFileId_t nPublishedFileID,
                                    uint64 *          punBytesDownloaded,
                                    uint64 *          punBytesTotal) {
  debug("ISteamUGC::GetItemDownloadInfo()");
  return true;
}

bool ISteamUGC::DownloadItem(PublishedFileId_t nPublishedFileID,
                             bool              bHighPriority) {
  debug("ISteamUGC::DownloadItem()");
  return true;
}

bool ISteamUGC::BInitWorkshopForGameServer(DepotId_t   unWorkshopDepotID,
                                           const char *pszFolder) {
  debug("ISteamUGC::BInitWorkshopForGameServer()");
  return true;
}

void ISteamUGC::SuspendDownloads(bool bSuspend) {
  debug("ISteamUGC::SuspendDownloads()");
}

SteamAPICall_t
ISteamUGC::StartPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
                                 uint32             unNumPublishedFileIDs) {
  debug("ISteamUGC::StartPlaytimeTracking()");
  return {};
}

SteamAPICall_t
ISteamUGC::StopPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
                                uint32             unNumPublishedFileIDs) {
  debug("ISteamUGC::StopPlaytimeTracking()");
  return {};
}

SteamAPICall_t ISteamUGC::StopPlaytimeTrackingForAllItems() {
  debug("ISteamUGC::StopPlaytimeTrackingForAllItems()");
  return {};
}

SteamAPICall_t
ISteamUGC::AddDependency(PublishedFileId_t nParentPublishedFileID,
                         PublishedFileId_t nChildPublishedFileID) {
  debug("ISteamUGC::AddDependency()");
  return {};
}

SteamAPICall_t
ISteamUGC::RemoveDependency(PublishedFileId_t nParentPublishedFileID,
                            PublishedFileId_t nChildPublishedFileID) {
  debug("ISteamUGC::RemoveDependency()");
  return {};
}

SteamAPICall_t ISteamUGC::AddAppDependency(PublishedFileId_t nPublishedFileID,
                                           AppId_t           nAppID) {
  debug("ISteamUGC::AddAppDependency()");
  return {};
}

SteamAPICall_t
ISteamUGC::RemoveAppDependency(PublishedFileId_t nPublishedFileID,
                               AppId_t           nAppID) {
  debug("ISteamUGC::RemoveAppDependency()");
  return {};
}

SteamAPICall_t
ISteamUGC::GetAppDependencies(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::GetAppDependencies()");
  return {};
}

SteamAPICall_t ISteamUGC::DeleteItem(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::DeleteItem()");
  return {};
}
