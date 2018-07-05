#include <cassert>
#include <cinttypes>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_utils.ipp"
#undef EXTERN_ABI

bool ISteamUtils_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *) {
  debug("ISteamUtils_GetAPICallResult");
  return false;
}

bool ISteamUtils_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *) {
  debug("ISteamUtils_ShowGamepadTextInput");
  return false;
}

bool ISteamUtils_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32) {
  debug("ISteamUtils_ShowGamepadTextInput");
  return false;
}

bool ISteamUtils_GetCSERIPPort(void *, uint32 *, uint16 *) {
  debug("ISteamUtils_GetCSERIPPort");
  return false;
}

bool ISteamUtils_GetEnteredGamepadTextInput(void *, char *, uint32) {
  debug("ISteamUtils_GetEnteredGamepadTextInput");
  return false;
}

bool ISteamUtils_GetImageRGBA(void *, int, uint8 *, int) {
  debug("ISteamUtils_GetImageRGBA");
  return false;
}

bool ISteamUtils_GetImageSize(void *, int, uint32 *, uint32 *) {
  debug("ISteamUtils_GetImageSize");
  return false;
}

bool ISteamUtils_IsSteamRunningInVR(void *) {
  debug("ISteamUtils_IsSteamRunningInVR");
  return false;
}

bool ISteamUtils_IsSteamInBigPictureMode(void *) {
  debug("ISteamUtils_IsSteamInBigPictureMode");
  return false;
}

bool ISteamUtils_BOverlayNeedsPresent(void *) {
  debug("ISteamUtils_BOverlayNeedsPresent");
  return false;
}

bool ISteamUtils_IsAPICallCompleted(void *, SteamAPICall_t, bool *) {
  debug("ISteamUtils_IsAPICallCompleted");
  return false;
}

bool ISteamUtils_IsOverlayEnabled(void *) {
  debug("ISteamUtils_IsOverlayEnabled");
  return false;
}

const char *ISteamUtils_GetIPCountry(void *) {
  debug("ISteamUtils_GetIPCountry");
  return "";
}

const char *ISteamUtils_GetSteamUILanguage(void *) {
  debug("ISteamUtils_GetSteamUILanguage");
  return "";
}

ESteamAPICallFailure ISteamUtils_GetAPICallFailureReason(void *, SteamAPICall_t) {
  debug("ISteamUtils_GetAPICallFailureReason");
  return {};
}

EUniverse ISteamUtils_GetConnectedUniverse(void *) {
  debug("ISteamUtils_GetConnectedUniverse");
  return {};
}

RTime32 ISteamUtils_GetServerRealTime(void *) {
  debug("ISteamUtils_GetServerRealTime");
  return {};
}

SteamAPICall_t ISteamUtils_CheckFileSignature(void *, const char *) {
  debug("ISteamUtils_CheckFileSignature");
  return {};
}

uint32 ISteamUtils_GetAppID(void *) {
  debug("ISteamUtils_GetAppID");
  return 0;
}

uint32 ISteamUtils_GetEnteredGamepadTextLength(void *) {
  debug("ISteamUtils_GetEnteredGamepadTextLength");
  return 0;
}

uint32 ISteamUtils_GetIPCCallCount(void *) {
  debug("ISteamUtils_GetIPCCallCount");
  return 0;
}

uint32 ISteamUtils_GetSecondsSinceAppActive(void *) {
  debug("ISteamUtils_GetSecondsSinceAppActive");
  return 0;
}

uint32 ISteamUtils_GetSecondsSinceComputerActive(void *) {
  debug("ISteamUtils_GetSecondsSinceComputerActive");
  return 0;
}

uint8 ISteamUtils_GetCurrentBatteryPower(void *) {
  debug("ISteamUtils_GetCurrentBatteryPower");
  return 0;
}

void ISteamUtils_RunFrame(void *) { debug("ISteamUtils_RunFrame"); }

void ISteamUtils_SetOverlayNotificationInset(void *, int32, int32) { debug("ISteamUtils_SetOverlayNotificationInset"); }

void ISteamUtils_SetOverlayNotificationPosition(void *, ENotificationPosition) { debug("ISteamUtils_SetOverlayNotificationPosition"); }

void ISteamUtils_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t) { debug("ISteamUtils_SetWarningMessageHook"); }

} // namespace svabi
