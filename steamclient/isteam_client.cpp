#include <cassert>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::sysv_abi]]
namespace svabi {
#include "isteam_client.ipp"
} // namespace svabi

#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
namespace msabi {
#include "isteam_client.ipp"
#include "isteam_user.ipp"

HSteamPipe ISteamClient_CreateSteamPipe(void *_this) {
  debug("ISteamClient_CreateSteamPipe(%p)", _this);
  return svabi::ISteamClient_CreateSteamPipe(_this);
}

bool ISteamClient_BReleaseSteamPipe(void *_this, HSteamPipe pipe) {
  debug("ISteamClient_BReleaseSteamPipe(%p, %d)", _this, pipe);
  return svabi::ISteamClient_BReleaseSteamPipe(_this, pipe);
}

HSteamUser ISteamClient_CreateGlobalUser(void *_this, HSteamPipe *pipe) {
  debug("ISteamClient_CreateGlobalUser(%p, %d)", _this, pipe);
  assert(false);
  return 0;
}

HSteamUser ISteamClient_ConnectToGlobalUser(void *_this, HSteamPipe pipe) {
  debug("ISteamClient_ConnectToGlobalUser(%p, %d)", _this, pipe);
  return svabi::ISteamClient_ConnectToGlobalUser(_this, pipe);
}

HSteamUser ISteamClient_CreateLocalUser0(void *_this, HSteamPipe *pipe) {
  debug("ISteamClient_CreateLocalUser0(%p)", _this);
  assert(false);
  return 0;
}

HSteamUser ISteamClient_CreateLocalUser(void *_this, HSteamPipe *pipe, EAccountType type) {
  debug("ISteamClient_CreateLocalUser(%p, %d)", _this, type);
  return svabi::ISteamClient_CreateLocalUser(_this, pipe, type);
}

void ISteamClient_ReleaseUser(void *_this, HSteamPipe pipe, HSteamUser user) {
  debug("ISteamClient_ReleaseUser(%p, %d, %d)", _this, pipe, user);
  return svabi::ISteamClient_ReleaseUser(_this, pipe, user);
}

void *ISteamClient_GetIVAC(void *_this, HSteamUser user) {
  debug("ISteamClient_GetIVAC(%p, %d)", _this, user);
  return nullptr;
}

void *ISteamClient_GetInterface(void *_this, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetInterface(%p, %d, %s)", _this, pipe, version);
  void *interface = svabi::ISteamClient_GetInterface(_this, pipe, version);

  if (std::strcmp(version, "SteamUtils006") == 0) {
  } else {
    assert(false);
  }

  return interface;
}

void *ISteamClient_GetUserInterface(void *_this, HSteamUser user, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetUserInterface(%p, %d, %d, %s)", _this, pipe, user, version);
  auto interface = static_cast<ISteamObject *>(svabi::ISteamClient_GetUserInterface(_this, user, pipe, version));

  if (false) {
  } else if (std::strcmp(version, "SteamUser011") == 0) {
    interface->vtbl = &isteam_user_011_vtbl;
  } else if (std::strcmp(version, "SteamUser017") == 0) {
  } else if (std::strcmp(version, "SteamFriends004") == 0) {
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

  debug("return %p", interface);
  return interface;
}

const char *ISteamClient_GetUniverseName(void *_this, EUniverse universe) {
  debug("ISteamClient_GetUniverseName(%p, %d)", _this, universe);
  assert(false);
  return "";
}

void ISteamClient_SetLocalIPBinding(void *_this, uint32 ip, uint16 port) {
  debug("ISteamClient_SetLocalIPBinding(%p, %d, %d)", _this, ip, port);
  return svabi::ISteamClient_SetLocalIPBinding(_this, ip, port);
}

void ISteamClient_RunFrame(void *_this) {
  debug("ISteamClient_RunFrame(%p)", _this);
  return svabi::ISteamClient_RunFrame(_this);
}

uint32 ISteamClient_GetIPCCallCount(void *_this) {
  debug("ISteamClient_GetIPCCallCount(%p)", _this);
  return svabi::ISteamClient_GetIPCCallCount(_this);
}

void ISteamClient_SetWarningMessageHook(void *_this, SteamAPIWarningMessageHook_t hook) {
  debug("ISteamClient_SetWarningMessageHook(%p, %p)", _this, hook);
  svabi::ISteamClient_SetWarningMessageHook(_this, hook);
  assert(false);
}

bool ISteamClient_BShutdownIfAllPipesClosed(void *_this) {
  debug("ISteamClient_BShutdownIfAllPipesClosed(%p)", _this);
  return svabi::ISteamClient_BShutdownIfAllPipesClosed(_this);
}

void ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(void *_this, void (*callback)(SteamAPICall_t, void *, uint32, int)) {
  debug("ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(%p, %p)", _this, callback);
  svabi::ISteamClient_Set_SteamAPI_CPostAPIResultInProcess(_this, callback);
  assert(false);
}

void ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(void *_this, void (*callback)(SteamAPICall_t, void *, uint32, int)) {
  debug("ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(%p, %p)", _this, callback);
  svabi::ISteamClient_Remove_SteamAPI_CPostAPIResultInProcess(_this, callback);
  assert(false);
}

void ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(void *_this, unsigned int (*callback)(int)) {
  debug("ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(%p, %p)", _this, callback);
  svabi::ISteamClient_Set_SteamAPI_CCheckCallbackRegisteredInProcess(_this, callback);
  assert(false);
}
} // namespace msabi
