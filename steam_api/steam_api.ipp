EXTERN_ABI bool _SteamAPI_Init() { debug("SteamAPI_Init"); return SteamAPI_Init(); }
EXTERN_ABI void _SteamAPI_RunCallbacks() { debug("SteamAPI_RunCallbacks"); return SteamAPI_RunCallbacks(); }
EXTERN_ABI void _SteamGameServer_RunCallbacks() { debug("SteamGameServer_RunCallbacks"); return SteamGameServer_RunCallbacks(); }
EXTERN_ABI void _SteamAPI_RegisterCallback(void * pCallback, int callback) { debug("SteamAPI_RegisterCallback"); return SteamAPI_RegisterCallback(pCallback, callback); }
EXTERN_ABI void _SteamAPI_UnregisterCallback(void * pCallback) { debug("SteamAPI_UnregisterCallback"); return SteamAPI_UnregisterCallback(pCallback); }
EXTERN_ABI void _SteamAPI_RegisterCallResult(void * pCallback, SteamAPICall_t callback) { debug("SteamAPI_RegisterCallResult"); return SteamAPI_RegisterCallResult(pCallback, callback); }
EXTERN_ABI void _SteamAPI_UnregisterCallResult(void * pCallback, SteamAPICall_t callback) { debug("SteamAPI_UnregisterCallResult"); return SteamAPI_UnregisterCallResult(pCallback, callback); }
EXTERN_ABI bool _SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort, int eServerMode, const char * pchVersionString) { debug("SteamInternal_GameServer_Init"); return SteamInternal_GameServer_Init(unIP, usPort, usGamePort, usQueryPort, eServerMode, pchVersionString); }
EXTERN_ABI void _SteamAPI_Shutdown() { debug("SteamAPI_Shutdown"); return SteamAPI_Shutdown(); }
EXTERN_ABI void _SteamGameServer_Shutdown() { debug("SteamGameServer_Shutdown"); return SteamGameServer_Shutdown(); }
EXTERN_ABI HSteamUser _SteamAPI_GetHSteamUser() { debug("SteamAPI_GetHSteamUser"); return SteamAPI_GetHSteamUser(); }
EXTERN_ABI HSteamPipe _SteamAPI_GetHSteamPipe() { debug("SteamAPI_GetHSteamPipe"); return SteamAPI_GetHSteamPipe(); }
EXTERN_ABI HSteamUser _SteamGameServer_GetHSteamUser() { debug("SteamGameServer_GetHSteamUser"); return SteamGameServer_GetHSteamUser(); }
EXTERN_ABI HSteamPipe _SteamGameServer_GetHSteamPipe() { debug("SteamGameServer_GetHSteamPipe"); return SteamGameServer_GetHSteamPipe(); }
EXTERN_ABI void * _SteamInternal_CreateInterface(const char * version) { debug("SteamInternal_CreateInterface"); return SteamInternal_CreateInterface(version); }
EXTERN_ABI bool _SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID) { debug("SteamAPI_RestartAppIfNecessary"); return SteamAPI_RestartAppIfNecessary(unOwnAppID); }
EXTERN_ABI auto _SteamHTMLSurface() { debug("SteamHTMLSurface"); return SteamHTMLSurface(); }
EXTERN_ABI auto _SteamClient() { debug("SteamClient"); return SteamClient(); }
EXTERN_ABI auto _SteamUser() { debug("SteamUser"); return SteamUser(); }
EXTERN_ABI auto _SteamFriends() { debug("SteamFriends"); return SteamFriends(); }
EXTERN_ABI auto _SteamUtils() { debug("SteamUtils"); return SteamUtils(); }
EXTERN_ABI auto _SteamMatchmaking() { debug("SteamMatchmaking"); return SteamMatchmaking(); }
EXTERN_ABI auto _SteamMatchmakingServerListResponse() { debug("SteamMatchmakingServerListResponse"); return SteamMatchmakingServerListResponse(); }
EXTERN_ABI auto _SteamMatchmakingPingResponse() { debug("SteamMatchmakingPingResponse"); return SteamMatchmakingPingResponse(); }
EXTERN_ABI auto _SteamMatchmakingPlayersResponse() { debug("SteamMatchmakingPlayersResponse"); return SteamMatchmakingPlayersResponse(); }
EXTERN_ABI auto _SteamMatchmakingRulesResponse() { debug("SteamMatchmakingRulesResponse"); return SteamMatchmakingRulesResponse(); }
EXTERN_ABI auto _SteamMatchmakingServers() { debug("SteamMatchmakingServers"); return SteamMatchmakingServers(); }
EXTERN_ABI auto _SteamRemoteStorage() { debug("SteamRemoteStorage"); return SteamRemoteStorage(); }
EXTERN_ABI auto _SteamUserStats() { debug("SteamUserStats"); return SteamUserStats(); }
EXTERN_ABI auto _SteamApps() { debug("SteamApps"); return SteamApps(); }
EXTERN_ABI auto _SteamNetworking() { debug("SteamNetworking"); return SteamNetworking(); }
EXTERN_ABI auto _SteamScreenshots() { debug("SteamScreenshots"); return SteamScreenshots(); }
EXTERN_ABI auto _SteamMusic() { debug("SteamMusic"); return SteamMusic(); }
EXTERN_ABI auto _SteamMusicRemote() { debug("SteamMusicRemote"); return SteamMusicRemote(); }
EXTERN_ABI auto _SteamHTTP() { debug("SteamHTTP"); return SteamHTTP(); }
EXTERN_ABI auto _SteamController() { debug("SteamController"); return SteamController(); }
EXTERN_ABI auto _SteamUGC() { debug("SteamUGC"); return SteamUGC(); }
EXTERN_ABI auto _SteamAppList() { debug("SteamAppList"); return SteamAppList(); }
EXTERN_ABI auto _SteamInventory() { debug("SteamInventory"); return SteamInventory(); }
EXTERN_ABI auto _SteamVideo() { debug("SteamVideo"); return SteamVideo(); }
EXTERN_ABI auto _SteamParentalSettings() { debug("SteamParentalSettings"); return SteamParentalSettings(); }
EXTERN_ABI auto _SteamGameServer() { debug("SteamGameServer"); return SteamGameServer(); }
EXTERN_ABI auto _SteamGameServerStats() { debug("SteamGameServerStats"); return SteamGameServerStats(); }
