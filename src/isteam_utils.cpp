#include <cassert>
#include <cinttypes>
#include <cstdlib>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_utils.ipp"
#undef EXTERN_ABI

uint32 ISteamUtils_GetAppID(void *_this) {
  debug("ISteamUtils_GetAppID(%p)", _this);

  if (auto appid_str = std::getenv("STEAM_APPID")) {
    auto appid = 0u;
    if (std::sscanf(appid_str, "%u", &appid) == 1)
      return appid;
  }

  return 0;
}
} // namespace svabi
