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

extern "C" void   legacy_key_registration(const char *, const char *);
extern "C" bool   legacy_key_installed(void);
extern "C" void   pre_minidump_callback(void *);
extern "C" void   warning_message_hook(int, const char *);
extern "C" uint32 check_callback_registered(int);

typedef decltype(&legacy_key_registration)   PFNLegacyKeyRegistration;
typedef decltype(&legacy_key_installed)      PFNLegacyKeyInstalled;
typedef decltype(&pre_minidump_callback)     PFNPreMinidumpCallback;
typedef decltype(&warning_message_hook)      SteamAPIWarningMessageHook_t;
typedef decltype(&check_callback_registered) SteamAPI_CheckCallbackRegistered_t;

#endif // INCLUDED_STEAM_TYPES_HPP
