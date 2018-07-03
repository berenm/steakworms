#include <cassert>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::sysv_abi]]
namespace svabi {
#include "isteam_client.ipp"
}

#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::ms_abi, gnu::stdcall]]
namespace msabi {
#include "isteam_client.ipp"

HSteamPipe ISteamClient_CreateSteamPipe(void *_this) { return svabi::ISteamClient_CreateSteamPipe(_this); }

bool ISteamClient_BReleaseSteamPipe(void *_this, HSteamPipe pipe) {
  return svabi::ISteamClient_BReleaseSteamPipe(_this, pipe);
}

HSteamUser ISteamClient_ConnectToGlobalUser(void *_this, HSteamPipe pipe) {
  return svabi::ISteamClient_ConnectToGlobalUser(_this, pipe);
}

HSteamUser ISteamClient_CreateLocalUser(void *_this, HSteamPipe *pipe, EAccountType type) {
  return svabi::ISteamClient_CreateLocalUser(_this, pipe, type);
}

void ISteamClient_ReleaseUser(void *_this, HSteamPipe pipe, HSteamUser user) {
  return svabi::ISteamClient_ReleaseUser(_this, pipe, user);
}

void *ISteamClient_GetInterface(void *_this, HSteamPipe pipe, const char *version) {
  void *interface = svabi::ISteamClient_GetInterface(_this, pipe, version);

  if (std::strcmp(version, "SteamUtils006") == 0) {
  } else {
    assert(false);
  }

  return interface;
}

void *ISteamClient_GetUserInterface(void *_this, HSteamUser user, HSteamPipe pipe, const char *version) {
  void *interface = svabi::ISteamClient_GetUserInterface(_this, user, pipe, version);

  if (std::strcmp(version, "SteamUser017") == 0) {
  } else if (std::strcmp(version, "SteamFriends014") == 0) {
  } else if (std::strcmp(version, "SteamMatchMaking009") == 0) {
  } else if (std::strcmp(version, "SteamMatchMakingServers002") == 0) {
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION011") == 0) {
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION006") == 0) {
  } else if (std::strcmp(version, "SteamNetworking005") == 0) {
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION012") == 0) {
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION002") == 0) {
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION002") == 0) {
  } else if (std::strcmp(version, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001") == 0) {
  } else if (std::strcmp(version, "STEAMCONTROLLER_INTERFACE_VERSION") == 0) {
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION001") == 0) {
  } else {
    assert(false);
  }

  return interface;
}

void ISteamClient_SetLocalIPBinding(void *_this, uint32 ip, uint16 port) {
  return svabi::ISteamClient_SetLocalIPBinding(_this, ip, port);
}

void ISteamClient_RunFrame(void *_this) { return svabi::ISteamClient_RunFrame(_this); }

uint32 ISteamClient_GetIPCCallCount(void *_this) { return svabi::ISteamClient_GetIPCCallCount(_this); }

void ISteamClient_SetWarningMessageHook(void *_this, SteamAPIWarningMessageHook_t hook) {
  svabi::ISteamClient_SetWarningMessageHook(_this, hook);
  assert(false);
}

bool ISteamClient_BShutdownIfAllPipesClosed(void *_this) {
  return svabi::ISteamClient_BShutdownIfAllPipesClosed(_this);
}

void ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(void *_this,
                                                       void (*callback)(SteamAPICall_t, void *, uint32, int)) {
  svabi::ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(_this, callback);
  assert(false);
}

void ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(void *_this,
                                                          void (*callback)(SteamAPICall_t, void *, uint32, int)) {
  svabi::ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(_this, callback);
  assert(false);
}

void ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *_this, unsigned int (*callback)(int)) {
  svabi::ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this, callback);
  assert(false);
}

} // namespace msabi

extern "C" {
struct _ISteamClient {
  void const *vtbl;
};

EXTERN_ABI bool _SteamAPI_Init() {
  debug("SteamAPI_Init");
  return SteamAPI_Init();
}

EXTERN_ABI void _SteamAPI_RunCallbacks() {
  debug("SteamAPI_RunCallbacks");
  return SteamAPI_RunCallbacks();
}

EXTERN_ABI void _SteamGameServer_RunCallbacks() {
  debug("SteamGameServer_RunCallbacks");
  return SteamGameServer_RunCallbacks();
}

EXTERN_ABI void _SteamAPI_RegisterCallback(void *pCallback, int callback) {
  debug("SteamAPI_RegisterCallback");
  return SteamAPI_RegisterCallback(pCallback, callback);
}

EXTERN_ABI void _SteamAPI_UnregisterCallback(void *pCallback) {
  debug("SteamAPI_UnregisterCallback");
  return SteamAPI_UnregisterCallback(pCallback);
}

EXTERN_ABI void _SteamAPI_RegisterCallResult(void *pCallback, SteamAPICall_t callback) {
  debug("SteamAPI_RegisterCallResult");
  return SteamAPI_RegisterCallResult(pCallback, callback);
}

EXTERN_ABI void _SteamAPI_UnregisterCallResult(void *pCallback, SteamAPICall_t callback) {
  debug("SteamAPI_UnregisterCallResult");
  return SteamAPI_UnregisterCallResult(pCallback, callback);
}

EXTERN_ABI bool _SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort,
                                               int eServerMode, const char *pchVersionString) {
  debug("SteamInternal_GameServer_Init");
  return SteamInternal_GameServer_Init(unIP, usPort, usGamePort, usQueryPort, eServerMode, pchVersionString);
}

EXTERN_ABI void _SteamAPI_Shutdown() {
  debug("SteamAPI_Shutdown");
  return SteamAPI_Shutdown();
}

EXTERN_ABI void _SteamGameServer_Shutdown() {
  debug("SteamGameServer_Shutdown");
  return SteamGameServer_Shutdown();
}

EXTERN_ABI HSteamUser _SteamAPI_GetHSteamUser() {
  debug("SteamAPI_GetHSteamUser");
  return SteamAPI_GetHSteamUser();
}

EXTERN_ABI HSteamPipe _SteamAPI_GetHSteamPipe() {
  debug("SteamAPI_GetHSteamPipe");
  return SteamAPI_GetHSteamPipe();
}

EXTERN_ABI HSteamUser _SteamGameServer_GetHSteamUser() {
  debug("SteamGameServer_GetHSteamUser");
  return SteamGameServer_GetHSteamUser();
}

EXTERN_ABI HSteamPipe _SteamGameServer_GetHSteamPipe() {
  debug("SteamGameServer_GetHSteamPipe");
  return SteamGameServer_GetHSteamPipe();
}

EXTERN_ABI void *_SteamInternal_CreateInterface(const char *version) {
  debug("SteamInternal_CreateInterface");
  return SteamInternal_CreateInterface(version);
}

EXTERN_ABI bool _SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID) {
  debug("SteamAPI_RestartAppIfNecessary");
  return SteamAPI_RestartAppIfNecessary(unOwnAppID);
}

EXTERN_ABI auto _SteamHTMLSurface() {
  debug("SteamHTMLSurface");
  return SteamHTMLSurface();
}

EXTERN_ABI auto _SteamClient() {
  debug("SteamClient");
  static _ISteamClient client = {&msabi::isteam_client_017_vtbl};
  return &client;
}

EXTERN_ABI auto _SteamUser() {
  debug("SteamUser");
  return SteamUser();
}

EXTERN_ABI auto _SteamFriends() {
  debug("SteamFriends");
  return SteamFriends();
}

EXTERN_ABI auto _SteamUtils() {
  debug("SteamUtils");
  return SteamUtils();
}

EXTERN_ABI auto _SteamMatchmaking() {
  debug("SteamMatchmaking");
  return SteamMatchmaking();
}

EXTERN_ABI auto _SteamMatchmakingServerListResponse() {
  debug("SteamMatchmakingServerListResponse");
  return SteamMatchmakingServerListResponse();
}

EXTERN_ABI auto _SteamMatchmakingPingResponse() {
  debug("SteamMatchmakingPingResponse");
  return SteamMatchmakingPingResponse();
}

EXTERN_ABI auto _SteamMatchmakingPlayersResponse() {
  debug("SteamMatchmakingPlayersResponse");
  return SteamMatchmakingPlayersResponse();
}

EXTERN_ABI auto _SteamMatchmakingRulesResponse() {
  debug("SteamMatchmakingRulesResponse");
  return SteamMatchmakingRulesResponse();
}

EXTERN_ABI auto _SteamMatchmakingServers() {
  debug("SteamMatchmakingServers");
  return SteamMatchmakingServers();
}

EXTERN_ABI auto _SteamRemoteStorage() {
  debug("SteamRemoteStorage");
  return SteamRemoteStorage();
}

EXTERN_ABI auto _SteamUserStats() {
  debug("SteamUserStats");
  return SteamUserStats();
}

EXTERN_ABI auto _SteamApps() {
  debug("SteamApps");
  return SteamApps();
}

EXTERN_ABI auto _SteamNetworking() {
  debug("SteamNetworking");
  return SteamNetworking();
}

EXTERN_ABI auto _SteamScreenshots() {
  debug("SteamScreenshots");
  return SteamScreenshots();
}

EXTERN_ABI auto _SteamMusic() {
  debug("SteamMusic");
  return SteamMusic();
}

EXTERN_ABI auto _SteamMusicRemote() {
  debug("SteamMusicRemote");
  return SteamMusicRemote();
}

EXTERN_ABI auto _SteamHTTP() {
  debug("SteamHTTP");
  return SteamHTTP();
}

EXTERN_ABI auto _SteamController() {
  debug("SteamController");
  return SteamController();
}

EXTERN_ABI auto _SteamUGC() {
  debug("SteamUGC");
  return SteamUGC();
}

EXTERN_ABI auto _SteamAppList() {
  debug("SteamAppList");
  return SteamAppList();
}

EXTERN_ABI auto _SteamInventory() {
  debug("SteamInventory");
  return SteamInventory();
}

EXTERN_ABI auto _SteamVideo() {
  debug("SteamVideo");
  return SteamVideo();
}

EXTERN_ABI auto _SteamParentalSettings() {
  debug("SteamParentalSettings");
  return SteamParentalSettings();
}

EXTERN_ABI auto _SteamGameServer() {
  debug("SteamGameServer");
  return SteamGameServer();
}

EXTERN_ABI auto _SteamGameServerStats() {
  debug("SteamGameServerStats");
  return SteamGameServerStats();
}

EXTERN_ABI auto _SteamInternal_ContextInit() {
  debug("SteamInternal_ContextInit");
  return SteamInternal_ContextInit();
}

EXTERN_ABI auto _SteamAPI_InitSafe() {
  debug("SteamAPI_InitSafe");
  return SteamAPI_InitSafe();
}

EXTERN_ABI auto _SteamAPI_SetMiniDumpComment() { debug("SteamAPI_SetMiniDumpComment()"); }

EXTERN_ABI auto _SteamAPI_WriteMiniDump() { debug("SteamAPI_WriteMiniDump()"); }
}

[[gnu::constructor]] void __init() { debug("init steam_api.dll"); }

[[gnu::destructor]] void __fini() { debug("fini steam_api.dll"); }
