#include "steakworms.hpp"

#include <utility>

#include "csteamworks.ipp"

extern "C" auto _ISteamClient_GetISteamUnifiedMessages() {
  debug("ISteamClient_GetISteamUnifiedMessages()");
}

extern "C" auto _ISteamGameServerHTTP_CreateCookieContainer() {
  debug("ISteamGameServerHTTP_CreateCookieContainer()");
}

extern "C" auto _ISteamGameServerHTTP_CreateHTTPRequest() {
  debug("ISteamGameServerHTTP_CreateHTTPRequest()");
}

extern "C" auto _ISteamGameServerHTTP_DeferHTTPRequest() {
  debug("ISteamGameServerHTTP_DeferHTTPRequest()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPDownloadProgressPct() {
  debug("ISteamGameServerHTTP_GetHTTPDownloadProgressPct()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPRequestWasTimedOut() {
  debug("ISteamGameServerHTTP_GetHTTPRequestWasTimedOut()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPResponseBodyData() {
  debug("ISteamGameServerHTTP_GetHTTPResponseBodyData()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPResponseBodySize() {
  debug("ISteamGameServerHTTP_GetHTTPResponseBodySize()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPResponseHeaderSize() {
  debug("ISteamGameServerHTTP_GetHTTPResponseHeaderSize()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPResponseHeaderValue() {
  debug("ISteamGameServerHTTP_GetHTTPResponseHeaderValue()");
}

extern "C" auto _ISteamGameServerHTTP_GetHTTPStreamingResponseBodyData() {
  debug("ISteamGameServerHTTP_GetHTTPStreamingResponseBodyData()");
}

extern "C" auto _ISteamGameServerHTTP_PrioritizeHTTPRequest() {
  debug("ISteamGameServerHTTP_PrioritizeHTTPRequest()");
}

extern "C" auto _ISteamGameServerHTTP_ReleaseCookieContainer() {
  debug("ISteamGameServerHTTP_ReleaseCookieContainer()");
}

extern "C" auto _ISteamGameServerHTTP_ReleaseHTTPRequest() {
  debug("ISteamGameServerHTTP_ReleaseHTTPRequest()");
}

extern "C" auto _ISteamGameServerHTTP_SendHTTPRequest() {
  debug("ISteamGameServerHTTP_SendHTTPRequest()");
}

extern "C" auto _ISteamGameServerHTTP_SendHTTPRequestAndStreamResponse() {
  debug("ISteamGameServerHTTP_SendHTTPRequestAndStreamResponse()");
}

extern "C" auto _ISteamGameServerHTTP_SetCookie() {
  debug("ISteamGameServerHTTP_SetCookie()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestAbsoluteTimeoutMS() {
  debug("ISteamGameServerHTTP_SetHTTPRequestAbsoluteTimeoutMS()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestContextValue() {
  debug("ISteamGameServerHTTP_SetHTTPRequestContextValue()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestCookieContainer() {
  debug("ISteamGameServerHTTP_SetHTTPRequestCookieContainer()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestGetOrPostParameter() {
  debug("ISteamGameServerHTTP_SetHTTPRequestGetOrPostParameter()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestHeaderValue() {
  debug("ISteamGameServerHTTP_SetHTTPRequestHeaderValue()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestNetworkActivityTimeout() {
  debug("ISteamGameServerHTTP_SetHTTPRequestNetworkActivityTimeout()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestRawPostBody() {
  debug("ISteamGameServerHTTP_SetHTTPRequestRawPostBody()");
}

extern "C" auto
_ISteamGameServerHTTP_SetHTTPRequestRequiresVerifiedCertificate() {
  debug("ISteamGameServerHTTP_SetHTTPRequestRequiresVerifiedCertificate()");
}

extern "C" auto _ISteamGameServerHTTP_SetHTTPRequestUserAgentInfo() {
  debug("ISteamGameServerHTTP_SetHTTPRequestUserAgentInfo()");
}

extern "C" auto _ISteamGameServerInventory_AddPromoItem() {
  debug("ISteamGameServerInventory_AddPromoItem()");
}

extern "C" auto _ISteamGameServerInventory_AddPromoItems() {
  debug("ISteamGameServerInventory_AddPromoItems()");
}

extern "C" auto _ISteamGameServerInventory_CheckResultSteamID() {
  debug("ISteamGameServerInventory_CheckResultSteamID()");
}

extern "C" auto _ISteamGameServerInventory_ConsumeItem() {
  debug("ISteamGameServerInventory_ConsumeItem()");
}

extern "C" auto _ISteamGameServerInventory_DeserializeResult() {
  debug("ISteamGameServerInventory_DeserializeResult()");
}

extern "C" auto _ISteamGameServerInventory_DestroyResult() {
  debug("ISteamGameServerInventory_DestroyResult()");
}

extern "C" auto _ISteamGameServerInventory_ExchangeItems() {
  debug("ISteamGameServerInventory_ExchangeItems()");
}

extern "C" auto _ISteamGameServerInventory_GenerateItems() {
  debug("ISteamGameServerInventory_GenerateItems()");
}

extern "C" auto _ISteamGameServerInventory_GetAllItems() {
  debug("ISteamGameServerInventory_GetAllItems()");
}

extern "C" auto _ISteamGameServerInventory_GetEligiblePromoItemDefinitionIDs() {
  debug("ISteamGameServerInventory_GetEligiblePromoItemDefinitionIDs()");
}

extern "C" auto _ISteamGameServerInventory_GetItemDefinitionIDs() {
  debug("ISteamGameServerInventory_GetItemDefinitionIDs()");
}

extern "C" auto _ISteamGameServerInventory_GetItemDefinitionProperty() {
  debug("ISteamGameServerInventory_GetItemDefinitionProperty()");
}

extern "C" auto _ISteamGameServerInventory_GetItemsByID() {
  debug("ISteamGameServerInventory_GetItemsByID()");
}

extern "C" auto _ISteamGameServerInventory_GetResultItemProperty() {
  debug("ISteamGameServerInventory_GetResultItemProperty()");
}

extern "C" auto _ISteamGameServerInventory_GetResultItems() {
  debug("ISteamGameServerInventory_GetResultItems()");
}

extern "C" auto _ISteamGameServerInventory_GetResultStatus() {
  debug("ISteamGameServerInventory_GetResultStatus()");
}

extern "C" auto _ISteamGameServerInventory_GetResultTimestamp() {
  debug("ISteamGameServerInventory_GetResultTimestamp()");
}

extern "C" auto _ISteamGameServerInventory_GrantPromoItems() {
  debug("ISteamGameServerInventory_GrantPromoItems()");
}

extern "C" auto _ISteamGameServerInventory_LoadItemDefinitions() {
  debug("ISteamGameServerInventory_LoadItemDefinitions()");
}

extern "C" auto
_ISteamGameServerInventory_RequestEligiblePromoItemDefinitionsIDs() {
  debug("ISteamGameServerInventory_RequestEligiblePromoItemDefinitionsIDs()");
}

extern "C" auto _ISteamGameServerInventory_SendItemDropHeartbeat() {
  debug("ISteamGameServerInventory_SendItemDropHeartbeat()");
}

extern "C" auto _ISteamGameServerInventory_SerializeResult() {
  debug("ISteamGameServerInventory_SerializeResult()");
}

extern "C" auto _ISteamGameServerInventory_TradeItems() {
  debug("ISteamGameServerInventory_TradeItems()");
}

extern "C" auto _ISteamGameServerInventory_TransferItemQuantity() {
  debug("ISteamGameServerInventory_TransferItemQuantity()");
}

extern "C" auto _ISteamGameServerInventory_TriggerItemDrop() {
  debug("ISteamGameServerInventory_TriggerItemDrop()");
}

extern "C" auto _ISteamGameServerNetworking_AcceptP2PSessionWithUser() {
  debug("ISteamGameServerNetworking_AcceptP2PSessionWithUser()");
}

extern "C" auto _ISteamGameServerNetworking_AllowP2PPacketRelay() {
  debug("ISteamGameServerNetworking_AllowP2PPacketRelay()");
}

extern "C" auto _ISteamGameServerNetworking_CloseP2PChannelWithUser() {
  debug("ISteamGameServerNetworking_CloseP2PChannelWithUser()");
}

extern "C" auto _ISteamGameServerNetworking_CloseP2PSessionWithUser() {
  debug("ISteamGameServerNetworking_CloseP2PSessionWithUser()");
}

extern "C" auto _ISteamGameServerNetworking_CreateConnectionSocket() {
  debug("ISteamGameServerNetworking_CreateConnectionSocket()");
}

extern "C" auto _ISteamGameServerNetworking_CreateListenSocket() {
  debug("ISteamGameServerNetworking_CreateListenSocket()");
}

extern "C" auto _ISteamGameServerNetworking_CreateP2PConnectionSocket() {
  debug("ISteamGameServerNetworking_CreateP2PConnectionSocket()");
}

extern "C" auto _ISteamGameServerNetworking_DestroyListenSocket() {
  debug("ISteamGameServerNetworking_DestroyListenSocket()");
}

extern "C" auto _ISteamGameServerNetworking_DestroySocket() {
  debug("ISteamGameServerNetworking_DestroySocket()");
}

extern "C" auto _ISteamGameServerNetworking_GetListenSocketInfo() {
  debug("ISteamGameServerNetworking_GetListenSocketInfo()");
}

extern "C" auto _ISteamGameServerNetworking_GetMaxPacketSize() {
  debug("ISteamGameServerNetworking_GetMaxPacketSize()");
}

extern "C" auto _ISteamGameServerNetworking_GetP2PSessionState() {
  debug("ISteamGameServerNetworking_GetP2PSessionState()");
}

extern "C" auto _ISteamGameServerNetworking_GetSocketConnectionType() {
  debug("ISteamGameServerNetworking_GetSocketConnectionType()");
}

extern "C" auto _ISteamGameServerNetworking_GetSocketInfo() {
  debug("ISteamGameServerNetworking_GetSocketInfo()");
}

extern "C" auto _ISteamGameServerNetworking_IsDataAvailable() {
  debug("ISteamGameServerNetworking_IsDataAvailable()");
}

extern "C" auto _ISteamGameServerNetworking_IsDataAvailableOnSocket() {
  debug("ISteamGameServerNetworking_IsDataAvailableOnSocket()");
}

extern "C" auto _ISteamGameServerNetworking_IsP2PPacketAvailable() {
  debug("ISteamGameServerNetworking_IsP2PPacketAvailable()");
}

extern "C" auto _ISteamGameServerNetworking_ReadP2PPacket() {
  debug("ISteamGameServerNetworking_ReadP2PPacket()");
}

extern "C" auto _ISteamGameServerNetworking_RetrieveData() {
  debug("ISteamGameServerNetworking_RetrieveData()");
}

extern "C" auto _ISteamGameServerNetworking_RetrieveDataFromSocket() {
  debug("ISteamGameServerNetworking_RetrieveDataFromSocket()");
}

extern "C" auto _ISteamGameServerNetworking_SendDataOnSocket() {
  debug("ISteamGameServerNetworking_SendDataOnSocket()");
}

extern "C" auto _ISteamGameServerNetworking_SendP2PPacket() {
  debug("ISteamGameServerNetworking_SendP2PPacket()");
}

extern "C" auto _ISteamGameServerUGC_AddAppDependency() {
  debug("ISteamGameServerUGC_AddAppDependency()");
}

extern "C" auto _ISteamGameServerUGC_AddDependency() {
  debug("ISteamGameServerUGC_AddDependency()");
}

extern "C" auto _ISteamGameServerUGC_AddExcludedTag() {
  debug("ISteamGameServerUGC_AddExcludedTag()");
}

extern "C" auto _ISteamGameServerUGC_AddItemKeyValueTag() {
  debug("ISteamGameServerUGC_AddItemKeyValueTag()");
}

extern "C" auto _ISteamGameServerUGC_AddItemPreviewFile() {
  debug("ISteamGameServerUGC_AddItemPreviewFile()");
}

extern "C" auto _ISteamGameServerUGC_AddItemPreviewVideo() {
  debug("ISteamGameServerUGC_AddItemPreviewVideo()");
}

extern "C" auto _ISteamGameServerUGC_AddItemToFavorites() {
  debug("ISteamGameServerUGC_AddItemToFavorites()");
}

extern "C" auto _ISteamGameServerUGC_AddRequiredKeyValueTag() {
  debug("ISteamGameServerUGC_AddRequiredKeyValueTag()");
}

extern "C" auto _ISteamGameServerUGC_AddRequiredTag() {
  debug("ISteamGameServerUGC_AddRequiredTag()");
}

extern "C" auto _ISteamGameServerUGC_BInitWorkshopForGameServer() {
  debug("ISteamGameServerUGC_BInitWorkshopForGameServer()");
}

extern "C" auto _ISteamGameServerUGC_CreateItem() {
  debug("ISteamGameServerUGC_CreateItem()");
}

extern "C" auto _ISteamGameServerUGC_CreateQueryAllUGCRequest() {
  debug("ISteamGameServerUGC_CreateQueryAllUGCRequest()");
}

extern "C" auto _ISteamGameServerUGC_CreateQueryUGCDetailsRequest() {
  debug("ISteamGameServerUGC_CreateQueryUGCDetailsRequest()");
}

extern "C" auto _ISteamGameServerUGC_CreateQueryUserUGCRequest() {
  debug("ISteamGameServerUGC_CreateQueryUserUGCRequest()");
}

extern "C" auto _ISteamGameServerUGC_DeleteItem() {
  debug("ISteamGameServerUGC_DeleteItem()");
}

extern "C" auto _ISteamGameServerUGC_DownloadItem() {
  debug("ISteamGameServerUGC_DownloadItem()");
}

extern "C" auto _ISteamGameServerUGC_GetAppDependencies() {
  debug("ISteamGameServerUGC_GetAppDependencies()");
}

extern "C" auto _ISteamGameServerUGC_GetItemDownloadInfo() {
  debug("ISteamGameServerUGC_GetItemDownloadInfo()");
}

extern "C" auto _ISteamGameServerUGC_GetItemInstallInfo() {
  debug("ISteamGameServerUGC_GetItemInstallInfo()");
}

extern "C" auto _ISteamGameServerUGC_GetItemState() {
  debug("ISteamGameServerUGC_GetItemState()");
}

extern "C" auto _ISteamGameServerUGC_GetItemUpdateProgress() {
  debug("ISteamGameServerUGC_GetItemUpdateProgress()");
}

extern "C" auto _ISteamGameServerUGC_GetNumSubscribedItems() {
  debug("ISteamGameServerUGC_GetNumSubscribedItems()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCAdditionalPreview() {
  debug("ISteamGameServerUGC_GetQueryUGCAdditionalPreview()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCChildren() {
  debug("ISteamGameServerUGC_GetQueryUGCChildren()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCKeyValueTag() {
  debug("ISteamGameServerUGC_GetQueryUGCKeyValueTag()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCMetadata() {
  debug("ISteamGameServerUGC_GetQueryUGCMetadata()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCNumAdditionalPreviews() {
  debug("ISteamGameServerUGC_GetQueryUGCNumAdditionalPreviews()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCNumKeyValueTags() {
  debug("ISteamGameServerUGC_GetQueryUGCNumKeyValueTags()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCPreviewURL() {
  debug("ISteamGameServerUGC_GetQueryUGCPreviewURL()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCResult() {
  debug("ISteamGameServerUGC_GetQueryUGCResult()");
}

extern "C" auto _ISteamGameServerUGC_GetQueryUGCStatistic() {
  debug("ISteamGameServerUGC_GetQueryUGCStatistic()");
}

extern "C" auto _ISteamGameServerUGC_GetSubscribedItems() {
  debug("ISteamGameServerUGC_GetSubscribedItems()");
}

extern "C" auto _ISteamGameServerUGC_GetUserItemVote() {
  debug("ISteamGameServerUGC_GetUserItemVote()");
}

extern "C" auto _ISteamGameServerUGC_ReleaseQueryUGCRequest() {
  debug("ISteamGameServerUGC_ReleaseQueryUGCRequest()");
}

extern "C" auto _ISteamGameServerUGC_RemoveAppDependency() {
  debug("ISteamGameServerUGC_RemoveAppDependency()");
}

extern "C" auto _ISteamGameServerUGC_RemoveDependency() {
  debug("ISteamGameServerUGC_RemoveDependency()");
}

extern "C" auto _ISteamGameServerUGC_RemoveItemFromFavorites() {
  debug("ISteamGameServerUGC_RemoveItemFromFavorites()");
}

extern "C" auto _ISteamGameServerUGC_RemoveItemKeyValueTags() {
  debug("ISteamGameServerUGC_RemoveItemKeyValueTags()");
}

extern "C" auto _ISteamGameServerUGC_RemoveItemPreview() {
  debug("ISteamGameServerUGC_RemoveItemPreview()");
}

extern "C" auto _ISteamGameServerUGC_RequestUGCDetails() {
  debug("ISteamGameServerUGC_RequestUGCDetails()");
}

extern "C" auto _ISteamGameServerUGC_SendQueryUGCRequest() {
  debug("ISteamGameServerUGC_SendQueryUGCRequest()");
}

extern "C" auto _ISteamGameServerUGC_SetAllowCachedResponse() {
  debug("ISteamGameServerUGC_SetAllowCachedResponse()");
}

extern "C" auto _ISteamGameServerUGC_SetCloudFileNameFilter() {
  debug("ISteamGameServerUGC_SetCloudFileNameFilter()");
}

extern "C" auto _ISteamGameServerUGC_SetItemContent() {
  debug("ISteamGameServerUGC_SetItemContent()");
}

extern "C" auto _ISteamGameServerUGC_SetItemDescription() {
  debug("ISteamGameServerUGC_SetItemDescription()");
}

extern "C" auto _ISteamGameServerUGC_SetItemMetadata() {
  debug("ISteamGameServerUGC_SetItemMetadata()");
}

extern "C" auto _ISteamGameServerUGC_SetItemPreview() {
  debug("ISteamGameServerUGC_SetItemPreview()");
}

extern "C" auto _ISteamGameServerUGC_SetItemTags() {
  debug("ISteamGameServerUGC_SetItemTags()");
}

extern "C" auto _ISteamGameServerUGC_SetItemTitle() {
  debug("ISteamGameServerUGC_SetItemTitle()");
}

extern "C" auto _ISteamGameServerUGC_SetItemUpdateLanguage() {
  debug("ISteamGameServerUGC_SetItemUpdateLanguage()");
}

extern "C" auto _ISteamGameServerUGC_SetItemVisibility() {
  debug("ISteamGameServerUGC_SetItemVisibility()");
}

extern "C" auto _ISteamGameServerUGC_SetLanguage() {
  debug("ISteamGameServerUGC_SetLanguage()");
}

extern "C" auto _ISteamGameServerUGC_SetMatchAnyTag() {
  debug("ISteamGameServerUGC_SetMatchAnyTag()");
}

extern "C" auto _ISteamGameServerUGC_SetRankedByTrendDays() {
  debug("ISteamGameServerUGC_SetRankedByTrendDays()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnAdditionalPreviews() {
  debug("ISteamGameServerUGC_SetReturnAdditionalPreviews()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnChildren() {
  debug("ISteamGameServerUGC_SetReturnChildren()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnKeyValueTags() {
  debug("ISteamGameServerUGC_SetReturnKeyValueTags()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnLongDescription() {
  debug("ISteamGameServerUGC_SetReturnLongDescription()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnMetadata() {
  debug("ISteamGameServerUGC_SetReturnMetadata()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnOnlyIDs() {
  debug("ISteamGameServerUGC_SetReturnOnlyIDs()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnPlaytimeStats() {
  debug("ISteamGameServerUGC_SetReturnPlaytimeStats()");
}

extern "C" auto _ISteamGameServerUGC_SetReturnTotalOnly() {
  debug("ISteamGameServerUGC_SetReturnTotalOnly()");
}

extern "C" auto _ISteamGameServerUGC_SetSearchText() {
  debug("ISteamGameServerUGC_SetSearchText()");
}

extern "C" auto _ISteamGameServerUGC_SetUserItemVote() {
  debug("ISteamGameServerUGC_SetUserItemVote()");
}

extern "C" auto _ISteamGameServerUGC_StartItemUpdate() {
  debug("ISteamGameServerUGC_StartItemUpdate()");
}

extern "C" auto _ISteamGameServerUGC_StartPlaytimeTracking() {
  debug("ISteamGameServerUGC_StartPlaytimeTracking()");
}

extern "C" auto _ISteamGameServerUGC_StopPlaytimeTracking() {
  debug("ISteamGameServerUGC_StopPlaytimeTracking()");
}

extern "C" auto _ISteamGameServerUGC_StopPlaytimeTrackingForAllItems() {
  debug("ISteamGameServerUGC_StopPlaytimeTrackingForAllItems()");
}

extern "C" auto _ISteamGameServerUGC_SubmitItemUpdate() {
  debug("ISteamGameServerUGC_SubmitItemUpdate()");
}

extern "C" auto _ISteamGameServerUGC_SubscribeItem() {
  debug("ISteamGameServerUGC_SubscribeItem()");
}

extern "C" auto _ISteamGameServerUGC_SuspendDownloads() {
  debug("ISteamGameServerUGC_SuspendDownloads()");
}

extern "C" auto _ISteamGameServerUGC_UnsubscribeItem() {
  debug("ISteamGameServerUGC_UnsubscribeItem()");
}

extern "C" auto _ISteamGameServerUGC_UpdateItemPreviewFile() {
  debug("ISteamGameServerUGC_UpdateItemPreviewFile()");
}

extern "C" auto _ISteamGameServerUGC_UpdateItemPreviewVideo() {
  debug("ISteamGameServerUGC_UpdateItemPreviewVideo()");
}

extern "C" auto _ISteamGameServerUtils_BOverlayNeedsPresent() {
  debug("ISteamGameServerUtils_BOverlayNeedsPresent()");
}

extern "C" auto _ISteamGameServerUtils_CheckFileSignature() {
  debug("ISteamGameServerUtils_CheckFileSignature()");
}

extern "C" auto _ISteamGameServerUtils_GetAPICallFailureReason() {
  debug("ISteamGameServerUtils_GetAPICallFailureReason()");
}

extern "C" auto _ISteamGameServerUtils_GetAPICallResult() {
  debug("ISteamGameServerUtils_GetAPICallResult()");
}

extern "C" auto _ISteamGameServerUtils_GetAppID() {
  debug("ISteamGameServerUtils_GetAppID()");
}

extern "C" auto _ISteamGameServerUtils_GetCSERIPPort() {
  debug("ISteamGameServerUtils_GetCSERIPPort()");
}

extern "C" auto _ISteamGameServerUtils_GetConnectedUniverse() {
  debug("ISteamGameServerUtils_GetConnectedUniverse()");
}

extern "C" auto _ISteamGameServerUtils_GetCurrentBatteryPower() {
  debug("ISteamGameServerUtils_GetCurrentBatteryPower()");
}

extern "C" auto _ISteamGameServerUtils_GetEnteredGamepadTextInput() {
  debug("ISteamGameServerUtils_GetEnteredGamepadTextInput()");
}

extern "C" auto _ISteamGameServerUtils_GetEnteredGamepadTextLength() {
  debug("ISteamGameServerUtils_GetEnteredGamepadTextLength()");
}

extern "C" auto _ISteamGameServerUtils_GetIPCCallCount() {
  debug("ISteamGameServerUtils_GetIPCCallCount()");
}

extern "C" auto _ISteamGameServerUtils_GetIPCountry() {
  debug("ISteamGameServerUtils_GetIPCountry()");
}

extern "C" auto _ISteamGameServerUtils_GetImageRGBA() {
  debug("ISteamGameServerUtils_GetImageRGBA()");
}

extern "C" auto _ISteamGameServerUtils_GetImageSize() {
  debug("ISteamGameServerUtils_GetImageSize()");
}

extern "C" auto _ISteamGameServerUtils_GetSecondsSinceAppActive() {
  debug("ISteamGameServerUtils_GetSecondsSinceAppActive()");
}

extern "C" auto _ISteamGameServerUtils_GetSecondsSinceComputerActive() {
  debug("ISteamGameServerUtils_GetSecondsSinceComputerActive()");
}

extern "C" auto _ISteamGameServerUtils_GetServerRealTime() {
  debug("ISteamGameServerUtils_GetServerRealTime()");
}

extern "C" auto _ISteamGameServerUtils_GetSteamUILanguage() {
  debug("ISteamGameServerUtils_GetSteamUILanguage()");
}

extern "C" auto _ISteamGameServerUtils_IsAPICallCompleted() {
  debug("ISteamGameServerUtils_IsAPICallCompleted()");
}

extern "C" auto _ISteamGameServerUtils_IsOverlayEnabled() {
  debug("ISteamGameServerUtils_IsOverlayEnabled()");
}

extern "C" auto _ISteamGameServerUtils_IsSteamInBigPictureMode() {
  debug("ISteamGameServerUtils_IsSteamInBigPictureMode()");
}

extern "C" auto _ISteamGameServerUtils_IsSteamRunningInVR() {
  debug("ISteamGameServerUtils_IsSteamRunningInVR()");
}

extern "C" auto _ISteamGameServerUtils_IsVRHeadsetStreamingEnabled() {
  debug("ISteamGameServerUtils_IsVRHeadsetStreamingEnabled()");
}

extern "C" auto _ISteamGameServerUtils_SetOverlayNotificationInset() {
  debug("ISteamGameServerUtils_SetOverlayNotificationInset()");
}

extern "C" auto _ISteamGameServerUtils_SetOverlayNotificationPosition() {
  debug("ISteamGameServerUtils_SetOverlayNotificationPosition()");
}

extern "C" auto _ISteamGameServerUtils_SetVRHeadsetStreamingEnabled() {
  debug("ISteamGameServerUtils_SetVRHeadsetStreamingEnabled()");
}

extern "C" auto _ISteamGameServerUtils_SetWarningMessageHook() {
  debug("ISteamGameServerUtils_SetWarningMessageHook()");
}

extern "C" auto _ISteamGameServerUtils_ShowGamepadTextInput() {
  debug("ISteamGameServerUtils_ShowGamepadTextInput()");
}

extern "C" auto _ISteamGameServerUtils_StartVRDashboard() {
  debug("ISteamGameServerUtils_StartVRDashboard()");
}

extern "C" auto _ISteamHTMLSurface_FileLoadDialogResponse() {
  debug("ISteamHTMLSurface_FileLoadDialogResponse()");
}

extern "C" auto _ISteamUnifiedMessages_GetMethodResponseData() {
  debug("ISteamUnifiedMessages_GetMethodResponseData()");
}

extern "C" auto _ISteamUnifiedMessages_GetMethodResponseInfo() {
  debug("ISteamUnifiedMessages_GetMethodResponseInfo()");
}

extern "C" auto _ISteamUnifiedMessages_ReleaseMethod() {
  debug("ISteamUnifiedMessages_ReleaseMethod()");
}

extern "C" auto _ISteamUnifiedMessages_SendMethod() {
  debug("ISteamUnifiedMessages_SendMethod()");
}

extern "C" auto _ISteamUnifiedMessages_SendNotification() {
  debug("ISteamUnifiedMessages_SendNotification()");
}

extern "C" auto _SteamAPI_GameServer_BSecure() {
  debug("SteamAPI_GameServer_BSecure()");
}

extern "C" auto _SteamAPI_GameServer_GetHSteamPipe() {
  debug("SteamAPI_GameServer_GetHSteamPipe()");
}

extern "C" auto _SteamAPI_GameServer_GetHSteamUser() {
  debug("SteamAPI_GameServer_GetHSteamUser()");
}

extern "C" auto _SteamAPI_GameServer_GetSteamID() {
  debug("SteamAPI_GameServer_GetSteamID()");
}

extern "C" auto _SteamAPI_GameServer_Init() {
  debug("SteamAPI_GameServer_Init()");
}

extern "C" auto _SteamAPI_GameServer_ReleaseCurrentThreadMemory() {
  debug("SteamAPI_GameServer_ReleaseCurrentThreadMemory()");
}

extern "C" auto _SteamAPI_GameServer_RunCallbacks() {
  debug("SteamAPI_GameServer_RunCallbacks()");
}

extern "C" auto _SteamAPI_GameServer_Shutdown() {
  debug("SteamAPI_GameServer_Shutdown()");
}

extern "C" auto _SteamAPI_GetSteamInstallPath() {
  debug("SteamAPI_GetSteamInstallPath()");
}

extern "C" auto _SteamAPI_ReleaseCurrentThreadMemory() {
  debug("SteamAPI_ReleaseCurrentThreadMemory()");
}

extern "C" auto _SteamAPI_SetBreakpadAppID() {
  debug("SteamAPI_SetBreakpadAppID()");
}

extern "C" auto _SteamAPI_SetMiniDumpComment() {
  debug("SteamAPI_SetMiniDumpComment()");
}

extern "C" auto _SteamAPI_SetTryCatchCallbacks() {
  debug("SteamAPI_SetTryCatchCallbacks()");
}

extern "C" auto _SteamAPI_Steam_GetHSteamUserCurrent_() {
  debug("SteamAPI_Steam_GetHSteamUserCurrent_()");
}

extern "C" auto _SteamAPI_Steam_RegisterInterfaceFuncs_() {
  debug("SteamAPI_Steam_RegisterInterfaceFuncs_()");
}

extern "C" auto _SteamAPI_Steam_RunCallbacks_() {
  debug("SteamAPI_Steam_RunCallbacks_()");
}

extern "C" auto _SteamAPI_SteamClient_() { debug("SteamAPI_SteamClient_()"); }

extern "C" auto _SteamAPI_SteamGameServerClient_() {
  debug("SteamAPI_SteamGameServerClient_()");
}

extern "C" auto _SteamAPI_SteamInternal_CreateInterface_() {
  debug("SteamAPI_SteamInternal_CreateInterface_()");
}

extern "C" auto _SteamAPI_SteamInternal_GameServer_Init_() {
  debug("SteamAPI_SteamInternal_GameServer_Init_()");
}

extern "C" auto _SteamAPI_UseBreakpadCrashHandler() {
  debug("SteamAPI_UseBreakpadCrashHandler()");
}

extern "C" auto _SteamAPI_WriteMiniDump() { debug("SteamAPI_WriteMiniDump()"); }

extern "C" auto _SteamAPI_Init() { return SteamAPI_Init(); }

extern "C" auto _SteamAPI_IsSteamRunning() { return SteamAPI_IsSteamRunning(); }

extern "C" auto _SteamAPI_RegisterCallResult(void *         pCallback,
                                             SteamAPICall_t callback) {
  return SteamAPI_RegisterCallResult(pCallback, callback);
}

extern "C" auto _SteamAPI_RegisterCallback(void *pCallback, int iCallback) {
  return SteamAPI_RegisterCallback(pCallback, iCallback);
}

extern "C" auto _SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID) {
  return SteamAPI_RestartAppIfNecessary(unOwnAppID);
}

extern "C" auto _SteamAPI_RunCallbacks() { return SteamAPI_RunCallbacks(); }

extern "C" auto _SteamAPI_Shutdown() { return SteamAPI_Shutdown(); }

extern "C" auto _SteamAPI_UnregisterCallResult(void *         pCallback,
                                               SteamAPICall_t callback) {
  return SteamAPI_UnregisterCallResult(pCallback, callback);
}

extern "C" auto _SteamAPI_UnregisterCallback(void *pCallback) {
  return SteamAPI_UnregisterCallback(pCallback);
}

extern "C" auto _SteamAPI_GetHSteamPipe_() { return SteamAPI_GetHSteamPipe(); }

extern "C" auto _SteamAPI_GetHSteamUser_() { return SteamAPI_GetHSteamUser(); }
