#ifndef INCLUDED_STEAKWORMS_HPP
#define INCLUDED_STEAKWORMS_HPP

#include <utility>

#include <cstdio>

#ifdef _WIN32
#include <wine/debug.h>
#endif

struct SteamIDComponent_t {
  unsigned m_unAccountID : 32;
  unsigned m_unAccountInstance : 20;
  unsigned m_EAccountType : 4;
  unsigned m_EUniverse : 8;
};

struct GameID_t {
  unsigned m_nAppID : 24;
  unsigned m_nType : 8;
  unsigned m_nModID : 32;
};

#include "steam_api.hpp"

struct CCallbackBase {
#ifdef _WIN32
  [[gnu::ms_abi]] virtual void Run(void *pvParam)                = 0;
  [[gnu::ms_abi]] virtual void Run(void *pvParam, bool bIOFailure,
                                   SteamAPICall_t hSteamAPICall) = 0;
#else
  virtual void Run(void *pvParam)                = 0;
  virtual void Run(void *pvParam, bool bIOFailure,
                   SteamAPICall_t hSteamAPICall) = 0;
#endif
};

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

extern "C" ISteamClient *            SteamClient();
extern "C" ISteamUser *              SteamUser();
extern "C" ISteamFriends *           SteamFriends();
extern "C" ISteamUtils *             SteamUtils();
extern "C" ISteamMatchmaking *       SteamMatchmaking();
extern "C" ISteamUserStats *         SteamUserStats();
extern "C" ISteamApps *              SteamApps();
extern "C" ISteamMatchmakingServers *SteamMatchmakingServers();
extern "C" ISteamNetworking *        SteamNetworking();
extern "C" ISteamRemoteStorage *     SteamRemoteStorage();
extern "C" ISteamScreenshots *       SteamScreenshots();
extern "C" ISteamHTTP *              SteamHTTP();
extern "C" ISteamController *        SteamController();
extern "C" ISteamUGC *               SteamUGC();
extern "C" ISteamAppList *           SteamAppList();
extern "C" ISteamMusic *             SteamMusic();
extern "C" ISteamMusicRemote *       SteamMusicRemote();
extern "C" ISteamHTMLSurface *       SteamHTMLSurface();
extern "C" ISteamInventory *         SteamInventory();
extern "C" ISteamVideo *             SteamVideo();
extern "C" ISteamParentalSettings *  SteamParentalSettings();
extern "C" ISteamGameServer *        SteamGameServer();
extern "C" ISteamGameServerStats *   SteamGameServerStats();
extern "C" ISteamMatchmakingServerListResponse *
                                             SteamMatchmakingServerListResponse();
extern "C" ISteamMatchmakingPingResponse *   SteamMatchmakingPingResponse();
extern "C" ISteamMatchmakingPlayersResponse *SteamMatchmakingPlayersResponse();
extern "C" ISteamMatchmakingRulesResponse *  SteamMatchmakingRulesResponse();

CSteamAPIContext *SteamAPI_Context();
extern "C" void   SteamInternal_ContextInit();
extern "C" bool   SteamAPI_IsSteamRunning();

template <typename... Ts>
static void __debug(char const *message, Ts &&... as) {
#ifndef _WIN32
  extern int __dbg;
  dprintf(__dbg, "linux: ");
  dprintf(__dbg, message, std::forward<decltype(as)>(as)...);
  dprintf(__dbg, "\n");
#else
  WINE_DPRINTF("win32: ");
  WINE_DPRINTF(message, std::forward<decltype(as)>(as)...);
  WINE_DPRINTF("\n");
#endif // _WIN32
}

#define debug(msg, ...) __debug("%s:%d " msg, __FILE__, __LINE__, ##__VA_ARGS__)

#endif // INCLUDED_STEAKWORMS_HPP
