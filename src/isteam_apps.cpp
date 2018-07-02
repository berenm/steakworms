#include "steakworms.hpp"

bool ISteamApps::BIsSubscribed() {
  debug("ISteamApps::BIsSubscribed()");
  return true;
}

bool ISteamApps::BIsLowViolence() {
  debug("ISteamApps::BIsLowViolence()");
  return true;
}

bool ISteamApps::BIsCybercafe() {
  debug("ISteamApps::BIsCybercafe()");
  return true;
}

bool ISteamApps::BIsVACBanned() {
  debug("ISteamApps::BIsVACBanned()");
  return true;
}

const char *ISteamApps::GetCurrentGameLanguage() {
  debug("ISteamApps::GetCurrentGameLanguage()");
  return "";
}

const char *ISteamApps::GetAvailableGameLanguages() {
  debug("ISteamApps::GetAvailableGameLanguages()");
  return "";
}

bool ISteamApps::BIsSubscribedApp(AppId_t appID) {
  debug("ISteamApps::BIsSubscribedApp()");
  return true;
}

bool ISteamApps::BIsDlcInstalled(AppId_t appID) {
  debug("ISteamApps::BIsDlcInstalled()");
  return true;
}

uint32_t ISteamApps::GetEarliestPurchaseUnixTime(AppId_t nAppID) {
  debug("ISteamApps::GetEarliestPurchaseUnixTime()");
  return true;
}

bool ISteamApps::BIsSubscribedFromFreeWeekend() {
  debug("ISteamApps::BIsSubscribedFromFreeWeekend()");
  return true;
}

int ISteamApps::GetDLCCount() {
  debug("ISteamApps::GetDLCCount()");
  return true;
}

bool ISteamApps::BGetDLCDataByIndex(int iDLC, AppId_t *pAppID,
                                    bool *pbAvailable, char *pchName,
                                    int cchNameBufferSize) {
  debug("ISteamApps::BGetDLCDataByIndex()");
  return true;
}

void ISteamApps::InstallDLC(AppId_t nAppID) {
  debug("ISteamApps::InstallDLC()");
}

void ISteamApps::UninstallDLC(AppId_t nAppID) {
  debug("ISteamApps::UninstallDLC()");
}

void ISteamApps::RequestAppProofOfPurchaseKey(AppId_t nAppID) {
  debug("ISteamApps::RequestAppProofOfPurchaseKey()");
}

bool ISteamApps::GetCurrentBetaName(char *pchName, int cchNameBufferSize) {
  debug("ISteamApps::GetCurrentBetaName()");
  return true;
}

bool ISteamApps::MarkContentCorrupt(bool bMissingFilesOnly) {
  debug("ISteamApps::MarkContentCorrupt()");
  return true;
}

uint32_t ISteamApps::GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots,
                                        uint32_t cMaxDepots) {
  debug("ISteamApps::GetInstalledDepots()");
  return true;
}

uint32_t ISteamApps::GetAppInstallDir(AppId_t appID, char *pchFolder,
                                      uint32_t cchFolderBufferSize) {
  debug("ISteamApps::GetAppInstallDir()");
  return true;
}

bool ISteamApps::BIsAppInstalled(AppId_t appID) {
  debug("ISteamApps::BIsAppInstalled()");
  return true;
}

CSteamID ISteamApps::GetAppOwner() {
  debug("ISteamApps::GetAppOwner()");
  return {};
}

const char *ISteamApps::GetLaunchQueryParam(const char *pchKey) {
  debug("ISteamApps::GetLaunchQueryParam()");
  return "";
}

bool ISteamApps::GetDlcDownloadProgress(AppId_t nAppID,
                                        uint64 *punBytesDownloaded,
                                        uint64 *punBytesTotal) {
  debug("ISteamApps::GetDlcDownloadProgress()");
  return true;
}

int ISteamApps::GetAppBuildId() {
  debug("ISteamApps::GetAppBuildId()");
  return true;
}

void ISteamApps::RequestAllProofOfPurchaseKeys() {
  debug("ISteamApps::RequestAllProofOfPurchaseKeys()");
}

SteamAPICall_t ISteamApps::GetFileDetails(const char *pszFileName) {
  debug("ISteamApps::GetFileDetails()");
  return true;
}
