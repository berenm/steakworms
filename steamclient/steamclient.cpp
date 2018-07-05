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
struct _ISteamClient {
  void const *vtbl;
};

__cdecl void *_CreateInterface(const char *version, uint32_t *result) {
  debug("CreateInterface(%s, %p)", version, result);
  if (result)
    *result = 0;

  if (std::strcmp("SteamClient017", version) == 0) {
    auto event = CreateEventA(NULL, FALSE, TRUE, "SteamStart_SharedMemLock");
    assert(event != NULL);

    auto file = CreateFileA("steamshared", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
    assert(file != INVALID_HANDLE_VALUE);

    SetFilePointer(file, 1024, 0, FILE_BEGIN);
    SetEndOfFile(file);

    auto mapping = CreateFileMappingA(file, NULL, PAGE_READWRITE, 0, 0, "SteamStart_SharedMemFile");
    assert(mapping != NULL);

    auto ptr = static_cast<uint8_t *>(MapViewOfFile(mapping, FILE_MAP_ALL_ACCESS, 0, 0, 0));
    ptr[144] = 2;
    // ptr[148] = 1;

    static auto client = _ISteamClient{&msabi::isteam_client_017_vtbl};
    debug("return %p", &client);
    return &client;
  } else if (std::strcmp("SteamClient014", version) == 0) {
    static auto client = _ISteamClient{&msabi::isteam_client_014_vtbl};
    debug("return %p", &client);
    return &client;
  } else if (std::strcmp("SteamClient007", version) == 0) {
    static auto client = _ISteamClient{&msabi::isteam_client_007_vtbl};
    debug("return %p", &client);
    return &client;
  }

  if (result)
    *result = 1;
  return nullptr;
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
