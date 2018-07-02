#ifndef INCLUDED_STEAM_TYPES_HPP
#define INCLUDED_STEAM_TYPES_HPP

#include <cstdint>

typedef std::int8_t  int8;
typedef std::int16_t int16;
typedef std::int32_t int32;
typedef std::int64_t int64;

typedef std::uint8_t  uint8;
typedef std::uint16_t uint16;
typedef std::uint32_t uint32;
typedef std::uint64_t uint64;

typedef void (*PFNLegacyKeyRegistration)(const char *, const char *);
typedef bool (*PFNLegacyKeyInstalled)(void);
typedef void (*PFNPreMinidumpCallback)(void *);
typedef void (*SteamAPIWarningMessageHook_t)(int, const char *);
typedef uint32 (*SteamAPI_CheckCallbackRegistered_t)(int);

#endif // INCLUDED_STEAM_TYPES_HPP
