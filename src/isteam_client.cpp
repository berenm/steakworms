#include <cassert>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_client.ipp"
#include "isteam_user.ipp"
#include "isteam_utils.ipp"
#undef EXTERN_ABI

extern void **unimplemented_vtbl;

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
  debug("ISteamClient_CreateLocalUser(%p, %p, %d)", _this, pipe, type);
  return 1;
}

void ISteamClient_ReleaseUser(void *_this, HSteamPipe pipe, HSteamUser user) {
  debug("ISteamClient_ReleaseUser(%d, %d)", pipe, user);
}

void *ISteamClient_GetInterface(void *_this, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetInterface(%d, %s)", pipe, version);

  void *interface = nullptr;
  if (false) {
  } else if (std::strcmp(version, "SteamUtils002") == 0) {
    static auto object = isteam_object{&isteam_utils_002_vtbl, "SteamUtils002"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamUtils003"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamUtils004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamUtils005"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamUtils006"};
    interface          = &object;
  } else {
    assert(false);
  }

  debug("return %p", interface);
  return interface;
}

void *ISteamClient_GetUserInterface(void *_this, HSteamUser user, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetUserInterface(%d, %d, %s)", user, pipe, version);

  void *interface = nullptr;
  if (false) {
  } else if (std::strcmp(version, "SteamUser011") == 0) {
    static auto object = isteam_object{&isteam_user_011_vtbl, "SteamUser011"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser017") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamUser017"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends005"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends006"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends007") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends007"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends008") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends008"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends009") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends009"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends010") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends010"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends011") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends011"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends012") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends012"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends013") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends013"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends014") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends014"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking005"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking006"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking007") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking007"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking008") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking008"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking009") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking009"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMakingServers001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMakingServers001"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMakingServers002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMakingServers002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION004"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION005"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION006"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION007") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION007"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION008") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION008"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION009") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION009"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION010") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION010"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION011") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION011"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION004"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION005"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION006"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamNetworking001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamNetworking001"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamNetworking002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamNetworking002"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamNetworking003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamNetworking003"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamNetworking004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamNetworking004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamNetworking005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamNetworking005"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION012") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION012"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMSCREENSHOTS_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTTP_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMCONTROLLER_INTERFACE_VERSION") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMCONTROLLER_INTERFACE_VERSION"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION001"};
    interface          = &object;
  } else {
    assert(false);
  }

  debug("return %p", interface);
  return interface;
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
