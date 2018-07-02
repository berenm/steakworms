#ifndef INCLUDED_STEAKWORMS_HPP
#define INCLUDED_STEAKWORMS_HPP

#include <utility>

#ifdef _WIN32
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wattributes"
#include <wine/debug.h>
#pragma GCC diagnostic pop
#endif

#ifdef _WIN32
#define EXTERN_ABI [[gnu::ms_abi]]
#else
#define EXTERN_ABI
#endif

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
bool SteamAPI_IsSteamRunning();
}

#endif // INCLUDED_STEAKWORMS_HPP
