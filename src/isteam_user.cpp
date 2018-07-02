#include "steakworms.hpp"

HSteamUser ISteamUser::GetHSteamUser() {
  debug("ISteamUser::GetHSteamUser()");
  return true;
}

bool ISteamUser::BLoggedOn() {
  debug("ISteamUser::BLoggedOn()");
  return true;
}

CSteamID ISteamUser::GetSteamID() {
  debug("ISteamUser::GetSteamID()");
  return {};
}

int ISteamUser::InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob,
                                       CSteamID steamIDGameServer,
                                       uint32_t unIPServer,
                                       uint16_t usPortServer, bool bSecure) {
  debug("ISteamUser::InitiateGameConnection()");
  return true;
}

void ISteamUser::TerminateGameConnection(uint32_t unIPServer,
                                         uint16_t usPortServer) {
  debug("ISteamUser::TerminateGameConnection()");
}

void ISteamUser::TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent,
                                    const char *pchExtraInfo = "") {
  debug("ISteamUser::TrackAppUsageEvent()");
}

bool ISteamUser::GetUserDataFolder(char *pchBuffer, int cubBuffer) {
  debug("ISteamUser::GetUserDataFolder()");
  return true;
}

void ISteamUser::StartVoiceRecording() {
  debug("ISteamUser::StartVoiceRecording()");
}

void ISteamUser::StopVoiceRecording() {
  debug("ISteamUser::StopVoiceRecording()");
}

EVoiceResult ISteamUser::GetAvailableVoice(
    uint32_t *pcbCompressed, uint32_t *pcbUncompressed_Deprecated = 0,
    uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated = 0) {
  debug("ISteamUser::GetAvailableVoice()");
  return k_EVoiceResultOK;
}

EVoiceResult ISteamUser::GetVoice(
    bool bWantCompressed, void *pDestBuffer, uint32_t cbDestBufferSize,
    uint32_t *nBytesWritten, bool bWantUncompressed_Deprecated = false,
    void *    pUncompressedDestBuffer_Deprecated             = 0,
    uint32_t  cbUncompressedDestBufferSize_Deprecated        = 0,
    uint32_t *nUncompressBytesWritten_Deprecated             = 0,
    uint32_t  nUncompressedVoiceDesiredSampleRate_Deprecated = 0) {
  debug("ISteamUser::GetVoice()");
  return k_EVoiceResultOK;
}

EVoiceResult ISteamUser::DecompressVoice(const void *pCompressed,
                                         uint32_t    cbCompressed,
                                         void *      pDestBuffer,
                                         uint32_t    cbDestBufferSize,
                                         uint32_t *  nBytesWritten,
                                         uint32_t    nDesiredSampleRate) {
  debug("ISteamUser::DecompressVoice()");
  return k_EVoiceResultOK;
}

uint32_t ISteamUser::GetVoiceOptimalSampleRate() {
  debug("ISteamUser::GetVoiceOptimalSampleRate()");
  return true;
}

HAuthTicket ISteamUser::GetAuthSessionTicket(void *pTicket, int cbMaxTicket,
                                             uint32_t *pcbTicket) {
  debug("ISteamUser::GetAuthSessionTicket()");
  return true;
}

EBeginAuthSessionResult ISteamUser::BeginAuthSession(const void *pAuthTicket,
                                                     int         cbAuthTicket,
                                                     CSteamID    steamID) {
  debug("ISteamUser::BeginAuthSession()");
  return k_EBeginAuthSessionResultOK;
}

void ISteamUser::EndAuthSession(CSteamID steamID) {
  debug("ISteamUser::EndAuthSession()");
}

void ISteamUser::CancelAuthTicket(HAuthTicket hAuthTicket) {
  debug("ISteamUser::CancelAuthTicket()");
}

EUserHasLicenseForAppResult ISteamUser::UserHasLicenseForApp(CSteamID steamID,
                                                             AppId_t  appID) {
  debug("ISteamUser::UserHasLicenseForApp()");
  return k_EUserHasLicenseResultHasLicense;
}

bool ISteamUser::BIsBehindNAT() {
  debug("ISteamUser::BIsBehindNAT()");
  return true;
}

void ISteamUser::AdvertiseGame(CSteamID steamIDGameServer, uint32_t unIPServer,
                               uint16_t usPortServer) {
  debug("ISteamUser::AdvertiseGame()");
}

SteamAPICall_t ISteamUser::RequestEncryptedAppTicket(void *pDataToInclude,
                                                     int   cbDataToInclude) {
  debug("ISteamUser::RequestEncryptedAppTicket()");
  return true;
}

bool ISteamUser::GetEncryptedAppTicket(void *pTicket, int cbMaxTicket,
                                       uint32_t *pcbTicket) {
  debug("ISteamUser::GetEncryptedAppTicket()");
  return true;
}

int ISteamUser::GetGameBadgeLevel(int nSeries, bool bFoil) {
  debug("ISteamUser::GetGameBadgeLevel()");
  return true;
}

int ISteamUser::GetPlayerSteamLevel() {
  debug("ISteamUser::GetPlayerSteamLevel()");
  return true;
}

SteamAPICall_t ISteamUser::RequestStoreAuthURL(const char *pchRedirectURL) {
  debug("ISteamUser::RequestStoreAuthURL()");
  return true;
}

bool ISteamUser::BIsPhoneVerified() {
  debug("ISteamUser::BIsPhoneVerified()");
  return true;
}

bool ISteamUser::BIsTwoFactorEnabled() {
  debug("ISteamUser::BIsTwoFactorEnabled()");
  return true;
}

bool ISteamUser::BIsPhoneIdentifying() {
  debug("ISteamUser::BIsPhoneIdentifying()");
  return true;
}

bool ISteamUser::BIsPhoneRequiringVerification() {
  debug("ISteamUser::BIsPhoneRequiringVerification()");
  return true;
}
