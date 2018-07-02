#include "steakworms.hpp"

void ISteamVideo::GetVideoURL(AppId_t unVideoAppID) {
  debug("ISteamVideo::GetVideoURL()");
}

bool ISteamVideo::IsBroadcasting(int *pnNumViewers) {
  debug("ISteamVideo::IsBroadcasting()");
  return true;
}

void ISteamVideo::GetOPFSettings(AppId_t unVideoAppID) {
  debug("ISteamVideo::GetOPFSettings()");
}

bool ISteamVideo::GetOPFStringForApp(AppId_t unVideoAppID, char *pchBuffer,
                                     int32 *pnBufferSize) {
  debug("ISteamVideo::GetOPFStringForApp()");
  return true;
}
