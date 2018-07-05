#ifndef INCLUDED_STEAKWORMS_HPP
#define INCLUDED_STEAKWORMS_HPP

#include <utility>

#ifdef _WIN32
#define _GLIBCXX_USE_C99_DYNAMIC 1
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattributes"
#include <cstdio>
#include <wine/debug.h>
#pragma GCC diagnostic pop
#else
#include <cstdarg>
#include <cstdio>
#endif

#ifdef _WIN32
#define EXTERN_ABI [[gnu::ms_abi]]
#else
#define EXTERN_ABI
#endif

#ifndef _WIN32
[[gnu::format(printf, 1, 2)]] static void __debug(char const *message, ...) {
  extern int __dbg;
  dprintf(__dbg, "linux: ");
  va_list ap;
  va_start(ap, message);
  vdprintf(__dbg, message, ap);
  va_end(ap);
  dprintf(__dbg, "\n");
}
#else
template <typename... Ts>
static void __debug(char const *message, Ts &&... as) {
  WINE_DPRINTF("win32: ");
  WINE_DPRINTF(message, std::forward<decltype(as)>(as)...);
  WINE_DPRINTF("\n");
}
#endif // _WIN32

#define debug(msg, ...) __debug("%s:%d " msg, __FILE__, __LINE__, ##__VA_ARGS__)

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

extern "C" {
#include "steam_api.ipp"
#include "steam_api_context.ipp"
bool SteamAPI_InitSafe();
bool SteamAPI_IsSteamRunning();
}

struct isteam_object {
  void const *vtbl;
  char const *clazz;
};

enum EVACBan {};
enum ELogonState {};
enum ERegistrySubTree {};
enum EAppUsageEvent {};

#endif // INCLUDED_STEAKWORMS_HPP
