#include "steakworms.hpp"

uint32 ISteamAppList::GetNumInstalledApps() {
  debug("ISteamAppList::GetNumInstalledApps()");
  return 0;
}

uint32 ISteamAppList::GetInstalledApps(AppId_t *pvecAppID, uint32 unMaxAppIDs) {
  debug("ISteamAppList::GetInstalledApps()");
  return 0;
}

int ISteamAppList::GetAppName(AppId_t nAppID, char *pchName, int cchNameMax) {
  debug("ISteamAppList::GetAppName()");
  return 0;
}

int ISteamAppList::GetAppInstallDir(AppId_t nAppID, char *pchDirectory,
                                    int cchNameMax) {
  debug("ISteamAppList::GetAppInstallDir()");
  return 0;
}

int ISteamAppList::GetAppBuildId(AppId_t nAppID) {
  debug("ISteamAppList::GetAppBuildId()");
  return 0;
}
