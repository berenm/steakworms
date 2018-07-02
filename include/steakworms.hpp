#ifndef INCLUDED_STEAKWORMS_HPP
#define INCLUDED_STEAKWORMS_HPP

#define _GLIBCXX_USE_C99_DYNAMIC 1

#include <cstdio>
#include <utility>

#ifdef _WIN32
#include <wine/debug.h>
#endif

#include "steam_types.hpp"

struct SteamIDComponent_t {
  unsigned m_unAccountID : 32;
  unsigned m_unAccountInstance : 20;
  unsigned m_EAccountType : 4;
  unsigned m_EUniverse : 8;
};

struct GameID_t {
  unsigned m_nAppID : 24;
  unsigned m_nType : 8;
  unsigned m_nModID : 32;
};

union SteamID_t {
  SteamIDComponent_t m_comp;
  uint64             m_unAll64Bits;
};

#if 0
struct CSteamID {
  union SteamID_t m_steamid;
};
#endif

typedef uint64 CSteamID;

enum EGameIDType {
  k_EGameIDTypeApp      = 0,
  k_EGameIDTypeGameMod  = 1,
  k_EGameIDTypeShortcut = 2,
  k_EGameIDTypeP2P      = 3,
};

struct CGameID {
  uint64   m_ulGameID;
  GameID_t m_gameID;
};

#include "steam_api.hpp"
#include "steam_api_context.hpp"

extern "C" bool SteamAPI_IsSteamRunning();

struct CCallbackBase {
#ifdef _WIN32
  [[gnu::ms_abi]] virtual void Run(void *pvParam)                = 0;
  [[gnu::ms_abi]] virtual void Run(void *pvParam, bool bIOFailure,
                                   SteamAPICall_t hSteamAPICall) = 0;
#else
  virtual void Run(void *pvParam)                = 0;
  virtual void Run(void *pvParam, bool bIOFailure,
                   SteamAPICall_t hSteamAPICall) = 0;
#endif
};

namespace steakworms {
[[gnu::weak, gnu::noinline]] void execute_callback(void *callback, void *data) {
  static_cast<CCallbackBase *>(callback)->Run(data);
}
[[gnu::weak, gnu::noinline]] void execute_callback(void *callback, void *data,
                                                   bool           failure,
                                                   SteamAPICall_t call) {
  static_cast<CCallbackBase *>(callback)->Run(data, failure, call);
}

void execute_callbacks(int type, void *data);
void execute_callbacks(int type, void *data, bool failure, SteamAPICall_t call);
} // namespace steakworms

template <typename... Ts>
static void __debug(char const *message, Ts &&... as) {
#ifndef _WIN32
  extern int __dbg;
  dprintf(__dbg, "linux: ");
  dprintf(__dbg, message, std::forward<decltype(as)>(as)...);
  dprintf(__dbg, "\n");
#else
  WINE_DPRINTF("win32: ");
  WINE_DPRINTF(message, std::forward<decltype(as)>(as)...);
  WINE_DPRINTF("\n");
#endif // _WIN32
}

#define debug(msg, ...) __debug("%s:%d " msg, __FILE__, __LINE__, ##__VA_ARGS__)

#endif // INCLUDED_STEAKWORMS_HPP
