#include "steakworms.hpp"

SteamAPICall_t ISteamGameServerStats::RequestUserStats(CSteamID steamIDUser) {
  debug("ISteamGameServerStats::RequestUserStats()");
  return {};
}

bool ISteamGameServerStats::GetUserStat(CSteamID    steamIDUser,
                                        const char *pchName, int32 *pData) {
  debug("ISteamGameServerStats::GetUserStat()");
  return true;
}

bool ISteamGameServerStats::GetUserStat(CSteamID    steamIDUser,
                                        const char *pchName, float *pData) {
  debug("ISteamGameServerStats::GetUserStat()");
  return true;
}

bool ISteamGameServerStats::GetUserAchievement(CSteamID    steamIDUser,
                                               const char *pchName,
                                               bool *      pbAchieved) {
  debug("ISteamGameServerStats::GetUserAchievement()");
  return true;
}

bool ISteamGameServerStats::SetUserStat(CSteamID    steamIDUser,
                                        const char *pchName, int32 nData) {
  debug("ISteamGameServerStats::SetUserStat()");
  return true;
}

bool ISteamGameServerStats::SetUserStat(CSteamID    steamIDUser,
                                        const char *pchName, float fData) {
  debug("ISteamGameServerStats::SetUserStat()");
  return true;
}

bool ISteamGameServerStats::UpdateUserAvgRateStat(CSteamID    steamIDUser,
                                                  const char *pchName,
                                                  float  flCountThisSession,
                                                  double dSessionLength) {
  debug("ISteamGameServerStats::UpdateUserAvgRateStat()");
  return true;
}

bool ISteamGameServerStats::SetUserAchievement(CSteamID    steamIDUser,
                                               const char *pchName) {
  debug("ISteamGameServerStats::SetUserAchievement()");
  return true;
}

bool ISteamGameServerStats::ClearUserAchievement(CSteamID    steamIDUser,
                                                 const char *pchName) {
  debug("ISteamGameServerStats::ClearUserAchievement()");
  return true;
}

SteamAPICall_t ISteamGameServerStats::StoreUserStats(CSteamID steamIDUser) {
  debug("ISteamGameServerStats::StoreUserStats()");
  return {};
}
