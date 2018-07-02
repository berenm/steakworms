struct CSteamAPIContext {
  EXTERN_ABI ISteamClient *SteamClient() const;
  EXTERN_ABI ISteamUser *SteamUser() const;
  EXTERN_ABI ISteamFriends *SteamFriends() const;
  EXTERN_ABI ISteamUtils *SteamUtils() const;
  EXTERN_ABI ISteamMatchmaking *SteamMatchmaking() const;
  EXTERN_ABI ISteamUserStats *SteamUserStats() const;
  EXTERN_ABI ISteamApps *SteamApps() const;
  EXTERN_ABI ISteamMatchmakingServers *SteamMatchmakingServers() const;
  EXTERN_ABI ISteamNetworking *SteamNetworking() const;
  EXTERN_ABI ISteamRemoteStorage *SteamRemoteStorage() const;
  EXTERN_ABI ISteamScreenshots *SteamScreenshots() const;
  EXTERN_ABI ISteamHTTP *SteamHTTP() const;
  EXTERN_ABI ISteamController *SteamController() const;
  EXTERN_ABI ISteamUGC *SteamUGC() const;
  EXTERN_ABI ISteamAppList *SteamAppList() const;
  EXTERN_ABI ISteamMusic *SteamMusic() const;
  EXTERN_ABI ISteamMusicRemote *SteamMusicRemote() const;
  EXTERN_ABI ISteamHTMLSurface *SteamHTMLSurface() const;
  EXTERN_ABI ISteamInventory *SteamInventory() const;
  EXTERN_ABI ISteamVideo *SteamVideo() const;
  EXTERN_ABI ISteamParentalSettings *SteamParentalSettings() const;
  EXTERN_ABI ISteamGameServer *SteamGameServer() const;
  EXTERN_ABI ISteamGameServerStats *SteamGameServerStats() const;

  EXTERN_ABI ISteamMatchmakingServerListResponse *
             SteamMatchmakingServerListResponse() const;
  EXTERN_ABI ISteamMatchmakingPingResponse *
             SteamMatchmakingPingResponse() const;
  EXTERN_ABI ISteamMatchmakingPlayersResponse *
             SteamMatchmakingPlayersResponse() const;
  EXTERN_ABI ISteamMatchmakingRulesResponse *
             SteamMatchmakingRulesResponse() const;
};

EXTERN_ABI ISteamClient *SteamClient();
EXTERN_ABI ISteamUser *SteamUser();
EXTERN_ABI ISteamFriends *SteamFriends();
EXTERN_ABI ISteamUtils *SteamUtils();
EXTERN_ABI ISteamMatchmaking *SteamMatchmaking();
EXTERN_ABI ISteamUserStats *SteamUserStats();
EXTERN_ABI ISteamApps *SteamApps();
EXTERN_ABI ISteamMatchmakingServers *SteamMatchmakingServers();
EXTERN_ABI ISteamNetworking *SteamNetworking();
EXTERN_ABI ISteamRemoteStorage *SteamRemoteStorage();
EXTERN_ABI ISteamScreenshots *SteamScreenshots();
EXTERN_ABI ISteamHTTP *SteamHTTP();
EXTERN_ABI ISteamController *SteamController();
EXTERN_ABI ISteamUGC *SteamUGC();
EXTERN_ABI ISteamAppList *SteamAppList();
EXTERN_ABI ISteamMusic *SteamMusic();
EXTERN_ABI ISteamMusicRemote *SteamMusicRemote();
EXTERN_ABI ISteamHTMLSurface *SteamHTMLSurface();
EXTERN_ABI ISteamInventory *SteamInventory();
EXTERN_ABI ISteamVideo *SteamVideo();
EXTERN_ABI ISteamParentalSettings *SteamParentalSettings();
EXTERN_ABI ISteamGameServer *SteamGameServer();
EXTERN_ABI ISteamGameServerStats *SteamGameServerStats();

EXTERN_ABI ISteamMatchmakingServerListResponse *
           SteamMatchmakingServerListResponse();
EXTERN_ABI ISteamMatchmakingPingResponse *SteamMatchmakingPingResponse();
EXTERN_ABI ISteamMatchmakingPlayersResponse *SteamMatchmakingPlayersResponse();
EXTERN_ABI ISteamMatchmakingRulesResponse *SteamMatchmakingRulesResponse();

EXTERN_ABI CSteamAPIContext *SteamAPI_Context();

EXTERN_ABI void SteamInternal_ContextInit();
