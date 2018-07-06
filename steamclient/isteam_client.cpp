#include <cassert>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_client.ipp"
#undef EXTERN_ABI
} // namespace svabi

namespace msabi {
#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
#include "isteam_client.ipp"
#include "isteam_user.ipp"
#include "isteam_utils.ipp"
#undef EXTERN_ABI

extern void **unimplemented_vtbl;

void *SteamInternal_CreateInterface(const char *version, int *result) {
  debug("SteamInternal_CreateInterface(%s, %p)", version, result);
  if (result)
    *result = 0;

  auto interface = static_cast<isteam_object *>(svabi::SteamInternal_CreateInterface(version, result));
  if (false) {
  } else if (std::strcmp(version, "SteamClient006") == 0) {
    interface->vtbl = &isteam_client_006_vtbl;
  } else if (std::strcmp(version, "SteamClient007") == 0) {
    interface->vtbl = &isteam_client_007_vtbl;
  } else if (std::strcmp(version, "SteamClient008") == 0) {
    interface->vtbl = &isteam_client_008_vtbl;
  } else if (std::strcmp(version, "SteamClient009") == 0) {
    interface->vtbl = &isteam_client_009_vtbl;
  } else if (std::strcmp(version, "SteamClient010") == 0) {
    interface->vtbl = &isteam_client_010_vtbl;
  } else if (std::strcmp(version, "SteamClient011") == 0) {
    interface->vtbl = &isteam_client_011_vtbl;
  } else if (std::strcmp(version, "SteamClient012") == 0) {
    interface->vtbl = &isteam_client_012_vtbl;
  } else if (std::strcmp(version, "SteamClient013") == 0) {
    interface->vtbl = &isteam_client_013_vtbl;
  } else if (std::strcmp(version, "SteamClient014") == 0) {
    interface->vtbl = &isteam_client_014_vtbl;
  } else if (std::strcmp(version, "SteamClient015") == 0) {
    interface->vtbl = &isteam_client_015_vtbl;
  } else if (std::strcmp(version, "SteamClient016") == 0) {
    interface->vtbl = &isteam_client_016_vtbl;
  } else if (std::strcmp(version, "SteamClient017") == 0) {
    interface->vtbl = &isteam_client_017_vtbl;
  } else if (std::strcmp(version, "SteamClient018") == 0) {
    interface->vtbl = &isteam_client_018_vtbl;
  } else {
    assert(false);
  }

  return interface;
}

void *ISteamClient_GetInterface(void *_this, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetInterface(%p, %d, %s)", _this, pipe, version);

  auto interface = static_cast<isteam_object *>(svabi::ISteamClient_GetInterface(_this, pipe, version));
  if (false) {
  } else if (std::strcmp(version, "SteamUtils001") == 0) {
    interface->vtbl = &isteam_utils_001_vtbl;
  } else if (std::strcmp(version, "SteamUtils002") == 0) {
    interface->vtbl = &isteam_utils_002_vtbl;
  } else if (std::strcmp(version, "SteamUtils003") == 0) {
    interface->vtbl = &isteam_utils_003_vtbl;
  } else if (std::strcmp(version, "SteamUtils004") == 0) {
    interface->vtbl = &isteam_utils_004_vtbl;
  } else if (std::strcmp(version, "SteamUtils005") == 0) {
    interface->vtbl = &isteam_utils_005_vtbl;
  } else if (std::strcmp(version, "SteamUtils006") == 0) {
    interface->vtbl = &isteam_utils_006_vtbl;
  } else if (std::strcmp(version, "SteamUtils007") == 0) {
    interface->vtbl = &isteam_utils_007_vtbl;
  } else if (std::strcmp(version, "SteamUtils008") == 0) {
    interface->vtbl = &isteam_utils_008_vtbl;
  } else if (std::strcmp(version, "SteamUtils009") == 0) {
    interface->vtbl = &isteam_utils_009_vtbl;
  } else {
    assert(false);
  }

  return interface;
}

void *ISteamClient_GetUserInterface(void *_this, HSteamUser user, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetUserInterface(%p, %d, %d, %s)", _this, pipe, user, version);

  auto interface = static_cast<isteam_object *>(svabi::ISteamClient_GetUserInterface(_this, user, pipe, version));
  if (false) {
  } else if (std::strcmp(version, "SteamUser004") == 0) {
    interface->vtbl = &isteam_user_004_vtbl;
  } else if (std::strcmp(version, "SteamUser005") == 0) {
    interface->vtbl = &isteam_user_005_vtbl;
  } else if (std::strcmp(version, "SteamUser006") == 0) {
    interface->vtbl = &isteam_user_006_vtbl;
  } else if (std::strcmp(version, "SteamUser007") == 0) {
    interface->vtbl = &isteam_user_007_vtbl;
  } else if (std::strcmp(version, "SteamUser008") == 0) {
    interface->vtbl = &isteam_user_008_vtbl;
  } else if (std::strcmp(version, "SteamUser009") == 0) {
    interface->vtbl = &isteam_user_009_vtbl;
  } else if (std::strcmp(version, "SteamUser010") == 0) {
    interface->vtbl = &isteam_user_010_vtbl;
  } else if (std::strcmp(version, "SteamUser011") == 0) {
    interface->vtbl = &isteam_user_011_vtbl;
  } else if (std::strcmp(version, "SteamUser012") == 0) {
    interface->vtbl = &isteam_user_012_vtbl;
  } else if (std::strcmp(version, "SteamUser013") == 0) {
    interface->vtbl = &isteam_user_013_vtbl;
  } else if (std::strcmp(version, "SteamUser014") == 0) {
    interface->vtbl = &isteam_user_014_vtbl;
  } else if (std::strcmp(version, "SteamUser015") == 0) {
    interface->vtbl = &isteam_user_015_vtbl;
  } else if (std::strcmp(version, "SteamUser016") == 0) {
    interface->vtbl = &isteam_user_016_vtbl;
  } else if (std::strcmp(version, "SteamUser017") == 0) {
    interface->vtbl = &isteam_user_017_vtbl;
  } else if (std::strcmp(version, "SteamUser018") == 0) {
    interface->vtbl = &isteam_user_018_vtbl;
  } else if (std::strcmp(version, "SteamUser019") == 0) {
    interface->vtbl = &isteam_user_019_vtbl;
  } else if (std::strcmp(version, "SteamUser020") == 0) {
    interface->vtbl = &isteam_user_020_vtbl;
  } else if (std::strcmp(version, "SteamFriends002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends006") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends007") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends008") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends009") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends010") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends011") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends012") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends013") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends014") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamFriends015") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking006") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking007") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking008") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMaking009") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMakingServers001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamMatchMakingServers002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION006") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION007") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION008") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION009") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION010") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION011") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION006") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION008") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMAPPLIST_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamNetworking001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamNetworking002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamNetworking003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamNetworking004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamNetworking005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION006") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION007") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION008") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION009") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION010") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION011") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION012") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION013") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION014") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMCONTROLLER_INTERFACE_VERSION") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamController001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamController002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamController003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamController004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "SteamController005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION005") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION006") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION007") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION008") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION009") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION010") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMMUSIC_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMMUSICREMOTE_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_003") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_004") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMINVENTORY_INTERFACE_V001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMINVENTORY_INTERFACE_V002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMVIDEO_INTERFACE_V001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMVIDEO_INTERFACE_V002") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else if (std::strcmp(version, "STEAMPARENTALSETTINGS_INTERFACE_VERSION001") == 0) {
    interface->vtbl = &unimplemented_vtbl;
  } else {
    assert(false);
  }

  return interface;
}

HSteamPipe ISteamClient_CreateSteamPipe(void *_this) {
  debug("ISteamClient_CreateSteamPipe(%p)", _this);
  return svabi::ISteamClient_CreateSteamPipe(_this);
}

HSteamPipe ISteamClient_ConnectToGlobalUser(void *_this, HSteamPipe pipe) {
  debug("ISteamClient_ConnectToGlobalUser(%p, %d)", _this, pipe);
  return svabi::ISteamClient_ConnectToGlobalUser(_this, pipe);
}
} // namespace msabi
