#include "steakworms.hpp"

#include <algorithm>
#include <unordered_map>
#include <vector>

static auto callbacks      = std::unordered_map<int, std::vector<void *>>{};
static auto callback_types = std::unordered_map<void *, int>{};

bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID) {
  debug("SteamAPI_RestartAppIfNecessary");
  return false;
}

bool SteamAPI_Init() {
  debug("SteamAPI_Init");
  return true;
}

bool SteamAPI_IsSteamRunning() {
  debug("SteamAPI_IsSteamRunning");
  return false;
}

void SteamAPI_Shutdown() { debug("SteamAPI_Shutdown"); }

void SteamAPI_RegisterCallback(void *pCallback, int iCallback) {
  debug("SteamAPI_RegisterCallback(%p, %d)", pCallback, iCallback);
  callbacks[iCallback].push_back(pCallback);
  callback_types[pCallback] = iCallback;
}

void SteamAPI_UnregisterCallback(void *pCallback) {
  debug("SteamAPI_UnregisterCallback(%p)", pCallback);
  auto &c = callbacks[callback_types[pCallback]];
  c.erase(std::remove(std::begin(c), std::end(c), pCallback), std::end(c));
}

void SteamAPI_RunCallbacks() {
  // debug("SteamAPI_RunCallbacks()");
}

HSteamPipe SteamAPI_GetHSteamPipe() { return {}; }

HSteamUser SteamAPI_GetHSteamUser() { return {}; }

void SteamGameServer_RunCallbacks() { debug("SteamGameServer_RunCallbacks"); }

void SteamAPI_RegisterCallResult(void *pCallback, SteamAPICall_t callback) {
  debug("SteamAPI_RegisterCallResult");
}

void SteamAPI_UnregisterCallResult(void *pCallback, SteamAPICall_t callback) {
  debug("SteamAPI_UnregisterCallResult");
}

bool SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort,
                                   uint16 usGamePort, uint16 usQueryPort,
                                   int         eServerMode,
                                   const char *pchVersionString) {
  debug("SteamInternal_GameServer_Init");
  return SteamAPI_Init();
}

void SteamGameServer_Shutdown() {
  debug("SteamGameServer_Shutdown");
  SteamAPI_Shutdown();
}

HSteamUser SteamGameServer_GetHSteamUser() {
  debug("SteamGameServer_GetHSteamUser");
  return SteamAPI_GetHSteamUser();
}

HSteamPipe SteamGameServer_GetHSteamPipe() {
  debug("SteamGameServer_GetHSteamPipe");
  return SteamAPI_GetHSteamPipe();
}

void *SteamInternal_CreateInterface(const char *version) {
  debug("SteamInternal_CreateInterface");
  return NULL;
}

namespace steakworms {
void execute_callbacks(int type, void *data) {
  for (auto &cb : callbacks[type])
    execute_callback(cb, data);
}

void execute_callbacks(int type, void *data, bool failure,
                       SteamAPICall_t call) {
  for (auto &cb : callbacks[type])
    execute_callback(cb, data, failure, call);
}
} // namespace steakworms
