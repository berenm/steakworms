struct ISteamClient010Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMasterServerUpdater)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
};

struct ISteamClient011Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMasterServerUpdater)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
};

struct ISteamClient012Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUnifiedMessages)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamController)(void *, HSteamUser, HSteamPipe, const char *);
};

struct ISteamClient013Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUnifiedMessages)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamController)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUGC)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamInventory)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamVideo)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamAppList)(void *, HSteamUser, HSteamPipe, const char *);
};

struct ISteamClient014Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUnifiedMessages)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamController)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUGC)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamInventory)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamVideo)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamAppList)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusic)(void *, HSteamUser, HSteamPipe, const char *);
};

struct ISteamClient015Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUnifiedMessages)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamController)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUGC)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamInventory)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamVideo)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamAppList)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusic)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusicRemote)(void *, HSteamUser, HSteamPipe, const char *);
};

struct ISteamClient016Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUnifiedMessages)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamController)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUGC)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamInventory)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamVideo)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamAppList)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusic)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusicRemote)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamHTMLSurface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*Set_SteamAPI_CPostAPIResultInProcess)(void *, void (*)(SteamAPICall_t, void *, uint32, int));
  EXTERN_ABI void (*Remove_SteamAPI_CPostAPIResultInProcess)(void *, void (*)(SteamAPICall_t, void *, uint32, int));
  EXTERN_ABI void (*Set_SteamAPI_CCheckCallbackRegisteredInProcess)(void *, unsigned int (*)(int));
};

struct ISteamClient017Vtbl {
  EXTERN_ABI HSteamPipe (*CreateSteamPipe)(void *);
  EXTERN_ABI bool (*BReleaseSteamPipe)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*ConnectToGlobalUser)(void *, HSteamPipe);
  EXTERN_ABI HSteamUser (*CreateLocalUser)(void *, HSteamPipe *, EAccountType);
  EXTERN_ABI void (*ReleaseUser)(void *, HSteamPipe, HSteamUser);
  EXTERN_ABI void *(*GetISteamUser)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServer)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*SetLocalIPBinding)(void *, uint32, uint16);
  EXTERN_ABI void *(*GetISteamFriends)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUtils)(void *, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmaking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMatchmakingServers)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGenericInterface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUserStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamGameServerStats)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamApps)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamNetworking)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamRemoteStorage)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamScreenshots)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*RunFrame)(void *);
  EXTERN_ABI uint32 (*GetIPCCallCount)(void *);
  EXTERN_ABI void (*SetWarningMessageHook)(void *, SteamAPIWarningMessageHook_t);
  EXTERN_ABI bool (*BShutdownIfAllPipesClosed)(void *);
  EXTERN_ABI void *(*GetISteamHTTP)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUnifiedMessages)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamController)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamUGC)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamAppList)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusic)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamMusicRemote)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamHTMLSurface)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void (*Set_SteamAPI_CPostAPIResultInProcess)(void *, void (*)(SteamAPICall_t, void *, uint32, int));
  EXTERN_ABI void (*Remove_SteamAPI_CPostAPIResultInProcess)(void *, void (*)(SteamAPICall_t, void *, uint32, int));
  EXTERN_ABI void (*Set_SteamAPI_CCheckCallbackRegisteredInProcess)(void *, unsigned int (*)(int));
  EXTERN_ABI void *(*GetISteamInventory)(void *, HSteamUser, HSteamPipe, const char *);
  EXTERN_ABI void *(*GetISteamVideo)(void *, HSteamUser, HSteamPipe, const char *);
};

EXTERN_ABI HSteamPipe ISteamClient_CreateSteamPipe(void *);
EXTERN_ABI bool       ISteamClient_BReleaseSteamPipe(void *, HSteamPipe);

EXTERN_ABI HSteamUser ISteamClient_ConnectToGlobalUser(void *, HSteamPipe);
EXTERN_ABI HSteamUser ISteamClient_CreateLocalUser(void *, HSteamPipe *, EAccountType);
EXTERN_ABI void       ISteamClient_ReleaseUser(void *, HSteamPipe, HSteamUser);

EXTERN_ABI void *ISteamClient_GetInterface(void *, HSteamPipe, const char *);
EXTERN_ABI void *ISteamClient_GetUserInterface(void *, HSteamUser, HSteamPipe, const char *);

EXTERN_ABI void ISteamClient_SetLocalIPBinding(void *, uint32, uint16);
EXTERN_ABI void ISteamClient_RunFrame(void *);

EXTERN_ABI uint32 ISteamClient_GetIPCCallCount(void *);

EXTERN_ABI void ISteamClient_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);

EXTERN_ABI bool ISteamClient_BShutdownIfAllPipesClosed(void *);

EXTERN_ABI void ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(void *,
                                                                  void (*)(SteamAPICall_t, void *, uint32, int));
EXTERN_ABI void ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(void *,
                                                                     void (*)(SteamAPICall_t, void *, uint32, int));
EXTERN_ABI void ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *, unsigned int (*)(int));

const ISteamClient010Vtbl isteam_client_010_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
};

const ISteamClient011Vtbl isteam_client_011_vtbl = {
    ISteamClient_CreateSteamPipe,  ISteamClient_BReleaseSteamPipe,     ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,  ISteamClient_ReleaseUser,           ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface, ISteamClient_SetLocalIPBinding,     ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,     ISteamClient_GetUserInterface,      ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface, ISteamClient_GetUserInterface,      ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface, ISteamClient_GetUserInterface,      ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface, ISteamClient_GetUserInterface,      ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,  ISteamClient_SetWarningMessageHook, ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
};

const ISteamClient012Vtbl isteam_client_012_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
};

const ISteamClient013Vtbl isteam_client_013_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
};

const ISteamClient014Vtbl isteam_client_014_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
};

const ISteamClient015Vtbl isteam_client_015_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
};

const ISteamClient016Vtbl isteam_client_016_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_Set_SteamAPI_CPostAPIResultInProcess,
    ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess,
    ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess,
};

const ISteamClient017Vtbl isteam_client_017_vtbl = {
    ISteamClient_CreateSteamPipe,
    ISteamClient_BReleaseSteamPipe,
    ISteamClient_ConnectToGlobalUser,
    ISteamClient_CreateLocalUser,
    ISteamClient_ReleaseUser,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_SetLocalIPBinding,
    ISteamClient_GetUserInterface,
    ISteamClient_GetInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_RunFrame,
    ISteamClient_GetIPCCallCount,
    ISteamClient_SetWarningMessageHook,
    ISteamClient_BShutdownIfAllPipesClosed,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
    ISteamClient_Set_SteamAPI_CPostAPIResultInProcess,
    ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess,
    ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess,
    ISteamClient_GetUserInterface,
    ISteamClient_GetUserInterface,
};
