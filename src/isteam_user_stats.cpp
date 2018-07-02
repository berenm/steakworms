#include "steakworms.hpp"

bool ISteamUserStats::RequestCurrentStats() {
  debug("ISteamUserStats::RequestCurrentStats()");
  UserStatsReceived_t stats;
  stats.m_nGameID     = 1;
  stats.m_eResult     = k_EResultOK;
  stats.m_steamIDUser = {};
  steakworms::execute_callbacks(k_iSteamUserStatsCallbacks + 1, &stats);
  return true;
}

bool ISteamUserStats::GetStat(const char *pchName, int32_t *pData) {
  debug("ISteamUserStats::GetStat(%s)", pchName);
  *pData = 0;
  return true;
}

bool ISteamUserStats::GetStat(const char *pchName, float *pData) {
  debug("ISteamUserStats::GetStatf(%s)", pchName);
  *pData = 0;
  return true;
}

bool ISteamUserStats::SetStat(const char *pchName, int32_t nData) {
  debug("ISteamUserStats::SetStat(%s, %d)", pchName, nData);
  return true;
}

bool ISteamUserStats::SetStat(const char *pchName, float fData) {
  debug("ISteamUserStats::SetStatf(%s, %f)", pchName, fData);
  return true;
}

bool ISteamUserStats::UpdateAvgRateStat(const char *pchName,
                                        float       flCountThisSession,
                                        double      dSessionLength) {
  debug("ISteamUserStats::UpdateAvgRateStat(%s)", pchName);
  return true;
}

bool ISteamUserStats::GetAchievement(const char *pchName, bool *pbAchieved) {
  debug("ISteamUserStats::GetAchievement(%s)", pchName);
  *pbAchieved = false;
  return true;
}

bool ISteamUserStats::SetAchievement(const char *pchName) {
  debug("ISteamUserStats::SetAchievement(%s)", pchName);
  return true;
}

bool ISteamUserStats::ClearAchievement(const char *pchName) {
  debug("ISteamUserStats::ClearAchievement(%s)", pchName);
  return true;
}

bool ISteamUserStats::GetAchievementAndUnlockTime(const char *pchName,
                                                  bool *      pbAchieved,
                                                  uint32_t *  punUnlockTime) {
  debug("ISteamUserStats::GetAchievementAndUnlockTime(%s)", pchName);
  *pbAchieved = true;
  return true;
}

bool ISteamUserStats::StoreStats() {
  debug("ISteamUserStats::StoreStats()");
  return true;
}

int ISteamUserStats::GetAchievementIcon(const char *pchName) {
  debug("ISteamUserStats::GetAchievementIcon(%s)", pchName);
  return true;
}

const char *
ISteamUserStats::GetAchievementDisplayAttribute(const char *pchName,
                                                const char *pchKey) {
  debug("ISteamUserStats::GetAchievementDisplayAttribute(%s)", pchName);
  return "";
}

bool ISteamUserStats::IndicateAchievementProgress(const char *pchName,
                                                  uint32_t    nCurProgress,
                                                  uint32_t    nMaxProgress) {
  debug("ISteamUserStats::IndicateAchievementProgress(%s)", pchName);
  return true;
}

uint32_t ISteamUserStats::GetNumAchievements() {
  debug("ISteamUserStats::GetNumAchievements()");
  return true;
}

const char *ISteamUserStats::GetAchievementName(uint32_t iAchievement) {
  debug("ISteamUserStats::GetAchievementName()");
  return "";
}

SteamAPICall_t ISteamUserStats::RequestUserStats(CSteamID steamIDUser) {
  debug("ISteamUserStats::RequestUserStats()");
  return true;
}

bool ISteamUserStats::GetUserStat(CSteamID steamIDUser, const char *pchName,
                                  int32_t *pData) {
  debug("ISteamUserStats::GetUserStat(%s)", pchName);
  return true;
}

bool ISteamUserStats::GetUserStat(CSteamID steamIDUser, const char *pchName,
                                  float *pData) {
  debug("ISteamUserStats::GetUserStat(%s)", pchName);
  return true;
}

bool ISteamUserStats::GetUserAchievement(CSteamID    steamIDUser,
                                         const char *pchName,
                                         bool *      pbAchieved) {
  debug("ISteamUserStats::GetUserAchievement(%s)", pchName);
  return true;
}

bool ISteamUserStats::GetUserAchievementAndUnlockTime(CSteamID    steamIDUser,
                                                      const char *pchName,
                                                      bool *      pbAchieved,
                                                      uint32_t *punUnlockTime) {
  debug("ISteamUserStats::GetUserAchievementAndUnlockTime(%s)", pchName);
  return true;
}

bool ISteamUserStats::ResetAllStats(bool bAchievementsToo) {
  debug("ISteamUserStats::ResetAllStats()");
  return true;
}

SteamAPICall_t ISteamUserStats::FindOrCreateLeaderboard(
    const char *            pchLeaderboardName,
    ELeaderboardSortMethod  eLeaderboardSortMethod,
    ELeaderboardDisplayType eLeaderboardDisplayType) {
  debug("ISteamUserStats::FindOrCreateLeaderboard()");
  return true;
}

SteamAPICall_t
ISteamUserStats::FindLeaderboard(const char *pchLeaderboardName) {
  debug("ISteamUserStats::FindLeaderboard()");
  return true;
}

const char *
ISteamUserStats::GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
  debug("ISteamUserStats::GetLeaderboardName()");
  return "";
}

int ISteamUserStats::GetLeaderboardEntryCount(
    SteamLeaderboard_t hSteamLeaderboard) {
  debug("ISteamUserStats::GetLeaderboardEntryCount()");
  return true;
}

ELeaderboardSortMethod ISteamUserStats::GetLeaderboardSortMethod(
    SteamLeaderboard_t hSteamLeaderboard) {
  debug("ISteamUserStats::GetLeaderboardSortMethod()");
  return k_ELeaderboardSortMethodNone;
}

ELeaderboardDisplayType ISteamUserStats::GetLeaderboardDisplayType(
    SteamLeaderboard_t hSteamLeaderboard) {
  debug("ISteamUserStats::GetLeaderboardDisplayType()");
  return k_ELeaderboardDisplayTypeNone;
}

SteamAPICall_t ISteamUserStats::DownloadLeaderboardEntries(
    SteamLeaderboard_t      hSteamLeaderboard,
    ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart,
    int nRangeEnd) {
  debug("ISteamUserStats::DownloadLeaderboardEntries()");
  return true;
}

SteamAPICall_t ISteamUserStats::DownloadLeaderboardEntriesForUsers(
    SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers) {
  debug("ISteamUserStats::DownloadLeaderboardEntriesForUsers()");
  return true;
}

bool ISteamUserStats::GetDownloadedLeaderboardEntry(
    SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index,
    LeaderboardEntry_t *pLeaderboardEntry, int32_t *pDetails, int cDetailsMax) {
  debug("ISteamUserStats::GetDownloadedLeaderboardEntry()");
  return true;
}

SteamAPICall_t ISteamUserStats::UploadLeaderboardScore(
    SteamLeaderboard_t            hSteamLeaderboard,
    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32_t nScore,
    const int32_t *pScoreDetails, int cScoreDetailsCount) {
  debug("ISteamUserStats::UploadLeaderboardScore()");
  return true;
}

SteamAPICall_t
ISteamUserStats::AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard,
                                      UGCHandle_t        hUGC) {
  debug("ISteamUserStats::AttachLeaderboardUGC()");
  return true;
}

SteamAPICall_t ISteamUserStats::GetNumberOfCurrentPlayers() {
  debug("ISteamUserStats::GetNumberOfCurrentPlayers()");
  return true;
}

SteamAPICall_t ISteamUserStats::RequestGlobalAchievementPercentages() {
  debug("ISteamUserStats::RequestGlobalAchievementPercentages()");
  return true;
}

int ISteamUserStats::GetMostAchievedAchievementInfo(char *   pchName,
                                                    uint32_t unNameBufLen,
                                                    float *  pflPercent,
                                                    bool *   pbAchieved) {
  debug("ISteamUserStats::GetMostAchievedAchievementInfo()");
  return true;
}

int ISteamUserStats::GetNextMostAchievedAchievementInfo(int   iIteratorPrevious,
                                                        char *pchName,
                                                        uint32_t unNameBufLen,
                                                        float *  pflPercent,
                                                        bool *   pbAchieved) {
  debug("ISteamUserStats::GetNextMostAchievedAchievementInfo()");
  return true;
}

bool ISteamUserStats::GetAchievementAchievedPercent(const char *pchName,
                                                    float *     pflPercent) {
  debug("ISteamUserStats::GetAchievementAchievedPercent(%s)", pchName);
  return true;
}

SteamAPICall_t ISteamUserStats::RequestGlobalStats(int nHistoryDays) {
  debug("ISteamUserStats::RequestGlobalStats()");
  return true;
}

bool ISteamUserStats::GetGlobalStat(const char *pchStatName, int64 *pData) {
  debug("ISteamUserStats::GetGlobalStat()");
  return true;
}

bool ISteamUserStats::GetGlobalStat(const char *pchStatName, double *pData) {
  debug("ISteamUserStats::GetGlobalStat()");
  return true;
}

int32_t ISteamUserStats::GetGlobalStatHistory(const char *pchStatName,
                                              int64 *pData, uint32 cubData) {
  debug("ISteamUserStats::GetGlobalStatHistory()");
  return true;
}

int32_t ISteamUserStats::GetGlobalStatHistory(const char *pchStatName,
                                              double *pData, uint32_t cubData) {
  debug("ISteamUserStats::GetGlobalStatHistory()");
  return true;
}
