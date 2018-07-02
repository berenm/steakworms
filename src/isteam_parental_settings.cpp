#include "steakworms.hpp"

bool ISteamParentalSettings::BIsParentalLockEnabled() {
  debug("ISteamParentalSettings::BIsParentalLockEnabled()");
  return true;
}

bool ISteamParentalSettings::BIsParentalLockLocked() {
  debug("ISteamParentalSettings::BIsParentalLockLocked()");
  return true;
}

bool ISteamParentalSettings::BIsAppBlocked(AppId_t nAppID) {
  debug("ISteamParentalSettings::BIsAppBlocked()");
  return true;
}

bool ISteamParentalSettings::BIsAppInBlockList(AppId_t nAppID) {
  debug("ISteamParentalSettings::BIsAppInBlockList()");
  return true;
}

bool ISteamParentalSettings::BIsFeatureBlocked(EParentalFeature eFeature) {
  debug("ISteamParentalSettings::BIsFeatureBlocked()");
  return true;
}

bool ISteamParentalSettings::BIsFeatureInBlockList(EParentalFeature eFeature) {
  debug("ISteamParentalSettings::BIsFeatureInBlockList()");
  return true;
}
