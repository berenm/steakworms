bool _SteamAPI_Init(){ return SteamAPI_Init(); }
void _SteamAPI_RunCallbacks(){ return SteamAPI_RunCallbacks(); }
void _SteamGameServer_RunCallbacks(){ return SteamGameServer_RunCallbacks(); }
void _SteamAPI_RegisterCallback(void * pCallback, int callback){ return SteamAPI_RegisterCallback(pCallback, callback); }
void _SteamAPI_UnregisterCallback(void * pCallback){ return SteamAPI_UnregisterCallback(pCallback); }
void _SteamAPI_RegisterCallResult(void * pCallback, SteamAPICall_t callback){ return SteamAPI_RegisterCallResult(pCallback, callback); }
void _SteamAPI_UnregisterCallResult(void * pCallback, SteamAPICall_t callback){ return SteamAPI_UnregisterCallResult(pCallback, callback); }
bool _SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort, int eServerMode, const char * pchVersionString){ return SteamInternal_GameServer_Init(unIP, usPort, usGamePort, usQueryPort, eServerMode, pchVersionString); }
void _SteamAPI_Shutdown(){ return SteamAPI_Shutdown(); }
void _SteamGameServer_Shutdown(){ return SteamGameServer_Shutdown(); }
HSteamUser _SteamAPI_GetHSteamUser(){ return SteamAPI_GetHSteamUser(); }
HSteamPipe _SteamAPI_GetHSteamPipe(){ return SteamAPI_GetHSteamPipe(); }
HSteamUser _SteamGameServer_GetHSteamUser(){ return SteamGameServer_GetHSteamUser(); }
HSteamPipe _SteamGameServer_GetHSteamPipe(){ return SteamGameServer_GetHSteamPipe(); }
void * _SteamInternal_CreateInterface(const char * version){ return SteamInternal_CreateInterface(version); }
bool _SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID){ return SteamAPI_RestartAppIfNecessary(unOwnAppID); }
EXTERN_ABI auto _SteamHTMLSurface() { return SteamAPI_Context()->SteamHTMLSurface(); }
EXTERN_ABI auto _SteamClient() { return SteamAPI_Context()->SteamClient(); }
EXTERN_ABI auto _SteamUser() { return SteamAPI_Context()->SteamUser(); }
EXTERN_ABI auto _SteamFriends() { return SteamAPI_Context()->SteamFriends(); }
EXTERN_ABI auto _SteamUtils() { return SteamAPI_Context()->SteamUtils(); }
EXTERN_ABI auto _SteamMatchmaking() { return SteamAPI_Context()->SteamMatchmaking(); }
EXTERN_ABI auto _SteamMatchmakingServerListResponse() { return SteamAPI_Context()->SteamMatchmakingServerListResponse(); }
EXTERN_ABI auto _SteamMatchmakingPingResponse() { return SteamAPI_Context()->SteamMatchmakingPingResponse(); }
EXTERN_ABI auto _SteamMatchmakingPlayersResponse() { return SteamAPI_Context()->SteamMatchmakingPlayersResponse(); }
EXTERN_ABI auto _SteamMatchmakingRulesResponse() { return SteamAPI_Context()->SteamMatchmakingRulesResponse(); }
EXTERN_ABI auto _SteamMatchmakingServers() { return SteamAPI_Context()->SteamMatchmakingServers(); }
EXTERN_ABI auto _SteamRemoteStorage() { return SteamAPI_Context()->SteamRemoteStorage(); }
EXTERN_ABI auto _SteamUserStats() { return SteamAPI_Context()->SteamUserStats(); }
EXTERN_ABI auto _SteamApps() { return SteamAPI_Context()->SteamApps(); }
EXTERN_ABI auto _SteamNetworking() { return SteamAPI_Context()->SteamNetworking(); }
EXTERN_ABI auto _SteamScreenshots() { return SteamAPI_Context()->SteamScreenshots(); }
EXTERN_ABI auto _SteamMusic() { return SteamAPI_Context()->SteamMusic(); }
EXTERN_ABI auto _SteamMusicRemote() { return SteamAPI_Context()->SteamMusicRemote(); }
EXTERN_ABI auto _SteamHTTP() { return SteamAPI_Context()->SteamHTTP(); }
EXTERN_ABI auto _SteamController() { return SteamAPI_Context()->SteamController(); }
EXTERN_ABI auto _SteamUGC() { return SteamAPI_Context()->SteamUGC(); }
EXTERN_ABI auto _SteamAppList() { return SteamAPI_Context()->SteamAppList(); }
EXTERN_ABI auto _SteamInventory() { return SteamAPI_Context()->SteamInventory(); }
EXTERN_ABI auto _SteamVideo() { return SteamAPI_Context()->SteamVideo(); }
EXTERN_ABI auto _SteamParentalSettings() { return SteamAPI_Context()->SteamParentalSettings(); }
EXTERN_ABI auto _SteamGameServer() { return SteamAPI_Context()->SteamGameServer(); }
EXTERN_ABI auto _SteamGameServerStats() { return SteamAPI_Context()->SteamGameServerStats(); }
EXTERN_ABI auto _SteamInternal_ContextInit() { return SteamInternal_ContextInit(); }
