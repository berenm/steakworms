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

void *SteamInternal_CreateInterface(const char *version, int *result) {
  debug("SteamInternal_CreateInterface(%s, %p)", version, result);
  if (result)
    *result = 0;

  void *interface = nullptr;
  if (false) {
  } else if (std::strcmp(version, "SteamClient006") == 0) {
    static auto object = isteam_object{&isteam_client_006_vtbl, "SteamClient006"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient007") == 0) {
    static auto object = isteam_object{&isteam_client_007_vtbl, "SteamClient007"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient008") == 0) {
    static auto object = isteam_object{&isteam_client_008_vtbl, "SteamClient008"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient009") == 0) {
    static auto object = isteam_object{&isteam_client_009_vtbl, "SteamClient009"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient010") == 0) {
    static auto object = isteam_object{&isteam_client_010_vtbl, "SteamClient010"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient011") == 0) {
    static auto object = isteam_object{&isteam_client_011_vtbl, "SteamClient011"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient012") == 0) {
    static auto object = isteam_object{&isteam_client_012_vtbl, "SteamClient012"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient013") == 0) {
    static auto object = isteam_object{&isteam_client_013_vtbl, "SteamClient013"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient014") == 0) {
    static auto object = isteam_object{&isteam_client_014_vtbl, "SteamClient014"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient015") == 0) {
    static auto object = isteam_object{&isteam_client_015_vtbl, "SteamClient015"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient016") == 0) {
    static auto object = isteam_object{&isteam_client_016_vtbl, "SteamClient016"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient017") == 0) {
    static auto object = isteam_object{&isteam_client_017_vtbl, "SteamClient017"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamClient018") == 0) {
    static auto object = isteam_object{&isteam_client_018_vtbl, "SteamClient018"};
    interface          = &object;
  } else {
    assert(false);
  }

  return interface;
}

void *ISteamClient_GetInterface(void *_this, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetInterface(%p, %d, %s)", _this, pipe, version);

  void *interface = nullptr;
  if (false) {
  } else if (std::strcmp(version, "SteamUtils001") == 0) {
    static auto object = isteam_object{&isteam_utils_001_vtbl, "SteamUtils001"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils002") == 0) {
    static auto object = isteam_object{&isteam_utils_002_vtbl, "SteamUtils002"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils003") == 0) {
    static auto object = isteam_object{&isteam_utils_003_vtbl, "SteamUtils003"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils004") == 0) {
    static auto object = isteam_object{&isteam_utils_004_vtbl, "SteamUtils004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils005") == 0) {
    static auto object = isteam_object{&isteam_utils_005_vtbl, "SteamUtils005"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils006") == 0) {
    static auto object = isteam_object{&isteam_utils_006_vtbl, "SteamUtils006"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils007") == 0) {
    static auto object = isteam_object{&isteam_utils_007_vtbl, "SteamUtils007"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils008") == 0) {
    static auto object = isteam_object{&isteam_utils_008_vtbl, "SteamUtils008"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUtils009") == 0) {
    static auto object = isteam_object{&isteam_utils_009_vtbl, "SteamUtils009"};
    interface          = &object;
  } else {
    assert(false);
  }

  return interface;
}

void *ISteamClient_GetUserInterface(void *_this, HSteamUser user, HSteamPipe pipe, const char *version) {
  debug("ISteamClient_GetUserInterface(%p, %d, %d, %s)", _this, pipe, user, version);

  void *interface = nullptr;
  if (false) {
  } else if (std::strcmp(version, "SteamUser004") == 0) {
    static auto object = isteam_object{&isteam_user_004_vtbl, "SteamUser004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser005") == 0) {
    static auto object = isteam_object{&isteam_user_005_vtbl, "SteamUser005"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser006") == 0) {
    static auto object = isteam_object{&isteam_user_006_vtbl, "SteamUser006"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser007") == 0) {
    static auto object = isteam_object{&isteam_user_007_vtbl, "SteamUser007"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser008") == 0) {
    static auto object = isteam_object{&isteam_user_008_vtbl, "SteamUser008"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser009") == 0) {
    static auto object = isteam_object{&isteam_user_009_vtbl, "SteamUser009"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser010") == 0) {
    static auto object = isteam_object{&isteam_user_010_vtbl, "SteamUser010"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser011") == 0) {
    static auto object = isteam_object{&isteam_user_011_vtbl, "SteamUser011"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser012") == 0) {
    static auto object = isteam_object{&isteam_user_012_vtbl, "SteamUser012"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser013") == 0) {
    static auto object = isteam_object{&isteam_user_013_vtbl, "SteamUser013"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser014") == 0) {
    static auto object = isteam_object{&isteam_user_014_vtbl, "SteamUser014"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser015") == 0) {
    static auto object = isteam_object{&isteam_user_015_vtbl, "SteamUser015"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser016") == 0) {
    static auto object = isteam_object{&isteam_user_016_vtbl, "SteamUser016"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser017") == 0) {
    static auto object = isteam_object{&isteam_user_017_vtbl, "SteamUser017"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser018") == 0) {
    static auto object = isteam_object{&isteam_user_018_vtbl, "SteamUser018"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser019") == 0) {
    static auto object = isteam_object{&isteam_user_019_vtbl, "SteamUser019"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamUser020") == 0) {
    static auto object = isteam_object{&isteam_user_020_vtbl, "SteamUser020"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends002"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamFriends003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends003"};
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
  } else if (std::strcmp(version, "SteamFriends015") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamFriends015"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking001"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking002"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamMatchMaking003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamMatchMaking003"};
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
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUSERSTATS_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUSERSTATS_INTERFACE_VERSION002"};
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
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION001"};
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
  } else if (std::strcmp(version, "STEAMAPPS_INTERFACE_VERSION008") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPS_INTERFACE_VERSION008"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMAPPLIST_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMAPPLIST_INTERFACE_VERSION001"};
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
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION004"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION005"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION006"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION007") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION007"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION008") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION008"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION009") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION009"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION010") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION010"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION011") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION011"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION012") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION012"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION013") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION013"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMREMOTESTORAGE_INTERFACE_VERSION014") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMREMOTESTORAGE_INTERFACE_VERSION014"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMSCREENSHOTS_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMSCREENSHOTS_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMSCREENSHOTS_INTERFACE_VERSION003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMSCREENSHOTS_INTERFACE_VERSION003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTTP_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTTP_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTTP_INTERFACE_VERSION003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTTP_INTERFACE_VERSION003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMCONTROLLER_INTERFACE_VERSION") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMCONTROLLER_INTERFACE_VERSION"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamController001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamController001"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamController002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamController002"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamController003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamController003"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamController004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamController004"};
    interface          = &object;
  } else if (std::strcmp(version, "SteamController005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "SteamController005"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION004"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION005") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION005"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION006") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION006"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION007") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION007"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION008") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION008"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION009") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION009"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMUGC_INTERFACE_VERSION010") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMUGC_INTERFACE_VERSION010"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMMUSIC_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMMUSIC_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMMUSICREMOTE_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMMUSICREMOTE_INTERFACE_VERSION001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTMLSURFACE_INTERFACE_VERSION_001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTMLSURFACE_INTERFACE_VERSION_002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_003") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTMLSURFACE_INTERFACE_VERSION_003"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMHTMLSURFACE_INTERFACE_VERSION_004") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMHTMLSURFACE_INTERFACE_VERSION_004"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMINVENTORY_INTERFACE_V001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMINVENTORY_INTERFACE_V001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMINVENTORY_INTERFACE_V002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMINVENTORY_INTERFACE_V002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMVIDEO_INTERFACE_V001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMVIDEO_INTERFACE_V001"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMVIDEO_INTERFACE_V002") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMVIDEO_INTERFACE_V002"};
    interface          = &object;
  } else if (std::strcmp(version, "STEAMPARENTALSETTINGS_INTERFACE_VERSION001") == 0) {
    static auto object = isteam_object{&unimplemented_vtbl, "STEAMPARENTALSETTINGS_INTERFACE_VERSION001"};
    interface          = &object;
  } else {
    assert(false);
  }

  return interface;
}

HSteamPipe ISteamClient_CreateSteamPipe(void *_this) {
  debug("ISteamClient_CreateSteamPipe(%p)", _this);
  return 1;
}

HSteamPipe ISteamClient_ConnectToGlobalUser(void *_this, HSteamPipe pipe) {
  debug("ISteamClient_ConnectToGlobalUser(%p, %d)", _this, pipe);
  return 1;
}
} // namespace svabi
