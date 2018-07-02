#include "steakworms.hpp"

#include <ctime>

uint32_t ISteamUtils::GetSecondsSinceAppActive() {
  debug("ISteamUtils::GetSecondsSinceAppActive()");
  return true;
}

uint32_t ISteamUtils::GetSecondsSinceComputerActive() {
  debug("ISteamUtils::GetSecondsSinceComputerActive()");
  return true;
}

EUniverse ISteamUtils::GetConnectedUniverse() {
  debug("ISteamUtils::GetConnectedUniverse()");
  return k_EUniversePublic;
}

uint32_t ISteamUtils::GetServerRealTime() {
  debug("ISteamUtils::GetServerRealTime()");
  time_t t;
  std::ctime(&t);
  return t;
}

const char *ISteamUtils::GetIPCountry() {
  debug("ISteamUtils::GetIPCountry()");
  return "";
}

bool ISteamUtils::GetImageSize(int iImage, uint32_t *pnWidth,
                               uint32_t *pnHeight) {
  debug("ISteamUtils::GetImageSize()");
  return true;
}

bool ISteamUtils::GetImageRGBA(int iImage, uint8_t *pubDest,
                               int nDestBufferSize) {
  debug("ISteamUtils::GetImageRGBA()");
  return true;
}

bool ISteamUtils::GetCSERIPPort(uint32_t *unIP, uint16_t *usPort) {
  debug("ISteamUtils::GetCSERIPPort()");
  return true;
}

uint8_t ISteamUtils::GetCurrentBatteryPower() {
  debug("ISteamUtils::GetCurrentBatteryPower()");
  return true;
}

uint32_t ISteamUtils::GetAppID() {
  debug("ISteamUtils::GetAppID()");
  return true;
}

void ISteamUtils::SetOverlayNotificationPosition(
    ENotificationPosition eNotificationPosition) {
  debug("ISteamUtils::SetOverlayNotificationPosition()");
}

bool ISteamUtils::IsAPICallCompleted(SteamAPICall_t hSteamAPICall,
                                     bool *         pbFailed) {
  debug("ISteamUtils::IsAPICallCompleted()");
  return true;
}

ESteamAPICallFailure
ISteamUtils::GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) {
  debug("ISteamUtils::GetAPICallFailureReason()");
  return k_ESteamAPICallFailureNone;
}

bool ISteamUtils::GetAPICallResult(SteamAPICall_t hSteamAPICall,
                                   void *pCallback, int cubCallback,
                                   int iCallbackExpected, bool *pbFailed) {
  debug("ISteamUtils::GetAPICallResult()");
  return true;
}

uint32_t ISteamUtils::GetIPCCallCount() {
  debug("ISteamUtils::GetIPCCallCount()");
  return true;
}

void ISteamUtils::SetWarningMessageHook(
    SteamAPIWarningMessageHook_t pFunction) {
  debug("ISteamUtils::SetWarningMessageHook()");
}

bool ISteamUtils::IsOverlayEnabled() {
  debug("ISteamUtils::IsOverlayEnabled()");
  return true;
}

bool ISteamUtils::BOverlayNeedsPresent() {
  debug("ISteamUtils::BOverlayNeedsPresent()");
  return true;
}

SteamAPICall_t ISteamUtils::CheckFileSignature(const char *szFileName) {
  debug("ISteamUtils::CheckFileSignature()");
  return true;
}

bool ISteamUtils::ShowGamepadTextInput(EGamepadTextInputMode     eInputMode,
                                       EGamepadTextInputLineMode eLineInputMode,
                                       const char *              pchDescription,
                                       uint32_t                  unCharMax,
                                       const char *pchExistingText) {
  debug("ISteamUtils::ShowGamepadTextInput()");
  return true;
}

uint32_t ISteamUtils::GetEnteredGamepadTextLength() {
  debug("ISteamUtils::GetEnteredGamepadTextLength()");
  return true;
}

bool ISteamUtils::GetEnteredGamepadTextInput(char *pchText, uint32_t cchText) {
  debug("ISteamUtils::GetEnteredGamepadTextInput()");
  return true;
}

const char *ISteamUtils::GetSteamUILanguage() {
  debug("ISteamUtils::GetSteamUILanguage()");
  return "";
}

bool ISteamUtils::IsSteamRunningInVR() {
  debug("ISteamUtils::IsSteamRunningInVR()");
  return true;
}

void ISteamUtils::SetOverlayNotificationInset(int nHorizontalInset,
                                              int nVerticalInset) {
  debug("ISteamUtils::SetOverlayNotificationInset()");
}

bool ISteamUtils::IsSteamInBigPictureMode() {
  debug("ISteamUtils::IsSteamInBigPictureMode()");
  return true;
}

void ISteamUtils::StartVRDashboard() {
  debug("ISteamUtils::StartVRDashboard()");
}

bool ISteamUtils::IsVRHeadsetStreamingEnabled() {
  debug("ISteamUtils::IsVRHeadsetStreamingEnabled()");
  return true;
}

void ISteamUtils::SetVRHeadsetStreamingEnabled(bool bEnabled) {
  debug("ISteamUtils::SetVRHeadsetStreamingEnabled()");
}
