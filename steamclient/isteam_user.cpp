#include <cassert>
#include <cinttypes>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_user.ipp"
#undef EXTERN_ABI
} // namespace svabi

namespace msabi {
#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
#include "isteam_user.ipp"
#undef EXTERN_ABI

CSteamID *ISteamUtils_GetSteamID(void *_this, CSteamID *id) {
  debug("ISteamUtils_GetSteamID(%p, %p)", _this, id);
  *id = CSteamID{0, 0, k_EAccountTypeIndividual, k_EUniversePublic};
  return id;
}
} // namespace msabi
