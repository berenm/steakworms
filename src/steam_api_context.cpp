#include "steakworms.hpp"

#include <unordered_map>

static auto context = CSteamAPIContext{};

ISteamClient *SteamClient() { return SteamAPI_Context()->SteamClient(); }

ISteamUser *SteamUser() { return SteamAPI_Context()->SteamUser(); }

ISteamFriends *SteamFriends() { return SteamAPI_Context()->SteamFriends(); }

ISteamUtils *SteamUtils() { return SteamAPI_Context()->SteamUtils(); }

ISteamMatchmaking *SteamMatchmaking() { return SteamAPI_Context()->SteamMatchmaking(); }

ISteamUserStats *SteamUserStats() { return SteamAPI_Context()->SteamUserStats(); }

ISteamApps *SteamApps() { return SteamAPI_Context()->SteamApps(); }

ISteamMatchmakingServers *SteamMatchmakingServers() { return SteamAPI_Context()->SteamMatchmakingServers(); }

ISteamNetworking *SteamNetworking() { return SteamAPI_Context()->SteamNetworking(); }

ISteamRemoteStorage *SteamRemoteStorage() { return SteamAPI_Context()->SteamRemoteStorage(); }

ISteamScreenshots *SteamScreenshots() { return SteamAPI_Context()->SteamScreenshots(); }

ISteamHTTP *SteamHTTP() { return SteamAPI_Context()->SteamHTTP(); }

ISteamController *SteamController() { return SteamAPI_Context()->SteamController(); }

ISteamUGC *SteamUGC() { return SteamAPI_Context()->SteamUGC(); }

ISteamAppList *SteamAppList() { return SteamAPI_Context()->SteamAppList(); }

ISteamMusic *SteamMusic() { return SteamAPI_Context()->SteamMusic(); }

ISteamMusicRemote *SteamMusicRemote() { return SteamAPI_Context()->SteamMusicRemote(); }

ISteamHTMLSurface *SteamHTMLSurface() { return SteamAPI_Context()->SteamHTMLSurface(); }

ISteamInventory *SteamInventory() { return SteamAPI_Context()->SteamInventory(); }

ISteamVideo *SteamVideo() { return SteamAPI_Context()->SteamVideo(); }

ISteamParentalSettings *SteamParentalSettings() { return SteamAPI_Context()->SteamParentalSettings(); }

ISteamGameServer *SteamGameServer() { return SteamAPI_Context()->SteamGameServer(); }

ISteamGameServerStats *SteamGameServerStats() { return SteamAPI_Context()->SteamGameServerStats(); }

ISteamMatchmakingServerListResponse *SteamMatchmakingServerListResponse() { return SteamAPI_Context()->SteamMatchmakingServerListResponse(); }

ISteamMatchmakingPingResponse *SteamMatchmakingPingResponse() { return SteamAPI_Context()->SteamMatchmakingPingResponse(); }

ISteamMatchmakingPlayersResponse *SteamMatchmakingPlayersResponse() { return SteamAPI_Context()->SteamMatchmakingPlayersResponse(); }

ISteamMatchmakingRulesResponse *SteamMatchmakingRulesResponse() { return SteamAPI_Context()->SteamMatchmakingRulesResponse(); }

ISteamClient *CSteamAPIContext::SteamClient() const {
  debug("CSteamAPIContext::SteamClient() const");
  static ISteamClient SteamClient;
  return &SteamClient;
}

ISteamUser *CSteamAPIContext::SteamUser() const {
  debug("CSteamAPIContext::SteamUser() const");
  static ISteamUser SteamUser;
  return &SteamUser;
}

ISteamFriends *CSteamAPIContext::SteamFriends() const {
  debug("CSteamAPIContext::SteamFriends() const");
  static ISteamFriends SteamFriends;
  return &SteamFriends;
}

ISteamUtils *CSteamAPIContext::SteamUtils() const {
  debug("CSteamAPIContext::SteamUtils() const");
  static ISteamUtils SteamUtils;
  return &SteamUtils;
}

ISteamMatchmaking *CSteamAPIContext::SteamMatchmaking() const {
  debug("CSteamAPIContext::SteamMatchmaking() const");
  static ISteamMatchmaking SteamMatchmaking;
  return &SteamMatchmaking;
}

ISteamUserStats *CSteamAPIContext::SteamUserStats() const {
  debug("CSteamAPIContext::SteamUserStats() const");
  static ISteamUserStats SteamUserStats;
  return &SteamUserStats;
}

ISteamApps *CSteamAPIContext::SteamApps() const {
  debug("CSteamAPIContext::SteamApps() const");
  static ISteamApps SteamApps;
  return &SteamApps;
}

ISteamMatchmakingServers *CSteamAPIContext::SteamMatchmakingServers() const {
  debug("CSteamAPIContext::SteamMatchmakingServers() const");
  static ISteamMatchmakingServers SteamMatchmakingServers;
  return &SteamMatchmakingServers;
}

ISteamNetworking *CSteamAPIContext::SteamNetworking() const {
  debug("CSteamAPIContext::SteamNetworking() const");
  static ISteamNetworking SteamNetworking;
  return &SteamNetworking;
}

ISteamRemoteStorage *CSteamAPIContext::SteamRemoteStorage() const {
  debug("CSteamAPIContext::SteamRemoteStorage() const");
  static ISteamRemoteStorage SteamRemoteStorage;
  return &SteamRemoteStorage;
}

ISteamScreenshots *CSteamAPIContext::SteamScreenshots() const {
  debug("CSteamAPIContext::SteamScreenshots() const");
  static ISteamScreenshots SteamScreenshots;
  return &SteamScreenshots;
}

ISteamHTTP *CSteamAPIContext::SteamHTTP() const {
  debug("CSteamAPIContext::SteamHTTP() const");
  static ISteamHTTP SteamHTTP;
  return &SteamHTTP;
}

ISteamController *CSteamAPIContext::SteamController() const {
  debug("CSteamAPIContext::SteamController() const");
  static ISteamController SteamController;
  return &SteamController;
}

ISteamUGC *CSteamAPIContext::SteamUGC() const {
  debug("CSteamAPIContext::SteamUGC() const");
  static ISteamUGC SteamUGC;
  return &SteamUGC;
}

ISteamAppList *CSteamAPIContext::SteamAppList() const {
  debug("CSteamAPIContext::SteamAppList() const");
  static ISteamAppList SteamAppList;
  return &SteamAppList;
}

ISteamMusic *CSteamAPIContext::SteamMusic() const {
  debug("CSteamAPIContext::SteamMusic() const");
  static ISteamMusic SteamMusic;
  return &SteamMusic;
}

ISteamMusicRemote *CSteamAPIContext::SteamMusicRemote() const {
  debug("CSteamAPIContext::SteamMusicRemote() const");
  static ISteamMusicRemote SteamMusicRemote;
  return &SteamMusicRemote;
}

ISteamHTMLSurface *CSteamAPIContext::SteamHTMLSurface() const {
  debug("CSteamAPIContext::SteamHTMLSurface() const");
  static ISteamHTMLSurface SteamHTMLSurface;
  return &SteamHTMLSurface;
}

ISteamInventory *CSteamAPIContext::SteamInventory() const {
  debug("CSteamAPIContext::SteamInventory() const");
  static ISteamInventory SteamInventory;
  return &SteamInventory;
}

ISteamVideo *CSteamAPIContext::SteamVideo() const {
  debug("CSteamAPIContext::SteamVideo() const");
  static ISteamVideo SteamVideo;
  return &SteamVideo;
}

ISteamParentalSettings *CSteamAPIContext::SteamParentalSettings() const {
  debug("CSteamAPIContext::SteamParentalSettings() const");
  static ISteamParentalSettings SteamParentalSettings;
  return &SteamParentalSettings;
}

ISteamGameServer *CSteamAPIContext::SteamGameServer() const {
  debug("CSteamAPIContext::SteamGameServer() const");
  static ISteamGameServer SteamGameServer;
  return &SteamGameServer;
}

ISteamGameServerStats *CSteamAPIContext::SteamGameServerStats() const {
  debug("CSteamAPIContext::SteamGameServerStats() const");
  static ISteamGameServerStats SteamGameServerStats;
  return &SteamGameServerStats;
}

ISteamMatchmakingServerListResponse *CSteamAPIContext::SteamMatchmakingServerListResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingServerListResponse() const");
  static ISteamMatchmakingServerListResponse SteamMatchmakingServerListResponse;
  return &SteamMatchmakingServerListResponse;
}

ISteamMatchmakingPingResponse *CSteamAPIContext::SteamMatchmakingPingResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingPingResponse() const");
  static ISteamMatchmakingPingResponse SteamMatchmakingPingResponse;
  return &SteamMatchmakingPingResponse;
}

ISteamMatchmakingPlayersResponse *CSteamAPIContext::SteamMatchmakingPlayersResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingPlayersResponse() const");
  static ISteamMatchmakingPlayersResponse SteamMatchmakingPlayersResponse;
  return &SteamMatchmakingPlayersResponse;
}

ISteamMatchmakingRulesResponse *CSteamAPIContext::SteamMatchmakingRulesResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingRulesResponse() const");
  static ISteamMatchmakingRulesResponse SteamMatchmakingRulesResponse;
  return &SteamMatchmakingRulesResponse;
}

CSteamAPIContext *SteamAPI_Context() { return &context; }

void SteamInternal_ContextInit() { debug("SteamInternal_ContextInit()"); }
