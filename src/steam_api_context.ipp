struct CSteamAPIContext {
  ISteamClient *            SteamClient() const;
  ISteamUser *              SteamUser() const;
  ISteamFriends *           SteamFriends() const;
  ISteamUtils *             SteamUtils() const;
  ISteamMatchmaking *       SteamMatchmaking() const;
  ISteamUserStats *         SteamUserStats() const;
  ISteamApps *              SteamApps() const;
  ISteamMatchmakingServers *SteamMatchmakingServers() const;
  ISteamNetworking *        SteamNetworking() const;
  ISteamRemoteStorage *     SteamRemoteStorage() const;
  ISteamScreenshots *       SteamScreenshots() const;
  ISteamHTTP *              SteamHTTP() const;
  ISteamController *        SteamController() const;
  ISteamUGC *               SteamUGC() const;
  ISteamAppList *           SteamAppList() const;
  ISteamMusic *             SteamMusic() const;
  ISteamMusicRemote *       SteamMusicRemote() const;
  ISteamHTMLSurface *       SteamHTMLSurface() const;
  ISteamInventory *         SteamInventory() const;
  ISteamVideo *             SteamVideo() const;
  ISteamParentalSettings *  SteamParentalSettings() const;
  ISteamGameServer *        SteamGameServer() const;
  ISteamGameServerStats *   SteamGameServerStats() const;

  ISteamMatchmakingServerListResponse *
                                    SteamMatchmakingServerListResponse() const;
  ISteamMatchmakingPingResponse *   SteamMatchmakingPingResponse() const;
  ISteamMatchmakingPlayersResponse *SteamMatchmakingPlayersResponse() const;
  ISteamMatchmakingRulesResponse *  SteamMatchmakingRulesResponse() const;
};

ISteamClient *            SteamClient();
ISteamUser *              SteamUser();
ISteamFriends *           SteamFriends();
ISteamUtils *             SteamUtils();
ISteamMatchmaking *       SteamMatchmaking();
ISteamUserStats *         SteamUserStats();
ISteamApps *              SteamApps();
ISteamMatchmakingServers *SteamMatchmakingServers();
ISteamNetworking *        SteamNetworking();
ISteamRemoteStorage *     SteamRemoteStorage();
ISteamScreenshots *       SteamScreenshots();
ISteamHTTP *              SteamHTTP();
ISteamController *        SteamController();
ISteamUGC *               SteamUGC();
ISteamAppList *           SteamAppList();
ISteamMusic *             SteamMusic();
ISteamMusicRemote *       SteamMusicRemote();
ISteamHTMLSurface *       SteamHTMLSurface();
ISteamInventory *         SteamInventory();
ISteamVideo *             SteamVideo();
ISteamParentalSettings *  SteamParentalSettings();
ISteamGameServer *        SteamGameServer();
ISteamGameServerStats *   SteamGameServerStats();

ISteamMatchmakingServerListResponse *SteamMatchmakingServerListResponse();
ISteamMatchmakingPingResponse *      SteamMatchmakingPingResponse();
ISteamMatchmakingPlayersResponse *   SteamMatchmakingPlayersResponse();
ISteamMatchmakingRulesResponse *     SteamMatchmakingRulesResponse();

CSteamAPIContext *SteamAPI_Context();

void SteamInternal_ContextInit();
