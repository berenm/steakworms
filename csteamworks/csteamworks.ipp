EXTERN_ABI auto _ISteamHTMLSurface_DestructISteamHTMLSurface() { debug("_ISteamHTMLSurface_DestructISteamHTMLSurface()"); }
EXTERN_ABI auto _ISteamHTMLSurface_Init() { debug("_ISteamHTMLSurface_Init()"); }
EXTERN_ABI auto _ISteamHTMLSurface_Shutdown() { debug("_ISteamHTMLSurface_Shutdown()"); }
EXTERN_ABI auto _ISteamHTMLSurface_CreateBrowser(const char * pchUserAgent, const char * pchUserCSS) { debug("_ISteamHTMLSurface_CreateBrowser(const char * pchUserAgent, const char * pchUserCSS)"); }
EXTERN_ABI auto _ISteamHTMLSurface_RemoveBrowser(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_RemoveBrowser(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_LoadURL(HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData) { debug("_ISteamHTMLSurface_LoadURL(HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight) { debug("_ISteamHTMLSurface_SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)"); }
EXTERN_ABI auto _ISteamHTMLSurface_StopLoad(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_StopLoad(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_Reload(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_Reload(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_GoBack(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_GoBack(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_GoForward(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_GoForward(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_AddHeader(HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue) { debug("_ISteamHTMLSurface_AddHeader(HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue)"); }
EXTERN_ABI auto _ISteamHTMLSurface_ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char * pchScript) { debug("_ISteamHTMLSurface_ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char * pchScript)"); }
EXTERN_ABI auto _ISteamHTMLSurface_MouseUp(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton) { debug("_ISteamHTMLSurface_MouseUp(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton)"); }
EXTERN_ABI auto _ISteamHTMLSurface_MouseDown(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton) { debug("_ISteamHTMLSurface_MouseDown(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton)"); }
EXTERN_ABI auto _ISteamHTMLSurface_MouseDoubleClick(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton) { debug("_ISteamHTMLSurface_MouseDoubleClick(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton)"); }
EXTERN_ABI auto _ISteamHTMLSurface_MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) { debug("_ISteamHTMLSurface_MouseMove(HHTMLBrowser unBrowserHandle, int x, int y)"); }
EXTERN_ABI auto _ISteamHTMLSurface_MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) { debug("_ISteamHTMLSurface_MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta)"); }
EXTERN_ABI auto _ISteamHTMLSurface_KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) { debug("_ISteamHTMLSurface_KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers)"); }
EXTERN_ABI auto _ISteamHTMLSurface_KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) { debug("_ISteamHTMLSurface_KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers)"); }
EXTERN_ABI auto _ISteamHTMLSurface_KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) { debug("_ISteamHTMLSurface_KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) { debug("_ISteamHTMLSurface_SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll) { debug("_ISteamHTMLSurface_SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus) { debug("_ISteamHTMLSurface_SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)"); }
EXTERN_ABI auto _ISteamHTMLSurface_ViewSource(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_ViewSource(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_CopyToClipboard(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_CopyToClipboard(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_PasteFromClipboard(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_PasteFromClipboard(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_Find(HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse) { debug("_ISteamHTMLSurface_Find(HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse)"); }
EXTERN_ABI auto _ISteamHTMLSurface_StopFind(HHTMLBrowser unBrowserHandle) { debug("_ISteamHTMLSurface_StopFind(HHTMLBrowser unBrowserHandle)"); }
EXTERN_ABI auto _ISteamHTMLSurface_GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x, int y) { debug("_ISteamHTMLSurface_GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x, int y)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetCookie(const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly) { debug("_ISteamHTMLSurface_SetCookie(const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY) { debug("_ISteamHTMLSurface_SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode) { debug("_ISteamHTMLSurface_SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode)"); }
EXTERN_ABI auto _ISteamHTMLSurface_SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling) { debug("_ISteamHTMLSurface_SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling)"); }
EXTERN_ABI auto _ISteamHTMLSurface_AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed) { debug("_ISteamHTMLSurface_AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed)"); }
EXTERN_ABI auto _ISteamHTMLSurface_JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult) { debug("_ISteamHTMLSurface_JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult)"); }
EXTERN_ABI auto _ISteamClient_CreateSteamPipe() { debug("_ISteamClient_CreateSteamPipe()"); }
EXTERN_ABI auto _ISteamClient_BReleaseSteamPipe(HSteamPipe hSteamPipe) { debug("_ISteamClient_BReleaseSteamPipe(HSteamPipe hSteamPipe)"); }
EXTERN_ABI auto _ISteamClient_ConnectToGlobalUser(HSteamPipe hSteamPipe) { debug("_ISteamClient_ConnectToGlobalUser(HSteamPipe hSteamPipe)"); }
EXTERN_ABI auto _ISteamClient_CreateLocalUser(HSteamPipe * phSteamPipe, EAccountType eAccountType) { debug("_ISteamClient_CreateLocalUser(HSteamPipe * phSteamPipe, EAccountType eAccountType)"); }
EXTERN_ABI auto _ISteamClient_ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser) { debug("_ISteamClient_ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser)"); }
EXTERN_ABI auto _ISteamClient_GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_SetLocalIPBinding(uint32 unIP, uint16 usPort) { debug("_ISteamClient_SetLocalIPBinding(uint32 unIP, uint16 usPort)"); }
EXTERN_ABI auto _ISteamClient_GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamUtils(HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamUtils(HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamGameServerStats(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamGameServerStats(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetIPCCallCount() { debug("_ISteamClient_GetIPCCallCount()"); }
EXTERN_ABI auto _ISteamClient_SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) { debug("_ISteamClient_SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)"); }
EXTERN_ABI auto _ISteamClient_BShutdownIfAllPipesClosed() { debug("_ISteamClient_BShutdownIfAllPipesClosed()"); }
EXTERN_ABI auto _ISteamClient_GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamAppList(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamAppList(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamMusic(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamMusic(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamInventory(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamInventory(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamVideo(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamVideo(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamClient_GetISteamParentalSettings(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion) { debug("_ISteamClient_GetISteamParentalSettings(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)"); }
EXTERN_ABI auto _ISteamUser_GetHSteamUser() { debug("_ISteamUser_GetHSteamUser()"); }
EXTERN_ABI auto _ISteamUser_BLoggedOn() { debug("_ISteamUser_BLoggedOn()"); }
EXTERN_ABI auto _ISteamUser_GetSteamID() { debug("_ISteamUser_GetSteamID()"); }
EXTERN_ABI auto _ISteamUser_InitiateGameConnection(void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure) { debug("_ISteamUser_InitiateGameConnection(void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)"); }
EXTERN_ABI auto _ISteamUser_TerminateGameConnection(uint32 unIPServer, uint16 usPortServer) { debug("_ISteamUser_TerminateGameConnection(uint32 unIPServer, uint16 usPortServer)"); }
EXTERN_ABI auto _ISteamUser_TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo) { debug("_ISteamUser_TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)"); }
EXTERN_ABI auto _ISteamUser_GetUserDataFolder(char * pchBuffer, int cubBuffer) { debug("_ISteamUser_GetUserDataFolder(char * pchBuffer, int cubBuffer)"); }
EXTERN_ABI auto _ISteamUser_StartVoiceRecording() { debug("_ISteamUser_StartVoiceRecording()"); }
EXTERN_ABI auto _ISteamUser_StopVoiceRecording() { debug("_ISteamUser_StopVoiceRecording()"); }
EXTERN_ABI auto _ISteamUser_GetAvailableVoice(uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) { debug("_ISteamUser_GetAvailableVoice(uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)"); }
EXTERN_ABI auto _ISteamUser_GetVoice(bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated) { debug("_ISteamUser_GetVoice(bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)"); }
EXTERN_ABI auto _ISteamUser_DecompressVoice(const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate) { debug("_ISteamUser_DecompressVoice(const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)"); }
EXTERN_ABI auto _ISteamUser_GetVoiceOptimalSampleRate() { debug("_ISteamUser_GetVoiceOptimalSampleRate()"); }
EXTERN_ABI auto _ISteamUser_GetAuthSessionTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket) { debug("_ISteamUser_GetAuthSessionTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket)"); }
EXTERN_ABI auto _ISteamUser_BeginAuthSession(const void * pAuthTicket, int cbAuthTicket, CSteamID steamID) { debug("_ISteamUser_BeginAuthSession(const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)"); }
EXTERN_ABI auto _ISteamUser_EndAuthSession(CSteamID steamID) { debug("_ISteamUser_EndAuthSession(CSteamID steamID)"); }
EXTERN_ABI auto _ISteamUser_CancelAuthTicket(HAuthTicket hAuthTicket) { debug("_ISteamUser_CancelAuthTicket(HAuthTicket hAuthTicket)"); }
EXTERN_ABI auto _ISteamUser_UserHasLicenseForApp(CSteamID steamID, AppId_t appID) { debug("_ISteamUser_UserHasLicenseForApp(CSteamID steamID, AppId_t appID)"); }
EXTERN_ABI auto _ISteamUser_BIsBehindNAT() { debug("_ISteamUser_BIsBehindNAT()"); }
EXTERN_ABI auto _ISteamUser_AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer) { debug("_ISteamUser_AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)"); }
EXTERN_ABI auto _ISteamUser_RequestEncryptedAppTicket(void * pDataToInclude, int cbDataToInclude) { debug("_ISteamUser_RequestEncryptedAppTicket(void * pDataToInclude, int cbDataToInclude)"); }
EXTERN_ABI auto _ISteamUser_GetEncryptedAppTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket) { debug("_ISteamUser_GetEncryptedAppTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket)"); }
EXTERN_ABI auto _ISteamUser_GetGameBadgeLevel(int nSeries, bool bFoil) { debug("_ISteamUser_GetGameBadgeLevel(int nSeries, bool bFoil)"); }
EXTERN_ABI auto _ISteamUser_GetPlayerSteamLevel() { debug("_ISteamUser_GetPlayerSteamLevel()"); }
EXTERN_ABI auto _ISteamUser_RequestStoreAuthURL(const char * pchRedirectURL) { debug("_ISteamUser_RequestStoreAuthURL(const char * pchRedirectURL)"); }
EXTERN_ABI auto _ISteamUser_BIsPhoneVerified() { debug("_ISteamUser_BIsPhoneVerified()"); }
EXTERN_ABI auto _ISteamUser_BIsTwoFactorEnabled() { debug("_ISteamUser_BIsTwoFactorEnabled()"); }
EXTERN_ABI auto _ISteamUser_BIsPhoneIdentifying() { debug("_ISteamUser_BIsPhoneIdentifying()"); }
EXTERN_ABI auto _ISteamUser_BIsPhoneRequiringVerification() { debug("_ISteamUser_BIsPhoneRequiringVerification()"); }
EXTERN_ABI auto _ISteamFriends_GetPersonaName() { debug("_ISteamFriends_GetPersonaName()"); }
EXTERN_ABI auto _ISteamFriends_SetPersonaName(const char * pchPersonaName) { debug("_ISteamFriends_SetPersonaName(const char * pchPersonaName)"); }
EXTERN_ABI auto _ISteamFriends_GetPersonaState() { debug("_ISteamFriends_GetPersonaState()"); }
EXTERN_ABI auto _ISteamFriends_GetFriendCount(int iFriendFlags) { debug("_ISteamFriends_GetFriendCount(int iFriendFlags)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendByIndex(int iFriend, int iFriendFlags) { debug("_ISteamFriends_GetFriendByIndex(int iFriend, int iFriendFlags)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendRelationship(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendRelationship(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendPersonaState(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendPersonaState(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendPersonaName(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendPersonaName(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo) { debug("_ISteamFriends_GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName) { debug("_ISteamFriends_GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendSteamLevel(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendSteamLevel(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetPlayerNickname(CSteamID steamIDPlayer) { debug("_ISteamFriends_GetPlayerNickname(CSteamID steamIDPlayer)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendsGroupCount() { debug("_ISteamFriends_GetFriendsGroupCount()"); }
EXTERN_ABI auto _ISteamFriends_GetFriendsGroupIDByIndex(int iFG) { debug("_ISteamFriends_GetFriendsGroupIDByIndex(int iFG)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendsGroupName(FriendsGroupID_t friendsGroupID) { debug("_ISteamFriends_GetFriendsGroupName(FriendsGroupID_t friendsGroupID)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) { debug("_ISteamFriends_GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID * pOutSteamIDMembers, int nMembersCount) { debug("_ISteamFriends_GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID * pOutSteamIDMembers, int nMembersCount)"); }
EXTERN_ABI auto _ISteamFriends_HasFriend(CSteamID steamIDFriend, int iFriendFlags) { debug("_ISteamFriends_HasFriend(CSteamID steamIDFriend, int iFriendFlags)"); }
EXTERN_ABI auto _ISteamFriends_GetClanCount() { debug("_ISteamFriends_GetClanCount()"); }
EXTERN_ABI auto _ISteamFriends_GetClanByIndex(int iClan) { debug("_ISteamFriends_GetClanByIndex(int iClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanName(CSteamID steamIDClan) { debug("_ISteamFriends_GetClanName(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanTag(CSteamID steamIDClan) { debug("_ISteamFriends_GetClanTag(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanActivityCounts(CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting) { debug("_ISteamFriends_GetClanActivityCounts(CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)"); }
EXTERN_ABI auto _ISteamFriends_DownloadClanActivityCounts(CSteamID * psteamIDClans, int cClansToRequest) { debug("_ISteamFriends_DownloadClanActivityCounts(CSteamID * psteamIDClans, int cClansToRequest)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendCountFromSource(CSteamID steamIDSource) { debug("_ISteamFriends_GetFriendCountFromSource(CSteamID steamIDSource)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend) { debug("_ISteamFriends_GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend)"); }
EXTERN_ABI auto _ISteamFriends_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource) { debug("_ISteamFriends_IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource)"); }
EXTERN_ABI auto _ISteamFriends_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking) { debug("_ISteamFriends_SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking)"); }
EXTERN_ABI auto _ISteamFriends_ActivateGameOverlay(const char * pchDialog) { debug("_ISteamFriends_ActivateGameOverlay(const char * pchDialog)"); }
EXTERN_ABI auto _ISteamFriends_ActivateGameOverlayToUser(const char * pchDialog, CSteamID steamID) { debug("_ISteamFriends_ActivateGameOverlayToUser(const char * pchDialog, CSteamID steamID)"); }
EXTERN_ABI auto _ISteamFriends_ActivateGameOverlayToWebPage(const char * pchURL) { debug("_ISteamFriends_ActivateGameOverlayToWebPage(const char * pchURL)"); }
EXTERN_ABI auto _ISteamFriends_ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) { debug("_ISteamFriends_ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag)"); }
EXTERN_ABI auto _ISteamFriends_SetPlayedWith(CSteamID steamIDUserPlayedWith) { debug("_ISteamFriends_SetPlayedWith(CSteamID steamIDUserPlayedWith)"); }
EXTERN_ABI auto _ISteamFriends_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) { debug("_ISteamFriends_ActivateGameOverlayInviteDialog(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamFriends_GetSmallFriendAvatar(CSteamID steamIDFriend) { debug("_ISteamFriends_GetSmallFriendAvatar(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetMediumFriendAvatar(CSteamID steamIDFriend) { debug("_ISteamFriends_GetMediumFriendAvatar(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetLargeFriendAvatar(CSteamID steamIDFriend) { debug("_ISteamFriends_GetLargeFriendAvatar(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly) { debug("_ISteamFriends_RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly)"); }
EXTERN_ABI auto _ISteamFriends_RequestClanOfficerList(CSteamID steamIDClan) { debug("_ISteamFriends_RequestClanOfficerList(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanOwner(CSteamID steamIDClan) { debug("_ISteamFriends_GetClanOwner(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanOfficerCount(CSteamID steamIDClan) { debug("_ISteamFriends_GetClanOfficerCount(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer) { debug("_ISteamFriends_GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer)"); }
EXTERN_ABI auto _ISteamFriends_GetUserRestrictions() { debug("_ISteamFriends_GetUserRestrictions()"); }
EXTERN_ABI auto _ISteamFriends_SetRichPresence(const char * pchKey, const char * pchValue) { debug("_ISteamFriends_SetRichPresence(const char * pchKey, const char * pchValue)"); }
EXTERN_ABI auto _ISteamFriends_ClearRichPresence() { debug("_ISteamFriends_ClearRichPresence()"); }
EXTERN_ABI auto _ISteamFriends_GetFriendRichPresence(CSteamID steamIDFriend, const char * pchKey) { debug("_ISteamFriends_GetFriendRichPresence(CSteamID steamIDFriend, const char * pchKey)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendRichPresenceKeyCount(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey) { debug("_ISteamFriends_GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey)"); }
EXTERN_ABI auto _ISteamFriends_RequestFriendRichPresence(CSteamID steamIDFriend) { debug("_ISteamFriends_RequestFriendRichPresence(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_InviteUserToGame(CSteamID steamIDFriend, const char * pchConnectString) { debug("_ISteamFriends_InviteUserToGame(CSteamID steamIDFriend, const char * pchConnectString)"); }
EXTERN_ABI auto _ISteamFriends_GetCoplayFriendCount() { debug("_ISteamFriends_GetCoplayFriendCount()"); }
EXTERN_ABI auto _ISteamFriends_GetCoplayFriend(int iCoplayFriend) { debug("_ISteamFriends_GetCoplayFriend(int iCoplayFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendCoplayTime(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendCoplayTime(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendCoplayGame(CSteamID steamIDFriend) { debug("_ISteamFriends_GetFriendCoplayGame(CSteamID steamIDFriend)"); }
EXTERN_ABI auto _ISteamFriends_JoinClanChatRoom(CSteamID steamIDClan) { debug("_ISteamFriends_JoinClanChatRoom(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_LeaveClanChatRoom(CSteamID steamIDClan) { debug("_ISteamFriends_LeaveClanChatRoom(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetClanChatMemberCount(CSteamID steamIDClan) { debug("_ISteamFriends_GetClanChatMemberCount(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_GetChatMemberByIndex(CSteamID steamIDClan, int iUser) { debug("_ISteamFriends_GetChatMemberByIndex(CSteamID steamIDClan, int iUser)"); }
EXTERN_ABI auto _ISteamFriends_SendClanChatMessage(CSteamID steamIDClanChat, const char * pchText) { debug("_ISteamFriends_SendClanChatMessage(CSteamID steamIDClanChat, const char * pchText)"); }
EXTERN_ABI auto _ISteamFriends_GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter) { debug("_ISteamFriends_GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter)"); }
EXTERN_ABI auto _ISteamFriends_IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser) { debug("_ISteamFriends_IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser)"); }
EXTERN_ABI auto _ISteamFriends_IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) { debug("_ISteamFriends_IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat)"); }
EXTERN_ABI auto _ISteamFriends_OpenClanChatWindowInSteam(CSteamID steamIDClanChat) { debug("_ISteamFriends_OpenClanChatWindowInSteam(CSteamID steamIDClanChat)"); }
EXTERN_ABI auto _ISteamFriends_CloseClanChatWindowInSteam(CSteamID steamIDClanChat) { debug("_ISteamFriends_CloseClanChatWindowInSteam(CSteamID steamIDClanChat)"); }
EXTERN_ABI auto _ISteamFriends_SetListenForFriendsMessages(bool bInterceptEnabled) { debug("_ISteamFriends_SetListenForFriendsMessages(bool bInterceptEnabled)"); }
EXTERN_ABI auto _ISteamFriends_ReplyToFriendMessage(CSteamID steamIDFriend, const char * pchMsgToSend) { debug("_ISteamFriends_ReplyToFriendMessage(CSteamID steamIDFriend, const char * pchMsgToSend)"); }
EXTERN_ABI auto _ISteamFriends_GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType) { debug("_ISteamFriends_GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)"); }
EXTERN_ABI auto _ISteamFriends_GetFollowerCount(CSteamID steamID) { debug("_ISteamFriends_GetFollowerCount(CSteamID steamID)"); }
EXTERN_ABI auto _ISteamFriends_IsFollowing(CSteamID steamID) { debug("_ISteamFriends_IsFollowing(CSteamID steamID)"); }
EXTERN_ABI auto _ISteamFriends_EnumerateFollowingList(uint32 unStartIndex) { debug("_ISteamFriends_EnumerateFollowingList(uint32 unStartIndex)"); }
EXTERN_ABI auto _ISteamFriends_IsClanPublic(CSteamID steamIDClan) { debug("_ISteamFriends_IsClanPublic(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamFriends_IsClanOfficialGameGroup(CSteamID steamIDClan) { debug("_ISteamFriends_IsClanOfficialGameGroup(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamUtils_GetSecondsSinceAppActive() { debug("_ISteamUtils_GetSecondsSinceAppActive()"); }
EXTERN_ABI auto _ISteamUtils_GetSecondsSinceComputerActive() { debug("_ISteamUtils_GetSecondsSinceComputerActive()"); }
EXTERN_ABI auto _ISteamUtils_GetConnectedUniverse() { debug("_ISteamUtils_GetConnectedUniverse()"); }
EXTERN_ABI auto _ISteamUtils_GetServerRealTime() { debug("_ISteamUtils_GetServerRealTime()"); }
EXTERN_ABI auto _ISteamUtils_GetIPCountry() { debug("_ISteamUtils_GetIPCountry()"); }
EXTERN_ABI auto _ISteamUtils_GetImageSize(int iImage, uint32 * pnWidth, uint32 * pnHeight) { debug("_ISteamUtils_GetImageSize(int iImage, uint32 * pnWidth, uint32 * pnHeight)"); }
EXTERN_ABI auto _ISteamUtils_GetImageRGBA(int iImage, uint8 * pubDest, int nDestBufferSize) { debug("_ISteamUtils_GetImageRGBA(int iImage, uint8 * pubDest, int nDestBufferSize)"); }
EXTERN_ABI auto _ISteamUtils_GetCSERIPPort(uint32 * unIP, uint16 * usPort) { debug("_ISteamUtils_GetCSERIPPort(uint32 * unIP, uint16 * usPort)"); }
EXTERN_ABI auto _ISteamUtils_GetCurrentBatteryPower() { debug("_ISteamUtils_GetCurrentBatteryPower()"); }
EXTERN_ABI auto _ISteamUtils_GetAppID() { debug("_ISteamUtils_GetAppID()"); }
EXTERN_ABI auto _ISteamUtils_SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition) { debug("_ISteamUtils_SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition)"); }
EXTERN_ABI auto _ISteamUtils_IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool * pbFailed) { debug("_ISteamUtils_IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool * pbFailed)"); }
EXTERN_ABI auto _ISteamUtils_GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) { debug("_ISteamUtils_GetAPICallFailureReason(SteamAPICall_t hSteamAPICall)"); }
EXTERN_ABI auto _ISteamUtils_GetAPICallResult(SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed) { debug("_ISteamUtils_GetAPICallResult(SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)"); }
EXTERN_ABI auto _ISteamUtils_GetIPCCallCount() { debug("_ISteamUtils_GetIPCCallCount()"); }
EXTERN_ABI auto _ISteamUtils_SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) { debug("_ISteamUtils_SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction)"); }
EXTERN_ABI auto _ISteamUtils_IsOverlayEnabled() { debug("_ISteamUtils_IsOverlayEnabled()"); }
EXTERN_ABI auto _ISteamUtils_BOverlayNeedsPresent() { debug("_ISteamUtils_BOverlayNeedsPresent()"); }
EXTERN_ABI auto _ISteamUtils_CheckFileSignature(const char * szFileName) { debug("_ISteamUtils_CheckFileSignature(const char * szFileName)"); }
EXTERN_ABI auto _ISteamUtils_ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText) { debug("_ISteamUtils_ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText)"); }
EXTERN_ABI auto _ISteamUtils_GetEnteredGamepadTextLength() { debug("_ISteamUtils_GetEnteredGamepadTextLength()"); }
EXTERN_ABI auto _ISteamUtils_GetEnteredGamepadTextInput(char * pchText, uint32 cchText) { debug("_ISteamUtils_GetEnteredGamepadTextInput(char * pchText, uint32 cchText)"); }
EXTERN_ABI auto _ISteamUtils_GetSteamUILanguage() { debug("_ISteamUtils_GetSteamUILanguage()"); }
EXTERN_ABI auto _ISteamUtils_IsSteamRunningInVR() { debug("_ISteamUtils_IsSteamRunningInVR()"); }
EXTERN_ABI auto _ISteamUtils_SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset) { debug("_ISteamUtils_SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset)"); }
EXTERN_ABI auto _ISteamUtils_IsSteamInBigPictureMode() { debug("_ISteamUtils_IsSteamInBigPictureMode()"); }
EXTERN_ABI auto _ISteamUtils_StartVRDashboard() { debug("_ISteamUtils_StartVRDashboard()"); }
EXTERN_ABI auto _ISteamUtils_IsVRHeadsetStreamingEnabled() { debug("_ISteamUtils_IsVRHeadsetStreamingEnabled()"); }
EXTERN_ABI auto _ISteamUtils_SetVRHeadsetStreamingEnabled(bool bEnabled) { debug("_ISteamUtils_SetVRHeadsetStreamingEnabled(bool bEnabled)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetFavoriteGameCount() { debug("_ISteamMatchmaking_GetFavoriteGameCount()"); }
EXTERN_ABI auto _ISteamMatchmaking_GetFavoriteGame(int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer) { debug("_ISteamMatchmaking_GetFavoriteGame(int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer) { debug("_ISteamMatchmaking_AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)"); }
EXTERN_ABI auto _ISteamMatchmaking_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags) { debug("_ISteamMatchmaking_RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)"); }
EXTERN_ABI auto _ISteamMatchmaking_RequestLobbyList() { debug("_ISteamMatchmaking_RequestLobbyList()"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListStringFilter(const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType) { debug("_ISteamMatchmaking_AddRequestLobbyListStringFilter(const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListNumericalFilter(const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType) { debug("_ISteamMatchmaking_AddRequestLobbyListNumericalFilter(const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListNearValueFilter(const char * pchKeyToMatch, int nValueToBeCloseTo) { debug("_ISteamMatchmaking_AddRequestLobbyListNearValueFilter(const char * pchKeyToMatch, int nValueToBeCloseTo)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable) { debug("_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter) { debug("_ISteamMatchmaking_AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListResultCountFilter(int cMaxResults) { debug("_ISteamMatchmaking_AddRequestLobbyListResultCountFilter(int cMaxResults)"); }
EXTERN_ABI auto _ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyByIndex(int iLobby) { debug("_ISteamMatchmaking_GetLobbyByIndex(int iLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_CreateLobby(ELobbyType eLobbyType, int cMaxMembers) { debug("_ISteamMatchmaking_CreateLobby(ELobbyType eLobbyType, int cMaxMembers)"); }
EXTERN_ABI auto _ISteamMatchmaking_JoinLobby(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_JoinLobby(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_LeaveLobby(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_LeaveLobby(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee) { debug("_ISteamMatchmaking_InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetNumLobbyMembers(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_GetNumLobbyMembers(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember) { debug("_ISteamMatchmaking_GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyData(CSteamID steamIDLobby, const char * pchKey) { debug("_ISteamMatchmaking_GetLobbyData(CSteamID steamIDLobby, const char * pchKey)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyData(CSteamID steamIDLobby, const char * pchKey, const char * pchValue) { debug("_ISteamMatchmaking_SetLobbyData(CSteamID steamIDLobby, const char * pchKey, const char * pchValue)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyDataCount(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_GetLobbyDataCount(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize) { debug("_ISteamMatchmaking_GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)"); }
EXTERN_ABI auto _ISteamMatchmaking_DeleteLobbyData(CSteamID steamIDLobby, const char * pchKey) { debug("_ISteamMatchmaking_DeleteLobbyData(CSteamID steamIDLobby, const char * pchKey)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey) { debug("_ISteamMatchmaking_GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyMemberData(CSteamID steamIDLobby, const char * pchKey, const char * pchValue) { debug("_ISteamMatchmaking_SetLobbyMemberData(CSteamID steamIDLobby, const char * pchKey, const char * pchValue)"); }
EXTERN_ABI auto _ISteamMatchmaking_SendLobbyChatMsg(CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody) { debug("_ISteamMatchmaking_SendLobbyChatMsg(CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType) { debug("_ISteamMatchmaking_GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)"); }
EXTERN_ABI auto _ISteamMatchmaking_RequestLobbyData(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_RequestLobbyData(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer) { debug("_ISteamMatchmaking_SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyGameServer(CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer) { debug("_ISteamMatchmaking_GetLobbyGameServer(CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers) { debug("_ISteamMatchmaking_SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyMemberLimit(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_GetLobbyMemberLimit(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType) { debug("_ISteamMatchmaking_SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable) { debug("_ISteamMatchmaking_SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable)"); }
EXTERN_ABI auto _ISteamMatchmaking_GetLobbyOwner(CSteamID steamIDLobby) { debug("_ISteamMatchmaking_GetLobbyOwner(CSteamID steamIDLobby)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner) { debug("_ISteamMatchmaking_SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner)"); }
EXTERN_ABI auto _ISteamMatchmaking_SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent) { debug("_ISteamMatchmaking_SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent)"); }
EXTERN_ABI auto _ISteamMatchmakingServerListResponse_ServerResponded(HServerListRequest hRequest, int iServer) { debug("_ISteamMatchmakingServerListResponse_ServerResponded(HServerListRequest hRequest, int iServer)"); }
EXTERN_ABI auto _ISteamMatchmakingServerListResponse_ServerFailedToRespond(HServerListRequest hRequest, int iServer) { debug("_ISteamMatchmakingServerListResponse_ServerFailedToRespond(HServerListRequest hRequest, int iServer)"); }
EXTERN_ABI auto _ISteamMatchmakingServerListResponse_RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response) { debug("_ISteamMatchmakingServerListResponse_RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response)"); }
EXTERN_ABI auto _ISteamMatchmakingPingResponse_ServerResponded(gameserveritem_t & server) { debug("_ISteamMatchmakingPingResponse_ServerResponded(gameserveritem_t & server)"); }
EXTERN_ABI auto _ISteamMatchmakingPingResponse_ServerFailedToRespond() { debug("_ISteamMatchmakingPingResponse_ServerFailedToRespond()"); }
EXTERN_ABI auto _ISteamMatchmakingPlayersResponse_AddPlayerToList(const char * pchName, int nScore, float flTimePlayed) { debug("_ISteamMatchmakingPlayersResponse_AddPlayerToList(const char * pchName, int nScore, float flTimePlayed)"); }
EXTERN_ABI auto _ISteamMatchmakingPlayersResponse_PlayersFailedToRespond() { debug("_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond()"); }
EXTERN_ABI auto _ISteamMatchmakingPlayersResponse_PlayersRefreshComplete() { debug("_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete()"); }
EXTERN_ABI auto _ISteamMatchmakingRulesResponse_RulesResponded(const char * pchRule, const char * pchValue) { debug("_ISteamMatchmakingRulesResponse_RulesResponded(const char * pchRule, const char * pchValue)"); }
EXTERN_ABI auto _ISteamMatchmakingRulesResponse_RulesFailedToRespond() { debug("_ISteamMatchmakingRulesResponse_RulesFailedToRespond()"); }
EXTERN_ABI auto _ISteamMatchmakingRulesResponse_RulesRefreshComplete() { debug("_ISteamMatchmakingRulesResponse_RulesRefreshComplete()"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_ReleaseRequest(HServerListRequest hServerListRequest) { debug("_ISteamMatchmakingServers_ReleaseRequest(HServerListRequest hServerListRequest)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_GetServerDetails(HServerListRequest hRequest, int iServer) { debug("_ISteamMatchmakingServers_GetServerDetails(HServerListRequest hRequest, int iServer)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_CancelQuery(HServerListRequest hRequest) { debug("_ISteamMatchmakingServers_CancelQuery(HServerListRequest hRequest)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RefreshQuery(HServerListRequest hRequest) { debug("_ISteamMatchmakingServers_RefreshQuery(HServerListRequest hRequest)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_IsRefreshing(HServerListRequest hRequest) { debug("_ISteamMatchmakingServers_IsRefreshing(HServerListRequest hRequest)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_GetServerCount(HServerListRequest hRequest) { debug("_ISteamMatchmakingServers_GetServerCount(HServerListRequest hRequest)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_RefreshServer(HServerListRequest hRequest, int iServer) { debug("_ISteamMatchmakingServers_RefreshServer(HServerListRequest hRequest, int iServer)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse * pRequestServersResponse) { debug("_ISteamMatchmakingServers_ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse * pRequestServersResponse)"); }
EXTERN_ABI auto _ISteamMatchmakingServers_CancelServerQuery(HServerQuery hServerQuery) { debug("_ISteamMatchmakingServers_CancelServerQuery(HServerQuery hServerQuery)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileWrite(const char * pchFile, const void * pvData, int32 cubData) { debug("_ISteamRemoteStorage_FileWrite(const char * pchFile, const void * pvData, int32 cubData)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileRead(const char * pchFile, void * pvData, int32 cubDataToRead) { debug("_ISteamRemoteStorage_FileRead(const char * pchFile, void * pvData, int32 cubDataToRead)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileWriteAsync(const char * pchFile, const void * pvData, uint32 cubData) { debug("_ISteamRemoteStorage_FileWriteAsync(const char * pchFile, const void * pvData, uint32 cubData)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileReadAsync(const char * pchFile, uint32 nOffset, uint32 cubToRead) { debug("_ISteamRemoteStorage_FileReadAsync(const char * pchFile, uint32 nOffset, uint32 cubToRead)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileReadAsyncComplete(SteamAPICall_t hReadCall, void * pvBuffer, uint32 cubToRead) { debug("_ISteamRemoteStorage_FileReadAsyncComplete(SteamAPICall_t hReadCall, void * pvBuffer, uint32 cubToRead)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileForget(const char * pchFile) { debug("_ISteamRemoteStorage_FileForget(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileDelete(const char * pchFile) { debug("_ISteamRemoteStorage_FileDelete(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileShare(const char * pchFile) { debug("_ISteamRemoteStorage_FileShare(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_SetSyncPlatforms(const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) { debug("_ISteamRemoteStorage_SetSyncPlatforms(const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileWriteStreamOpen(const char * pchFile) { debug("_ISteamRemoteStorage_FileWriteStreamOpen(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData) { debug("_ISteamRemoteStorage_FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) { debug("_ISteamRemoteStorage_FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) { debug("_ISteamRemoteStorage_FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FileExists(const char * pchFile) { debug("_ISteamRemoteStorage_FileExists(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_FilePersisted(const char * pchFile) { debug("_ISteamRemoteStorage_FilePersisted(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetFileSize(const char * pchFile) { debug("_ISteamRemoteStorage_GetFileSize(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetFileTimestamp(const char * pchFile) { debug("_ISteamRemoteStorage_GetFileTimestamp(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetSyncPlatforms(const char * pchFile) { debug("_ISteamRemoteStorage_GetSyncPlatforms(const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetFileCount() { debug("_ISteamRemoteStorage_GetFileCount()"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetFileNameAndSize(int iFile, int32 * pnFileSizeInBytes) { debug("_ISteamRemoteStorage_GetFileNameAndSize(int iFile, int32 * pnFileSizeInBytes)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetQuota(uint64 * pnTotalBytes, uint64 * puAvailableBytes) { debug("_ISteamRemoteStorage_GetQuota(uint64 * pnTotalBytes, uint64 * puAvailableBytes)"); }
EXTERN_ABI auto _ISteamRemoteStorage_IsCloudEnabledForAccount() { debug("_ISteamRemoteStorage_IsCloudEnabledForAccount()"); }
EXTERN_ABI auto _ISteamRemoteStorage_IsCloudEnabledForApp() { debug("_ISteamRemoteStorage_IsCloudEnabledForApp()"); }
EXTERN_ABI auto _ISteamRemoteStorage_SetCloudEnabledForApp(bool bEnabled) { debug("_ISteamRemoteStorage_SetCloudEnabledForApp(bool bEnabled)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UGCDownload(UGCHandle_t hContent, uint32 unPriority) { debug("_ISteamRemoteStorage_UGCDownload(UGCHandle_t hContent, uint32 unPriority)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetUGCDownloadProgress(UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected) { debug("_ISteamRemoteStorage_GetUGCDownloadProgress(UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetUGCDetails(UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner) { debug("_ISteamRemoteStorage_GetUGCDetails(UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UGCRead(UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction) { debug("_ISteamRemoteStorage_UGCRead(UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetCachedUGCCount() { debug("_ISteamRemoteStorage_GetCachedUGCCount()"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetCachedUGCHandle(int32 iCachedContent) { debug("_ISteamRemoteStorage_GetCachedUGCHandle(int32 iCachedContent)"); }
EXTERN_ABI auto _ISteamRemoteStorage_PublishWorkshopFile(const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType) { debug("_ISteamRemoteStorage_PublishWorkshopFile(const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)"); }
EXTERN_ABI auto _ISteamRemoteStorage_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) { debug("_ISteamRemoteStorage_CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, const char * pchFile) { debug("_ISteamRemoteStorage_UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, const char * pchFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile) { debug("_ISteamRemoteStorage_UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, const char * pchTitle) { debug("_ISteamRemoteStorage_UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, const char * pchDescription) { debug("_ISteamRemoteStorage_UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility) { debug("_ISteamRemoteStorage_UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags) { debug("_ISteamRemoteStorage_UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags)"); }
EXTERN_ABI auto _ISteamRemoteStorage_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) { debug("_ISteamRemoteStorage_CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld) { debug("_ISteamRemoteStorage_GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)"); }
EXTERN_ABI auto _ISteamRemoteStorage_DeletePublishedFile(PublishedFileId_t unPublishedFileId) { debug("_ISteamRemoteStorage_DeletePublishedFile(PublishedFileId_t unPublishedFileId)"); }
EXTERN_ABI auto _ISteamRemoteStorage_EnumerateUserPublishedFiles(uint32 unStartIndex) { debug("_ISteamRemoteStorage_EnumerateUserPublishedFiles(uint32 unStartIndex)"); }
EXTERN_ABI auto _ISteamRemoteStorage_SubscribePublishedFile(PublishedFileId_t unPublishedFileId) { debug("_ISteamRemoteStorage_SubscribePublishedFile(PublishedFileId_t unPublishedFileId)"); }
EXTERN_ABI auto _ISteamRemoteStorage_EnumerateUserSubscribedFiles(uint32 unStartIndex) { debug("_ISteamRemoteStorage_EnumerateUserSubscribedFiles(uint32 unStartIndex)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) { debug("_ISteamRemoteStorage_UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription) { debug("_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) { debug("_ISteamRemoteStorage_GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) { debug("_ISteamRemoteStorage_UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp)"); }
EXTERN_ABI auto _ISteamRemoteStorage_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) { debug("_ISteamRemoteStorage_GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId)"); }
EXTERN_ABI auto _ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags) { debug("_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags)"); }
EXTERN_ABI auto _ISteamRemoteStorage_PublishVideo(EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags) { debug("_ISteamRemoteStorage_PublishVideo(EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags)"); }
EXTERN_ABI auto _ISteamRemoteStorage_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) { debug("_ISteamRemoteStorage_SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)"); }
EXTERN_ABI auto _ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32 unStartIndex) { debug("_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32 unStartIndex)"); }
EXTERN_ABI auto _ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags) { debug("_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags)"); }
EXTERN_ABI auto _ISteamRemoteStorage_UGCDownloadToLocation(UGCHandle_t hContent, const char * pchLocation, uint32 unPriority) { debug("_ISteamRemoteStorage_UGCDownloadToLocation(UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)"); }
EXTERN_ABI auto _ISteamUserStats_RequestCurrentStats() { debug("_ISteamUserStats_RequestCurrentStats()"); }
EXTERN_ABI auto _ISteamUserStats_GetStat(const char * pchName, int32 * pData) { debug("_ISteamUserStats_GetStat(const char * pchName, int32 * pData)"); }
EXTERN_ABI auto _ISteamUserStats_GetStat_(const char * pchName, float * pData) { debug("_ISteamUserStats_GetStat_(const char * pchName, float * pData)"); }
EXTERN_ABI auto _ISteamUserStats_SetStat(const char * pchName, int32 nData) { debug("_ISteamUserStats_SetStat(const char * pchName, int32 nData)"); }
EXTERN_ABI auto _ISteamUserStats_SetStat_(const char * pchName, float fData) { debug("_ISteamUserStats_SetStat_(const char * pchName, float fData)"); }
EXTERN_ABI auto _ISteamUserStats_UpdateAvgRateStat(const char * pchName, float flCountThisSession, double dSessionLength) { debug("_ISteamUserStats_UpdateAvgRateStat(const char * pchName, float flCountThisSession, double dSessionLength)"); }
EXTERN_ABI auto _ISteamUserStats_GetAchievement(const char * pchName, bool * pbAchieved) { debug("_ISteamUserStats_GetAchievement(const char * pchName, bool * pbAchieved)"); }
EXTERN_ABI auto _ISteamUserStats_SetAchievement(const char * pchName) { debug("_ISteamUserStats_SetAchievement(const char * pchName)"); }
EXTERN_ABI auto _ISteamUserStats_ClearAchievement(const char * pchName) { debug("_ISteamUserStats_ClearAchievement(const char * pchName)"); }
EXTERN_ABI auto _ISteamUserStats_GetAchievementAndUnlockTime(const char * pchName, bool * pbAchieved, uint32 * punUnlockTime) { debug("_ISteamUserStats_GetAchievementAndUnlockTime(const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)"); }
EXTERN_ABI auto _ISteamUserStats_StoreStats() { debug("_ISteamUserStats_StoreStats()"); }
EXTERN_ABI auto _ISteamUserStats_GetAchievementIcon(const char * pchName) { debug("_ISteamUserStats_GetAchievementIcon(const char * pchName)"); }
EXTERN_ABI auto _ISteamUserStats_GetAchievementDisplayAttribute(const char * pchName, const char * pchKey) { debug("_ISteamUserStats_GetAchievementDisplayAttribute(const char * pchName, const char * pchKey)"); }
EXTERN_ABI auto _ISteamUserStats_IndicateAchievementProgress(const char * pchName, uint32 nCurProgress, uint32 nMaxProgress) { debug("_ISteamUserStats_IndicateAchievementProgress(const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)"); }
EXTERN_ABI auto _ISteamUserStats_GetNumAchievements() { debug("_ISteamUserStats_GetNumAchievements()"); }
EXTERN_ABI auto _ISteamUserStats_GetAchievementName(uint32 iAchievement) { debug("_ISteamUserStats_GetAchievementName(uint32 iAchievement)"); }
EXTERN_ABI auto _ISteamUserStats_RequestUserStats(CSteamID steamIDUser) { debug("_ISteamUserStats_RequestUserStats(CSteamID steamIDUser)"); }
EXTERN_ABI auto _ISteamUserStats_GetUserStat(CSteamID steamIDUser, const char * pchName, int32 * pData) { debug("_ISteamUserStats_GetUserStat(CSteamID steamIDUser, const char * pchName, int32 * pData)"); }
EXTERN_ABI auto _ISteamUserStats_GetUserStat_(CSteamID steamIDUser, const char * pchName, float * pData) { debug("_ISteamUserStats_GetUserStat_(CSteamID steamIDUser, const char * pchName, float * pData)"); }
EXTERN_ABI auto _ISteamUserStats_GetUserAchievement(CSteamID steamIDUser, const char * pchName, bool * pbAchieved) { debug("_ISteamUserStats_GetUserAchievement(CSteamID steamIDUser, const char * pchName, bool * pbAchieved)"); }
EXTERN_ABI auto _ISteamUserStats_GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime) { debug("_ISteamUserStats_GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)"); }
EXTERN_ABI auto _ISteamUserStats_ResetAllStats(bool bAchievementsToo) { debug("_ISteamUserStats_ResetAllStats(bool bAchievementsToo)"); }
EXTERN_ABI auto _ISteamUserStats_FindOrCreateLeaderboard(const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType) { debug("_ISteamUserStats_FindOrCreateLeaderboard(const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)"); }
EXTERN_ABI auto _ISteamUserStats_FindLeaderboard(const char * pchLeaderboardName) { debug("_ISteamUserStats_FindLeaderboard(const char * pchLeaderboardName)"); }
EXTERN_ABI auto _ISteamUserStats_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) { debug("_ISteamUserStats_GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard)"); }
EXTERN_ABI auto _ISteamUserStats_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) { debug("_ISteamUserStats_GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard)"); }
EXTERN_ABI auto _ISteamUserStats_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) { debug("_ISteamUserStats_GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard)"); }
EXTERN_ABI auto _ISteamUserStats_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) { debug("_ISteamUserStats_GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard)"); }
EXTERN_ABI auto _ISteamUserStats_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) { debug("_ISteamUserStats_DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)"); }
EXTERN_ABI auto _ISteamUserStats_DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers) { debug("_ISteamUserStats_DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers)"); }
EXTERN_ABI auto _ISteamUserStats_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax) { debug("_ISteamUserStats_GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)"); }
EXTERN_ABI auto _ISteamUserStats_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount) { debug("_ISteamUserStats_UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)"); }
EXTERN_ABI auto _ISteamUserStats_AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC) { debug("_ISteamUserStats_AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)"); }
EXTERN_ABI auto _ISteamUserStats_GetNumberOfCurrentPlayers() { debug("_ISteamUserStats_GetNumberOfCurrentPlayers()"); }
EXTERN_ABI auto _ISteamUserStats_RequestGlobalAchievementPercentages() { debug("_ISteamUserStats_RequestGlobalAchievementPercentages()"); }
EXTERN_ABI auto _ISteamUserStats_GetMostAchievedAchievementInfo(char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved) { debug("_ISteamUserStats_GetMostAchievedAchievementInfo(char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)"); }
EXTERN_ABI auto _ISteamUserStats_GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved) { debug("_ISteamUserStats_GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)"); }
EXTERN_ABI auto _ISteamUserStats_GetAchievementAchievedPercent(const char * pchName, float * pflPercent) { debug("_ISteamUserStats_GetAchievementAchievedPercent(const char * pchName, float * pflPercent)"); }
EXTERN_ABI auto _ISteamUserStats_RequestGlobalStats(int nHistoryDays) { debug("_ISteamUserStats_RequestGlobalStats(int nHistoryDays)"); }
EXTERN_ABI auto _ISteamUserStats_GetGlobalStat(const char * pchStatName, int64 * pData) { debug("_ISteamUserStats_GetGlobalStat(const char * pchStatName, int64 * pData)"); }
EXTERN_ABI auto _ISteamUserStats_GetGlobalStat_(const char * pchStatName, double * pData) { debug("_ISteamUserStats_GetGlobalStat_(const char * pchStatName, double * pData)"); }
EXTERN_ABI auto _ISteamUserStats_GetGlobalStatHistory(const char * pchStatName, int64 * pData, uint32 cubData) { debug("_ISteamUserStats_GetGlobalStatHistory(const char * pchStatName, int64 * pData, uint32 cubData)"); }
EXTERN_ABI auto _ISteamUserStats_GetGlobalStatHistory_(const char * pchStatName, double * pData, uint32 cubData) { debug("_ISteamUserStats_GetGlobalStatHistory_(const char * pchStatName, double * pData, uint32 cubData)"); }
EXTERN_ABI auto _ISteamApps_BIsSubscribed() { debug("_ISteamApps_BIsSubscribed()"); }
EXTERN_ABI auto _ISteamApps_BIsLowViolence() { debug("_ISteamApps_BIsLowViolence()"); }
EXTERN_ABI auto _ISteamApps_BIsCybercafe() { debug("_ISteamApps_BIsCybercafe()"); }
EXTERN_ABI auto _ISteamApps_BIsVACBanned() { debug("_ISteamApps_BIsVACBanned()"); }
EXTERN_ABI auto _ISteamApps_GetCurrentGameLanguage() { debug("_ISteamApps_GetCurrentGameLanguage()"); }
EXTERN_ABI auto _ISteamApps_GetAvailableGameLanguages() { debug("_ISteamApps_GetAvailableGameLanguages()"); }
EXTERN_ABI auto _ISteamApps_BIsSubscribedApp(AppId_t appID) { debug("_ISteamApps_BIsSubscribedApp(AppId_t appID)"); }
EXTERN_ABI auto _ISteamApps_BIsDlcInstalled(AppId_t appID) { debug("_ISteamApps_BIsDlcInstalled(AppId_t appID)"); }
EXTERN_ABI auto _ISteamApps_GetEarliestPurchaseUnixTime(AppId_t nAppID) { debug("_ISteamApps_GetEarliestPurchaseUnixTime(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamApps_BIsSubscribedFromFreeWeekend() { debug("_ISteamApps_BIsSubscribedFromFreeWeekend()"); }
EXTERN_ABI auto _ISteamApps_GetDLCCount() { debug("_ISteamApps_GetDLCCount()"); }
EXTERN_ABI auto _ISteamApps_BGetDLCDataByIndex(int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize) { debug("_ISteamApps_BGetDLCDataByIndex(int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)"); }
EXTERN_ABI auto _ISteamApps_InstallDLC(AppId_t nAppID) { debug("_ISteamApps_InstallDLC(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamApps_UninstallDLC(AppId_t nAppID) { debug("_ISteamApps_UninstallDLC(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamApps_RequestAppProofOfPurchaseKey(AppId_t nAppID) { debug("_ISteamApps_RequestAppProofOfPurchaseKey(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamApps_GetCurrentBetaName(char * pchName, int cchNameBufferSize) { debug("_ISteamApps_GetCurrentBetaName(char * pchName, int cchNameBufferSize)"); }
EXTERN_ABI auto _ISteamApps_MarkContentCorrupt(bool bMissingFilesOnly) { debug("_ISteamApps_MarkContentCorrupt(bool bMissingFilesOnly)"); }
EXTERN_ABI auto _ISteamApps_GetInstalledDepots(AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots) { debug("_ISteamApps_GetInstalledDepots(AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots)"); }
EXTERN_ABI auto _ISteamApps_GetAppInstallDir(AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize) { debug("_ISteamApps_GetAppInstallDir(AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)"); }
EXTERN_ABI auto _ISteamApps_BIsAppInstalled(AppId_t appID) { debug("_ISteamApps_BIsAppInstalled(AppId_t appID)"); }
EXTERN_ABI auto _ISteamApps_GetAppOwner() { debug("_ISteamApps_GetAppOwner()"); }
EXTERN_ABI auto _ISteamApps_GetLaunchQueryParam(const char * pchKey) { debug("_ISteamApps_GetLaunchQueryParam(const char * pchKey)"); }
EXTERN_ABI auto _ISteamApps_GetDlcDownloadProgress(AppId_t nAppID, uint64 * punBytesDownloaded, uint64 * punBytesTotal) { debug("_ISteamApps_GetDlcDownloadProgress(AppId_t nAppID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)"); }
EXTERN_ABI auto _ISteamApps_GetAppBuildId() { debug("_ISteamApps_GetAppBuildId()"); }
EXTERN_ABI auto _ISteamApps_RequestAllProofOfPurchaseKeys() { debug("_ISteamApps_RequestAllProofOfPurchaseKeys()"); }
EXTERN_ABI auto _ISteamApps_GetFileDetails(const char * pszFileName) { debug("_ISteamApps_GetFileDetails(const char * pszFileName)"); }
EXTERN_ABI auto _ISteamNetworking_SendP2PPacket(CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel) { debug("_ISteamNetworking_SendP2PPacket(CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)"); }
EXTERN_ABI auto _ISteamNetworking_IsP2PPacketAvailable(uint32 * pcubMsgSize, int nChannel) { debug("_ISteamNetworking_IsP2PPacketAvailable(uint32 * pcubMsgSize, int nChannel)"); }
EXTERN_ABI auto _ISteamNetworking_ReadP2PPacket(void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nChannel) { debug("_ISteamNetworking_ReadP2PPacket(void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nChannel)"); }
EXTERN_ABI auto _ISteamNetworking_AcceptP2PSessionWithUser(CSteamID steamIDRemote) { debug("_ISteamNetworking_AcceptP2PSessionWithUser(CSteamID steamIDRemote)"); }
EXTERN_ABI auto _ISteamNetworking_CloseP2PSessionWithUser(CSteamID steamIDRemote) { debug("_ISteamNetworking_CloseP2PSessionWithUser(CSteamID steamIDRemote)"); }
EXTERN_ABI auto _ISteamNetworking_CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel) { debug("_ISteamNetworking_CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel)"); }
EXTERN_ABI auto _ISteamNetworking_GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t * pConnectionState) { debug("_ISteamNetworking_GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t * pConnectionState)"); }
EXTERN_ABI auto _ISteamNetworking_AllowP2PPacketRelay(bool bAllow) { debug("_ISteamNetworking_AllowP2PPacketRelay(bool bAllow)"); }
EXTERN_ABI auto _ISteamNetworking_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay) { debug("_ISteamNetworking_CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay)"); }
EXTERN_ABI auto _ISteamNetworking_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay) { debug("_ISteamNetworking_CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)"); }
EXTERN_ABI auto _ISteamNetworking_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec) { debug("_ISteamNetworking_CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec)"); }
EXTERN_ABI auto _ISteamNetworking_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd) { debug("_ISteamNetworking_DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd)"); }
EXTERN_ABI auto _ISteamNetworking_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd) { debug("_ISteamNetworking_DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)"); }
EXTERN_ABI auto _ISteamNetworking_SendDataOnSocket(SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable) { debug("_ISteamNetworking_SendDataOnSocket(SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)"); }
EXTERN_ABI auto _ISteamNetworking_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 * pcubMsgSize) { debug("_ISteamNetworking_IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 * pcubMsgSize)"); }
EXTERN_ABI auto _ISteamNetworking_RetrieveDataFromSocket(SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize) { debug("_ISteamNetworking_RetrieveDataFromSocket(SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)"); }
EXTERN_ABI auto _ISteamNetworking_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket) { debug("_ISteamNetworking_IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)"); }
EXTERN_ABI auto _ISteamNetworking_RetrieveData(SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket) { debug("_ISteamNetworking_RetrieveData(SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)"); }
EXTERN_ABI auto _ISteamNetworking_GetSocketInfo(SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote) { debug("_ISteamNetworking_GetSocketInfo(SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote)"); }
EXTERN_ABI auto _ISteamNetworking_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort) { debug("_ISteamNetworking_GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort)"); }
EXTERN_ABI auto _ISteamNetworking_GetSocketConnectionType(SNetSocket_t hSocket) { debug("_ISteamNetworking_GetSocketConnectionType(SNetSocket_t hSocket)"); }
EXTERN_ABI auto _ISteamNetworking_GetMaxPacketSize(SNetSocket_t hSocket) { debug("_ISteamNetworking_GetMaxPacketSize(SNetSocket_t hSocket)"); }
EXTERN_ABI auto _ISteamScreenshots_WriteScreenshot(void * pubRGB, uint32 cubRGB, int nWidth, int nHeight) { debug("_ISteamScreenshots_WriteScreenshot(void * pubRGB, uint32 cubRGB, int nWidth, int nHeight)"); }
EXTERN_ABI auto _ISteamScreenshots_AddScreenshotToLibrary(const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight) { debug("_ISteamScreenshots_AddScreenshotToLibrary(const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight)"); }
EXTERN_ABI auto _ISteamScreenshots_TriggerScreenshot() { debug("_ISteamScreenshots_TriggerScreenshot()"); }
EXTERN_ABI auto _ISteamScreenshots_HookScreenshots(bool bHook) { debug("_ISteamScreenshots_HookScreenshots(bool bHook)"); }
EXTERN_ABI auto _ISteamScreenshots_SetLocation(ScreenshotHandle hScreenshot, const char * pchLocation) { debug("_ISteamScreenshots_SetLocation(ScreenshotHandle hScreenshot, const char * pchLocation)"); }
EXTERN_ABI auto _ISteamScreenshots_TagUser(ScreenshotHandle hScreenshot, CSteamID steamID) { debug("_ISteamScreenshots_TagUser(ScreenshotHandle hScreenshot, CSteamID steamID)"); }
EXTERN_ABI auto _ISteamScreenshots_TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID) { debug("_ISteamScreenshots_TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)"); }
EXTERN_ABI auto _ISteamScreenshots_IsScreenshotsHooked() { debug("_ISteamScreenshots_IsScreenshotsHooked()"); }
EXTERN_ABI auto _ISteamScreenshots_AddVRScreenshotToLibrary(EVRScreenshotType eType, const char * pchFilename, const char * pchVRFilename) { debug("_ISteamScreenshots_AddVRScreenshotToLibrary(EVRScreenshotType eType, const char * pchFilename, const char * pchVRFilename)"); }
EXTERN_ABI auto _ISteamMusic_BIsEnabled() { debug("_ISteamMusic_BIsEnabled()"); }
EXTERN_ABI auto _ISteamMusic_BIsPlaying() { debug("_ISteamMusic_BIsPlaying()"); }
EXTERN_ABI auto _ISteamMusic_GetPlaybackStatus() { debug("_ISteamMusic_GetPlaybackStatus()"); }
EXTERN_ABI auto _ISteamMusic_Play() { debug("_ISteamMusic_Play()"); }
EXTERN_ABI auto _ISteamMusic_Pause() { debug("_ISteamMusic_Pause()"); }
EXTERN_ABI auto _ISteamMusic_PlayPrevious() { debug("_ISteamMusic_PlayPrevious()"); }
EXTERN_ABI auto _ISteamMusic_PlayNext() { debug("_ISteamMusic_PlayNext()"); }
EXTERN_ABI auto _ISteamMusic_SetVolume(float flVolume) { debug("_ISteamMusic_SetVolume(float flVolume)"); }
EXTERN_ABI auto _ISteamMusic_GetVolume() { debug("_ISteamMusic_GetVolume()"); }
EXTERN_ABI auto _ISteamMusicRemote_RegisterSteamMusicRemote(const char * pchName) { debug("_ISteamMusicRemote_RegisterSteamMusicRemote(const char * pchName)"); }
EXTERN_ABI auto _ISteamMusicRemote_DeregisterSteamMusicRemote() { debug("_ISteamMusicRemote_DeregisterSteamMusicRemote()"); }
EXTERN_ABI auto _ISteamMusicRemote_BIsCurrentMusicRemote() { debug("_ISteamMusicRemote_BIsCurrentMusicRemote()"); }
EXTERN_ABI auto _ISteamMusicRemote_BActivationSuccess(bool bValue) { debug("_ISteamMusicRemote_BActivationSuccess(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_SetDisplayName(const char * pchDisplayName) { debug("_ISteamMusicRemote_SetDisplayName(const char * pchDisplayName)"); }
EXTERN_ABI auto _ISteamMusicRemote_SetPNGIcon_64x64(void * pvBuffer, uint32 cbBufferLength) { debug("_ISteamMusicRemote_SetPNGIcon_64x64(void * pvBuffer, uint32 cbBufferLength)"); }
EXTERN_ABI auto _ISteamMusicRemote_EnablePlayPrevious(bool bValue) { debug("_ISteamMusicRemote_EnablePlayPrevious(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_EnablePlayNext(bool bValue) { debug("_ISteamMusicRemote_EnablePlayNext(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_EnableShuffled(bool bValue) { debug("_ISteamMusicRemote_EnableShuffled(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_EnableLooped(bool bValue) { debug("_ISteamMusicRemote_EnableLooped(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_EnableQueue(bool bValue) { debug("_ISteamMusicRemote_EnableQueue(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_EnablePlaylists(bool bValue) { debug("_ISteamMusicRemote_EnablePlaylists(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdatePlaybackStatus(AudioPlayback_Status nStatus) { debug("_ISteamMusicRemote_UpdatePlaybackStatus(AudioPlayback_Status nStatus)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdateShuffled(bool bValue) { debug("_ISteamMusicRemote_UpdateShuffled(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdateLooped(bool bValue) { debug("_ISteamMusicRemote_UpdateLooped(bool bValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdateVolume(float flValue) { debug("_ISteamMusicRemote_UpdateVolume(float flValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_CurrentEntryWillChange() { debug("_ISteamMusicRemote_CurrentEntryWillChange()"); }
EXTERN_ABI auto _ISteamMusicRemote_CurrentEntryIsAvailable(bool bAvailable) { debug("_ISteamMusicRemote_CurrentEntryIsAvailable(bool bAvailable)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdateCurrentEntryText(const char * pchText) { debug("_ISteamMusicRemote_UpdateCurrentEntryText(const char * pchText)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(int nValue) { debug("_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(int nValue)"); }
EXTERN_ABI auto _ISteamMusicRemote_UpdateCurrentEntryCoverArt(void * pvBuffer, uint32 cbBufferLength) { debug("_ISteamMusicRemote_UpdateCurrentEntryCoverArt(void * pvBuffer, uint32 cbBufferLength)"); }
EXTERN_ABI auto _ISteamMusicRemote_CurrentEntryDidChange() { debug("_ISteamMusicRemote_CurrentEntryDidChange()"); }
EXTERN_ABI auto _ISteamMusicRemote_QueueWillChange() { debug("_ISteamMusicRemote_QueueWillChange()"); }
EXTERN_ABI auto _ISteamMusicRemote_ResetQueueEntries() { debug("_ISteamMusicRemote_ResetQueueEntries()"); }
EXTERN_ABI auto _ISteamMusicRemote_SetQueueEntry(int nID, int nPosition, const char * pchEntryText) { debug("_ISteamMusicRemote_SetQueueEntry(int nID, int nPosition, const char * pchEntryText)"); }
EXTERN_ABI auto _ISteamMusicRemote_SetCurrentQueueEntry(int nID) { debug("_ISteamMusicRemote_SetCurrentQueueEntry(int nID)"); }
EXTERN_ABI auto _ISteamMusicRemote_QueueDidChange() { debug("_ISteamMusicRemote_QueueDidChange()"); }
EXTERN_ABI auto _ISteamMusicRemote_PlaylistWillChange() { debug("_ISteamMusicRemote_PlaylistWillChange()"); }
EXTERN_ABI auto _ISteamMusicRemote_ResetPlaylistEntries() { debug("_ISteamMusicRemote_ResetPlaylistEntries()"); }
EXTERN_ABI auto _ISteamMusicRemote_SetPlaylistEntry(int nID, int nPosition, const char * pchEntryText) { debug("_ISteamMusicRemote_SetPlaylistEntry(int nID, int nPosition, const char * pchEntryText)"); }
EXTERN_ABI auto _ISteamMusicRemote_SetCurrentPlaylistEntry(int nID) { debug("_ISteamMusicRemote_SetCurrentPlaylistEntry(int nID)"); }
EXTERN_ABI auto _ISteamMusicRemote_PlaylistDidChange() { debug("_ISteamMusicRemote_PlaylistDidChange()"); }
EXTERN_ABI auto _ISteamHTTP_CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char * pchAbsoluteURL) { debug("_ISteamHTTP_CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char * pchAbsoluteURL)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue) { debug("_ISteamHTTP_SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) { debug("_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char * pchHeaderName, const char * pchHeaderValue) { debug("_ISteamHTTP_SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char * pchHeaderName, const char * pchHeaderValue)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char * pchParamName, const char * pchParamValue) { debug("_ISteamHTTP_SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char * pchParamName, const char * pchParamValue)"); }
EXTERN_ABI auto _ISteamHTTP_SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle) { debug("_ISteamHTTP_SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)"); }
EXTERN_ABI auto _ISteamHTTP_SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle) { debug("_ISteamHTTP_SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)"); }
EXTERN_ABI auto _ISteamHTTP_DeferHTTPRequest(HTTPRequestHandle hRequest) { debug("_ISteamHTTP_DeferHTTPRequest(HTTPRequestHandle hRequest)"); }
EXTERN_ABI auto _ISteamHTTP_PrioritizeHTTPRequest(HTTPRequestHandle hRequest) { debug("_ISteamHTTP_PrioritizeHTTPRequest(HTTPRequestHandle hRequest)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char * pchHeaderName, uint32 * unResponseHeaderSize) { debug("_ISteamHTTP_GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char * pchHeaderName, uint32 * unResponseHeaderSize)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char * pchHeaderName, uint8 * pHeaderValueBuffer, uint32 unBufferSize) { debug("_ISteamHTTP_GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char * pchHeaderName, uint8 * pHeaderValueBuffer, uint32 unBufferSize)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 * unBodySize) { debug("_ISteamHTTP_GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 * unBodySize)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 * pBodyDataBuffer, uint32 unBufferSize) { debug("_ISteamHTTP_GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 * pBodyDataBuffer, uint32 unBufferSize)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 * pBodyDataBuffer, uint32 unBufferSize) { debug("_ISteamHTTP_GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 * pBodyDataBuffer, uint32 unBufferSize)"); }
EXTERN_ABI auto _ISteamHTTP_ReleaseHTTPRequest(HTTPRequestHandle hRequest) { debug("_ISteamHTTP_ReleaseHTTPRequest(HTTPRequestHandle hRequest)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float * pflPercentOut) { debug("_ISteamHTTP_GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float * pflPercentOut)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char * pchContentType, uint8 * pubBody, uint32 unBodyLen) { debug("_ISteamHTTP_SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char * pchContentType, uint8 * pubBody, uint32 unBodyLen)"); }
EXTERN_ABI auto _ISteamHTTP_CreateCookieContainer(bool bAllowResponsesToModify) { debug("_ISteamHTTP_CreateCookieContainer(bool bAllowResponsesToModify)"); }
EXTERN_ABI auto _ISteamHTTP_ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer) { debug("_ISteamHTTP_ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer)"); }
EXTERN_ABI auto _ISteamHTTP_SetCookie(HTTPCookieContainerHandle hCookieContainer, const char * pchHost, const char * pchUrl, const char * pchCookie) { debug("_ISteamHTTP_SetCookie(HTTPCookieContainerHandle hCookieContainer, const char * pchHost, const char * pchUrl, const char * pchCookie)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer) { debug("_ISteamHTTP_SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char * pchUserAgentInfo) { debug("_ISteamHTTP_SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char * pchUserAgentInfo)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) { debug("_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)"); }
EXTERN_ABI auto _ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds) { debug("_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds)"); }
EXTERN_ABI auto _ISteamHTTP_GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool * pbWasTimedOut) { debug("_ISteamHTTP_GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool * pbWasTimedOut)"); }
EXTERN_ABI auto _ISteamController_Init() { debug("_ISteamController_Init()"); }
EXTERN_ABI auto _ISteamController_Shutdown() { debug("_ISteamController_Shutdown()"); }
EXTERN_ABI auto _ISteamController_RunFrame() { debug("_ISteamController_RunFrame()"); }
EXTERN_ABI auto _ISteamController_GetConnectedControllers(ControllerHandle_t * handlesOut) { debug("_ISteamController_GetConnectedControllers(ControllerHandle_t * handlesOut)"); }
EXTERN_ABI auto _ISteamController_ShowBindingPanel(ControllerHandle_t controllerHandle) { debug("_ISteamController_ShowBindingPanel(ControllerHandle_t controllerHandle)"); }
EXTERN_ABI auto _ISteamController_GetActionSetHandle(const char * pszActionSetName) { debug("_ISteamController_GetActionSetHandle(const char * pszActionSetName)"); }
EXTERN_ABI auto _ISteamController_ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle) { debug("_ISteamController_ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)"); }
EXTERN_ABI auto _ISteamController_GetCurrentActionSet(ControllerHandle_t controllerHandle) { debug("_ISteamController_GetCurrentActionSet(ControllerHandle_t controllerHandle)"); }
EXTERN_ABI auto _ISteamController_ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle) { debug("_ISteamController_ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)"); }
EXTERN_ABI auto _ISteamController_DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle) { debug("_ISteamController_DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)"); }
EXTERN_ABI auto _ISteamController_DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle) { debug("_ISteamController_DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle)"); }
EXTERN_ABI auto _ISteamController_GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut) { debug("_ISteamController_GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut)"); }
EXTERN_ABI auto _ISteamController_GetDigitalActionHandle(const char * pszActionName) { debug("_ISteamController_GetDigitalActionHandle(const char * pszActionName)"); }
EXTERN_ABI auto _ISteamController_GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle) { debug("_ISteamController_GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)"); }
EXTERN_ABI auto _ISteamController_GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut) { debug("_ISteamController_GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)"); }
EXTERN_ABI auto _ISteamController_GetAnalogActionHandle(const char * pszActionName) { debug("_ISteamController_GetAnalogActionHandle(const char * pszActionName)"); }
EXTERN_ABI auto _ISteamController_GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle) { debug("_ISteamController_GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)"); }
EXTERN_ABI auto _ISteamController_GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut) { debug("_ISteamController_GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)"); }
EXTERN_ABI auto _ISteamController_StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction) { debug("_ISteamController_StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)"); }
EXTERN_ABI auto _ISteamController_TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec) { debug("_ISteamController_TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)"); }
EXTERN_ABI auto _ISteamController_TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags) { debug("_ISteamController_TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)"); }
EXTERN_ABI auto _ISteamController_TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed) { debug("_ISteamController_TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)"); }
EXTERN_ABI auto _ISteamController_SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags) { debug("_ISteamController_SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)"); }
EXTERN_ABI auto _ISteamController_GetGamepadIndexForController(ControllerHandle_t ulControllerHandle) { debug("_ISteamController_GetGamepadIndexForController(ControllerHandle_t ulControllerHandle)"); }
EXTERN_ABI auto _ISteamController_GetControllerForGamepadIndex(int nIndex) { debug("_ISteamController_GetControllerForGamepadIndex(int nIndex)"); }
EXTERN_ABI auto _ISteamController_GetMotionData(ControllerHandle_t controllerHandle) { debug("_ISteamController_GetMotionData(ControllerHandle_t controllerHandle)"); }
EXTERN_ABI auto _ISteamController_ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition) { debug("_ISteamController_ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition)"); }
EXTERN_ABI auto _ISteamController_ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition) { debug("_ISteamController_ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition)"); }
EXTERN_ABI auto _ISteamController_GetStringForActionOrigin(EControllerActionOrigin eOrigin) { debug("_ISteamController_GetStringForActionOrigin(EControllerActionOrigin eOrigin)"); }
EXTERN_ABI auto _ISteamController_GetGlyphForActionOrigin(EControllerActionOrigin eOrigin) { debug("_ISteamController_GetGlyphForActionOrigin(EControllerActionOrigin eOrigin)"); }
EXTERN_ABI auto _ISteamController_GetInputTypeForHandle(ControllerHandle_t controllerHandle) { debug("_ISteamController_GetInputTypeForHandle(ControllerHandle_t controllerHandle)"); }
EXTERN_ABI auto _ISteamUGC_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) { debug("_ISteamUGC_CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)"); }
EXTERN_ABI auto _ISteamUGC_CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) { debug("_ISteamUGC_CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)"); }
EXTERN_ABI auto _ISteamUGC_CreateQueryUGCDetailsRequest(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs) { debug("_ISteamUGC_CreateQueryUGCDetailsRequest(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)"); }
EXTERN_ABI auto _ISteamUGC_SendQueryUGCRequest(UGCQueryHandle_t handle) { debug("_ISteamUGC_SendQueryUGCRequest(UGCQueryHandle_t handle)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails) { debug("_ISteamUGC_GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize) { debug("_ISteamUGC_GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize) { debug("_ISteamUGC_GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries) { debug("_ISteamUGC_GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue) { debug("_ISteamUGC_GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index) { debug("_ISteamUGC_GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType) { debug("_ISteamUGC_GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index) { debug("_ISteamUGC_GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index)"); }
EXTERN_ABI auto _ISteamUGC_GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize) { debug("_ISteamUGC_GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)"); }
EXTERN_ABI auto _ISteamUGC_ReleaseQueryUGCRequest(UGCQueryHandle_t handle) { debug("_ISteamUGC_ReleaseQueryUGCRequest(UGCQueryHandle_t handle)"); }
EXTERN_ABI auto _ISteamUGC_AddRequiredTag(UGCQueryHandle_t handle, const char * pTagName) { debug("_ISteamUGC_AddRequiredTag(UGCQueryHandle_t handle, const char * pTagName)"); }
EXTERN_ABI auto _ISteamUGC_AddExcludedTag(UGCQueryHandle_t handle, const char * pTagName) { debug("_ISteamUGC_AddExcludedTag(UGCQueryHandle_t handle, const char * pTagName)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) { debug("_ISteamUGC_SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags) { debug("_ISteamUGC_SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription) { debug("_ISteamUGC_SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata) { debug("_ISteamUGC_SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren) { debug("_ISteamUGC_SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews) { debug("_ISteamUGC_SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly) { debug("_ISteamUGC_SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly)"); }
EXTERN_ABI auto _ISteamUGC_SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays) { debug("_ISteamUGC_SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays)"); }
EXTERN_ABI auto _ISteamUGC_SetLanguage(UGCQueryHandle_t handle, const char * pchLanguage) { debug("_ISteamUGC_SetLanguage(UGCQueryHandle_t handle, const char * pchLanguage)"); }
EXTERN_ABI auto _ISteamUGC_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds) { debug("_ISteamUGC_SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)"); }
EXTERN_ABI auto _ISteamUGC_SetCloudFileNameFilter(UGCQueryHandle_t handle, const char * pMatchCloudFileName) { debug("_ISteamUGC_SetCloudFileNameFilter(UGCQueryHandle_t handle, const char * pMatchCloudFileName)"); }
EXTERN_ABI auto _ISteamUGC_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) { debug("_ISteamUGC_SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag)"); }
EXTERN_ABI auto _ISteamUGC_SetSearchText(UGCQueryHandle_t handle, const char * pSearchText) { debug("_ISteamUGC_SetSearchText(UGCQueryHandle_t handle, const char * pSearchText)"); }
EXTERN_ABI auto _ISteamUGC_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) { debug("_ISteamUGC_SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays)"); }
EXTERN_ABI auto _ISteamUGC_AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char * pKey, const char * pValue) { debug("_ISteamUGC_AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char * pKey, const char * pValue)"); }
EXTERN_ABI auto _ISteamUGC_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds) { debug("_ISteamUGC_RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)"); }
EXTERN_ABI auto _ISteamUGC_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType eFileType) { debug("_ISteamUGC_CreateItem(AppId_t nConsumerAppId, EWorkshopFileType eFileType)"); }
EXTERN_ABI auto _ISteamUGC_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_SetItemTitle(UGCUpdateHandle_t handle, const char * pchTitle) { debug("_ISteamUGC_SetItemTitle(UGCUpdateHandle_t handle, const char * pchTitle)"); }
EXTERN_ABI auto _ISteamUGC_SetItemDescription(UGCUpdateHandle_t handle, const char * pchDescription) { debug("_ISteamUGC_SetItemDescription(UGCUpdateHandle_t handle, const char * pchDescription)"); }
EXTERN_ABI auto _ISteamUGC_SetItemUpdateLanguage(UGCUpdateHandle_t handle, const char * pchLanguage) { debug("_ISteamUGC_SetItemUpdateLanguage(UGCUpdateHandle_t handle, const char * pchLanguage)"); }
EXTERN_ABI auto _ISteamUGC_SetItemMetadata(UGCUpdateHandle_t handle, const char * pchMetaData) { debug("_ISteamUGC_SetItemMetadata(UGCUpdateHandle_t handle, const char * pchMetaData)"); }
EXTERN_ABI auto _ISteamUGC_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility) { debug("_ISteamUGC_SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)"); }
EXTERN_ABI auto _ISteamUGC_SetItemTags(UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags) { debug("_ISteamUGC_SetItemTags(UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags)"); }
EXTERN_ABI auto _ISteamUGC_SetItemContent(UGCUpdateHandle_t handle, const char * pszContentFolder) { debug("_ISteamUGC_SetItemContent(UGCUpdateHandle_t handle, const char * pszContentFolder)"); }
EXTERN_ABI auto _ISteamUGC_SetItemPreview(UGCUpdateHandle_t handle, const char * pszPreviewFile) { debug("_ISteamUGC_SetItemPreview(UGCUpdateHandle_t handle, const char * pszPreviewFile)"); }
EXTERN_ABI auto _ISteamUGC_RemoveItemKeyValueTags(UGCUpdateHandle_t handle, const char * pchKey) { debug("_ISteamUGC_RemoveItemKeyValueTags(UGCUpdateHandle_t handle, const char * pchKey)"); }
EXTERN_ABI auto _ISteamUGC_AddItemKeyValueTag(UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue) { debug("_ISteamUGC_AddItemKeyValueTag(UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)"); }
EXTERN_ABI auto _ISteamUGC_AddItemPreviewFile(UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type) { debug("_ISteamUGC_AddItemPreviewFile(UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type)"); }
EXTERN_ABI auto _ISteamUGC_AddItemPreviewVideo(UGCUpdateHandle_t handle, const char * pszVideoID) { debug("_ISteamUGC_AddItemPreviewVideo(UGCUpdateHandle_t handle, const char * pszVideoID)"); }
EXTERN_ABI auto _ISteamUGC_UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile) { debug("_ISteamUGC_UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile)"); }
EXTERN_ABI auto _ISteamUGC_UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID) { debug("_ISteamUGC_UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID)"); }
EXTERN_ABI auto _ISteamUGC_RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) { debug("_ISteamUGC_RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index)"); }
EXTERN_ABI auto _ISteamUGC_SubmitItemUpdate(UGCUpdateHandle_t handle, const char * pchChangeNote) { debug("_ISteamUGC_SubmitItemUpdate(UGCUpdateHandle_t handle, const char * pchChangeNote)"); }
EXTERN_ABI auto _ISteamUGC_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal) { debug("_ISteamUGC_GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)"); }
EXTERN_ABI auto _ISteamUGC_SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp) { debug("_ISteamUGC_SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp)"); }
EXTERN_ABI auto _ISteamUGC_GetUserItemVote(PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_GetUserItemVote(PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_SubscribeItem(PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_SubscribeItem(PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_UnsubscribeItem(PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_UnsubscribeItem(PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_GetNumSubscribedItems() { debug("_ISteamUGC_GetNumSubscribedItems()"); }
EXTERN_ABI auto _ISteamUGC_GetSubscribedItems(PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries) { debug("_ISteamUGC_GetSubscribedItems(PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)"); }
EXTERN_ABI auto _ISteamUGC_GetItemState(PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_GetItemState(PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp) { debug("_ISteamUGC_GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)"); }
EXTERN_ABI auto _ISteamUGC_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal) { debug("_ISteamUGC_GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)"); }
EXTERN_ABI auto _ISteamUGC_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority) { debug("_ISteamUGC_DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority)"); }
EXTERN_ABI auto _ISteamUGC_BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, const char * pszFolder) { debug("_ISteamUGC_BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, const char * pszFolder)"); }
EXTERN_ABI auto _ISteamUGC_SuspendDownloads(bool bSuspend) { debug("_ISteamUGC_SuspendDownloads(bool bSuspend)"); }
EXTERN_ABI auto _ISteamUGC_StartPlaytimeTracking(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs) { debug("_ISteamUGC_StartPlaytimeTracking(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)"); }
EXTERN_ABI auto _ISteamUGC_StopPlaytimeTracking(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs) { debug("_ISteamUGC_StopPlaytimeTracking(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)"); }
EXTERN_ABI auto _ISteamUGC_StopPlaytimeTrackingForAllItems() { debug("_ISteamUGC_StopPlaytimeTrackingForAllItems()"); }
EXTERN_ABI auto _ISteamUGC_AddDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID) { debug("_ISteamUGC_AddDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_RemoveDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID) { debug("_ISteamUGC_RemoveDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_AddAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID) { debug("_ISteamUGC_AddAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamUGC_RemoveAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID) { debug("_ISteamUGC_RemoveAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamUGC_GetAppDependencies(PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_GetAppDependencies(PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamUGC_DeleteItem(PublishedFileId_t nPublishedFileID) { debug("_ISteamUGC_DeleteItem(PublishedFileId_t nPublishedFileID)"); }
EXTERN_ABI auto _ISteamAppList_GetNumInstalledApps() { debug("_ISteamAppList_GetNumInstalledApps()"); }
EXTERN_ABI auto _ISteamAppList_GetInstalledApps(AppId_t * pvecAppID, uint32 unMaxAppIDs) { debug("_ISteamAppList_GetInstalledApps(AppId_t * pvecAppID, uint32 unMaxAppIDs)"); }
EXTERN_ABI auto _ISteamAppList_GetAppName(AppId_t nAppID, char * pchName, int cchNameMax) { debug("_ISteamAppList_GetAppName(AppId_t nAppID, char * pchName, int cchNameMax)"); }
EXTERN_ABI auto _ISteamAppList_GetAppInstallDir(AppId_t nAppID, char * pchDirectory, int cchNameMax) { debug("_ISteamAppList_GetAppInstallDir(AppId_t nAppID, char * pchDirectory, int cchNameMax)"); }
EXTERN_ABI auto _ISteamAppList_GetAppBuildId(AppId_t nAppID) { debug("_ISteamAppList_GetAppBuildId(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamInventory_GetResultStatus(SteamInventoryResult_t resultHandle) { debug("_ISteamInventory_GetResultStatus(SteamInventoryResult_t resultHandle)"); }
EXTERN_ABI auto _ISteamInventory_GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize) { debug("_ISteamInventory_GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize)"); }
EXTERN_ABI auto _ISteamInventory_GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut) { debug("_ISteamInventory_GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)"); }
EXTERN_ABI auto _ISteamInventory_GetResultTimestamp(SteamInventoryResult_t resultHandle) { debug("_ISteamInventory_GetResultTimestamp(SteamInventoryResult_t resultHandle)"); }
EXTERN_ABI auto _ISteamInventory_CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected) { debug("_ISteamInventory_CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected)"); }
EXTERN_ABI auto _ISteamInventory_DestroyResult(SteamInventoryResult_t resultHandle) { debug("_ISteamInventory_DestroyResult(SteamInventoryResult_t resultHandle)"); }
EXTERN_ABI auto _ISteamInventory_GetAllItems(SteamInventoryResult_t * pResultHandle) { debug("_ISteamInventory_GetAllItems(SteamInventoryResult_t * pResultHandle)"); }
EXTERN_ABI auto _ISteamInventory_GetItemsByID(SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs) { debug("_ISteamInventory_GetItemsByID(SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs)"); }
EXTERN_ABI auto _ISteamInventory_SerializeResult(SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize) { debug("_ISteamInventory_SerializeResult(SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize)"); }
EXTERN_ABI auto _ISteamInventory_DeserializeResult(SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE) { debug("_ISteamInventory_DeserializeResult(SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)"); }
EXTERN_ABI auto _ISteamInventory_GenerateItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength) { debug("_ISteamInventory_GenerateItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)"); }
EXTERN_ABI auto _ISteamInventory_GrantPromoItems(SteamInventoryResult_t * pResultHandle) { debug("_ISteamInventory_GrantPromoItems(SteamInventoryResult_t * pResultHandle)"); }
EXTERN_ABI auto _ISteamInventory_AddPromoItem(SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef) { debug("_ISteamInventory_AddPromoItem(SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef)"); }
EXTERN_ABI auto _ISteamInventory_AddPromoItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength) { debug("_ISteamInventory_AddPromoItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength)"); }
EXTERN_ABI auto _ISteamInventory_ConsumeItem(SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity) { debug("_ISteamInventory_ConsumeItem(SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)"); }
EXTERN_ABI auto _ISteamInventory_ExchangeItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength) { debug("_ISteamInventory_ExchangeItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength)"); }
EXTERN_ABI auto _ISteamInventory_TransferItemQuantity(SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest) { debug("_ISteamInventory_TransferItemQuantity(SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)"); }
EXTERN_ABI auto _ISteamInventory_SendItemDropHeartbeat() { debug("_ISteamInventory_SendItemDropHeartbeat()"); }
EXTERN_ABI auto _ISteamInventory_TriggerItemDrop(SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition) { debug("_ISteamInventory_TriggerItemDrop(SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition)"); }
EXTERN_ABI auto _ISteamInventory_TradeItems(SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength) { debug("_ISteamInventory_TradeItems(SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength)"); }
EXTERN_ABI auto _ISteamInventory_LoadItemDefinitions() { debug("_ISteamInventory_LoadItemDefinitions()"); }
EXTERN_ABI auto _ISteamInventory_GetItemDefinitionIDs(SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize) { debug("_ISteamInventory_GetItemDefinitionIDs(SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)"); }
EXTERN_ABI auto _ISteamInventory_GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut) { debug("_ISteamInventory_GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)"); }
EXTERN_ABI auto _ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) { debug("_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID)"); }
EXTERN_ABI auto _ISteamInventory_GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize) { debug("_ISteamInventory_GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)"); }
EXTERN_ABI auto _ISteamInventory_StartPurchase(const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength) { debug("_ISteamInventory_StartPurchase(const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)"); }
EXTERN_ABI auto _ISteamInventory_RequestPrices() { debug("_ISteamInventory_RequestPrices()"); }
EXTERN_ABI auto _ISteamInventory_GetNumItemsWithPrices() { debug("_ISteamInventory_GetNumItemsWithPrices()"); }
EXTERN_ABI auto _ISteamInventory_GetItemsWithPrices(SteamItemDef_t * pArrayItemDefs, uint64 * pPrices, uint32 unArrayLength) { debug("_ISteamInventory_GetItemsWithPrices(SteamItemDef_t * pArrayItemDefs, uint64 * pPrices, uint32 unArrayLength)"); }
EXTERN_ABI auto _ISteamInventory_GetItemPrice(SteamItemDef_t iDefinition, uint64 * pPrice) { debug("_ISteamInventory_GetItemPrice(SteamItemDef_t iDefinition, uint64 * pPrice)"); }
EXTERN_ABI auto _ISteamInventory_StartUpdateProperties() { debug("_ISteamInventory_StartUpdateProperties()"); }
EXTERN_ABI auto _ISteamInventory_RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName) { debug("_ISteamInventory_RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName)"); }
EXTERN_ABI auto _ISteamInventory_SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle) { debug("_ISteamInventory_SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle)"); }
EXTERN_ABI auto _ISteamVideo_GetVideoURL(AppId_t unVideoAppID) { debug("_ISteamVideo_GetVideoURL(AppId_t unVideoAppID)"); }
EXTERN_ABI auto _ISteamVideo_IsBroadcasting(int * pnNumViewers) { debug("_ISteamVideo_IsBroadcasting(int * pnNumViewers)"); }
EXTERN_ABI auto _ISteamVideo_GetOPFSettings(AppId_t unVideoAppID) { debug("_ISteamVideo_GetOPFSettings(AppId_t unVideoAppID)"); }
EXTERN_ABI auto _ISteamVideo_GetOPFStringForApp(AppId_t unVideoAppID, char * pchBuffer, int32 * pnBufferSize) { debug("_ISteamVideo_GetOPFStringForApp(AppId_t unVideoAppID, char * pchBuffer, int32 * pnBufferSize)"); }
EXTERN_ABI auto _ISteamParentalSettings_BIsParentalLockEnabled() { debug("_ISteamParentalSettings_BIsParentalLockEnabled()"); }
EXTERN_ABI auto _ISteamParentalSettings_BIsParentalLockLocked() { debug("_ISteamParentalSettings_BIsParentalLockLocked()"); }
EXTERN_ABI auto _ISteamParentalSettings_BIsAppBlocked(AppId_t nAppID) { debug("_ISteamParentalSettings_BIsAppBlocked(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamParentalSettings_BIsAppInBlockList(AppId_t nAppID) { debug("_ISteamParentalSettings_BIsAppInBlockList(AppId_t nAppID)"); }
EXTERN_ABI auto _ISteamParentalSettings_BIsFeatureBlocked(EParentalFeature eFeature) { debug("_ISteamParentalSettings_BIsFeatureBlocked(EParentalFeature eFeature)"); }
EXTERN_ABI auto _ISteamParentalSettings_BIsFeatureInBlockList(EParentalFeature eFeature) { debug("_ISteamParentalSettings_BIsFeatureInBlockList(EParentalFeature eFeature)"); }
EXTERN_ABI auto _ISteamGameServer_InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString) { debug("_ISteamGameServer_InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString)"); }
EXTERN_ABI auto _ISteamGameServer_SetProduct(const char * pszProduct) { debug("_ISteamGameServer_SetProduct(const char * pszProduct)"); }
EXTERN_ABI auto _ISteamGameServer_SetGameDescription(const char * pszGameDescription) { debug("_ISteamGameServer_SetGameDescription(const char * pszGameDescription)"); }
EXTERN_ABI auto _ISteamGameServer_SetModDir(const char * pszModDir) { debug("_ISteamGameServer_SetModDir(const char * pszModDir)"); }
EXTERN_ABI auto _ISteamGameServer_SetDedicatedServer(bool bDedicated) { debug("_ISteamGameServer_SetDedicatedServer(bool bDedicated)"); }
EXTERN_ABI auto _ISteamGameServer_LogOn(const char * pszToken) { debug("_ISteamGameServer_LogOn(const char * pszToken)"); }
EXTERN_ABI auto _ISteamGameServer_LogOnAnonymous() { debug("_ISteamGameServer_LogOnAnonymous()"); }
EXTERN_ABI auto _ISteamGameServer_LogOff() { debug("_ISteamGameServer_LogOff()"); }
EXTERN_ABI auto _ISteamGameServer_BLoggedOn() { debug("_ISteamGameServer_BLoggedOn()"); }
EXTERN_ABI auto _ISteamGameServer_BSecure() { debug("_ISteamGameServer_BSecure()"); }
EXTERN_ABI auto _ISteamGameServer_GetSteamID() { debug("_ISteamGameServer_GetSteamID()"); }
EXTERN_ABI auto _ISteamGameServer_WasRestartRequested() { debug("_ISteamGameServer_WasRestartRequested()"); }
EXTERN_ABI auto _ISteamGameServer_SetMaxPlayerCount(int cPlayersMax) { debug("_ISteamGameServer_SetMaxPlayerCount(int cPlayersMax)"); }
EXTERN_ABI auto _ISteamGameServer_SetBotPlayerCount(int cBotplayers) { debug("_ISteamGameServer_SetBotPlayerCount(int cBotplayers)"); }
EXTERN_ABI auto _ISteamGameServer_SetServerName(const char * pszServerName) { debug("_ISteamGameServer_SetServerName(const char * pszServerName)"); }
EXTERN_ABI auto _ISteamGameServer_SetMapName(const char * pszMapName) { debug("_ISteamGameServer_SetMapName(const char * pszMapName)"); }
EXTERN_ABI auto _ISteamGameServer_SetPasswordProtected(bool bPasswordProtected) { debug("_ISteamGameServer_SetPasswordProtected(bool bPasswordProtected)"); }
EXTERN_ABI auto _ISteamGameServer_SetSpectatorPort(uint16 unSpectatorPort) { debug("_ISteamGameServer_SetSpectatorPort(uint16 unSpectatorPort)"); }
EXTERN_ABI auto _ISteamGameServer_SetSpectatorServerName(const char * pszSpectatorServerName) { debug("_ISteamGameServer_SetSpectatorServerName(const char * pszSpectatorServerName)"); }
EXTERN_ABI auto _ISteamGameServer_ClearAllKeyValues() { debug("_ISteamGameServer_ClearAllKeyValues()"); }
EXTERN_ABI auto _ISteamGameServer_SetKeyValue(const char * pKey, const char * pValue) { debug("_ISteamGameServer_SetKeyValue(const char * pKey, const char * pValue)"); }
EXTERN_ABI auto _ISteamGameServer_SetGameTags(const char * pchGameTags) { debug("_ISteamGameServer_SetGameTags(const char * pchGameTags)"); }
EXTERN_ABI auto _ISteamGameServer_SetGameData(const char * pchGameData) { debug("_ISteamGameServer_SetGameData(const char * pchGameData)"); }
EXTERN_ABI auto _ISteamGameServer_SetRegion(const char * pszRegion) { debug("_ISteamGameServer_SetRegion(const char * pszRegion)"); }
EXTERN_ABI auto _ISteamGameServer_SendUserConnectAndAuthenticate(uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser) { debug("_ISteamGameServer_SendUserConnectAndAuthenticate(uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser)"); }
EXTERN_ABI auto _ISteamGameServer_CreateUnauthenticatedUserConnection() { debug("_ISteamGameServer_CreateUnauthenticatedUserConnection()"); }
EXTERN_ABI auto _ISteamGameServer_SendUserDisconnect(CSteamID steamIDUser) { debug("_ISteamGameServer_SendUserDisconnect(CSteamID steamIDUser)"); }
EXTERN_ABI auto _ISteamGameServer_BUpdateUserData(CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore) { debug("_ISteamGameServer_BUpdateUserData(CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)"); }
EXTERN_ABI auto _ISteamGameServer_GetAuthSessionTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket) { debug("_ISteamGameServer_GetAuthSessionTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket)"); }
EXTERN_ABI auto _ISteamGameServer_BeginAuthSession(const void * pAuthTicket, int cbAuthTicket, CSteamID steamID) { debug("_ISteamGameServer_BeginAuthSession(const void * pAuthTicket, int cbAuthTicket, CSteamID steamID)"); }
EXTERN_ABI auto _ISteamGameServer_EndAuthSession(CSteamID steamID) { debug("_ISteamGameServer_EndAuthSession(CSteamID steamID)"); }
EXTERN_ABI auto _ISteamGameServer_CancelAuthTicket(HAuthTicket hAuthTicket) { debug("_ISteamGameServer_CancelAuthTicket(HAuthTicket hAuthTicket)"); }
EXTERN_ABI auto _ISteamGameServer_UserHasLicenseForApp(CSteamID steamID, AppId_t appID) { debug("_ISteamGameServer_UserHasLicenseForApp(CSteamID steamID, AppId_t appID)"); }
EXTERN_ABI auto _ISteamGameServer_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup) { debug("_ISteamGameServer_RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup)"); }
EXTERN_ABI auto _ISteamGameServer_GetGameplayStats() { debug("_ISteamGameServer_GetGameplayStats()"); }
EXTERN_ABI auto _ISteamGameServer_GetServerReputation() { debug("_ISteamGameServer_GetServerReputation()"); }
EXTERN_ABI auto _ISteamGameServer_GetPublicIP() { debug("_ISteamGameServer_GetPublicIP()"); }
EXTERN_ABI auto _ISteamGameServer_HandleIncomingPacket(const void * pData, int cbData, uint32 srcIP, uint16 srcPort) { debug("_ISteamGameServer_HandleIncomingPacket(const void * pData, int cbData, uint32 srcIP, uint16 srcPort)"); }
EXTERN_ABI auto _ISteamGameServer_GetNextOutgoingPacket(void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort) { debug("_ISteamGameServer_GetNextOutgoingPacket(void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)"); }
EXTERN_ABI auto _ISteamGameServer_EnableHeartbeats(bool bActive) { debug("_ISteamGameServer_EnableHeartbeats(bool bActive)"); }
EXTERN_ABI auto _ISteamGameServer_SetHeartbeatInterval(int iHeartbeatInterval) { debug("_ISteamGameServer_SetHeartbeatInterval(int iHeartbeatInterval)"); }
EXTERN_ABI auto _ISteamGameServer_ForceHeartbeat() { debug("_ISteamGameServer_ForceHeartbeat()"); }
EXTERN_ABI auto _ISteamGameServer_AssociateWithClan(CSteamID steamIDClan) { debug("_ISteamGameServer_AssociateWithClan(CSteamID steamIDClan)"); }
EXTERN_ABI auto _ISteamGameServer_ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) { debug("_ISteamGameServer_ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer)"); }
EXTERN_ABI auto _ISteamGameServerStats_RequestUserStats(CSteamID steamIDUser) { debug("_ISteamGameServerStats_RequestUserStats(CSteamID steamIDUser)"); }
EXTERN_ABI auto _ISteamGameServerStats_GetUserStat(CSteamID steamIDUser, const char * pchName, int32 * pData) { debug("_ISteamGameServerStats_GetUserStat(CSteamID steamIDUser, const char * pchName, int32 * pData)"); }
EXTERN_ABI auto _ISteamGameServerStats_GetUserStat_(CSteamID steamIDUser, const char * pchName, float * pData) { debug("_ISteamGameServerStats_GetUserStat_(CSteamID steamIDUser, const char * pchName, float * pData)"); }
EXTERN_ABI auto _ISteamGameServerStats_GetUserAchievement(CSteamID steamIDUser, const char * pchName, bool * pbAchieved) { debug("_ISteamGameServerStats_GetUserAchievement(CSteamID steamIDUser, const char * pchName, bool * pbAchieved)"); }
EXTERN_ABI auto _ISteamGameServerStats_SetUserStat(CSteamID steamIDUser, const char * pchName, int32 nData) { debug("_ISteamGameServerStats_SetUserStat(CSteamID steamIDUser, const char * pchName, int32 nData)"); }
EXTERN_ABI auto _ISteamGameServerStats_SetUserStat_(CSteamID steamIDUser, const char * pchName, float fData) { debug("_ISteamGameServerStats_SetUserStat_(CSteamID steamIDUser, const char * pchName, float fData)"); }
EXTERN_ABI auto _ISteamGameServerStats_UpdateUserAvgRateStat(CSteamID steamIDUser, const char * pchName, float flCountThisSession, double dSessionLength) { debug("_ISteamGameServerStats_UpdateUserAvgRateStat(CSteamID steamIDUser, const char * pchName, float flCountThisSession, double dSessionLength)"); }
EXTERN_ABI auto _ISteamGameServerStats_SetUserAchievement(CSteamID steamIDUser, const char * pchName) { debug("_ISteamGameServerStats_SetUserAchievement(CSteamID steamIDUser, const char * pchName)"); }
EXTERN_ABI auto _ISteamGameServerStats_ClearUserAchievement(CSteamID steamIDUser, const char * pchName) { debug("_ISteamGameServerStats_ClearUserAchievement(CSteamID steamIDUser, const char * pchName)"); }
EXTERN_ABI auto _ISteamGameServerStats_StoreUserStats(CSteamID steamIDUser) { debug("_ISteamGameServerStats_StoreUserStats(CSteamID steamIDUser)"); }
