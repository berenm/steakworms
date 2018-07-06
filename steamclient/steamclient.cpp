#include <cassert>
#include <cstring>

#include <windows.h>

#include "steakworms.hpp"
#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::sysv_abi]]
namespace svabi {
#include "isteam_client.ipp"
#include "isteam_user.ipp"
} // namespace svabi

#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
namespace msabi {
#include "isteam_client.ipp"
#include "isteam_user.ipp"
} // namespace msabi

extern "C" {
__cdecl void *_CreateInterface(const char *version, int *result) {
  // auto event = CreateEventA(NULL, FALSE, TRUE, "SteamStart_SharedMemLock");
  // assert(event != NULL);

  // auto file = CreateFileA("steamshared", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
  // assert(file != INVALID_HANDLE_VALUE);

  // SetFilePointer(file, 1024, 0, FILE_BEGIN);
  // SetEndOfFile(file);

  // auto mapping = CreateFileMappingA(file, NULL, PAGE_READWRITE, 0, 0, "SteamStart_SharedMemFile");
  // assert(mapping != NULL);

  // auto ptr = static_cast<uint8_t *>(MapViewOfFile(mapping, FILE_MAP_ALL_ACCESS, 0, 0, 0));
  // ptr[144] = 2;
  // // ptr[148] = 1;

  return msabi::SteamInternal_CreateInterface(version, result);
}

__cdecl void _Steam_ReleaseThreadLocalMemory() {
  debug("_Steam_ReleaseThreadLocalMemory");
}
}

#ifdef _WIN64
[[gnu::constructor]] void __init() { debug("init steamclient64.dll"); }
[[gnu::destructor]] void  __fini() { debug("fini steamclient64.dll"); }
#else
[[gnu::constructor]] void __init() { debug("init steamclient.dll"); }
[[gnu::destructor]] void  __fini() { debug("fini steamclient.dll"); }
#endif
