#include "steakworms.hpp"

ScreenshotHandle ISteamScreenshots::WriteScreenshot(void *pubRGB, uint32 cubRGB,
                                                    int nWidth, int nHeight) {
  debug("ISteamScreenshots::WriteScreenshot()");
  return {};
}

ScreenshotHandle
ISteamScreenshots::AddScreenshotToLibrary(const char *pchFilename,
                                          const char *pchThumbnailFilename,
                                          int nWidth, int nHeight) {
  debug("ISteamScreenshots::AddScreenshotToLibrary()");
  return {};
}

void ISteamScreenshots::TriggerScreenshot() {
  debug("ISteamScreenshots::TriggerScreenshot()");
}

void ISteamScreenshots::HookScreenshots(bool bHook) {
  debug("ISteamScreenshots::HookScreenshots()");
}

bool ISteamScreenshots::SetLocation(ScreenshotHandle hScreenshot,
                                    const char *     pchLocation) {
  debug("ISteamScreenshots::SetLocation()");
  return true;
}

bool ISteamScreenshots::TagUser(ScreenshotHandle hScreenshot,
                                CSteamID         steamID) {
  debug("ISteamScreenshots::TagUser()");
  return true;
}

bool ISteamScreenshots::TagPublishedFile(ScreenshotHandle  hScreenshot,
                                         PublishedFileId_t unPublishedFileID) {
  debug("ISteamScreenshots::TagPublishedFile()");
  return true;
}

bool ISteamScreenshots::IsScreenshotsHooked() {
  debug("ISteamScreenshots::IsScreenshotsHooked()");
  return true;
}

ScreenshotHandle
ISteamScreenshots::AddVRScreenshotToLibrary(EVRScreenshotType eType,
                                            const char *      pchFilename,
                                            const char *      pchVRFilename) {
  debug("ISteamScreenshots::AddVRScreenshotToLibrary()");
  return {};
}
