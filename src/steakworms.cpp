#define _GLIBCXX_USE_C99_DYNAMIC 1

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <ctime>

#include <algorithm>
#include <unordered_map>
#include <vector>

#include <unistd.h>

#include "steakworms.hpp"

struct CCallbackBase {
  EXTERN_ABI virtual void Run(void *pvParam)                = 0;
  EXTERN_ABI virtual void Run(void *pvParam, bool bIOFailure,
                              SteamAPICall_t hSteamAPICall) = 0;
};

void CCallbackBase::Run(void *pvParam) { debug("Run"); }

auto callbacks      = std::unordered_map<int, std::vector<void *>>{};
auto callback_types = std::unordered_map<void *, int>{};

CSteamAPIContext SteamContext;
CSteamID         steam_id;

CSteamAPIContext *SteamAPI_Context() {
  debug("SteamContext;");
  return &SteamContext;
}

ISteamClient *SteamClient() {
  debug("SteamClient");
  return SteamContext.SteamClient();
}

ISteamUser *SteamUser() {
  debug("SteamUser");
  return SteamContext.SteamUser();
}

ISteamFriends *SteamFriends() {
  debug("SteamFriends");
  return SteamContext.SteamFriends();
}

ISteamUtils *SteamUtils() {
  debug("SteamUtils");
  return SteamContext.SteamUtils();
}

ISteamMatchmaking *SteamMatchmaking() {
  debug("SteamMatchmaking");
  return SteamContext.SteamMatchmaking();
}

ISteamUserStats *SteamUserStats() {
  debug("SteamUserStats");
  return SteamContext.SteamUserStats();
}

ISteamApps *SteamApps() {
  debug("SteamApps");
  return SteamContext.SteamApps();
}

ISteamMatchmakingServers *SteamMatchmakingServers() {
  debug("SteamMatchmakingServers");
  return SteamContext.SteamMatchmakingServers();
}

ISteamNetworking *SteamNetworking() {
  debug("SteamNetworking");
  return SteamContext.SteamNetworking();
}

ISteamRemoteStorage *SteamRemoteStorage() {
  debug("SteamRemoteStorage");
  return SteamContext.SteamRemoteStorage();
}

ISteamScreenshots *SteamScreenshots() {
  debug("SteamScreenshots");
  return SteamContext.SteamScreenshots();
}

ISteamHTTP *SteamHTTP() {
  debug("SteamHTTP");
  return SteamContext.SteamHTTP();
}

ISteamController *SteamController() {
  debug("SteamController");
  return SteamContext.SteamController();
}

ISteamUGC *SteamUGC() {
  debug("SteamUGC");
  return SteamContext.SteamUGC();
}

ISteamAppList *SteamAppList() {
  debug("SteamAppList");
  return SteamContext.SteamAppList();
}

ISteamMusic *SteamMusic() {
  debug("SteamMusic");
  return SteamContext.SteamMusic();
}

ISteamMusicRemote *SteamMusicRemote() {
  debug("SteamMusicRemote");
  return SteamContext.SteamMusicRemote();
}

ISteamHTMLSurface *SteamHTMLSurface() {
  debug("SteamHTMLSurface");
  return SteamContext.SteamHTMLSurface();
}

ISteamInventory *SteamInventory() {
  debug("SteamInventory");
  return SteamContext.SteamInventory();
}

ISteamVideo *SteamVideo() {
  debug("SteamVideo");
  return SteamContext.SteamVideo();
}

ISteamParentalSettings *SteamParentalSettings() {
  debug("SteamParentalSettings");
  return SteamContext.SteamParentalSettings();
}

ISteamGameServer *SteamGameServer() {
  debug("SteamGameServer");
  return SteamContext.SteamGameServer();
}

ISteamGameServerStats *SteamGameServerStats() {
  debug("SteamGameServerStats");
  return SteamContext.SteamGameServerStats();
}

ISteamMatchmakingServerListResponse *SteamMatchmakingServerListResponse() {
  debug("SteamMatchmakingServerListResponse");
  return SteamContext.SteamMatchmakingServerListResponse();
}

ISteamMatchmakingPingResponse *SteamMatchmakingPingResponse() {
  debug("SteamMatchmakingPingResponse");
  return SteamContext.SteamMatchmakingPingResponse();
}

ISteamMatchmakingPlayersResponse *SteamMatchmakingPlayersResponse() {
  debug("SteamMatchmakingPlayersResponse");
  return SteamContext.SteamMatchmakingPlayersResponse();
}

ISteamMatchmakingRulesResponse *SteamMatchmakingRulesResponse() {
  debug("SteamMatchmakingRulesResponse");
  return SteamContext.SteamMatchmakingRulesResponse();
}

HSteamPipe ISteamClient::CreateSteamPipe() {
  debug("ISteamClient::CreateSteamPipe()");
  return true;
}

bool ISteamClient::BReleaseSteamPipe(HSteamPipe hSteamPipe) {
  debug("ISteamClient::BReleaseSteamPipe()");
  return true;
}

HSteamUser ISteamClient::ConnectToGlobalUser(HSteamPipe hSteamPipe) {
  debug("ISteamClient::ConnectToGlobalUser()");
  return true;
}

HSteamUser ISteamClient::CreateLocalUser(HSteamPipe * phSteamPipe,
                                         EAccountType eAccountType) {
  debug("ISteamClient::CreateLocalUser()");
  return true;
}

void ISteamClient::ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser) {
  debug("ISteamClient::ReleaseUser()");
}

ISteamUser *ISteamClient::GetISteamUser(HSteamUser  hSteamUser,
                                        HSteamPipe  hSteamPipe,
                                        const char *pchVersion) {
  debug("ISteamClient::GetISteamUser(%s)", pchVersion);
  return SteamContext.SteamUser();
}

ISteamGameServer *ISteamClient::GetISteamGameServer(HSteamUser  hSteamUser,
                                                    HSteamPipe  hSteamPipe,
                                                    const char *pchVersion) {
  debug("ISteamClient::GetISteamGameServer(%s)", pchVersion);
  return SteamContext.SteamGameServer();
}

void ISteamClient::SetLocalIPBinding(uint32_t unIP, uint16_t usPort) {
  debug("ISteamClient::SetLocalIPBinding()");
}

ISteamFriends *ISteamClient::GetISteamFriends(HSteamUser  hSteamUser,
                                              HSteamPipe  hSteamPipe,
                                              const char *pchVersion) {
  debug("ISteamClient::GetISteamFriends(%s)", pchVersion);
  return SteamContext.SteamFriends();
}

ISteamUtils *ISteamClient::GetISteamUtils(HSteamPipe  hSteamPipe,
                                          const char *pchVersion) {
  debug("ISteamClient::GetISteamUtils(%s)", pchVersion);
  return SteamContext.SteamUtils();
}

ISteamMatchmaking *ISteamClient::GetISteamMatchmaking(HSteamUser  hSteamUser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamMatchmaking(%s)", pchVersion);
  return SteamContext.SteamMatchmaking();
}

ISteamMatchmakingServers *ISteamClient::GetISteamMatchmakingServers(
    HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamMatchmakingServers(%s)", pchVersion);
  return SteamContext.SteamMatchmakingServers();
}

void *ISteamClient::GetISteamGenericInterface(HSteamUser  hSteamUser,
                                              HSteamPipe  hSteamPipe,
                                              const char *pchVersion) {
  debug("ISteamClient::GetISteamGenericInterface(%s)", pchVersion);
  return NULL;
}

ISteamUserStats *ISteamClient::GetISteamUserStats(HSteamUser  hSteamUser,
                                                  HSteamPipe  hSteamPipe,
                                                  const char *pchVersion) {
  debug("ISteamClient::GetISteamUserStats(%s)", pchVersion);
  return SteamContext.SteamUserStats();
}

ISteamGameServerStats *ISteamClient::GetISteamGameServerStats(
    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamGameServerStats(%s)", pchVersion);
  return SteamContext.SteamGameServerStats();
}

ISteamApps *ISteamClient::GetISteamApps(HSteamUser  hSteamUser,
                                        HSteamPipe  hSteamPipe,
                                        const char *pchVersion) {
  debug("ISteamClient::GetISteamApps(%s)", pchVersion);
  return SteamContext.SteamApps();
}

ISteamNetworking *ISteamClient::GetISteamNetworking(HSteamUser  hSteamUser,
                                                    HSteamPipe  hSteamPipe,
                                                    const char *pchVersion) {
  debug("ISteamClient::GetISteamNetworking(%s)", pchVersion);
  return SteamContext.SteamNetworking();
}

ISteamRemoteStorage *ISteamClient::GetISteamRemoteStorage(
    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamRemoteStorage(%s)", pchVersion);
  return SteamContext.SteamRemoteStorage();
}

ISteamScreenshots *ISteamClient::GetISteamScreenshots(HSteamUser  hSteamuser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamScreenshots(%s)", pchVersion);
  return SteamContext.SteamScreenshots();
}

uint32_t ISteamClient::GetIPCCallCount() {
  debug("ISteamClient::GetIPCCallCount()");
  return true;
}

void ISteamClient::SetWarningMessageHook(
    SteamAPIWarningMessageHook_t pFunction) {
  debug("ISteamClient::SetWarningMessageHook()");
}

bool ISteamClient::BShutdownIfAllPipesClosed() {
  debug("ISteamClient::BShutdownIfAllPipesClosed()");
  return true;
}

ISteamHTTP *ISteamClient::GetISteamHTTP(HSteamUser  hSteamuser,
                                        HSteamPipe  hSteamPipe,
                                        const char *pchVersion) {
  debug("ISteamClient::GetISteamHTTP(%s)", pchVersion);
  return SteamContext.SteamHTTP();
}

ISteamController *ISteamClient::GetISteamController(HSteamUser  hSteamUser,
                                                    HSteamPipe  hSteamPipe,
                                                    const char *pchVersion) {
  debug("ISteamClient::GetISteamController(%s)", pchVersion);
  return SteamContext.SteamController();
}

ISteamUGC *ISteamClient::GetISteamUGC(HSteamUser  hSteamUser,
                                      HSteamPipe  hSteamPipe,
                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamUGC(%s)", pchVersion);
  return SteamContext.SteamUGC();
}

ISteamAppList *ISteamClient::GetISteamAppList(HSteamUser  hSteamUser,
                                              HSteamPipe  hSteamPipe,
                                              const char *pchVersion) {
  debug("ISteamClient::GetISteamAppList(%s)", pchVersion);
  return SteamContext.SteamAppList();
}

ISteamMusic *ISteamClient::GetISteamMusic(HSteamUser  hSteamuser,
                                          HSteamPipe  hSteamPipe,
                                          const char *pchVersion) {
  debug("ISteamClient::GetISteamMusic(%s)", pchVersion);
  return SteamContext.SteamMusic();
}

ISteamMusicRemote *ISteamClient::GetISteamMusicRemote(HSteamUser  hSteamuser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamMusicRemote(%s)", pchVersion);
  return SteamContext.SteamMusicRemote();
}

ISteamHTMLSurface *ISteamClient::GetISteamHTMLSurface(HSteamUser  hSteamuser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamHTMLSurface(%s)", pchVersion);
  return SteamContext.SteamHTMLSurface();
}

ISteamInventory *ISteamClient::GetISteamInventory(HSteamUser  hSteamuser,
                                                  HSteamPipe  hSteamPipe,
                                                  const char *pchVersion) {
  debug("ISteamClient::GetISteamInventory(%s)", pchVersion);
  return SteamContext.SteamInventory();
}

ISteamVideo *ISteamClient::GetISteamVideo(HSteamUser  hSteamuser,
                                          HSteamPipe  hSteamPipe,
                                          const char *pchVersion) {
  debug("ISteamClient::GetISteamVideo(%s)", pchVersion);
  return SteamContext.SteamVideo();
}

ISteamParentalSettings *ISteamClient::GetISteamParentalSettings(
    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamParentalSettings(%s)", pchVersion);
  return SteamContext.SteamParentalSettings();
}

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

bool ISteamUserStats::RequestCurrentStats() {
  debug("ISteamUserStats::RequestCurrentStats()");
  UserStatsReceived_t stats;
  stats.m_nGameID     = 1;
  stats.m_eResult     = k_EResultOK;
  stats.m_steamIDUser = steam_id;
  for (auto &c : callbacks[1101])
    static_cast<CCallbackBase *>(c)->Run(&stats);
  return true;
}

bool ISteamUserStats::GetStat(const char *pchName, int32_t *pData) {
  debug("ISteamUserStats::GetStat(%p, %s)", this, pchName);
  *pData = 0;
  return true;
}

bool ISteamUserStats::GetStat(const char *pchName, float *pData) {
  debug("ISteamUserStats::GetStatf(%p, %s)", this, pchName);
  *pData = 0;
  return true;
}

bool ISteamUserStats::SetStat(const char *pchName, int32_t nData) {
  debug("ISteamUserStats::SetStat(%p, %s, %d)", this, pchName, nData);
  return true;
}

bool ISteamUserStats::SetStat(const char *pchName, float fData) {
  debug("ISteamUserStats::SetStatf(%p, %s, %f)", this, pchName, fData);
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

const char *ISteamFriends::GetPersonaName() {
  debug("ISteamFriends::GetPersonaName()");
  return "";
}

SteamAPICall_t ISteamFriends::SetPersonaName(const char *pchPersonaName) {
  debug("ISteamFriends::SetPersonaName()");
  return true;
}

EPersonaState ISteamFriends::GetPersonaState() {
  debug("ISteamFriends::GetPersonaState()");
  return k_EPersonaStateOffline;
}

int ISteamFriends::GetFriendCount(int iFriendFlags) {
  debug("ISteamFriends::GetFriendCount()");
  return true;
}

CSteamID ISteamFriends::GetFriendByIndex(int iFriend, int iFriendFlags) {
  debug("ISteamFriends::GetFriendByIndex()");
  return {};
}

EFriendRelationship
ISteamFriends::GetFriendRelationship(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendRelationship()");
  return k_EFriendRelationshipNone;
}

EPersonaState ISteamFriends::GetFriendPersonaState(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendPersonaState()");
  return k_EPersonaStateOffline;
}

const char *ISteamFriends::GetFriendPersonaName(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendPersonaName()");
  return "";
}

bool ISteamFriends::GetFriendGamePlayed(
    CSteamID steamIDFriend, struct FriendGameInfo_t *pFriendGameInfo) {
  debug("ISteamFriends::GetFriendGamePlayed()");
  return true;
}

const char *ISteamFriends::GetFriendPersonaNameHistory(CSteamID steamIDFriend,
                                                       int      iPersonaName) {
  debug("ISteamFriends::GetFriendPersonaNameHistory()");
  return "";
}

int ISteamFriends::GetFriendSteamLevel(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendSteamLevel()");
  return true;
}

const char *ISteamFriends::GetPlayerNickname(CSteamID steamIDPlayer) {
  debug("ISteamFriends::GetPlayerNickname()");
  return "";
}

int ISteamFriends::GetFriendsGroupCount() {
  debug("ISteamFriends::GetFriendsGroupCount()");
  return true;
}

FriendsGroupID_t ISteamFriends::GetFriendsGroupIDByIndex(int iFG) {
  debug("ISteamFriends::GetFriendsGroupIDByIndex()");
  return true;
}

const char *
ISteamFriends::GetFriendsGroupName(FriendsGroupID_t friendsGroupID) {
  debug("ISteamFriends::GetFriendsGroupName()");
  return "";
}

int ISteamFriends::GetFriendsGroupMembersCount(
    FriendsGroupID_t friendsGroupID) {
  debug("ISteamFriends::GetFriendsGroupMembersCount()");
  return true;
}

void ISteamFriends::GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID,
                                               CSteamID *pOutSteamIDMembers,
                                               int       nMembersCount) {
  debug("ISteamFriends::GetFriendsGroupMembersList()");
}

bool ISteamFriends::HasFriend(CSteamID steamIDFriend, int iFriendFlags) {
  debug("ISteamFriends::HasFriend()");
  return true;
}

int ISteamFriends::GetClanCount() {
  debug("ISteamFriends::GetClanCount()");
  return true;
}

CSteamID ISteamFriends::GetClanByIndex(int iClan) {
  debug("ISteamFriends::GetClanByIndex()");
  return {};
}

const char *ISteamFriends::GetClanName(CSteamID steamIDClan) {
  debug("ISteamFriends::GetClanName()");
  return "";
}

const char *ISteamFriends::GetClanTag(CSteamID steamIDClan) {
  debug("ISteamFriends::GetClanTag()");
  return "";
}

bool ISteamFriends::GetClanActivityCounts(CSteamID steamIDClan, int *pnOnline,
                                          int *pnInGame, int *pnChatting) {
  debug("ISteamFriends::GetClanActivityCounts()");
  return true;
}

SteamAPICall_t
ISteamFriends::DownloadClanActivityCounts(CSteamID *psteamIDClans,
                                          int       cClansToRequest) {
  debug("ISteamFriends::DownloadClanActivityCounts()");
  return true;
}

int ISteamFriends::GetFriendCountFromSource(CSteamID steamIDSource) {
  debug("ISteamFriends::GetFriendCountFromSource()");
  return true;
}

CSteamID ISteamFriends::GetFriendFromSourceByIndex(CSteamID steamIDSource,
                                                   int      iFriend) {
  debug("ISteamFriends::GetFriendFromSourceByIndex()");
  return {};
}

bool ISteamFriends::IsUserInSource(CSteamID steamIDUser,
                                   CSteamID steamIDSource) {
  debug("ISteamFriends::IsUserInSource()");
  return true;
}

void ISteamFriends::SetInGameVoiceSpeaking(CSteamID steamIDUser,
                                           bool     bSpeaking) {
  debug("ISteamFriends::SetInGameVoiceSpeaking()");
}

void ISteamFriends::ActivateGameOverlay(const char *pchDialog) {
  debug("ISteamFriends::ActivateGameOverlay()");
}

void ISteamFriends::ActivateGameOverlayToUser(const char *pchDialog,
                                              CSteamID    steamID) {
  debug("ISteamFriends::ActivateGameOverlayToUser()");
}

void ISteamFriends::ActivateGameOverlayToWebPage(const char *pchURL) {
  debug("ISteamFriends::ActivateGameOverlayToWebPage()");
}

void ISteamFriends::ActivateGameOverlayToStore(AppId_t             nAppID,
                                               EOverlayToStoreFlag eFlag) {
  debug("ISteamFriends::ActivateGameOverlayToStore()");
}

void ISteamFriends::SetPlayedWith(CSteamID steamIDUserPlayedWith) {
  debug("ISteamFriends::SetPlayedWith()");
}

void ISteamFriends::ActivateGameOverlayInviteDialog(CSteamID steamIDLobby) {
  debug("ISteamFriends::ActivateGameOverlayInviteDialog()");
}

int ISteamFriends::GetSmallFriendAvatar(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetSmallFriendAvatar()");
  return true;
}

int ISteamFriends::GetMediumFriendAvatar(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetMediumFriendAvatar()");
  return true;
}

int ISteamFriends::GetLargeFriendAvatar(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetLargeFriendAvatar()");
  return true;
}

bool ISteamFriends::RequestUserInformation(CSteamID steamIDUser,
                                           bool     bRequireNameOnly) {
  debug("ISteamFriends::RequestUserInformation()");
  return true;
}

SteamAPICall_t ISteamFriends::RequestClanOfficerList(CSteamID steamIDClan) {
  debug("ISteamFriends::RequestClanOfficerList()");
  return true;
}

CSteamID ISteamFriends::GetClanOwner(CSteamID steamIDClan) {
  debug("ISteamFriends::GetClanOwner()");
  return {};
}

int ISteamFriends::GetClanOfficerCount(CSteamID steamIDClan) {
  debug("ISteamFriends::GetClanOfficerCount()");
  return true;
}

CSteamID ISteamFriends::GetClanOfficerByIndex(CSteamID steamIDClan,
                                              int      iOfficer) {
  debug("ISteamFriends::GetClanOfficerByIndex()");
  return {};
}

uint32_t ISteamFriends::GetUserRestrictions() {
  debug("ISteamFriends::GetUserRestrictions()");
  return true;
}

bool ISteamFriends::SetRichPresence(const char *pchKey, const char *pchValue) {
  debug("ISteamFriends::SetRichPresence()");
  return true;
}

void ISteamFriends::ClearRichPresence() {
  debug("ISteamFriends::ClearRichPresence()");
}

const char *ISteamFriends::GetFriendRichPresence(CSteamID    steamIDFriend,
                                                 const char *pchKey) {
  debug("ISteamFriends::GetFriendRichPresence()");
  return "";
}

int ISteamFriends::GetFriendRichPresenceKeyCount(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendRichPresenceKeyCount()");
  return true;
}

const char *
ISteamFriends::GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend,
                                               int      iKey) {
  debug("ISteamFriends::GetFriendRichPresenceKeyByIndex()");
  return "";
}

void ISteamFriends::RequestFriendRichPresence(CSteamID steamIDFriend) {
  debug("ISteamFriends::RequestFriendRichPresence()");
}

bool ISteamFriends::InviteUserToGame(CSteamID    steamIDFriend,
                                     const char *pchConnectString) {
  debug("ISteamFriends::InviteUserToGame()");
  return true;
}

int ISteamFriends::GetCoplayFriendCount() {
  debug("ISteamFriends::GetCoplayFriendCount()");
  return true;
}

CSteamID ISteamFriends::GetCoplayFriend(int iCoplayFriend) {
  debug("ISteamFriends::GetCoplayFriend()");
  return {};
}

int ISteamFriends::GetFriendCoplayTime(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendCoplayTime()");
  return true;
}

AppId_t ISteamFriends::GetFriendCoplayGame(CSteamID steamIDFriend) {
  debug("ISteamFriends::GetFriendCoplayGame()");
  return true;
}

SteamAPICall_t ISteamFriends::JoinClanChatRoom(CSteamID steamIDClan) {
  debug("ISteamFriends::JoinClanChatRoom()");
  return true;
}

bool ISteamFriends::LeaveClanChatRoom(CSteamID steamIDClan) {
  debug("ISteamFriends::LeaveClanChatRoom()");
  return true;
}

int ISteamFriends::GetClanChatMemberCount(CSteamID steamIDClan) {
  debug("ISteamFriends::GetClanChatMemberCount()");
  return true;
}

CSteamID ISteamFriends::GetChatMemberByIndex(CSteamID steamIDClan, int iUser) {
  debug("ISteamFriends::GetChatMemberByIndex()");
  return {};
}

bool ISteamFriends::SendClanChatMessage(CSteamID    steamIDClanChat,
                                        const char *pchText) {
  debug("ISteamFriends::SendClanChatMessage()");
  return true;
}

int ISteamFriends::GetClanChatMessage(CSteamID steamIDClanChat, int iMessage,
                                      void *prgchText, int cchTextMax,
                                      EChatEntryType *peChatEntryType,
                                      CSteamID *      psteamidChatter) {
  debug("ISteamFriends::GetClanChatMessage()");
  return true;
}

bool ISteamFriends::IsClanChatAdmin(CSteamID steamIDClanChat,
                                    CSteamID steamIDUser) {
  debug("ISteamFriends::IsClanChatAdmin()");
  return true;
}

bool ISteamFriends::IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat) {
  debug("ISteamFriends::IsClanChatWindowOpenInSteam()");
  return true;
}

bool ISteamFriends::OpenClanChatWindowInSteam(CSteamID steamIDClanChat) {
  debug("ISteamFriends::OpenClanChatWindowInSteam()");
  return true;
}

bool ISteamFriends::CloseClanChatWindowInSteam(CSteamID steamIDClanChat) {
  debug("ISteamFriends::CloseClanChatWindowInSteam()");
  return true;
}

bool ISteamFriends::SetListenForFriendsMessages(bool bInterceptEnabled) {
  debug("ISteamFriends::SetListenForFriendsMessages()");
  return true;
}

bool ISteamFriends::ReplyToFriendMessage(CSteamID    steamIDFriend,
                                         const char *pchMsgToSend) {
  debug("ISteamFriends::ReplyToFriendMessage()");
  return true;
}

int ISteamFriends::GetFriendMessage(CSteamID steamIDFriend, int iMessageID,
                                    void *pvData, int cubData,
                                    EChatEntryType *peChatEntryType) {
  debug("ISteamFriends::GetFriendMessage()");
  return true;
}

SteamAPICall_t ISteamFriends::GetFollowerCount(CSteamID steamID) {
  debug("ISteamFriends::GetFollowerCount()");
  return true;
}

SteamAPICall_t ISteamFriends::IsFollowing(CSteamID steamID) {
  debug("ISteamFriends::IsFollowing()");
  return true;
}

SteamAPICall_t ISteamFriends::EnumerateFollowingList(uint32_t unStartIndex) {
  debug("ISteamFriends::EnumerateFollowingList()");
  return true;
}

bool ISteamFriends::IsClanPublic(CSteamID steamIDClan) {
  debug("ISteamFriends::IsClanPublic()");
  return true;
}

bool ISteamFriends::IsClanOfficialGameGroup(CSteamID steamIDClan) {
  debug("ISteamFriends::IsClanOfficialGameGroup()");
  return true;
}

bool ISteamRemoteStorage::FileWrite(const char *pchFile, const void *pvData,
                                    int32_t cubData) {
  debug("ISteamRemoteStorage::FileWrite()");
  return true;
}

int32_t ISteamRemoteStorage::FileRead(const char *pchFile, void *pvData,
                                      int32_t cubDataToRead) {
  debug("ISteamRemoteStorage::FileRead()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::FileWriteAsync(const char *pchFile,
                                                   const void *pvData,
                                                   uint32_t    cubData) {
  debug("ISteamRemoteStorage::FileWriteAsync()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::FileReadAsync(const char *pchFile,
                                                  uint32_t    nOffset,
                                                  uint32_t    cubToRead) {
  debug("ISteamRemoteStorage::FileReadAsync()");
  return true;
}

bool ISteamRemoteStorage::FileReadAsyncComplete(SteamAPICall_t hReadCall,
                                                void *         pvBuffer,
                                                uint32_t       cubToRead) {
  debug("ISteamRemoteStorage::FileReadAsyncComplete()");
  return true;
}

bool ISteamRemoteStorage::FileForget(const char *pchFile) {
  debug("ISteamRemoteStorage::FileForget()");
  return true;
}

bool ISteamRemoteStorage::FileDelete(const char *pchFile) {
  debug("ISteamRemoteStorage::FileDelete()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::FileShare(const char *pchFile) {
  debug("ISteamRemoteStorage::FileShare()");
  return true;
}

bool ISteamRemoteStorage::SetSyncPlatforms(
    const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) {
  debug("ISteamRemoteStorage::SetSyncPlatforms()");
  return true;
}

UGCFileWriteStreamHandle_t
ISteamRemoteStorage::FileWriteStreamOpen(const char *pchFile) {
  debug("ISteamRemoteStorage::FileWriteStreamOpen()");
  return true;
}

bool ISteamRemoteStorage::FileWriteStreamWriteChunk(
    UGCFileWriteStreamHandle_t writeHandle, const void *pvData,
    int32_t cubData) {
  debug("ISteamRemoteStorage::FileWriteStreamWriteChunk()");
  return true;
}

bool ISteamRemoteStorage::FileWriteStreamClose(
    UGCFileWriteStreamHandle_t writeHandle) {
  debug("ISteamRemoteStorage::FileWriteStreamClose()");
  return true;
}

bool ISteamRemoteStorage::FileWriteStreamCancel(
    UGCFileWriteStreamHandle_t writeHandle) {
  debug("ISteamRemoteStorage::FileWriteStreamCancel()");
  return true;
}

bool ISteamRemoteStorage::FileExists(const char *pchFile) {
  debug("ISteamRemoteStorage::FileExists()");
  return true;
}

bool ISteamRemoteStorage::FilePersisted(const char *pchFile) {
  debug("ISteamRemoteStorage::FilePersisted()");
  return true;
}

int32_t ISteamRemoteStorage::GetFileSize(const char *pchFile) {
  debug("ISteamRemoteStorage::GetFileSize()");
  return true;
}

int64 ISteamRemoteStorage::GetFileTimestamp(const char *pchFile) {
  debug("ISteamRemoteStorage::GetFileTimestamp()");
  return true;
}

ERemoteStoragePlatform
ISteamRemoteStorage::GetSyncPlatforms(const char *pchFile) {
  debug("ISteamRemoteStorage::GetSyncPlatforms()");
  return k_ERemoteStoragePlatformNone;
}

int32_t ISteamRemoteStorage::GetFileCount() {
  debug("ISteamRemoteStorage::GetFileCount()");
  return true;
}

const char *
ISteamRemoteStorage::GetFileNameAndSize(int iFile, int32_t *pnFileSizeInBytes) {
  debug("ISteamRemoteStorage::GetFileNameAndSize()");
  return "";
}

bool ISteamRemoteStorage::GetQuota(uint64 *pnTotalBytes,
                                   uint64 *puAvailableBytes) {
  debug("ISteamRemoteStorage::GetQuota()");
  return true;
}

bool ISteamRemoteStorage::IsCloudEnabledForAccount() {
  debug("ISteamRemoteStorage::IsCloudEnabledForAccount()");
  return true;
}

bool ISteamRemoteStorage::IsCloudEnabledForApp() {
  debug("ISteamRemoteStorage::IsCloudEnabledForApp()");
  return true;
}

void ISteamRemoteStorage::SetCloudEnabledForApp(bool bEnabled) {
  debug("ISteamRemoteStorage::SetCloudEnabledForApp()");
}

SteamAPICall_t ISteamRemoteStorage::UGCDownload(UGCHandle_t hContent,
                                                uint32_t    unPriority) {
  debug("ISteamRemoteStorage::UGCDownload()");
  return true;
}

bool ISteamRemoteStorage::GetUGCDownloadProgress(UGCHandle_t hContent,
                                                 int32_t *   pnBytesDownloaded,
                                                 int32_t *   pnBytesExpected) {
  debug("ISteamRemoteStorage::GetUGCDownloadProgress()");
  return true;
}

bool ISteamRemoteStorage::GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID,
                                        char **   ppchName,
                                        int32_t * pnFileSizeInBytes,
                                        CSteamID *pSteamIDOwner) {
  debug("ISteamRemoteStorage::GetUGCDetails()");
  return true;
}

int32_t ISteamRemoteStorage::UGCRead(UGCHandle_t hContent, void *pvData,
                                     int32_t cubDataToRead, uint32_t cOffset,
                                     EUGCReadAction eAction) {
  debug("ISteamRemoteStorage::UGCRead()");
  return true;
}

int32_t ISteamRemoteStorage::GetCachedUGCCount() {
  debug("ISteamRemoteStorage::GetCachedUGCCount()");
  return true;
}

UGCHandle_t ISteamRemoteStorage::GetCachedUGCHandle(int32_t iCachedContent) {
  debug("ISteamRemoteStorage::GetCachedUGCHandle()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::PublishWorkshopFile(
    const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId,
    const char *pchTitle, const char *pchDescription,
    ERemoteStoragePublishedFileVisibility eVisibility,
    struct SteamParamStringArray_t *      pTags,
    EWorkshopFileType                     eWorkshopFileType) {
  debug("ISteamRemoteStorage::PublishWorkshopFile()");
  return true;
}

PublishedFileUpdateHandle_t
ISteamRemoteStorage::CreatePublishedFileUpdateRequest(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::CreatePublishedFileUpdateRequest()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileFile(
    PublishedFileUpdateHandle_t updateHandle, const char *pchFile) {
  debug("ISteamRemoteStorage::UpdatePublishedFileFile()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFilePreviewFile(
    PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile) {
  debug("ISteamRemoteStorage::UpdatePublishedFilePreviewFile()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileTitle(
    PublishedFileUpdateHandle_t updateHandle, const char *pchTitle) {
  debug("ISteamRemoteStorage::UpdatePublishedFileTitle()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileDescription(
    PublishedFileUpdateHandle_t updateHandle, const char *pchDescription) {
  debug("ISteamRemoteStorage::UpdatePublishedFileDescription()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileVisibility(
    PublishedFileUpdateHandle_t           updateHandle,
    ERemoteStoragePublishedFileVisibility eVisibility) {
  debug("ISteamRemoteStorage::UpdatePublishedFileVisibility()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileTags(
    PublishedFileUpdateHandle_t     updateHandle,
    struct SteamParamStringArray_t *pTags) {
  debug("ISteamRemoteStorage::UpdatePublishedFileTags()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::CommitPublishedFileUpdate(
    PublishedFileUpdateHandle_t updateHandle) {
  debug("ISteamRemoteStorage::CommitPublishedFileUpdate()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::GetPublishedFileDetails(
    PublishedFileId_t unPublishedFileId, uint32_t unMaxSecondsOld) {
  debug("ISteamRemoteStorage::GetPublishedFileDetails()");
  return true;
}

SteamAPICall_t
ISteamRemoteStorage::DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::DeletePublishedFile()");
  return true;
}

SteamAPICall_t
ISteamRemoteStorage::EnumerateUserPublishedFiles(uint32_t unStartIndex) {
  debug("ISteamRemoteStorage::EnumerateUserPublishedFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::SubscribePublishedFile(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::SubscribePublishedFile()");
  return true;
}

SteamAPICall_t
ISteamRemoteStorage::EnumerateUserSubscribedFiles(uint32_t unStartIndex) {
  debug("ISteamRemoteStorage::EnumerateUserSubscribedFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::UnsubscribePublishedFile(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::UnsubscribePublishedFile()");
  return true;
}

bool ISteamRemoteStorage::UpdatePublishedFileSetChangeDescription(
    PublishedFileUpdateHandle_t updateHandle,
    const char *                pchChangeDescription) {
  debug("ISteamRemoteStorage::UpdatePublishedFileSetChangeDescription()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::GetPublishedItemVoteDetails(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::GetPublishedItemVoteDetails()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::UpdateUserPublishedItemVote(
    PublishedFileId_t unPublishedFileId, bool bVoteUp) {
  debug("ISteamRemoteStorage::UpdateUserPublishedItemVote()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::GetUserPublishedItemVoteDetails(
    PublishedFileId_t unPublishedFileId) {
  debug("ISteamRemoteStorage::GetUserPublishedItemVoteDetails()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::EnumerateUserSharedWorkshopFiles(
    CSteamID steamId, uint32_t unStartIndex,
    struct SteamParamStringArray_t *pRequiredTags,
    struct SteamParamStringArray_t *pExcludedTags) {
  debug("ISteamRemoteStorage::EnumerateUserSharedWorkshopFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::PublishVideo(
    EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount,
    const char *pchVideoIdentifier, const char *pchPreviewFile,
    AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription,
    ERemoteStoragePublishedFileVisibility eVisibility,
    struct SteamParamStringArray_t *      pTags) {
  debug("ISteamRemoteStorage::PublishVideo()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::SetUserPublishedFileAction(
    PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) {
  debug("ISteamRemoteStorage::SetUserPublishedFileAction()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::EnumeratePublishedFilesByUserAction(
    EWorkshopFileAction eAction, uint32_t unStartIndex) {
  debug("ISteamRemoteStorage::EnumeratePublishedFilesByUserAction()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::EnumeratePublishedWorkshopFiles(
    EWorkshopEnumerationType eEnumerationType, uint32_t unStartIndex,
    uint32_t unCount, uint32_t unDays, struct SteamParamStringArray_t *pTags,
    struct SteamParamStringArray_t *pUserTags) {
  debug("ISteamRemoteStorage::EnumeratePublishedWorkshopFiles()");
  return true;
}

SteamAPICall_t ISteamRemoteStorage::UGCDownloadToLocation(
    UGCHandle_t hContent, const char *pchLocation, uint32_t unPriority) {
  debug("ISteamRemoteStorage::UGCDownloadToLocation()");
  return true;
}

ISteamClient *CSteamAPIContext::SteamClient() const {
  debug("CSteamAPIContext::SteamClient() const");
  static ISteamClient SteamClient;
  return &SteamClient;
}

ISteamUser *CSteamAPIContext::SteamUser() const {
  debug("CSteamAPIContext::SteamUser() const");
  static ISteamUser SteamUser;
  return &SteamUser;
}

ISteamFriends *CSteamAPIContext::SteamFriends() const {
  debug("CSteamAPIContext::SteamFriends() const");
  static ISteamFriends SteamFriends;
  return &SteamFriends;
}

ISteamUtils *CSteamAPIContext::SteamUtils() const {
  debug("CSteamAPIContext::SteamUtils() const");
  static ISteamUtils SteamUtils;
  return &SteamUtils;
}

ISteamMatchmaking *CSteamAPIContext::SteamMatchmaking() const {
  debug("CSteamAPIContext::SteamMatchmaking() const");
  static ISteamMatchmaking SteamMatchmaking;
  return &SteamMatchmaking;
}

ISteamUserStats *CSteamAPIContext::SteamUserStats() const {
  debug("CSteamAPIContext::SteamUserStats() const");
  static ISteamUserStats SteamUserStats;
  return &SteamUserStats;
}

ISteamApps *CSteamAPIContext::SteamApps() const {
  debug("CSteamAPIContext::SteamApps() const");
  static ISteamApps SteamApps;
  return &SteamApps;
}

ISteamMatchmakingServers *CSteamAPIContext::SteamMatchmakingServers() const {
  debug("CSteamAPIContext::SteamMatchmakingServers() const");
  static ISteamMatchmakingServers SteamMatchmakingServers;
  return &SteamMatchmakingServers;
}

ISteamNetworking *CSteamAPIContext::SteamNetworking() const {
  debug("CSteamAPIContext::SteamNetworking() const");
  static ISteamNetworking SteamNetworking;
  return &SteamNetworking;
}

ISteamRemoteStorage *CSteamAPIContext::SteamRemoteStorage() const {
  debug("CSteamAPIContext::SteamRemoteStorage() const");
  static ISteamRemoteStorage SteamRemoteStorage;
  return &SteamRemoteStorage;
}

ISteamScreenshots *CSteamAPIContext::SteamScreenshots() const {
  debug("CSteamAPIContext::SteamScreenshots() const");
  static ISteamScreenshots SteamScreenshots;
  return &SteamScreenshots;
}

ISteamHTTP *CSteamAPIContext::SteamHTTP() const {
  debug("CSteamAPIContext::SteamHTTP() const");
  static ISteamHTTP SteamHTTP;
  return &SteamHTTP;
}

ISteamController *CSteamAPIContext::SteamController() const {
  debug("CSteamAPIContext::SteamController() const");
  static ISteamController SteamController;
  return &SteamController;
}

ISteamUGC *CSteamAPIContext::SteamUGC() const {
  debug("CSteamAPIContext::SteamUGC() const");
  static ISteamUGC SteamUGC;
  return &SteamUGC;
}

ISteamAppList *CSteamAPIContext::SteamAppList() const {
  debug("CSteamAPIContext::SteamAppList() const");
  static ISteamAppList SteamAppList;
  return &SteamAppList;
}

ISteamMusic *CSteamAPIContext::SteamMusic() const {
  debug("CSteamAPIContext::SteamMusic() const");
  static ISteamMusic SteamMusic;
  return &SteamMusic;
}

ISteamMusicRemote *CSteamAPIContext::SteamMusicRemote() const {
  debug("CSteamAPIContext::SteamMusicRemote() const");
  static ISteamMusicRemote SteamMusicRemote;
  return &SteamMusicRemote;
}

ISteamHTMLSurface *CSteamAPIContext::SteamHTMLSurface() const {
  debug("CSteamAPIContext::SteamHTMLSurface() const");
  static ISteamHTMLSurface SteamHTMLSurface;
  return &SteamHTMLSurface;
}

ISteamInventory *CSteamAPIContext::SteamInventory() const {
  debug("CSteamAPIContext::SteamInventory() const");
  static ISteamInventory SteamInventory;
  return &SteamInventory;
}

ISteamVideo *CSteamAPIContext::SteamVideo() const {
  debug("CSteamAPIContext::SteamVideo() const");
  static ISteamVideo SteamVideo;
  return &SteamVideo;
}

ISteamParentalSettings *CSteamAPIContext::SteamParentalSettings() const {
  debug("CSteamAPIContext::SteamParentalSettings() const");
  static ISteamParentalSettings SteamParentalSettings;
  return &SteamParentalSettings;
}

ISteamGameServer *CSteamAPIContext::SteamGameServer() const {
  debug("CSteamAPIContext::SteamGameServer() const");
  static ISteamGameServer SteamGameServer;
  return &SteamGameServer;
}

ISteamGameServerStats *CSteamAPIContext::SteamGameServerStats() const {
  debug("CSteamAPIContext::SteamGameServerStats() const");
  static ISteamGameServerStats SteamGameServerStats;
  return &SteamGameServerStats;
}

ISteamMatchmakingServerListResponse *
CSteamAPIContext::SteamMatchmakingServerListResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingServerListResponse() const");
  static ISteamMatchmakingServerListResponse SteamMatchmakingServerListResponse;
  return &SteamMatchmakingServerListResponse;
}

ISteamMatchmakingPingResponse *
CSteamAPIContext::SteamMatchmakingPingResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingPingResponse() const");
  static ISteamMatchmakingPingResponse SteamMatchmakingPingResponse;
  return &SteamMatchmakingPingResponse;
}

ISteamMatchmakingPlayersResponse *
CSteamAPIContext::SteamMatchmakingPlayersResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingPlayersResponse() const");
  static ISteamMatchmakingPlayersResponse SteamMatchmakingPlayersResponse;
  return &SteamMatchmakingPlayersResponse;
}

ISteamMatchmakingRulesResponse *
CSteamAPIContext::SteamMatchmakingRulesResponse() const {
  debug("CSteamAPIContext::SteamMatchmakingRulesResponse() const");
  static ISteamMatchmakingRulesResponse SteamMatchmakingRulesResponse;
  return &SteamMatchmakingRulesResponse;
}

void SteamInternal_ContextInit() { debug("SteamInternal_ContextInit()"); }

bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID) {
  debug("SteamAPI_RestartAppIfNecessary");
  return false;
}

bool SteamAPI_Init() {
  debug("SteamAPI_Init");
  return true;
}

bool SteamAPI_InitSafe() { return SteamAPI_Init(); }

bool SteamAPI_IsSteamRunning() {
  debug("SteamAPI_IsSteamRunning");
  return false;
}

void SteamAPI_Shutdown() { debug("SteamAPI_Shutdown"); }

void SteamAPI_RegisterCallback(void *pCallback, int iCallback) {
  debug("SteamAPI_RegisterCallback(%p, %d)", pCallback, iCallback);
  callbacks[iCallback].push_back(pCallback);
  callback_types[pCallback] = iCallback;
}

void SteamAPI_UnregisterCallback(void *pCallback) {
  debug("SteamAPI_UnregisterCallback(%p)", pCallback);

  auto &cbs = callbacks[callback_types[pCallback]];
  cbs.erase(std::remove(std::begin(cbs), std::end(cbs), pCallback),
            std::end(cbs));
}

void SteamAPI_RunCallbacks() { debug("SteamAPI_RunCallbacks()"); }

HSteamPipe SteamAPI_GetHSteamPipe() {
  debug("SteamAPI_GetHSteamPipe");
  return 1;
}

HSteamUser SteamAPI_GetHSteamUser() {
  debug("SteamAPI_GetHSteamUser");
  return 1;
}

void SteamGameServer_RunCallbacks() { debug("SteamGameServer_RunCallbacks"); }

void SteamAPI_RegisterCallResult(void *pCallback, SteamAPICall_t callback) {
  debug("SteamAPI_RegisterCallResult");
}

void SteamAPI_UnregisterCallResult(void *pCallback, SteamAPICall_t callback) {
  debug("SteamAPI_UnregisterCallResult");
}

bool SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort,
                                   uint16 usGamePort, uint16 usQueryPort,
                                   int         eServerMode,
                                   const char *pchVersionString) {
  debug("SteamInternal_GameServer_Init");
  return SteamAPI_Init();
}

void SteamGameServer_Shutdown() {
  debug("SteamGameServer_Shutdown");
  SteamAPI_Shutdown();
}

HSteamUser SteamGameServer_GetHSteamUser() {
  debug("SteamGameServer_GetHSteamUser");
  return SteamAPI_GetHSteamUser();
}

HSteamPipe SteamGameServer_GetHSteamPipe() {
  debug("SteamGameServer_GetHSteamPipe");
  return SteamAPI_GetHSteamPipe();
}

void *SteamInternal_CreateInterface(const char *version) {
  debug("SteamInternal_CreateInterface(%s)", version);
  return SteamClient();
}

void ISteamHTMLSurface::DestructISteamHTMLSurface() {
  debug("ISteamHTMLSurface::DestructISteamHTMLSurface()");
}

bool ISteamHTMLSurface::Init() {
  debug("ISteamHTMLSurface::Init()");
  return true;
}

bool ISteamHTMLSurface::Shutdown() {
  debug("ISteamHTMLSurface::Shutdown()");
  return true;
}

SteamAPICall_t ISteamHTMLSurface::CreateBrowser(const char *pchUserAgent,
                                                const char *pchUserCSS) {
  debug("ISteamHTMLSurface::CreateBrowser()");
  return {};
}

void ISteamHTMLSurface::RemoveBrowser(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::RemoveBrowser()");
}

void ISteamHTMLSurface::LoadURL(HHTMLBrowser unBrowserHandle,
                                const char *pchURL, const char *pchPostData) {
  debug("ISteamHTMLSurface::LoadURL()");
}

void ISteamHTMLSurface::SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth,
                                uint32 unHeight) {
  debug("ISteamHTMLSurface::SetSize()");
}

void ISteamHTMLSurface::StopLoad(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::StopLoad()");
}

void ISteamHTMLSurface::Reload(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::Reload()");
}

void ISteamHTMLSurface::GoBack(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::GoBack()");
}

void ISteamHTMLSurface::GoForward(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::GoForward()");
}

void ISteamHTMLSurface::AddHeader(HHTMLBrowser unBrowserHandle,
                                  const char *pchKey, const char *pchValue) {
  debug("ISteamHTMLSurface::AddHeader()");
}

void ISteamHTMLSurface::ExecuteJavascript(HHTMLBrowser unBrowserHandle,
                                          const char * pchScript) {
  debug("ISteamHTMLSurface::ExecuteJavascript()");
}

void ISteamHTMLSurface::MouseUp(
    HHTMLBrowser                        unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
  debug("ISteamHTMLSurface::MouseUp()");
}

void ISteamHTMLSurface::MouseDown(
    HHTMLBrowser                        unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
  debug("ISteamHTMLSurface::MouseDown()");
}

void ISteamHTMLSurface::MouseDoubleClick(
    HHTMLBrowser                        unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
  debug("ISteamHTMLSurface::MouseDoubleClick()");
}

void ISteamHTMLSurface::MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) {
  debug("ISteamHTMLSurface::MouseMove()");
}

void ISteamHTMLSurface::MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) {
  debug("ISteamHTMLSurface::MouseWheel()");
}

void ISteamHTMLSurface::KeyDown(
    HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
  debug("ISteamHTMLSurface::KeyDown()");
}

void ISteamHTMLSurface::KeyUp(
    HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
  debug("ISteamHTMLSurface::KeyUp()");
}

void ISteamHTMLSurface::KeyChar(
    HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
  debug("ISteamHTMLSurface::KeyChar()");
}

void ISteamHTMLSurface::SetHorizontalScroll(HHTMLBrowser unBrowserHandle,
                                            uint32       nAbsolutePixelScroll) {
  debug("ISteamHTMLSurface::SetHorizontalScroll()");
}

void ISteamHTMLSurface::SetVerticalScroll(HHTMLBrowser unBrowserHandle,
                                          uint32       nAbsolutePixelScroll) {
  debug("ISteamHTMLSurface::SetVerticalScroll()");
}

void ISteamHTMLSurface::SetKeyFocus(HHTMLBrowser unBrowserHandle,
                                    bool         bHasKeyFocus) {
  debug("ISteamHTMLSurface::SetKeyFocus()");
}

void ISteamHTMLSurface::ViewSource(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::ViewSource()");
}

void ISteamHTMLSurface::CopyToClipboard(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::CopyToClipboard()");
}

void ISteamHTMLSurface::PasteFromClipboard(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::PasteFromClipboard()");
}

void ISteamHTMLSurface::Find(HHTMLBrowser unBrowserHandle,
                             const char *pchSearchStr, bool bCurrentlyInFind,
                             bool bReverse) {
  debug("ISteamHTMLSurface::Find()");
}

void ISteamHTMLSurface::StopFind(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::StopFind()");
}

void ISteamHTMLSurface::GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x,
                                          int y) {
  debug("ISteamHTMLSurface::GetLinkAtPosition()");
}

void ISteamHTMLSurface::SetCookie(const char *pchHostname, const char *pchKey,
                                  const char *pchValue, const char *pchPath,
                                  RTime32 nExpires, bool bSecure,
                                  bool bHTTPOnly) {
  debug("ISteamHTMLSurface::SetCookie()");
}

void ISteamHTMLSurface::SetPageScaleFactor(HHTMLBrowser unBrowserHandle,
                                           float flZoom, int nPointX,
                                           int nPointY) {
  debug("ISteamHTMLSurface::SetPageScaleFactor()");
}

void ISteamHTMLSurface::SetBackgroundMode(HHTMLBrowser unBrowserHandle,
                                          bool         bBackgroundMode) {
  debug("ISteamHTMLSurface::SetBackgroundMode()");
}

void ISteamHTMLSurface::SetDPIScalingFactor(HHTMLBrowser unBrowserHandle,
                                            float        flDPIScaling) {
  debug("ISteamHTMLSurface::SetDPIScalingFactor()");
}

void ISteamHTMLSurface::AllowStartRequest(HHTMLBrowser unBrowserHandle,
                                          bool         bAllowed) {
  debug("ISteamHTMLSurface::AllowStartRequest()");
}

void ISteamHTMLSurface::JSDialogResponse(HHTMLBrowser unBrowserHandle,
                                         bool         bResult) {
  debug("ISteamHTMLSurface::JSDialogResponse()");
}

int ISteamMatchmaking::GetFavoriteGameCount() {
  debug("ISteamMatchmaking::GetFavoriteGameCount");
  return 0;
}

bool ISteamMatchmaking::GetFavoriteGame(int iGame, AppId_t *pnAppID,
                                        uint32 *pnIP, uint16 *pnConnPort,
                                        uint16 *pnQueryPort, uint32 *punFlags,
                                        uint32 *pRTime32LastPlayedOnServer) {
  debug("ISteamMatchmaking::GetFavoriteGame");
  return true;
}

int ISteamMatchmaking::AddFavoriteGame(AppId_t nAppID, uint32 nIP,
                                       uint16 nConnPort, uint16 nQueryPort,
                                       uint32 unFlags,
                                       uint32 rTime32LastPlayedOnServer) {
  debug("ISteamMatchmaking::AddFavoriteGame");
  return 0;
}

bool ISteamMatchmaking::RemoveFavoriteGame(AppId_t nAppID, uint32 nIP,
                                           uint16 nConnPort, uint16 nQueryPort,
                                           uint32 unFlags) {
  debug("ISteamMatchmaking::RemoveFavoriteGame");
  return true;
}

SteamAPICall_t ISteamMatchmaking::RequestLobbyList() {
  debug("ISteamMatchmaking::RequestLobbyList");
  return {};
}

void ISteamMatchmaking::AddRequestLobbyListStringFilter(
    const char *pchKeyToMatch, const char *pchValueToMatch,
    ELobbyComparison eComparisonType) {
  debug("ISteamMatchmaking::AddRequestLobbyListStringFilter");
}

void ISteamMatchmaking::AddRequestLobbyListNumericalFilter(
    const char *pchKeyToMatch, int nValueToMatch,
    ELobbyComparison eComparisonType) {
  debug("ISteamMatchmaking::AddRequestLobbyListNumericalFilter");
}

void ISteamMatchmaking::AddRequestLobbyListNearValueFilter(
    const char *pchKeyToMatch, int nValueToBeCloseTo) {
  debug("ISteamMatchmaking::AddRequestLobbyListNearValueFilter");
}

void ISteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable(
    int nSlotsAvailable) {
  debug("ISteamMatchmaking::AddRequestLobbyListFilterSlotsAvailable");
}

void ISteamMatchmaking::AddRequestLobbyListDistanceFilter(
    ELobbyDistanceFilter eLobbyDistanceFilter) {
  debug("ISteamMatchmaking::AddRequestLobbyListDistanceFilter");
}

void ISteamMatchmaking::AddRequestLobbyListResultCountFilter(int cMaxResults) {
  debug("ISteamMatchmaking::AddRequestLobbyListResultCountFilter");
}

void ISteamMatchmaking::AddRequestLobbyListCompatibleMembersFilter(
    CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::AddRequestLobbyListCompatibleMembersFilter");
}

CSteamID ISteamMatchmaking::GetLobbyByIndex(int iLobby) {
  debug("ISteamMatchmaking::GetLobbyByIndex");
  return {};
}

SteamAPICall_t ISteamMatchmaking::CreateLobby(ELobbyType eLobbyType,
                                              int        cMaxMembers) {
  debug("ISteamMatchmaking::CreateLobby");
  return {};
}

SteamAPICall_t ISteamMatchmaking::JoinLobby(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::JoinLobby");
  return {};
}

void ISteamMatchmaking::LeaveLobby(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::LeaveLobby");
}

bool ISteamMatchmaking::InviteUserToLobby(CSteamID steamIDLobby,
                                          CSteamID steamIDInvitee) {
  debug("ISteamMatchmaking::InviteUserToLobby");
  return true;
}

int ISteamMatchmaking::GetNumLobbyMembers(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::GetNumLobbyMembers");
  return 0;
}

CSteamID ISteamMatchmaking::GetLobbyMemberByIndex(CSteamID steamIDLobby,
                                                  int      iMember) {
  debug("ISteamMatchmaking::GetLobbyMemberByIndex");
  return {};
}

const char *ISteamMatchmaking::GetLobbyData(CSteamID    steamIDLobby,
                                            const char *pchKey) {
  debug("ISteamMatchmaking::GetLobbyData");
  return "";
}

bool ISteamMatchmaking::SetLobbyData(CSteamID steamIDLobby, const char *pchKey,
                                     const char *pchValue) {
  debug("ISteamMatchmaking::SetLobbyData");
  return true;
}

int ISteamMatchmaking::GetLobbyDataCount(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::GetLobbyDataCount");
  return 0;
}

bool ISteamMatchmaking::GetLobbyDataByIndex(CSteamID steamIDLobby,
                                            int iLobbyData, char *pchKey,
                                            int   cchKeyBufferSize,
                                            char *pchValue,
                                            int   cchValueBufferSize) {
  debug("ISteamMatchmaking::GetLobbyDataByIndex");
  return true;
}

bool ISteamMatchmaking::DeleteLobbyData(CSteamID    steamIDLobby,
                                        const char *pchKey) {
  debug("ISteamMatchmaking::DeleteLobbyData");
  return true;
}

const char *ISteamMatchmaking::GetLobbyMemberData(CSteamID    steamIDLobby,
                                                  CSteamID    steamIDUser,
                                                  const char *pchKey) {
  debug("ISteamMatchmaking::GetLobbyMemberData");
  return "";
}

void ISteamMatchmaking::SetLobbyMemberData(CSteamID    steamIDLobby,
                                           const char *pchKey,
                                           const char *pchValue) {
  debug("ISteamMatchmaking::SetLobbyMemberData");
}

bool ISteamMatchmaking::SendLobbyChatMsg(CSteamID    steamIDLobby,
                                         const void *pvMsgBody,
                                         int         cubMsgBody) {
  debug("ISteamMatchmaking::SendLobbyChatMsg");
  return true;
}

int ISteamMatchmaking::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID,
                                         CSteamID *pSteamIDUser, void *pvData,
                                         int             cubData,
                                         EChatEntryType *peChatEntryType) {
  debug("ISteamMatchmaking::GetLobbyChatEntry");
  return 0;
}

bool ISteamMatchmaking::RequestLobbyData(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::RequestLobbyData");
  return true;
}

void ISteamMatchmaking::SetLobbyGameServer(CSteamID steamIDLobby,
                                           uint32   unGameServerIP,
                                           uint16   unGameServerPort,
                                           CSteamID steamIDGameServer) {
  debug("ISteamMatchmaking::SetLobbyGameServer");
}

bool ISteamMatchmaking::GetLobbyGameServer(CSteamID  steamIDLobby,
                                           uint32 *  punGameServerIP,
                                           uint16 *  punGameServerPort,
                                           CSteamID *psteamIDGameServer) {
  debug("ISteamMatchmaking::GetLobbyGameServer");
  return true;
}

bool ISteamMatchmaking::SetLobbyMemberLimit(CSteamID steamIDLobby,
                                            int      cMaxMembers) {
  debug("ISteamMatchmaking::SetLobbyMemberLimit");
  return true;
}

int ISteamMatchmaking::GetLobbyMemberLimit(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::GetLobbyMemberLimit");
  return 0;
}

bool ISteamMatchmaking::SetLobbyType(CSteamID   steamIDLobby,
                                     ELobbyType eLobbyType) {
  debug("ISteamMatchmaking::SetLobbyType");
  return true;
}

bool ISteamMatchmaking::SetLobbyJoinable(CSteamID steamIDLobby,
                                         bool     bLobbyJoinable) {
  debug("ISteamMatchmaking::SetLobbyJoinable");
  return true;
}

CSteamID ISteamMatchmaking::GetLobbyOwner(CSteamID steamIDLobby) {
  debug("ISteamMatchmaking::GetLobbyOwner");
  return {};
}

bool ISteamMatchmaking::SetLobbyOwner(CSteamID steamIDLobby,
                                      CSteamID steamIDNewOwner) {
  debug("ISteamMatchmaking::SetLobbyOwner");
  return true;
}

bool ISteamMatchmaking::SetLinkedLobby(CSteamID steamIDLobby,
                                       CSteamID steamIDLobbyDependent) {
  debug("ISteamMatchmaking::SetLinkedLobby");
  return true;
}

void ISteamMatchmakingServerListResponse::ServerResponded(
    HServerListRequest hRequest, int iServer) {
  debug("ISteamMatchmakingServerListResponse::ServerResponded()");
}

void ISteamMatchmakingServerListResponse::ServerFailedToRespond(
    HServerListRequest hRequest, int iServer) {
  debug("ISteamMatchmakingServerListResponse::ServerFailedToRespond()");
}

void ISteamMatchmakingServerListResponse::RefreshComplete(
    HServerListRequest hRequest, EMatchMakingServerResponse response) {
  debug("ISteamMatchmakingServerListResponse::RefreshComplete()");
}

void ISteamMatchmakingPingResponse::ServerResponded(
    class gameserveritem_t &server) {
  debug("ISteamMatchmakingPingResponse::ServerResponded()");
}

void ISteamMatchmakingPingResponse::ServerFailedToRespond() {
  debug("ISteamMatchmakingPingResponse::ServerFailedToRespond()");
}

void ISteamMatchmakingPlayersResponse::AddPlayerToList(const char *pchName,
                                                       int         nScore,
                                                       float flTimePlayed) {
  debug("ISteamMatchmakingPlayersResponse::AddPlayerToList()");
}

void ISteamMatchmakingPlayersResponse::PlayersFailedToRespond() {
  debug("ISteamMatchmakingPlayersResponse::PlayersFailedToRespond()");
}

void ISteamMatchmakingPlayersResponse::PlayersRefreshComplete() {
  debug("ISteamMatchmakingPlayersResponse::PlayersRefreshComplete()");
}

void ISteamMatchmakingRulesResponse::RulesResponded(const char *pchRule,
                                                    const char *pchValue) {
  debug("ISteamMatchmakingRulesResponse::RulesResponded()");
}

void ISteamMatchmakingRulesResponse::RulesFailedToRespond() {
  debug("ISteamMatchmakingRulesResponse::RulesFailedToRespond()");
}

void ISteamMatchmakingRulesResponse::RulesRefreshComplete() {
  debug("ISteamMatchmakingRulesResponse::RulesRefreshComplete()");
}

HServerListRequest ISteamMatchmakingServers::RequestInternetServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestInternetServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestLANServerList(
    AppId_t                                    iApp,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestLANServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestFriendsServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestFriendsServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestFavoritesServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestFavoritesServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestHistoryServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestHistoryServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestSpectatorServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestSpectatorServerList()");
  return {};
}

void ISteamMatchmakingServers::ReleaseRequest(
    HServerListRequest hServerListRequest) {
  debug("ISteamMatchmakingServers::ReleaseRequest()");
}

gameserveritem_t *
ISteamMatchmakingServers::GetServerDetails(HServerListRequest hRequest,
                                           int                iServer) {
  debug("ISteamMatchmakingServers::GetServerDetails()");
  return nullptr;
}

void ISteamMatchmakingServers::CancelQuery(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::CancelQuery()");
}

void ISteamMatchmakingServers::RefreshQuery(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::RefreshQuery()");
}

bool ISteamMatchmakingServers::IsRefreshing(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::IsRefreshing()");
  return true;
}

int ISteamMatchmakingServers::GetServerCount(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::GetServerCount()");
  return 0;
}

void ISteamMatchmakingServers::RefreshServer(HServerListRequest hRequest,
                                             int                iServer) {
  debug("ISteamMatchmakingServers::RefreshServer()");
}

HServerQuery ISteamMatchmakingServers::PingServer(
    uint32 unIP, uint16 usPort,
    class ISteamMatchmakingPingResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::PingServer()");
  return {};
}

HServerQuery ISteamMatchmakingServers::PlayerDetails(
    uint32 unIP, uint16 usPort,
    class ISteamMatchmakingPlayersResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::PlayerDetails()");
  return {};
}

HServerQuery ISteamMatchmakingServers::ServerRules(
    uint32 unIP, uint16 usPort,
    class ISteamMatchmakingRulesResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::ServerRules()");
  return {};
}

void ISteamMatchmakingServers::CancelServerQuery(HServerQuery hServerQuery) {
  debug("ISteamMatchmakingServers::CancelServerQuery()");
}

bool ISteamNetworking::SendP2PPacket(CSteamID    steamIDRemote,
                                     const void *pubData, uint32 cubData,
                                     EP2PSend eP2PSendType, int nChannel) {
  debug("ISteamNetworking::SendP2PPacket()");
  return true;
}

bool ISteamNetworking::IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel) {
  debug("ISteamNetworking::IsP2PPacketAvailable()");
  return true;
}

bool ISteamNetworking::ReadP2PPacket(void *pubDest, uint32 cubDest,
                                     uint32 *  pcubMsgSize,
                                     CSteamID *psteamIDRemote, int nChannel) {
  debug("ISteamNetworking::ReadP2PPacket()");
  return true;
}

bool ISteamNetworking::AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
  debug("ISteamNetworking::AcceptP2PSessionWithUser()");
  return true;
}

bool ISteamNetworking::CloseP2PSessionWithUser(CSteamID steamIDRemote) {
  debug("ISteamNetworking::CloseP2PSessionWithUser()");
  return true;
}

bool ISteamNetworking::CloseP2PChannelWithUser(CSteamID steamIDRemote,
                                               int      nChannel) {
  debug("ISteamNetworking::CloseP2PChannelWithUser()");
  return true;
}

bool ISteamNetworking::GetP2PSessionState(
    CSteamID steamIDRemote, struct P2PSessionState_t *pConnectionState) {
  debug("ISteamNetworking::GetP2PSessionState()");
  return true;
}

bool ISteamNetworking::AllowP2PPacketRelay(bool bAllow) {
  debug("ISteamNetworking::AllowP2PPacketRelay()");
  return true;
}

SNetListenSocket_t
ISteamNetworking::CreateListenSocket(int nVirtualP2PPort, uint32 nIP,
                                     uint16 nPort,
                                     bool   bAllowUseOfPacketRelay) {
  debug("ISteamNetworking::CreateListenSocket()");
  return {};
}

SNetSocket_t
ISteamNetworking::CreateP2PConnectionSocket(CSteamID steamIDTarget,
                                            int nVirtualPort, int nTimeoutSec,
                                            bool bAllowUseOfPacketRelay) {
  debug("ISteamNetworking::CreateP2PConnectionSocket()");
  return {};
}

SNetSocket_t ISteamNetworking::CreateConnectionSocket(uint32 nIP, uint16 nPort,
                                                      int nTimeoutSec) {
  debug("ISteamNetworking::CreateConnectionSocket()");
  return {};
}

bool ISteamNetworking::DestroySocket(SNetSocket_t hSocket,
                                     bool         bNotifyRemoteEnd) {
  debug("ISteamNetworking::DestroySocket()");
  return true;
}

bool ISteamNetworking::DestroyListenSocket(SNetListenSocket_t hSocket,
                                           bool bNotifyRemoteEnd) {
  debug("ISteamNetworking::DestroyListenSocket()");
  return true;
}

bool ISteamNetworking::SendDataOnSocket(SNetSocket_t hSocket, void *pubData,
                                        uint32 cubData, bool bReliable) {
  debug("ISteamNetworking::SendDataOnSocket()");
  return true;
}

bool ISteamNetworking::IsDataAvailableOnSocket(SNetSocket_t hSocket,
                                               uint32 *     pcubMsgSize) {
  debug("ISteamNetworking::IsDataAvailableOnSocket()");
  return true;
}

bool ISteamNetworking::RetrieveDataFromSocket(SNetSocket_t hSocket,
                                              void *pubDest, uint32 cubDest,
                                              uint32 *pcubMsgSize) {
  debug("ISteamNetworking::RetrieveDataFromSocket()");
  return true;
}

bool ISteamNetworking::IsDataAvailable(SNetListenSocket_t hListenSocket,
                                       uint32 *           pcubMsgSize,
                                       SNetSocket_t *     phSocket) {
  debug("ISteamNetworking::IsDataAvailable()");
  return true;
}

bool ISteamNetworking::RetrieveData(SNetListenSocket_t hListenSocket,
                                    void *pubDest, uint32 cubDest,
                                    uint32 *      pcubMsgSize,
                                    SNetSocket_t *phSocket) {
  debug("ISteamNetworking::RetrieveData()");
  return true;
}

bool ISteamNetworking::GetSocketInfo(SNetSocket_t hSocket,
                                     CSteamID *   pSteamIDRemote,
                                     int *peSocketStatus, uint32 *punIPRemote,
                                     uint16 *punPortRemote) {
  debug("ISteamNetworking::GetSocketInfo()");
  return true;
}

bool ISteamNetworking::GetListenSocketInfo(SNetListenSocket_t hListenSocket,
                                           uint32 *pnIP, uint16 *pnPort) {
  debug("ISteamNetworking::GetListenSocketInfo()");
  return true;
}

ESNetSocketConnectionType
ISteamNetworking::GetSocketConnectionType(SNetSocket_t hSocket) {
  debug("ISteamNetworking::GetSocketConnectionType()");
  return {};
}

int ISteamNetworking::GetMaxPacketSize(SNetSocket_t hSocket) {
  debug("ISteamNetworking::GetMaxPacketSize()");
  return 0;
}

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

bool ISteamMusic::BIsEnabled() {
  debug("ISteamMusic::BIsEnabled()");
  return true;
}

bool ISteamMusic::BIsPlaying() {
  debug("ISteamMusic::BIsPlaying()");
  return true;
}

AudioPlayback_Status ISteamMusic::GetPlaybackStatus() {
  debug("ISteamMusic::GetPlaybackStatus()");
  return {};
}

void ISteamMusic::Play() { debug("ISteamMusic::Play()"); }

void ISteamMusic::Pause() { debug("ISteamMusic::Pause()"); }

void ISteamMusic::PlayPrevious() { debug("ISteamMusic::PlayPrevious()"); }

void ISteamMusic::PlayNext() { debug("ISteamMusic::PlayNext()"); }

void ISteamMusic::SetVolume(float flVolume) {
  debug("ISteamMusic::SetVolume()");
}

float ISteamMusic::GetVolume() {
  debug("ISteamMusic::GetVolume()");
  return 0.f;
}

bool ISteamMusicRemote::RegisterSteamMusicRemote(const char *pchName) {
  debug("ISteamMusicRemote::RegisterSteamMusicRemote()");
  return true;
}

bool ISteamMusicRemote::DeregisterSteamMusicRemote() {
  debug("ISteamMusicRemote::DeregisterSteamMusicRemote()");
  return true;
}

bool ISteamMusicRemote::BIsCurrentMusicRemote() {
  debug("ISteamMusicRemote::BIsCurrentMusicRemote()");
  return true;
}

bool ISteamMusicRemote::BActivationSuccess(bool bValue) {
  debug("ISteamMusicRemote::BActivationSuccess()");
  return true;
}

bool ISteamMusicRemote::SetDisplayName(const char *pchDisplayName) {
  debug("ISteamMusicRemote::SetDisplayName()");
  return true;
}

bool ISteamMusicRemote::SetPNGIcon_64x64(void * pvBuffer,
                                         uint32 cbBufferLength) {
  debug("ISteamMusicRemote::SetPNGIcon_64x64()");
  return true;
}

bool ISteamMusicRemote::EnablePlayPrevious(bool bValue) {
  debug("ISteamMusicRemote::EnablePlayPrevious()");
  return true;
}

bool ISteamMusicRemote::EnablePlayNext(bool bValue) {
  debug("ISteamMusicRemote::EnablePlayNext()");
  return true;
}

bool ISteamMusicRemote::EnableShuffled(bool bValue) {
  debug("ISteamMusicRemote::EnableShuffled()");
  return true;
}

bool ISteamMusicRemote::EnableLooped(bool bValue) {
  debug("ISteamMusicRemote::EnableLooped()");
  return true;
}

bool ISteamMusicRemote::EnableQueue(bool bValue) {
  debug("ISteamMusicRemote::EnableQueue()");
  return true;
}

bool ISteamMusicRemote::EnablePlaylists(bool bValue) {
  debug("ISteamMusicRemote::EnablePlaylists()");
  return true;
}

bool ISteamMusicRemote::UpdatePlaybackStatus(AudioPlayback_Status nStatus) {
  debug("ISteamMusicRemote::UpdatePlaybackStatus()");
  return true;
}

bool ISteamMusicRemote::UpdateShuffled(bool bValue) {
  debug("ISteamMusicRemote::UpdateShuffled()");
  return true;
}

bool ISteamMusicRemote::UpdateLooped(bool bValue) {
  debug("ISteamMusicRemote::UpdateLooped()");
  return true;
}

bool ISteamMusicRemote::UpdateVolume(float flValue) {
  debug("ISteamMusicRemote::UpdateVolume()");
  return true;
}

bool ISteamMusicRemote::CurrentEntryWillChange() {
  debug("ISteamMusicRemote::CurrentEntryWillChange()");
  return true;
}

bool ISteamMusicRemote::CurrentEntryIsAvailable(bool bAvailable) {
  debug("ISteamMusicRemote::CurrentEntryIsAvailable()");
  return true;
}

bool ISteamMusicRemote::UpdateCurrentEntryText(const char *pchText) {
  debug("ISteamMusicRemote::UpdateCurrentEntryText()");
  return true;
}

bool ISteamMusicRemote::UpdateCurrentEntryElapsedSeconds(int nValue) {
  debug("ISteamMusicRemote::UpdateCurrentEntryElapsedSeconds()");
  return true;
}

bool ISteamMusicRemote::UpdateCurrentEntryCoverArt(void * pvBuffer,
                                                   uint32 cbBufferLength) {
  debug("ISteamMusicRemote::UpdateCurrentEntryCoverArt()");
  return true;
}

bool ISteamMusicRemote::CurrentEntryDidChange() {
  debug("ISteamMusicRemote::CurrentEntryDidChange()");
  return true;
}

bool ISteamMusicRemote::QueueWillChange() {
  debug("ISteamMusicRemote::QueueWillChange()");
  return true;
}

bool ISteamMusicRemote::ResetQueueEntries() {
  debug("ISteamMusicRemote::ResetQueueEntries()");
  return true;
}

bool ISteamMusicRemote::SetQueueEntry(int nID, int nPosition,
                                      const char *pchEntryText) {
  debug("ISteamMusicRemote::SetQueueEntry()");
  return true;
}

bool ISteamMusicRemote::SetCurrentQueueEntry(int nID) {
  debug("ISteamMusicRemote::SetCurrentQueueEntry()");
  return true;
}

bool ISteamMusicRemote::QueueDidChange() {
  debug("ISteamMusicRemote::QueueDidChange()");
  return true;
}

bool ISteamMusicRemote::PlaylistWillChange() {
  debug("ISteamMusicRemote::PlaylistWillChange()");
  return true;
}

bool ISteamMusicRemote::ResetPlaylistEntries() {
  debug("ISteamMusicRemote::ResetPlaylistEntries()");
  return true;
}

bool ISteamMusicRemote::SetPlaylistEntry(int nID, int nPosition,
                                         const char *pchEntryText) {
  debug("ISteamMusicRemote::SetPlaylistEntry()");
  return true;
}

bool ISteamMusicRemote::SetCurrentPlaylistEntry(int nID) {
  debug("ISteamMusicRemote::SetCurrentPlaylistEntry()");
  return true;
}

bool ISteamMusicRemote::PlaylistDidChange() {
  debug("ISteamMusicRemote::PlaylistDidChange()");
  return true;
}

HTTPRequestHandle ISteamHTTP::CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod,
                                                const char *pchAbsoluteURL) {
  debug("ISteamHTTP::CreateHTTPRequest()");
  return {};
}

bool ISteamHTTP::SetHTTPRequestContextValue(HTTPRequestHandle hRequest,
                                            uint64            ulContextValue) {
  debug("ISteamHTTP::SetHTTPRequestContextValue()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestNetworkActivityTimeout(
    HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) {
  debug("ISteamHTTP::SetHTTPRequestNetworkActivityTimeout()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest,
                                           const char *      pchHeaderName,
                                           const char *      pchHeaderValue) {
  debug("ISteamHTTP::SetHTTPRequestHeaderValue()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest,
                                                  const char *pchParamName,
                                                  const char *pchParamValue) {
  debug("ISteamHTTP::SetHTTPRequestGetOrPostParameter()");
  return true;
}

bool ISteamHTTP::SendHTTPRequest(HTTPRequestHandle hRequest,
                                 SteamAPICall_t *  pCallHandle) {
  debug("ISteamHTTP::SendHTTPRequest()");
  return true;
}

bool ISteamHTTP::SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest,
                                                  SteamAPICall_t *pCallHandle) {
  debug("ISteamHTTP::SendHTTPRequestAndStreamResponse()");
  return true;
}

bool ISteamHTTP::DeferHTTPRequest(HTTPRequestHandle hRequest) {
  debug("ISteamHTTP::DeferHTTPRequest()");
  return true;
}

bool ISteamHTTP::PrioritizeHTTPRequest(HTTPRequestHandle hRequest) {
  debug("ISteamHTTP::PrioritizeHTTPRequest()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest,
                                           const char *      pchHeaderName,
                                           uint32 *unResponseHeaderSize) {
  debug("ISteamHTTP::GetHTTPResponseHeaderSize()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest,
                                            const char *      pchHeaderName,
                                            uint8 *pHeaderValueBuffer,
                                            uint32 unBufferSize) {
  debug("ISteamHTTP::GetHTTPResponseHeaderValue()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseBodySize(HTTPRequestHandle hRequest,
                                         uint32 *          unBodySize) {
  debug("ISteamHTTP::GetHTTPResponseBodySize()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseBodyData(HTTPRequestHandle hRequest,
                                         uint8 *           pBodyDataBuffer,
                                         uint32            unBufferSize) {
  debug("ISteamHTTP::GetHTTPResponseBodyData()");
  return true;
}

bool ISteamHTTP::GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest,
                                                  uint32            cOffset,
                                                  uint8 *pBodyDataBuffer,
                                                  uint32 unBufferSize) {
  debug("ISteamHTTP::GetHTTPStreamingResponseBodyData()");
  return true;
}

bool ISteamHTTP::ReleaseHTTPRequest(HTTPRequestHandle hRequest) {
  debug("ISteamHTTP::ReleaseHTTPRequest()");
  return true;
}

bool ISteamHTTP::GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest,
                                            float *           pflPercentOut) {
  debug("ISteamHTTP::GetHTTPDownloadProgressPct()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest,
                                           const char *      pchContentType,
                                           uint8 *pubBody, uint32 unBodyLen) {
  debug("ISteamHTTP::SetHTTPRequestRawPostBody()");
  return true;
}

HTTPCookieContainerHandle
ISteamHTTP::CreateCookieContainer(bool bAllowResponsesToModify) {
  debug("ISteamHTTP::CreateCookieContainer()");
  return {};
}

bool ISteamHTTP::ReleaseCookieContainer(
    HTTPCookieContainerHandle hCookieContainer) {
  debug("ISteamHTTP::ReleaseCookieContainer()");
  return true;
}

bool ISteamHTTP::SetCookie(HTTPCookieContainerHandle hCookieContainer,
                           const char *pchHost, const char *pchUrl,
                           const char *pchCookie) {
  debug("ISteamHTTP::SetCookie()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestCookieContainer(
    HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer) {
  debug("ISteamHTTP::SetHTTPRequestCookieContainer()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest,
                                             const char *pchUserAgentInfo) {
  debug("ISteamHTTP::SetHTTPRequestUserAgentInfo()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestRequiresVerifiedCertificate(
    HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) {
  debug("ISteamHTTP::SetHTTPRequestRequiresVerifiedCertificate()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest,
                                                 uint32 unMilliseconds) {
  debug("ISteamHTTP::SetHTTPRequestAbsoluteTimeoutMS()");
  return true;
}

bool ISteamHTTP::GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest,
                                           bool *            pbWasTimedOut) {
  debug("ISteamHTTP::GetHTTPRequestWasTimedOut()");
  return true;
}

bool ISteamController::Init() {
  debug("ISteamController::Init()");
  return true;
}

bool ISteamController::Shutdown() {
  debug("ISteamController::Shutdown()");
  return true;
}

void ISteamController::RunFrame() { debug("ISteamController::RunFrame()"); }

int ISteamController::GetConnectedControllers(ControllerHandle_t *handlesOut) {
  debug("ISteamController::GetConnectedControllers()");
  return 0;
}

bool ISteamController::ShowBindingPanel(ControllerHandle_t controllerHandle) {
  debug("ISteamController::ShowBindingPanel()");
  return true;
}

ControllerActionSetHandle_t
ISteamController::GetActionSetHandle(const char *pszActionSetName) {
  debug("ISteamController::GetActionSetHandle()");
  return {};
}

void ISteamController::ActivateActionSet(
    ControllerHandle_t          controllerHandle,
    ControllerActionSetHandle_t actionSetHandle) {
  debug("ISteamController::ActivateActionSet()");
}

ControllerActionSetHandle_t
ISteamController::GetCurrentActionSet(ControllerHandle_t controllerHandle) {
  debug("ISteamController::GetCurrentActionSet()");
  return {};
}

void ISteamController::ActivateActionSetLayer(
    ControllerHandle_t          controllerHandle,
    ControllerActionSetHandle_t actionSetLayerHandle) {
  debug("ISteamController::ActivateActionSetLayer()");
}

void ISteamController::DeactivateActionSetLayer(
    ControllerHandle_t          controllerHandle,
    ControllerActionSetHandle_t actionSetLayerHandle) {
  debug("ISteamController::DeactivateActionSetLayer()");
}

void ISteamController::DeactivateAllActionSetLayers(
    ControllerHandle_t controllerHandle) {
  debug("ISteamController::DeactivateAllActionSetLayers()");
}

int ISteamController::GetActiveActionSetLayers(
    ControllerHandle_t           controllerHandle,
    ControllerActionSetHandle_t *handlesOut) {
  debug("ISteamController::GetActiveActionSetLayers()");
  return 0;
}

ControllerDigitalActionHandle_t
ISteamController::GetDigitalActionHandle(const char *pszActionName) {
  debug("ISteamController::GetDigitalActionHandle()");
  return {};
}

ControllerDigitalActionData_t ISteamController::GetDigitalActionData(
    ControllerHandle_t              controllerHandle,
    ControllerDigitalActionHandle_t digitalActionHandle) {
  debug("ISteamController::GetDigitalActionData()");
  return {};
}

int ISteamController::GetDigitalActionOrigins(
    ControllerHandle_t              controllerHandle,
    ControllerActionSetHandle_t     actionSetHandle,
    ControllerDigitalActionHandle_t digitalActionHandle,
    EControllerActionOrigin *       originsOut) {
  debug("ISteamController::GetDigitalActionOrigins()");
  return 0;
}

ControllerAnalogActionHandle_t
ISteamController::GetAnalogActionHandle(const char *pszActionName) {
  debug("ISteamController::GetAnalogActionHandle()");
  return {};
}

ControllerAnalogActionData_t ISteamController::GetAnalogActionData(
    ControllerHandle_t             controllerHandle,
    ControllerAnalogActionHandle_t analogActionHandle) {
  debug("ISteamController::GetAnalogActionData()");
  return {};
}

int ISteamController::GetAnalogActionOrigins(
    ControllerHandle_t             controllerHandle,
    ControllerActionSetHandle_t    actionSetHandle,
    ControllerAnalogActionHandle_t analogActionHandle,
    EControllerActionOrigin *      originsOut) {
  debug("ISteamController::GetAnalogActionOrigins()");
  return 0;
}

void ISteamController::StopAnalogActionMomentum(
    ControllerHandle_t             controllerHandle,
    ControllerAnalogActionHandle_t eAction) {
  debug("ISteamController::StopAnalogActionMomentum()");
}

void ISteamController::TriggerHapticPulse(ControllerHandle_t  controllerHandle,
                                          ESteamControllerPad eTargetPad,
                                          unsigned short usDurationMicroSec) {
  debug("ISteamController::TriggerHapticPulse()");
}

void ISteamController::TriggerRepeatedHapticPulse(
    ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad,
    unsigned short usDurationMicroSec, unsigned short usOffMicroSec,
    unsigned short unRepeat, unsigned int nFlags) {
  debug("ISteamController::TriggerRepeatedHapticPulse()");
}

void ISteamController::TriggerVibration(ControllerHandle_t controllerHandle,
                                        unsigned short     usLeftSpeed,
                                        unsigned short     usRightSpeed) {
  debug("ISteamController::TriggerVibration()");
}

void ISteamController::SetLEDColor(ControllerHandle_t controllerHandle,
                                   uint8 nColorR, uint8 nColorG, uint8 nColorB,
                                   unsigned int nFlags) {
  debug("ISteamController::SetLEDColor()");
}

int ISteamController::GetGamepadIndexForController(
    ControllerHandle_t ulControllerHandle) {
  debug("ISteamController::GetGamepadIndexForController()");
  return 0;
}

ControllerHandle_t ISteamController::GetControllerForGamepadIndex(int nIndex) {
  debug("ISteamController::GetControllerForGamepadIndex()");
  return {};
}

ControllerMotionData_t
ISteamController::GetMotionData(ControllerHandle_t controllerHandle) {
  debug("ISteamController::GetMotionData()");
  return {};
}

bool ISteamController::ShowDigitalActionOrigins(
    ControllerHandle_t              controllerHandle,
    ControllerDigitalActionHandle_t digitalActionHandle, float flScale,
    float flXPosition, float flYPosition) {
  debug("ISteamController::ShowDigitalActionOrigins()");
  return true;
}

bool ISteamController::ShowAnalogActionOrigins(
    ControllerHandle_t             controllerHandle,
    ControllerAnalogActionHandle_t analogActionHandle, float flScale,
    float flXPosition, float flYPosition) {
  debug("ISteamController::ShowAnalogActionOrigins()");
  return true;
}

const char *
ISteamController::GetStringForActionOrigin(EControllerActionOrigin eOrigin) {
  debug("ISteamController::GetStringForActionOrigin()");
  return "";
}

const char *
ISteamController::GetGlyphForActionOrigin(EControllerActionOrigin eOrigin) {
  debug("ISteamController::GetGlyphForActionOrigin()");
  return "";
}

ESteamInputType
ISteamController::GetInputTypeForHandle(ControllerHandle_t controllerHandle) {
  debug("ISteamController::GetInputTypeForHandle()");
  return {};
}

UGCQueryHandle_t ISteamUGC::CreateQueryUserUGCRequest(
    AccountID_t unAccountID, EUserUGCList eListType,
    EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
  debug("ISteamUGC::CreateQueryUserUGCRequest()");
  return {};
}

UGCQueryHandle_t ISteamUGC::CreateQueryAllUGCRequest(
    EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType,
    AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage) {
  debug("ISteamUGC::CreateQueryAllUGCRequest()");
  return {};
}

UGCQueryHandle_t
ISteamUGC::CreateQueryUGCDetailsRequest(PublishedFileId_t *pvecPublishedFileID,
                                        uint32 unNumPublishedFileIDs) {
  debug("ISteamUGC::CreateQueryUGCDetailsRequest()");
  return {};
}

SteamAPICall_t ISteamUGC::SendQueryUGCRequest(UGCQueryHandle_t handle) {
  debug("ISteamUGC::SendQueryUGCRequest()");
  return {};
}

bool ISteamUGC::GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index,
                                  struct SteamUGCDetails_t *pDetails) {
  debug("ISteamUGC::GetQueryUGCResult()");
  return true;
}

bool ISteamUGC::GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index,
                                      char *pchURL, uint32 cchURLSize) {
  debug("ISteamUGC::GetQueryUGCPreviewURL()");
  return true;
}

bool ISteamUGC::GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index,
                                    char *pchMetadata, uint32 cchMetadatasize) {
  debug("ISteamUGC::GetQueryUGCMetadata()");
  return true;
}

bool ISteamUGC::GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index,
                                    PublishedFileId_t *pvecPublishedFileID,
                                    uint32             cMaxEntries) {
  debug("ISteamUGC::GetQueryUGCChildren()");
  return true;
}

bool ISteamUGC::GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index,
                                     EItemStatistic eStatType,
                                     uint64 *       pStatValue) {
  debug("ISteamUGC::GetQueryUGCStatistic()");
  return true;
}

uint32 ISteamUGC::GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle,
                                                   uint32           index) {
  debug("ISteamUGC::GetQueryUGCNumAdditionalPreviews()");
  return 0;
}

bool ISteamUGC::GetQueryUGCAdditionalPreview(
    UGCQueryHandle_t handle, uint32 index, uint32 previewIndex,
    char *pchURLOrVideoID, uint32 cchURLSize, char *pchOriginalFileName,
    uint32 cchOriginalFileNameSize, EItemPreviewType *pPreviewType) {
  debug("ISteamUGC::GetQueryUGCAdditionalPreview()");
  return true;
}

uint32 ISteamUGC::GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle,
                                             uint32           index) {
  debug("ISteamUGC::GetQueryUGCNumKeyValueTags()");
  return 0;
}

bool ISteamUGC::GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index,
                                       uint32 keyValueTagIndex, char *pchKey,
                                       uint32 cchKeySize, char *pchValue,
                                       uint32 cchValueSize) {
  debug("ISteamUGC::GetQueryUGCKeyValueTag()");
  return true;
}

bool ISteamUGC::ReleaseQueryUGCRequest(UGCQueryHandle_t handle) {
  debug("ISteamUGC::ReleaseQueryUGCRequest()");
  return true;
}

bool ISteamUGC::AddRequiredTag(UGCQueryHandle_t handle, const char *pTagName) {
  debug("ISteamUGC::AddRequiredTag()");
  return true;
}

bool ISteamUGC::AddExcludedTag(UGCQueryHandle_t handle, const char *pTagName) {
  debug("ISteamUGC::AddExcludedTag()");
  return true;
}

bool ISteamUGC::SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs) {
  debug("ISteamUGC::SetReturnOnlyIDs()");
  return true;
}

bool ISteamUGC::SetReturnKeyValueTags(UGCQueryHandle_t handle,
                                      bool             bReturnKeyValueTags) {
  debug("ISteamUGC::SetReturnKeyValueTags()");
  return true;
}

bool ISteamUGC::SetReturnLongDescription(UGCQueryHandle_t handle,
                                         bool bReturnLongDescription) {
  debug("ISteamUGC::SetReturnLongDescription()");
  return true;
}

bool ISteamUGC::SetReturnMetadata(UGCQueryHandle_t handle,
                                  bool             bReturnMetadata) {
  debug("ISteamUGC::SetReturnMetadata()");
  return true;
}

bool ISteamUGC::SetReturnChildren(UGCQueryHandle_t handle,
                                  bool             bReturnChildren) {
  debug("ISteamUGC::SetReturnChildren()");
  return true;
}

bool ISteamUGC::SetReturnAdditionalPreviews(UGCQueryHandle_t handle,
                                            bool bReturnAdditionalPreviews) {
  debug("ISteamUGC::SetReturnAdditionalPreviews()");
  return true;
}

bool ISteamUGC::SetReturnTotalOnly(UGCQueryHandle_t handle,
                                   bool             bReturnTotalOnly) {
  debug("ISteamUGC::SetReturnTotalOnly()");
  return true;
}

bool ISteamUGC::SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays) {
  debug("ISteamUGC::SetReturnPlaytimeStats()");
  return true;
}

bool ISteamUGC::SetLanguage(UGCQueryHandle_t handle, const char *pchLanguage) {
  debug("ISteamUGC::SetLanguage()");
  return true;
}

bool ISteamUGC::SetAllowCachedResponse(UGCQueryHandle_t handle,
                                       uint32           unMaxAgeSeconds) {
  debug("ISteamUGC::SetAllowCachedResponse()");
  return true;
}

bool ISteamUGC::SetCloudFileNameFilter(UGCQueryHandle_t handle,
                                       const char *     pMatchCloudFileName) {
  debug("ISteamUGC::SetCloudFileNameFilter()");
  return true;
}

bool ISteamUGC::SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag) {
  debug("ISteamUGC::SetMatchAnyTag()");
  return true;
}

bool ISteamUGC::SetSearchText(UGCQueryHandle_t handle,
                              const char *     pSearchText) {
  debug("ISteamUGC::SetSearchText()");
  return true;
}

bool ISteamUGC::SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays) {
  debug("ISteamUGC::SetRankedByTrendDays()");
  return true;
}

bool ISteamUGC::AddRequiredKeyValueTag(UGCQueryHandle_t handle,
                                       const char *pKey, const char *pValue) {
  debug("ISteamUGC::AddRequiredKeyValueTag()");
  return true;
}

SteamAPICall_t ISteamUGC::RequestUGCDetails(PublishedFileId_t nPublishedFileID,
                                            uint32            unMaxAgeSeconds) {
  debug("ISteamUGC::RequestUGCDetails()");
  return {};
}

SteamAPICall_t ISteamUGC::CreateItem(AppId_t           nConsumerAppId,
                                     EWorkshopFileType eFileType) {
  debug("ISteamUGC::CreateItem()");
  return {};
}

UGCUpdateHandle_t
ISteamUGC::StartItemUpdate(AppId_t           nConsumerAppId,
                           PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::StartItemUpdate()");
  return {};
}

bool ISteamUGC::SetItemTitle(UGCUpdateHandle_t handle, const char *pchTitle) {
  debug("ISteamUGC::SetItemTitle()");
  return true;
}

bool ISteamUGC::SetItemDescription(UGCUpdateHandle_t handle,
                                   const char *      pchDescription) {
  debug("ISteamUGC::SetItemDescription()");
  return true;
}

bool ISteamUGC::SetItemUpdateLanguage(UGCUpdateHandle_t handle,
                                      const char *      pchLanguage) {
  debug("ISteamUGC::SetItemUpdateLanguage()");
  return true;
}

bool ISteamUGC::SetItemMetadata(UGCUpdateHandle_t handle,
                                const char *      pchMetaData) {
  debug("ISteamUGC::SetItemMetadata()");
  return true;
}

bool ISteamUGC::SetItemVisibility(
    UGCUpdateHandle_t                     handle,
    ERemoteStoragePublishedFileVisibility eVisibility) {
  debug("ISteamUGC::SetItemVisibility()");
  return true;
}

bool ISteamUGC::SetItemTags(UGCUpdateHandle_t                     updateHandle,
                            const struct SteamParamStringArray_t *pTags) {
  debug("ISteamUGC::SetItemTags()");
  return true;
}

bool ISteamUGC::SetItemContent(UGCUpdateHandle_t handle,
                               const char *      pszContentFolder) {
  debug("ISteamUGC::SetItemContent()");
  return true;
}

bool ISteamUGC::SetItemPreview(UGCUpdateHandle_t handle,
                               const char *      pszPreviewFile) {
  debug("ISteamUGC::SetItemPreview()");
  return true;
}

bool ISteamUGC::RemoveItemKeyValueTags(UGCUpdateHandle_t handle,
                                       const char *      pchKey) {
  debug("ISteamUGC::RemoveItemKeyValueTags()");
  return true;
}

bool ISteamUGC::AddItemKeyValueTag(UGCUpdateHandle_t handle, const char *pchKey,
                                   const char *pchValue) {
  debug("ISteamUGC::AddItemKeyValueTag()");
  return true;
}

bool ISteamUGC::AddItemPreviewFile(UGCUpdateHandle_t handle,
                                   const char *      pszPreviewFile,
                                   EItemPreviewType  type) {
  debug("ISteamUGC::AddItemPreviewFile()");
  return true;
}

bool ISteamUGC::AddItemPreviewVideo(UGCUpdateHandle_t handle,
                                    const char *      pszVideoID) {
  debug("ISteamUGC::AddItemPreviewVideo()");
  return true;
}

bool ISteamUGC::UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index,
                                      const char *pszPreviewFile) {
  debug("ISteamUGC::UpdateItemPreviewFile()");
  return true;
}

bool ISteamUGC::UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index,
                                       const char *pszVideoID) {
  debug("ISteamUGC::UpdateItemPreviewVideo()");
  return true;
}

bool ISteamUGC::RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index) {
  debug("ISteamUGC::RemoveItemPreview()");
  return true;
}

SteamAPICall_t ISteamUGC::SubmitItemUpdate(UGCUpdateHandle_t handle,
                                           const char *      pchChangeNote) {
  debug("ISteamUGC::SubmitItemUpdate()");
  return {};
}

EItemUpdateStatus ISteamUGC::GetItemUpdateProgress(UGCUpdateHandle_t handle,
                                                   uint64 *punBytesProcessed,
                                                   uint64 *punBytesTotal) {
  debug("ISteamUGC::GetItemUpdateProgress()");
  return {};
}

SteamAPICall_t ISteamUGC::SetUserItemVote(PublishedFileId_t nPublishedFileID,
                                          bool              bVoteUp) {
  debug("ISteamUGC::SetUserItemVote()");
  return {};
}

SteamAPICall_t ISteamUGC::GetUserItemVote(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::GetUserItemVote()");
  return {};
}

SteamAPICall_t
ISteamUGC::AddItemToFavorites(AppId_t           nAppId,
                              PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::AddItemToFavorites()");
  return {};
}

SteamAPICall_t
ISteamUGC::RemoveItemFromFavorites(AppId_t           nAppId,
                                   PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::RemoveItemFromFavorites()");
  return {};
}

SteamAPICall_t ISteamUGC::SubscribeItem(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::SubscribeItem()");
  return {};
}

SteamAPICall_t ISteamUGC::UnsubscribeItem(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::UnsubscribeItem()");
  return {};
}

uint32 ISteamUGC::GetNumSubscribedItems() {
  debug("ISteamUGC::GetNumSubscribedItems()");
  return 0;
}

uint32 ISteamUGC::GetSubscribedItems(PublishedFileId_t *pvecPublishedFileID,
                                     uint32             cMaxEntries) {
  debug("ISteamUGC::GetSubscribedItems()");
  return 0;
}

uint32 ISteamUGC::GetItemState(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::GetItemState()");
  return 0;
}

bool ISteamUGC::GetItemInstallInfo(PublishedFileId_t nPublishedFileID,
                                   uint64 *punSizeOnDisk, char *pchFolder,
                                   uint32 cchFolderSize, uint32 *punTimeStamp) {
  debug("ISteamUGC::GetItemInstallInfo()");
  return true;
}

bool ISteamUGC::GetItemDownloadInfo(PublishedFileId_t nPublishedFileID,
                                    uint64 *          punBytesDownloaded,
                                    uint64 *          punBytesTotal) {
  debug("ISteamUGC::GetItemDownloadInfo()");
  return true;
}

bool ISteamUGC::DownloadItem(PublishedFileId_t nPublishedFileID,
                             bool              bHighPriority) {
  debug("ISteamUGC::DownloadItem()");
  return true;
}

bool ISteamUGC::BInitWorkshopForGameServer(DepotId_t   unWorkshopDepotID,
                                           const char *pszFolder) {
  debug("ISteamUGC::BInitWorkshopForGameServer()");
  return true;
}

void ISteamUGC::SuspendDownloads(bool bSuspend) {
  debug("ISteamUGC::SuspendDownloads()");
}

SteamAPICall_t
ISteamUGC::StartPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
                                 uint32             unNumPublishedFileIDs) {
  debug("ISteamUGC::StartPlaytimeTracking()");
  return {};
}

SteamAPICall_t
ISteamUGC::StopPlaytimeTracking(PublishedFileId_t *pvecPublishedFileID,
                                uint32             unNumPublishedFileIDs) {
  debug("ISteamUGC::StopPlaytimeTracking()");
  return {};
}

SteamAPICall_t ISteamUGC::StopPlaytimeTrackingForAllItems() {
  debug("ISteamUGC::StopPlaytimeTrackingForAllItems()");
  return {};
}

SteamAPICall_t
ISteamUGC::AddDependency(PublishedFileId_t nParentPublishedFileID,
                         PublishedFileId_t nChildPublishedFileID) {
  debug("ISteamUGC::AddDependency()");
  return {};
}

SteamAPICall_t
ISteamUGC::RemoveDependency(PublishedFileId_t nParentPublishedFileID,
                            PublishedFileId_t nChildPublishedFileID) {
  debug("ISteamUGC::RemoveDependency()");
  return {};
}

SteamAPICall_t ISteamUGC::AddAppDependency(PublishedFileId_t nPublishedFileID,
                                           AppId_t           nAppID) {
  debug("ISteamUGC::AddAppDependency()");
  return {};
}

SteamAPICall_t
ISteamUGC::RemoveAppDependency(PublishedFileId_t nPublishedFileID,
                               AppId_t           nAppID) {
  debug("ISteamUGC::RemoveAppDependency()");
  return {};
}

SteamAPICall_t
ISteamUGC::GetAppDependencies(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::GetAppDependencies()");
  return {};
}

SteamAPICall_t ISteamUGC::DeleteItem(PublishedFileId_t nPublishedFileID) {
  debug("ISteamUGC::DeleteItem()");
  return {};
}

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

EResult ISteamInventory::GetResultStatus(SteamInventoryResult_t resultHandle) {
  debug("ISteamInventory::GetResultStatus()");
  return {};
}

bool ISteamInventory::GetResultItems(SteamInventoryResult_t     resultHandle,
                                     struct SteamItemDetails_t *pOutItemsArray,
                                     uint32 *punOutItemsArraySize) {
  debug("ISteamInventory::GetResultItems()");
  return true;
}

bool ISteamInventory::GetResultItemProperty(SteamInventoryResult_t resultHandle,
                                            uint32                 unItemIndex,
                                            const char *pchPropertyName,
                                            char *      pchValueBuffer,
                                            uint32 *    punValueBufferSizeOut) {
  debug("ISteamInventory::GetResultItemProperty()");
  return true;
}

uint32
ISteamInventory::GetResultTimestamp(SteamInventoryResult_t resultHandle) {
  debug("ISteamInventory::GetResultTimestamp()");
  return 0;
}

bool ISteamInventory::CheckResultSteamID(SteamInventoryResult_t resultHandle,
                                         CSteamID steamIDExpected) {
  debug("ISteamInventory::CheckResultSteamID()");
  return true;
}

void ISteamInventory::DestroyResult(SteamInventoryResult_t resultHandle) {
  debug("ISteamInventory::DestroyResult()");
}

bool ISteamInventory::GetAllItems(SteamInventoryResult_t *pResultHandle) {
  debug("ISteamInventory::GetAllItems()");
  return true;
}

bool ISteamInventory::GetItemsByID(SteamInventoryResult_t *     pResultHandle,
                                   const SteamItemInstanceID_t *pInstanceIDs,
                                   uint32 unCountInstanceIDs) {
  debug("ISteamInventory::GetItemsByID()");
  return true;
}

bool ISteamInventory::SerializeResult(SteamInventoryResult_t resultHandle,
                                      void *                 pOutBuffer,
                                      uint32 *               punOutBufferSize) {
  debug("ISteamInventory::SerializeResult()");
  return true;
}

bool ISteamInventory::DeserializeResult(
    SteamInventoryResult_t *pOutResultHandle, const void *pBuffer,
    uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE) {
  debug("ISteamInventory::DeserializeResult()");
  return true;
}

bool ISteamInventory::GenerateItems(SteamInventoryResult_t *pResultHandle,
                                    const SteamItemDef_t *  pArrayItemDefs,
                                    const uint32 *          punArrayQuantity,
                                    uint32                  unArrayLength) {
  debug("ISteamInventory::GenerateItems()");
  return true;
}

bool ISteamInventory::GrantPromoItems(SteamInventoryResult_t *pResultHandle) {
  debug("ISteamInventory::GrantPromoItems()");
  return true;
}

bool ISteamInventory::AddPromoItem(SteamInventoryResult_t *pResultHandle,
                                   SteamItemDef_t          itemDef) {
  debug("ISteamInventory::AddPromoItem()");
  return true;
}

bool ISteamInventory::AddPromoItems(SteamInventoryResult_t *pResultHandle,
                                    const SteamItemDef_t *  pArrayItemDefs,
                                    uint32                  unArrayLength) {
  debug("ISteamInventory::AddPromoItems()");
  return true;
}

bool ISteamInventory::ConsumeItem(SteamInventoryResult_t *pResultHandle,
                                  SteamItemInstanceID_t   itemConsume,
                                  uint32                  unQuantity) {
  debug("ISteamInventory::ConsumeItem()");
  return true;
}

bool ISteamInventory::ExchangeItems(SteamInventoryResult_t *pResultHandle,
                                    const SteamItemDef_t *  pArrayGenerate,
                                    const uint32 *punArrayGenerateQuantity,
                                    uint32        unArrayGenerateLength,
                                    const SteamItemInstanceID_t *pArrayDestroy,
                                    const uint32 *punArrayDestroyQuantity,
                                    uint32        unArrayDestroyLength) {
  debug("ISteamInventory::ExchangeItems()");
  return true;
}

bool ISteamInventory::TransferItemQuantity(
    SteamInventoryResult_t *pResultHandle, SteamItemInstanceID_t itemIdSource,
    uint32 unQuantity, SteamItemInstanceID_t itemIdDest) {
  debug("ISteamInventory::TransferItemQuantity()");
  return true;
}

void ISteamInventory::SendItemDropHeartbeat() {
  debug("ISteamInventory::SendItemDropHeartbeat()");
}

bool ISteamInventory::TriggerItemDrop(SteamInventoryResult_t *pResultHandle,
                                      SteamItemDef_t dropListDefinition) {
  debug("ISteamInventory::TriggerItemDrop()");
  return true;
}

bool ISteamInventory::TradeItems(
    SteamInventoryResult_t *pResultHandle, CSteamID steamIDTradePartner,
    const SteamItemInstanceID_t *pArrayGive, const uint32 *pArrayGiveQuantity,
    uint32 nArrayGiveLength, const SteamItemInstanceID_t *pArrayGet,
    const uint32 *pArrayGetQuantity, uint32 nArrayGetLength) {
  debug("ISteamInventory::TradeItems()");
  return true;
}

bool ISteamInventory::LoadItemDefinitions() {
  debug("ISteamInventory::LoadItemDefinitions()");
  return true;
}

bool ISteamInventory::GetItemDefinitionIDs(SteamItemDef_t *pItemDefIDs,
                                           uint32 *punItemDefIDsArraySize) {
  debug("ISteamInventory::GetItemDefinitionIDs()");
  return true;
}

bool ISteamInventory::GetItemDefinitionProperty(SteamItemDef_t iDefinition,
                                                const char *   pchPropertyName,
                                                char *         pchValueBuffer,
                                                uint32 *punValueBufferSizeOut) {
  debug("ISteamInventory::GetItemDefinitionProperty()");
  return true;
}

SteamAPICall_t
ISteamInventory::RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID) {
  debug("ISteamInventory::RequestEligiblePromoItemDefinitionsIDs()");
  return {};
}

bool ISteamInventory::GetEligiblePromoItemDefinitionIDs(
    CSteamID steamID, SteamItemDef_t *pItemDefIDs,
    uint32 *punItemDefIDsArraySize) {
  debug("ISteamInventory::GetEligiblePromoItemDefinitionIDs()");
  return true;
}

SteamAPICall_t
ISteamInventory::StartPurchase(const SteamItemDef_t *pArrayItemDefs,
                               const uint32 *        punArrayQuantity,
                               uint32                unArrayLength) {
  debug("ISteamInventory::StartPurchase()");
  return {};
}

SteamAPICall_t ISteamInventory::RequestPrices() {
  debug("ISteamInventory::RequestPrices()");
  return {};
}

uint32 ISteamInventory::GetNumItemsWithPrices() {
  debug("ISteamInventory::GetNumItemsWithPrices()");
  return 0;
}

bool ISteamInventory::GetItemsWithPrices(SteamItemDef_t *pArrayItemDefs,
                                         uint64 *        pPrices,
                                         uint32          unArrayLength) {
  debug("ISteamInventory::GetItemsWithPrices()");
  return true;
}

bool ISteamInventory::GetItemPrice(SteamItemDef_t iDefinition, uint64 *pPrice) {
  debug("ISteamInventory::GetItemPrice()");
  return true;
}

SteamInventoryUpdateHandle_t ISteamInventory::StartUpdateProperties() {
  debug("ISteamInventory::StartUpdateProperties()");
  return {};
}

bool ISteamInventory::RemoveProperty(SteamInventoryUpdateHandle_t handle,
                                     SteamItemInstanceID_t        nItemID,
                                     const char *pchPropertyName) {
  debug("ISteamInventory::RemoveProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *                 pchPropertyName,
                                  const char *pchPropertyValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *pchPropertyName, bool bValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *pchPropertyName, int64 nValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SetProperty(SteamInventoryUpdateHandle_t handle,
                                  SteamItemInstanceID_t        nItemID,
                                  const char *pchPropertyName, float flValue) {
  debug("ISteamInventory::SetProperty()");
  return true;
}

bool ISteamInventory::SubmitUpdateProperties(
    SteamInventoryUpdateHandle_t handle,
    SteamInventoryResult_t *     pResultHandle) {
  debug("ISteamInventory::SubmitUpdateProperties()");
  return true;
}

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

#ifndef _WIN32
int __dbg = dup(2);
#endif
