extern "C" bool _SteamAPI_Init(){ return SteamAPI_Init(); }
extern "C" void _SteamAPI_RunCallbacks(){ return SteamAPI_RunCallbacks(); }
extern "C" void _SteamGameServer_RunCallbacks(){ return SteamGameServer_RunCallbacks(); }
extern "C" void _SteamAPI_RegisterCallback(void * pCallback, int callback){ return SteamAPI_RegisterCallback(pCallback, callback); }
extern "C" void _SteamAPI_UnregisterCallback(void * pCallback){ return SteamAPI_UnregisterCallback(pCallback); }
extern "C" void _SteamAPI_RegisterCallResult(void * pCallback, SteamAPICall_t callback){ return SteamAPI_RegisterCallResult(pCallback, callback); }
extern "C" void _SteamAPI_UnregisterCallResult(void * pCallback, SteamAPICall_t callback){ return SteamAPI_UnregisterCallResult(pCallback, callback); }
extern "C" bool _SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort, int eServerMode, const char * pchVersionString){ return SteamInternal_GameServer_Init(unIP, usPort, usGamePort, usQueryPort, eServerMode, pchVersionString); }
extern "C" void _SteamAPI_Shutdown(){ return SteamAPI_Shutdown(); }
extern "C" void _SteamGameServer_Shutdown(){ return SteamGameServer_Shutdown(); }
extern "C" HSteamUser _SteamAPI_GetHSteamUser(){ return SteamAPI_GetHSteamUser(); }
extern "C" HSteamPipe _SteamAPI_GetHSteamPipe(){ return SteamAPI_GetHSteamPipe(); }
extern "C" HSteamUser _SteamGameServer_GetHSteamUser(){ return SteamGameServer_GetHSteamUser(); }
extern "C" HSteamPipe _SteamGameServer_GetHSteamPipe(){ return SteamGameServer_GetHSteamPipe(); }
extern "C" void * _SteamInternal_CreateInterface(const char * version){ return SteamInternal_CreateInterface(version); }
extern "C" bool _SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID){ return SteamAPI_RestartAppIfNecessary(unOwnAppID); }
extern "C" auto _SteamHTMLSurface() { return SteamAPI_Context()->SteamHTMLSurface(); }
extern "C" auto _SteamClient() { return SteamAPI_Context()->SteamClient(); }
extern "C" auto _SteamUser() { return SteamAPI_Context()->SteamUser(); }
extern "C" auto _SteamFriends() { return SteamAPI_Context()->SteamFriends(); }
extern "C" auto _SteamUtils() { return SteamAPI_Context()->SteamUtils(); }
extern "C" auto _SteamMatchmaking() { return SteamAPI_Context()->SteamMatchmaking(); }
extern "C" auto _SteamMatchmakingServerListResponse() { return SteamAPI_Context()->SteamMatchmakingServerListResponse(); }
extern "C" auto _SteamMatchmakingPingResponse() { return SteamAPI_Context()->SteamMatchmakingPingResponse(); }
extern "C" auto _SteamMatchmakingPlayersResponse() { return SteamAPI_Context()->SteamMatchmakingPlayersResponse(); }
extern "C" auto _SteamMatchmakingRulesResponse() { return SteamAPI_Context()->SteamMatchmakingRulesResponse(); }
extern "C" auto _SteamMatchmakingServers() { return SteamAPI_Context()->SteamMatchmakingServers(); }
extern "C" auto _SteamRemoteStorage() { return SteamAPI_Context()->SteamRemoteStorage(); }
extern "C" auto _SteamUserStats() { return SteamAPI_Context()->SteamUserStats(); }
extern "C" auto _SteamApps() { return SteamAPI_Context()->SteamApps(); }
extern "C" auto _SteamNetworking() { return SteamAPI_Context()->SteamNetworking(); }
extern "C" auto _SteamScreenshots() { return SteamAPI_Context()->SteamScreenshots(); }
extern "C" auto _SteamMusic() { return SteamAPI_Context()->SteamMusic(); }
extern "C" auto _SteamMusicRemote() { return SteamAPI_Context()->SteamMusicRemote(); }
extern "C" auto _SteamHTTP() { return SteamAPI_Context()->SteamHTTP(); }
extern "C" auto _SteamController() { return SteamAPI_Context()->SteamController(); }
extern "C" auto _SteamUGC() { return SteamAPI_Context()->SteamUGC(); }
extern "C" auto _SteamAppList() { return SteamAPI_Context()->SteamAppList(); }
extern "C" auto _SteamInventory() { return SteamAPI_Context()->SteamInventory(); }
extern "C" auto _SteamVideo() { return SteamAPI_Context()->SteamVideo(); }
extern "C" auto _SteamParentalSettings() { return SteamAPI_Context()->SteamParentalSettings(); }
extern "C" auto _SteamGameServer() { return SteamAPI_Context()->SteamGameServer(); }
extern "C" auto _SteamGameServerStats() { return SteamAPI_Context()->SteamGameServerStats(); }
extern "C" auto _SteamInternal_ContextInit() { return SteamInternal_ContextInit(); }
