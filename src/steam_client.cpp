#include <cassert>

#include <unistd.h>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_client.ipp"
#undef EXTERN_ABI

HSteamPipe ISteamClient_CreateSteamPipe(void *_this) {
  debug("ISteamClient_CreateSteamPipe()");
  return 1;
}

bool ISteamClient_BReleaseSteamPipe(void *_this, HSteamPipe pipe) {
  debug("ISteamClient_BReleaseSteamPipe(%d)", pipe);
  return true;
}

HSteamUser ISteamClient_ConnectToGlobalUser(void *_this, HSteamPipe pipe) {
  debug("ISteamClient_ConnectToGlobalUser(%d)", pipe);
  return 1;
}

HSteamUser ISteamClient_CreateLocalUser(void *_this, HSteamPipe *pipe, EAccountType type) {
  debug("ISteamClient_CreateLocalUser(%d, %d)", pipe, type);
  return 1;
}

void ISteamClient_ReleaseUser(void *_this, HSteamPipe pipe, HSteamUser user) {
  debug("ISteamClient_ReleaseUser(%d, %d)", pipe, user);
}

void *ISteamClient_GetInterface(void *_this, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetInterface(%d, %s)", pipe, version);
  return nullptr;
}

void *ISteamClient_GetUserInterface(void *_this, HSteamUser user, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetUserInterface(%d, %d, %s)", user, pipe, version);
  return nullptr;
}

void ISteamClient_SetLocalIPBinding(void *_this, uint32 ip, uint16 port) {
  debug("ISteamClient_SetLocalIPBinding(%d, %d)", ip, port);
}

void ISteamClient_RunFrame(void *_this) { debug("ISteamClient_RunFrame()"); }

uint32 ISteamClient_GetIPCCallCount(void *_this) {
  debug("ISteamClient_GetIPCCallCount()");
  return 0;
}

void ISteamClient_SetWarningMessageHook(void *_this, SteamAPIWarningMessageHook_t hook) {
  debug("ISteamClient_SetWarningMessageHook(%p)", hook);
}

bool ISteamClient_BShutdownIfAllPipesClosed(void *_this) {
  debug("ISteamClient_BShutdownIfAllPipesClosed()");
  return true;
}

void ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(void *_this,
                                                       void (*callback)(SteamAPICall_t, void *, uint32, int)) {
  debug("ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(%p)", callback);
}

void ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(void *_this,
                                                          void (*callback)(SteamAPICall_t, void *, uint32, int)) {
  debug("ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(%p)", callback);
}

void ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *_this, unsigned int (*callback)(int)) {
  debug("ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(%p)", callback);
}
} // namespace svabi
