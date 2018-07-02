#include "steakworms.hpp"

extern "C" {
#include "csteamworks.ipp"

EXTERN_ABI auto _ISteamClient_GetISteamUnifiedMessages() {
  debug("ISteamClient_GetISteamUnifiedMessages()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_CreateCookieContainer() {
  debug("ISteamGameServerHTTP_CreateCookieContainer()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_CreateHTTPRequest() {
  debug("ISteamGameServerHTTP_CreateHTTPRequest()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_DeferHTTPRequest() {
  debug("ISteamGameServerHTTP_DeferHTTPRequest()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPDownloadProgressPct() {
  debug("ISteamGameServerHTTP_GetHTTPDownloadProgressPct()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPRequestWasTimedOut() {
  debug("ISteamGameServerHTTP_GetHTTPRequestWasTimedOut()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPResponseBodyData() {
  debug("ISteamGameServerHTTP_GetHTTPResponseBodyData()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPResponseBodySize() {
  debug("ISteamGameServerHTTP_GetHTTPResponseBodySize()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPResponseHeaderSize() {
  debug("ISteamGameServerHTTP_GetHTTPResponseHeaderSize()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPResponseHeaderValue() {
  debug("ISteamGameServerHTTP_GetHTTPResponseHeaderValue()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_GetHTTPStreamingResponseBodyData() {
  debug("ISteamGameServerHTTP_GetHTTPStreamingResponseBodyData()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_PrioritizeHTTPRequest() {
  debug("ISteamGameServerHTTP_PrioritizeHTTPRequest()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_ReleaseCookieContainer() {
  debug("ISteamGameServerHTTP_ReleaseCookieContainer()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_ReleaseHTTPRequest() {
  debug("ISteamGameServerHTTP_ReleaseHTTPRequest()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SendHTTPRequest() {
  debug("ISteamGameServerHTTP_SendHTTPRequest()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SendHTTPRequestAndStreamResponse() {
  debug("ISteamGameServerHTTP_SendHTTPRequestAndStreamResponse()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetCookie() {
  debug("ISteamGameServerHTTP_SetCookie()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestAbsoluteTimeoutMS() {
  debug("ISteamGameServerHTTP_SetHTTPRequestAbsoluteTimeoutMS()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestContextValue() {
  debug("ISteamGameServerHTTP_SetHTTPRequestContextValue()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestCookieContainer() {
  debug("ISteamGameServerHTTP_SetHTTPRequestCookieContainer()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestGetOrPostParameter() {
  debug("ISteamGameServerHTTP_SetHTTPRequestGetOrPostParameter()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestHeaderValue() {
  debug("ISteamGameServerHTTP_SetHTTPRequestHeaderValue()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestNetworkActivityTimeout() {
  debug("ISteamGameServerHTTP_SetHTTPRequestNetworkActivityTimeout()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestRawPostBody() {
  debug("ISteamGameServerHTTP_SetHTTPRequestRawPostBody()");
}

EXTERN_ABI auto
_ISteamGameServerHTTP_SetHTTPRequestRequiresVerifiedCertificate() {
  debug("ISteamGameServerHTTP_SetHTTPRequestRequiresVerifiedCertificate()");
}

EXTERN_ABI auto _ISteamGameServerHTTP_SetHTTPRequestUserAgentInfo() {
  debug("ISteamGameServerHTTP_SetHTTPRequestUserAgentInfo()");
}

EXTERN_ABI auto _ISteamGameServerInventory_AddPromoItem() {
  debug("ISteamGameServerInventory_AddPromoItem()");
}

EXTERN_ABI auto _ISteamGameServerInventory_AddPromoItems() {
  debug("ISteamGameServerInventory_AddPromoItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_CheckResultSteamID() {
  debug("ISteamGameServerInventory_CheckResultSteamID()");
}

EXTERN_ABI auto _ISteamGameServerInventory_ConsumeItem() {
  debug("ISteamGameServerInventory_ConsumeItem()");
}

EXTERN_ABI auto _ISteamGameServerInventory_DeserializeResult() {
  debug("ISteamGameServerInventory_DeserializeResult()");
}

EXTERN_ABI auto _ISteamGameServerInventory_DestroyResult() {
  debug("ISteamGameServerInventory_DestroyResult()");
}

EXTERN_ABI auto _ISteamGameServerInventory_ExchangeItems() {
  debug("ISteamGameServerInventory_ExchangeItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GenerateItems() {
  debug("ISteamGameServerInventory_GenerateItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetAllItems() {
  debug("ISteamGameServerInventory_GetAllItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetEligiblePromoItemDefinitionIDs() {
  debug("ISteamGameServerInventory_GetEligiblePromoItemDefinitionIDs()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetItemDefinitionIDs() {
  debug("ISteamGameServerInventory_GetItemDefinitionIDs()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetItemDefinitionProperty() {
  debug("ISteamGameServerInventory_GetItemDefinitionProperty()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetItemsByID() {
  debug("ISteamGameServerInventory_GetItemsByID()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetResultItemProperty() {
  debug("ISteamGameServerInventory_GetResultItemProperty()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetResultItems() {
  debug("ISteamGameServerInventory_GetResultItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetResultStatus() {
  debug("ISteamGameServerInventory_GetResultStatus()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GetResultTimestamp() {
  debug("ISteamGameServerInventory_GetResultTimestamp()");
}

EXTERN_ABI auto _ISteamGameServerInventory_GrantPromoItems() {
  debug("ISteamGameServerInventory_GrantPromoItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_LoadItemDefinitions() {
  debug("ISteamGameServerInventory_LoadItemDefinitions()");
}

EXTERN_ABI auto
_ISteamGameServerInventory_RequestEligiblePromoItemDefinitionsIDs() {
  debug("ISteamGameServerInventory_RequestEligiblePromoItemDefinitionsIDs()");
}

EXTERN_ABI auto _ISteamGameServerInventory_SendItemDropHeartbeat() {
  debug("ISteamGameServerInventory_SendItemDropHeartbeat()");
}

EXTERN_ABI auto _ISteamGameServerInventory_SerializeResult() {
  debug("ISteamGameServerInventory_SerializeResult()");
}

EXTERN_ABI auto _ISteamGameServerInventory_TradeItems() {
  debug("ISteamGameServerInventory_TradeItems()");
}

EXTERN_ABI auto _ISteamGameServerInventory_TransferItemQuantity() {
  debug("ISteamGameServerInventory_TransferItemQuantity()");
}

EXTERN_ABI auto _ISteamGameServerInventory_TriggerItemDrop() {
  debug("ISteamGameServerInventory_TriggerItemDrop()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_AcceptP2PSessionWithUser() {
  debug("ISteamGameServerNetworking_AcceptP2PSessionWithUser()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_AllowP2PPacketRelay() {
  debug("ISteamGameServerNetworking_AllowP2PPacketRelay()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_CloseP2PChannelWithUser() {
  debug("ISteamGameServerNetworking_CloseP2PChannelWithUser()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_CloseP2PSessionWithUser() {
  debug("ISteamGameServerNetworking_CloseP2PSessionWithUser()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_CreateConnectionSocket() {
  debug("ISteamGameServerNetworking_CreateConnectionSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_CreateListenSocket() {
  debug("ISteamGameServerNetworking_CreateListenSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_CreateP2PConnectionSocket() {
  debug("ISteamGameServerNetworking_CreateP2PConnectionSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_DestroyListenSocket() {
  debug("ISteamGameServerNetworking_DestroyListenSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_DestroySocket() {
  debug("ISteamGameServerNetworking_DestroySocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_GetListenSocketInfo() {
  debug("ISteamGameServerNetworking_GetListenSocketInfo()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_GetMaxPacketSize() {
  debug("ISteamGameServerNetworking_GetMaxPacketSize()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_GetP2PSessionState() {
  debug("ISteamGameServerNetworking_GetP2PSessionState()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_GetSocketConnectionType() {
  debug("ISteamGameServerNetworking_GetSocketConnectionType()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_GetSocketInfo() {
  debug("ISteamGameServerNetworking_GetSocketInfo()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_IsDataAvailable() {
  debug("ISteamGameServerNetworking_IsDataAvailable()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_IsDataAvailableOnSocket() {
  debug("ISteamGameServerNetworking_IsDataAvailableOnSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_IsP2PPacketAvailable() {
  debug("ISteamGameServerNetworking_IsP2PPacketAvailable()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_ReadP2PPacket() {
  debug("ISteamGameServerNetworking_ReadP2PPacket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_RetrieveData() {
  debug("ISteamGameServerNetworking_RetrieveData()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_RetrieveDataFromSocket() {
  debug("ISteamGameServerNetworking_RetrieveDataFromSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_SendDataOnSocket() {
  debug("ISteamGameServerNetworking_SendDataOnSocket()");
}

EXTERN_ABI auto _ISteamGameServerNetworking_SendP2PPacket() {
  debug("ISteamGameServerNetworking_SendP2PPacket()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddAppDependency() {
  debug("ISteamGameServerUGC_AddAppDependency()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddDependency() {
  debug("ISteamGameServerUGC_AddDependency()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddExcludedTag() {
  debug("ISteamGameServerUGC_AddExcludedTag()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddItemKeyValueTag() {
  debug("ISteamGameServerUGC_AddItemKeyValueTag()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddItemPreviewFile() {
  debug("ISteamGameServerUGC_AddItemPreviewFile()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddItemPreviewVideo() {
  debug("ISteamGameServerUGC_AddItemPreviewVideo()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddItemToFavorites() {
  debug("ISteamGameServerUGC_AddItemToFavorites()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddRequiredKeyValueTag() {
  debug("ISteamGameServerUGC_AddRequiredKeyValueTag()");
}

EXTERN_ABI auto _ISteamGameServerUGC_AddRequiredTag() {
  debug("ISteamGameServerUGC_AddRequiredTag()");
}

EXTERN_ABI auto _ISteamGameServerUGC_BInitWorkshopForGameServer() {
  debug("ISteamGameServerUGC_BInitWorkshopForGameServer()");
}

EXTERN_ABI auto _ISteamGameServerUGC_CreateItem() {
  debug("ISteamGameServerUGC_CreateItem()");
}

EXTERN_ABI auto _ISteamGameServerUGC_CreateQueryAllUGCRequest() {
  debug("ISteamGameServerUGC_CreateQueryAllUGCRequest()");
}

EXTERN_ABI auto _ISteamGameServerUGC_CreateQueryUGCDetailsRequest() {
  debug("ISteamGameServerUGC_CreateQueryUGCDetailsRequest()");
}

EXTERN_ABI auto _ISteamGameServerUGC_CreateQueryUserUGCRequest() {
  debug("ISteamGameServerUGC_CreateQueryUserUGCRequest()");
}

EXTERN_ABI auto _ISteamGameServerUGC_DeleteItem() {
  debug("ISteamGameServerUGC_DeleteItem()");
}

EXTERN_ABI auto _ISteamGameServerUGC_DownloadItem() {
  debug("ISteamGameServerUGC_DownloadItem()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetAppDependencies() {
  debug("ISteamGameServerUGC_GetAppDependencies()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetItemDownloadInfo() {
  debug("ISteamGameServerUGC_GetItemDownloadInfo()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetItemInstallInfo() {
  debug("ISteamGameServerUGC_GetItemInstallInfo()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetItemState() {
  debug("ISteamGameServerUGC_GetItemState()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetItemUpdateProgress() {
  debug("ISteamGameServerUGC_GetItemUpdateProgress()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetNumSubscribedItems() {
  debug("ISteamGameServerUGC_GetNumSubscribedItems()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCAdditionalPreview() {
  debug("ISteamGameServerUGC_GetQueryUGCAdditionalPreview()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCChildren() {
  debug("ISteamGameServerUGC_GetQueryUGCChildren()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCKeyValueTag() {
  debug("ISteamGameServerUGC_GetQueryUGCKeyValueTag()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCMetadata() {
  debug("ISteamGameServerUGC_GetQueryUGCMetadata()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCNumAdditionalPreviews() {
  debug("ISteamGameServerUGC_GetQueryUGCNumAdditionalPreviews()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCNumKeyValueTags() {
  debug("ISteamGameServerUGC_GetQueryUGCNumKeyValueTags()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCPreviewURL() {
  debug("ISteamGameServerUGC_GetQueryUGCPreviewURL()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCResult() {
  debug("ISteamGameServerUGC_GetQueryUGCResult()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetQueryUGCStatistic() {
  debug("ISteamGameServerUGC_GetQueryUGCStatistic()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetSubscribedItems() {
  debug("ISteamGameServerUGC_GetSubscribedItems()");
}

EXTERN_ABI auto _ISteamGameServerUGC_GetUserItemVote() {
  debug("ISteamGameServerUGC_GetUserItemVote()");
}

EXTERN_ABI auto _ISteamGameServerUGC_ReleaseQueryUGCRequest() {
  debug("ISteamGameServerUGC_ReleaseQueryUGCRequest()");
}

EXTERN_ABI auto _ISteamGameServerUGC_RemoveAppDependency() {
  debug("ISteamGameServerUGC_RemoveAppDependency()");
}

EXTERN_ABI auto _ISteamGameServerUGC_RemoveDependency() {
  debug("ISteamGameServerUGC_RemoveDependency()");
}

EXTERN_ABI auto _ISteamGameServerUGC_RemoveItemFromFavorites() {
  debug("ISteamGameServerUGC_RemoveItemFromFavorites()");
}

EXTERN_ABI auto _ISteamGameServerUGC_RemoveItemKeyValueTags() {
  debug("ISteamGameServerUGC_RemoveItemKeyValueTags()");
}

EXTERN_ABI auto _ISteamGameServerUGC_RemoveItemPreview() {
  debug("ISteamGameServerUGC_RemoveItemPreview()");
}

EXTERN_ABI auto _ISteamGameServerUGC_RequestUGCDetails() {
  debug("ISteamGameServerUGC_RequestUGCDetails()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SendQueryUGCRequest() {
  debug("ISteamGameServerUGC_SendQueryUGCRequest()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetAllowCachedResponse() {
  debug("ISteamGameServerUGC_SetAllowCachedResponse()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetCloudFileNameFilter() {
  debug("ISteamGameServerUGC_SetCloudFileNameFilter()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemContent() {
  debug("ISteamGameServerUGC_SetItemContent()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemDescription() {
  debug("ISteamGameServerUGC_SetItemDescription()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemMetadata() {
  debug("ISteamGameServerUGC_SetItemMetadata()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemPreview() {
  debug("ISteamGameServerUGC_SetItemPreview()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemTags() {
  debug("ISteamGameServerUGC_SetItemTags()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemTitle() {
  debug("ISteamGameServerUGC_SetItemTitle()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemUpdateLanguage() {
  debug("ISteamGameServerUGC_SetItemUpdateLanguage()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetItemVisibility() {
  debug("ISteamGameServerUGC_SetItemVisibility()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetLanguage() {
  debug("ISteamGameServerUGC_SetLanguage()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetMatchAnyTag() {
  debug("ISteamGameServerUGC_SetMatchAnyTag()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetRankedByTrendDays() {
  debug("ISteamGameServerUGC_SetRankedByTrendDays()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnAdditionalPreviews() {
  debug("ISteamGameServerUGC_SetReturnAdditionalPreviews()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnChildren() {
  debug("ISteamGameServerUGC_SetReturnChildren()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnKeyValueTags() {
  debug("ISteamGameServerUGC_SetReturnKeyValueTags()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnLongDescription() {
  debug("ISteamGameServerUGC_SetReturnLongDescription()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnMetadata() {
  debug("ISteamGameServerUGC_SetReturnMetadata()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnOnlyIDs() {
  debug("ISteamGameServerUGC_SetReturnOnlyIDs()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnPlaytimeStats() {
  debug("ISteamGameServerUGC_SetReturnPlaytimeStats()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetReturnTotalOnly() {
  debug("ISteamGameServerUGC_SetReturnTotalOnly()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetSearchText() {
  debug("ISteamGameServerUGC_SetSearchText()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SetUserItemVote() {
  debug("ISteamGameServerUGC_SetUserItemVote()");
}

EXTERN_ABI auto _ISteamGameServerUGC_StartItemUpdate() {
  debug("ISteamGameServerUGC_StartItemUpdate()");
}

EXTERN_ABI auto _ISteamGameServerUGC_StartPlaytimeTracking() {
  debug("ISteamGameServerUGC_StartPlaytimeTracking()");
}

EXTERN_ABI auto _ISteamGameServerUGC_StopPlaytimeTracking() {
  debug("ISteamGameServerUGC_StopPlaytimeTracking()");
}

EXTERN_ABI auto _ISteamGameServerUGC_StopPlaytimeTrackingForAllItems() {
  debug("ISteamGameServerUGC_StopPlaytimeTrackingForAllItems()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SubmitItemUpdate() {
  debug("ISteamGameServerUGC_SubmitItemUpdate()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SubscribeItem() {
  debug("ISteamGameServerUGC_SubscribeItem()");
}

EXTERN_ABI auto _ISteamGameServerUGC_SuspendDownloads() {
  debug("ISteamGameServerUGC_SuspendDownloads()");
}

EXTERN_ABI auto _ISteamGameServerUGC_UnsubscribeItem() {
  debug("ISteamGameServerUGC_UnsubscribeItem()");
}

EXTERN_ABI auto _ISteamGameServerUGC_UpdateItemPreviewFile() {
  debug("ISteamGameServerUGC_UpdateItemPreviewFile()");
}

EXTERN_ABI auto _ISteamGameServerUGC_UpdateItemPreviewVideo() {
  debug("ISteamGameServerUGC_UpdateItemPreviewVideo()");
}

EXTERN_ABI auto _ISteamGameServerUtils_BOverlayNeedsPresent() {
  debug("ISteamGameServerUtils_BOverlayNeedsPresent()");
}

EXTERN_ABI auto _ISteamGameServerUtils_CheckFileSignature() {
  debug("ISteamGameServerUtils_CheckFileSignature()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetAPICallFailureReason() {
  debug("ISteamGameServerUtils_GetAPICallFailureReason()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetAPICallResult() {
  debug("ISteamGameServerUtils_GetAPICallResult()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetAppID() {
  debug("ISteamGameServerUtils_GetAppID()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetCSERIPPort() {
  debug("ISteamGameServerUtils_GetCSERIPPort()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetConnectedUniverse() {
  debug("ISteamGameServerUtils_GetConnectedUniverse()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetCurrentBatteryPower() {
  debug("ISteamGameServerUtils_GetCurrentBatteryPower()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetEnteredGamepadTextInput() {
  debug("ISteamGameServerUtils_GetEnteredGamepadTextInput()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetEnteredGamepadTextLength() {
  debug("ISteamGameServerUtils_GetEnteredGamepadTextLength()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetIPCCallCount() {
  debug("ISteamGameServerUtils_GetIPCCallCount()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetIPCountry() {
  debug("ISteamGameServerUtils_GetIPCountry()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetImageRGBA() {
  debug("ISteamGameServerUtils_GetImageRGBA()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetImageSize() {
  debug("ISteamGameServerUtils_GetImageSize()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetSecondsSinceAppActive() {
  debug("ISteamGameServerUtils_GetSecondsSinceAppActive()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetSecondsSinceComputerActive() {
  debug("ISteamGameServerUtils_GetSecondsSinceComputerActive()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetServerRealTime() {
  debug("ISteamGameServerUtils_GetServerRealTime()");
}

EXTERN_ABI auto _ISteamGameServerUtils_GetSteamUILanguage() {
  debug("ISteamGameServerUtils_GetSteamUILanguage()");
}

EXTERN_ABI auto _ISteamGameServerUtils_IsAPICallCompleted() {
  debug("ISteamGameServerUtils_IsAPICallCompleted()");
}

EXTERN_ABI auto _ISteamGameServerUtils_IsOverlayEnabled() {
  debug("ISteamGameServerUtils_IsOverlayEnabled()");
}

EXTERN_ABI auto _ISteamGameServerUtils_IsSteamInBigPictureMode() {
  debug("ISteamGameServerUtils_IsSteamInBigPictureMode()");
}

EXTERN_ABI auto _ISteamGameServerUtils_IsSteamRunningInVR() {
  debug("ISteamGameServerUtils_IsSteamRunningInVR()");
}

EXTERN_ABI auto _ISteamGameServerUtils_IsVRHeadsetStreamingEnabled() {
  debug("ISteamGameServerUtils_IsVRHeadsetStreamingEnabled()");
}

EXTERN_ABI auto _ISteamGameServerUtils_SetOverlayNotificationInset() {
  debug("ISteamGameServerUtils_SetOverlayNotificationInset()");
}

EXTERN_ABI auto _ISteamGameServerUtils_SetOverlayNotificationPosition() {
  debug("ISteamGameServerUtils_SetOverlayNotificationPosition()");
}

EXTERN_ABI auto _ISteamGameServerUtils_SetVRHeadsetStreamingEnabled() {
  debug("ISteamGameServerUtils_SetVRHeadsetStreamingEnabled()");
}

EXTERN_ABI auto _ISteamGameServerUtils_SetWarningMessageHook() {
  debug("ISteamGameServerUtils_SetWarningMessageHook()");
}

EXTERN_ABI auto _ISteamGameServerUtils_ShowGamepadTextInput() {
  debug("ISteamGameServerUtils_ShowGamepadTextInput()");
}

EXTERN_ABI auto _ISteamGameServerUtils_StartVRDashboard() {
  debug("ISteamGameServerUtils_StartVRDashboard()");
}

EXTERN_ABI auto _ISteamHTMLSurface_FileLoadDialogResponse() {
  debug("ISteamHTMLSurface_FileLoadDialogResponse()");
}

EXTERN_ABI auto _ISteamUnifiedMessages_GetMethodResponseData() {
  debug("ISteamUnifiedMessages_GetMethodResponseData()");
}

EXTERN_ABI auto _ISteamUnifiedMessages_GetMethodResponseInfo() {
  debug("ISteamUnifiedMessages_GetMethodResponseInfo()");
}

EXTERN_ABI auto _ISteamUnifiedMessages_ReleaseMethod() {
  debug("ISteamUnifiedMessages_ReleaseMethod()");
}

EXTERN_ABI auto _ISteamUnifiedMessages_SendMethod() {
  debug("ISteamUnifiedMessages_SendMethod()");
}

EXTERN_ABI auto _ISteamUnifiedMessages_SendNotification() {
  debug("ISteamUnifiedMessages_SendNotification()");
}

EXTERN_ABI auto _SteamAPI_GameServer_BSecure() {
  debug("SteamAPI_GameServer_BSecure()");
}

EXTERN_ABI auto _SteamAPI_GameServer_GetHSteamPipe() {
  debug("SteamAPI_GameServer_GetHSteamPipe()");
}

EXTERN_ABI auto _SteamAPI_GameServer_GetHSteamUser() {
  debug("SteamAPI_GameServer_GetHSteamUser()");
}

EXTERN_ABI auto _SteamAPI_GameServer_GetSteamID() {
  debug("SteamAPI_GameServer_GetSteamID()");
}

EXTERN_ABI auto _SteamAPI_GameServer_Init() {
  debug("SteamAPI_GameServer_Init()");
}

EXTERN_ABI auto _SteamAPI_GameServer_ReleaseCurrentThreadMemory() {
  debug("SteamAPI_GameServer_ReleaseCurrentThreadMemory()");
}

EXTERN_ABI auto _SteamAPI_GameServer_RunCallbacks() {
  debug("SteamAPI_GameServer_RunCallbacks()");
}

EXTERN_ABI auto _SteamAPI_GameServer_Shutdown() {
  debug("SteamAPI_GameServer_Shutdown()");
}

EXTERN_ABI auto _SteamAPI_GetSteamInstallPath() {
  debug("SteamAPI_GetSteamInstallPath()");
}

EXTERN_ABI auto _SteamAPI_ReleaseCurrentThreadMemory() {
  debug("SteamAPI_ReleaseCurrentThreadMemory()");
}

EXTERN_ABI auto _SteamAPI_SetBreakpadAppID() {
  debug("SteamAPI_SetBreakpadAppID()");
}

EXTERN_ABI auto _SteamAPI_SetMiniDumpComment() {
  debug("SteamAPI_SetMiniDumpComment()");
}

EXTERN_ABI auto _SteamAPI_SetTryCatchCallbacks() {
  debug("SteamAPI_SetTryCatchCallbacks()");
}

EXTERN_ABI auto _SteamAPI_Steam_GetHSteamUserCurrent_() {
  debug("SteamAPI_Steam_GetHSteamUserCurrent_()");
}

EXTERN_ABI auto _SteamAPI_Steam_RegisterInterfaceFuncs_() {
  debug("SteamAPI_Steam_RegisterInterfaceFuncs_()");
}

EXTERN_ABI auto _SteamAPI_Steam_RunCallbacks_() {
  debug("SteamAPI_Steam_RunCallbacks_()");
}

EXTERN_ABI auto _SteamAPI_SteamClient_() { debug("SteamAPI_SteamClient_()"); }

EXTERN_ABI auto _SteamAPI_SteamGameServerClient_() {
  debug("SteamAPI_SteamGameServerClient_()");
}

EXTERN_ABI auto _SteamAPI_SteamInternal_CreateInterface_() {
  debug("SteamAPI_SteamInternal_CreateInterface_()");
}

EXTERN_ABI auto _SteamAPI_SteamInternal_GameServer_Init_() {
  debug("SteamAPI_SteamInternal_GameServer_Init_()");
}

EXTERN_ABI auto _SteamAPI_UseBreakpadCrashHandler() {
  debug("SteamAPI_UseBreakpadCrashHandler()");
}

EXTERN_ABI auto _SteamAPI_WriteMiniDump() { debug("SteamAPI_WriteMiniDump()"); }

EXTERN_ABI auto _SteamAPI_Init() { return SteamAPI_Init(); }

EXTERN_ABI auto _SteamAPI_IsSteamRunning() { return SteamAPI_IsSteamRunning(); }

EXTERN_ABI auto _SteamAPI_RegisterCallResult(void *         pCallback,
                                             SteamAPICall_t callback) {
  return SteamAPI_RegisterCallResult(pCallback, callback);
}

EXTERN_ABI auto _SteamAPI_RegisterCallback(void *pCallback, int iCallback) {
  return SteamAPI_RegisterCallback(pCallback, iCallback);
}

EXTERN_ABI auto _SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID) {
  return SteamAPI_RestartAppIfNecessary(unOwnAppID);
}

EXTERN_ABI auto _SteamAPI_RunCallbacks() { return SteamAPI_RunCallbacks(); }

EXTERN_ABI auto _SteamAPI_Shutdown() { return SteamAPI_Shutdown(); }

EXTERN_ABI auto _SteamAPI_UnregisterCallResult(void *         pCallback,
                                               SteamAPICall_t callback) {
  return SteamAPI_UnregisterCallResult(pCallback, callback);
}

EXTERN_ABI auto _SteamAPI_UnregisterCallback(void *pCallback) {
  return SteamAPI_UnregisterCallback(pCallback);
}

EXTERN_ABI auto _SteamAPI_GetHSteamPipe_() { return SteamAPI_GetHSteamPipe(); }

EXTERN_ABI auto _SteamAPI_GetHSteamUser_() { return SteamAPI_GetHSteamUser(); }
}
