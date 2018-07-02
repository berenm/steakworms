#include "steakworms.hpp"

extern "C" {
#include "steam_api.ipp"

EXTERN_ABI auto _SteamAPI_SetMiniDumpComment() {
  debug("SteamAPI_SetMiniDumpComment()");
}

EXTERN_ABI auto _SteamAPI_WriteMiniDump() { debug("SteamAPI_WriteMiniDump()"); }
}
