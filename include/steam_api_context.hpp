#ifndef INCLUDED_STEAM_API_CONTEXT_HPP
#define INCLUDED_STEAM_API_CONTEXT_HPP

#include "steam_api.hpp"

struct CSteamAPIContext {
  ISteamClient *                       SteamClient() const;
  ISteamUser *                         SteamUser() const;
  ISteamFriends *                      SteamFriends() const;
  ISteamUtils *                        SteamUtils() const;
  ISteamMatchmaking *                  SteamMatchmaking() const;
  ISteamUserStats *                    SteamUserStats() const;
  ISteamApps *                         SteamApps() const;
  ISteamMatchmakingServers *           SteamMatchmakingServers() const;
  ISteamNetworking *                   SteamNetworking() const;
  ISteamRemoteStorage *                SteamRemoteStorage() const;
  ISteamScreenshots *                  SteamScreenshots() const;
  ISteamHTTP *                         SteamHTTP() const;
  ISteamController *                   SteamController() const;
  ISteamUGC *                          SteamUGC() const;
  ISteamAppList *                      SteamAppList() const;
  ISteamMusic *                        SteamMusic() const;
  ISteamMusicRemote *                  SteamMusicRemote() const;
  ISteamHTMLSurface *                  SteamHTMLSurface() const;
  ISteamInventory *                    SteamInventory() const;
  ISteamVideo *                        SteamVideo() const;
  ISteamParentalSettings *             SteamParentalSettings() const;
  ISteamGameServer *                   SteamGameServer() const;
  ISteamGameServerStats *              SteamGameServerStats() const;
  ISteamMatchmakingServerListResponse *SteamMatchmakingServerListResponse() const;
  ISteamMatchmakingPingResponse *      SteamMatchmakingPingResponse() const;
  ISteamMatchmakingPlayersResponse *   SteamMatchmakingPlayersResponse() const;
  ISteamMatchmakingRulesResponse *     SteamMatchmakingRulesResponse() const;
};

extern "C" ISteamClient *                       SteamClient();
extern "C" ISteamUser *                         SteamUser();
extern "C" ISteamFriends *                      SteamFriends();
extern "C" ISteamUtils *                        SteamUtils();
extern "C" ISteamMatchmaking *                  SteamMatchmaking();
extern "C" ISteamUserStats *                    SteamUserStats();
extern "C" ISteamApps *                         SteamApps();
extern "C" ISteamMatchmakingServers *           SteamMatchmakingServers();
extern "C" ISteamNetworking *                   SteamNetworking();
extern "C" ISteamRemoteStorage *                SteamRemoteStorage();
extern "C" ISteamScreenshots *                  SteamScreenshots();
extern "C" ISteamHTTP *                         SteamHTTP();
extern "C" ISteamController *                   SteamController();
extern "C" ISteamUGC *                          SteamUGC();
extern "C" ISteamAppList *                      SteamAppList();
extern "C" ISteamMusic *                        SteamMusic();
extern "C" ISteamMusicRemote *                  SteamMusicRemote();
extern "C" ISteamHTMLSurface *                  SteamHTMLSurface();
extern "C" ISteamInventory *                    SteamInventory();
extern "C" ISteamVideo *                        SteamVideo();
extern "C" ISteamParentalSettings *             SteamParentalSettings();
extern "C" ISteamGameServer *                   SteamGameServer();
extern "C" ISteamGameServerStats *              SteamGameServerStats();
extern "C" ISteamMatchmakingServerListResponse *SteamMatchmakingServerListResponse();
extern "C" ISteamMatchmakingPingResponse *      SteamMatchmakingPingResponse();
extern "C" ISteamMatchmakingPlayersResponse *   SteamMatchmakingPlayersResponse();
extern "C" ISteamMatchmakingRulesResponse *     SteamMatchmakingRulesResponse();

CSteamAPIContext *SteamAPI_Context();

extern "C" void SteamInternal_ContextInit();

#endif // INCLUDED_STEAM_API_CONTEXT_HPP
