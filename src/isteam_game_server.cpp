#include "steakworms.hpp"

bool ISteamGameServer::InitGameServer(uint32 unIP, uint16 usGamePort,
                                      uint16 usQueryPort, uint32 unFlags,
                                      AppId_t     nGameAppId,
                                      const char *pchVersionString) {
  debug("ISteamGameServer::InitGameServer()");
  return true;
}

void ISteamGameServer::SetProduct(const char *pszProduct) {
  debug("ISteamGameServer::SetProduct()");
}

void ISteamGameServer::SetGameDescription(const char *pszGameDescription) {
  debug("ISteamGameServer::SetGameDescription()");
}

void ISteamGameServer::SetModDir(const char *pszModDir) {
  debug("ISteamGameServer::SetModDir()");
}

void ISteamGameServer::SetDedicatedServer(bool bDedicated) {
  debug("ISteamGameServer::SetDedicatedServer()");
}

void ISteamGameServer::LogOn(const char *pszToken) {
  debug("ISteamGameServer::LogOn()");
}

void ISteamGameServer::LogOnAnonymous() {
  debug("ISteamGameServer::LogOnAnonymous()");
}

void ISteamGameServer::LogOff() { debug("ISteamGameServer::LogOff()"); }

bool ISteamGameServer::BLoggedOn() {
  debug("ISteamGameServer::BLoggedOn()");
  return true;
}

bool ISteamGameServer::BSecure() {
  debug("ISteamGameServer::BSecure()");
  return true;
}

CSteamID ISteamGameServer::GetSteamID() {
  debug("ISteamGameServer::GetSteamID()");
  return {};
}

bool ISteamGameServer::WasRestartRequested() {
  debug("ISteamGameServer::WasRestartRequested()");
  return true;
}

void ISteamGameServer::SetMaxPlayerCount(int cPlayersMax) {
  debug("ISteamGameServer::SetMaxPlayerCount()");
}

void ISteamGameServer::SetBotPlayerCount(int cBotplayers) {
  debug("ISteamGameServer::SetBotPlayerCount()");
}

void ISteamGameServer::SetServerName(const char *pszServerName) {
  debug("ISteamGameServer::SetServerName()");
}

void ISteamGameServer::SetMapName(const char *pszMapName) {
  debug("ISteamGameServer::SetMapName()");
}

void ISteamGameServer::SetPasswordProtected(bool bPasswordProtected) {
  debug("ISteamGameServer::SetPasswordProtected()");
}

void ISteamGameServer::SetSpectatorPort(uint16 unSpectatorPort) {
  debug("ISteamGameServer::SetSpectatorPort()");
}

void ISteamGameServer::SetSpectatorServerName(
    const char *pszSpectatorServerName) {
  debug("ISteamGameServer::SetSpectatorServerName()");
}

void ISteamGameServer::ClearAllKeyValues() {
  debug("ISteamGameServer::ClearAllKeyValues()");
}

void ISteamGameServer::SetKeyValue(const char *pKey, const char *pValue) {
  debug("ISteamGameServer::SetKeyValue()");
}

void ISteamGameServer::SetGameTags(const char *pchGameTags) {
  debug("ISteamGameServer::SetGameTags()");
}

void ISteamGameServer::SetGameData(const char *pchGameData) {
  debug("ISteamGameServer::SetGameData()");
}

void ISteamGameServer::SetRegion(const char *pszRegion) {
  debug("ISteamGameServer::SetRegion()");
}

bool ISteamGameServer::SendUserConnectAndAuthenticate(uint32      unIPClient,
                                                      const void *pvAuthBlob,
                                                      uint32    cubAuthBlobSize,
                                                      CSteamID *pSteamIDUser) {
  debug("ISteamGameServer::SendUserConnectAndAuthenticate()");
  return true;
}

CSteamID ISteamGameServer::CreateUnauthenticatedUserConnection() {
  debug("ISteamGameServer::CreateUnauthenticatedUserConnection()");
  return {};
}

void ISteamGameServer::SendUserDisconnect(CSteamID steamIDUser) {
  debug("ISteamGameServer::SendUserDisconnect()");
}

bool ISteamGameServer::BUpdateUserData(CSteamID    steamIDUser,
                                       const char *pchPlayerName,
                                       uint32      uScore) {
  debug("ISteamGameServer::BUpdateUserData()");
  return true;
}

HAuthTicket ISteamGameServer::GetAuthSessionTicket(void *  pTicket,
                                                   int     cbMaxTicket,
                                                   uint32 *pcbTicket) {
  debug("ISteamGameServer::GetAuthSessionTicket()");
  return {};
}

EBeginAuthSessionResult
ISteamGameServer::BeginAuthSession(const void *pAuthTicket, int cbAuthTicket,
                                   CSteamID steamID) {
  debug("ISteamGameServer::BeginAuthSession()");
  return {};
}

void ISteamGameServer::EndAuthSession(CSteamID steamID) {
  debug("ISteamGameServer::EndAuthSession()");
}

void ISteamGameServer::CancelAuthTicket(HAuthTicket hAuthTicket) {
  debug("ISteamGameServer::CancelAuthTicket()");
}

EUserHasLicenseForAppResult
ISteamGameServer::UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
  debug("ISteamGameServer::UserHasLicenseForApp()");
  return {};
}

bool ISteamGameServer::RequestUserGroupStatus(CSteamID steamIDUser,
                                              CSteamID steamIDGroup) {
  debug("ISteamGameServer::RequestUserGroupStatus()");
  return true;
}

void ISteamGameServer::GetGameplayStats() {
  debug("ISteamGameServer::GetGameplayStats()");
}

SteamAPICall_t ISteamGameServer::GetServerReputation() {
  debug("ISteamGameServer::GetServerReputation()");
  return {};
}

uint32 ISteamGameServer::GetPublicIP() {
  debug("ISteamGameServer::GetPublicIP()");
  return 0;
}

bool ISteamGameServer::HandleIncomingPacket(const void *pData, int cbData,
                                            uint32 srcIP, uint16 srcPort) {
  debug("ISteamGameServer::HandleIncomingPacket()");
  return true;
}

int ISteamGameServer::GetNextOutgoingPacket(void *pOut, int cbMaxOut,
                                            uint32 *pNetAdr, uint16 *pPort) {
  debug("ISteamGameServer::GetNextOutgoingPacket()");
  return 0;
}

void ISteamGameServer::EnableHeartbeats(bool bActive) {
  debug("ISteamGameServer::EnableHeartbeats()");
}

void ISteamGameServer::SetHeartbeatInterval(int iHeartbeatInterval) {
  debug("ISteamGameServer::SetHeartbeatInterval()");
}

void ISteamGameServer::ForceHeartbeat() {
  debug("ISteamGameServer::ForceHeartbeat()");
}

SteamAPICall_t ISteamGameServer::AssociateWithClan(CSteamID steamIDClan) {
  debug("ISteamGameServer::AssociateWithClan()");
  return {};
}

SteamAPICall_t
ISteamGameServer::ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer) {
  debug("ISteamGameServer::ComputeNewPlayerCompatibility()");
  return {};
}
