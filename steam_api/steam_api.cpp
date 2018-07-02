#include "steakworms.hpp"

#include "steam_api.ipp"

extern "C" auto _SteamAPI_SetMiniDumpComment() {
  debug("SteamAPI_SetMiniDumpComment()");
}

extern "C" auto _SteamAPI_WriteMiniDump() { debug("SteamAPI_WriteMiniDump()"); }
