#include <cassert>
#include <cinttypes>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_utils.ipp"
#undef EXTERN_ABI
} // namespace svabi

namespace msabi {
#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
#include "isteam_utils.ipp"
#undef EXTERN_ABI

uint32 ISteamUtils_GetAppID(void *_this) {
  debug("ISteamUtils_GetAppID(%p)", _this);
  return svabi::ISteamUtils_GetAppID(_this);
}
} // namespace msabi
