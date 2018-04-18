#include <cstdint>
#include <cstdio>
#include <cstdlib>

#include <utility>

#ifndef _WIN32
#include <unistd.h>
#endif

static int stdlog;
template <typename... Ts>
static void debug(char const *message, Ts &&... as) {
#ifndef _WIN32
  dprintf(stdlog, message, std::forward<decltype(as)>(as)...);
  dprintf(stdlog, "\n");
#else
  std::printf(message, std::forward<decltype(as)>(as)...);
  std::printf("\n");
#endif // _WIN32
}

typedef uint8_t  Salt_t[8];
typedef uint64_t GID_t;
typedef uint64_t JobID_t;
typedef GID_t    TxnID_t;
typedef uint32_t PackageId_t;
typedef uint32_t BundleId_t;
typedef uint32_t AppId_t;
typedef uint64_t AssetClassId_t;
typedef uint32_t PhysicalItemId_t;
typedef uint32_t DepotId_t;
typedef uint32_t RTime32;
typedef uint32_t CellID_t;
typedef uint64_t SteamAPICall_t;
typedef uint32_t AccountID_t;
typedef uint32_t PartnerId_t;
typedef uint64_t ManifestId_t;
typedef uint64_t SiteId_t;
typedef uint32_t HAuthTicket;
typedef void *   BREAKPAD_HANDLE;
typedef char     compile_time_assert_type[1];
typedef int32_t  HSteamPipe;
typedef int32_t  HSteamUser;
typedef int16_t  FriendsGroupID_t;
typedef void *   HServerListRequest;
typedef int      HServerQuery;
typedef uint64_t UGCHandle_t;
typedef uint64_t PublishedFileUpdateHandle_t;
typedef uint64_t PublishedFileId_t;
typedef uint64_t UGCFileWriteStreamHandle_t;
typedef char     compile_time_assert_type[1];
typedef uint64_t SteamLeaderboard_t;
typedef uint64_t SteamLeaderboardEntries_t;
typedef uint32_t SNetSocket_t;
typedef uint32_t SNetListenSocket_t;
typedef uint32_t ScreenshotHandle;
typedef uint32_t HTTPRequestHandle;
typedef uint32_t HTTPCookieContainerHandle;
typedef uint64_t ControllerHandle_t;
typedef uint64_t ControllerActionSetHandle_t;
typedef uint64_t ControllerDigitalActionHandle_t;
typedef uint64_t ControllerAnalogActionHandle_t;
typedef uint64_t UGCQueryHandle_t;
typedef uint64_t UGCUpdateHandle_t;
typedef uint32_t HHTMLBrowser;
typedef uint64_t SteamItemInstanceID_t;
typedef int32_t  SteamItemDef_t;
typedef int32_t  SteamInventoryResult_t;
typedef uint64_t SteamInventoryUpdateHandle_t;

typedef uint32_t EAccountType;
typedef uint32_t EVoiceResult;
typedef uint32_t EBeginAuthSessionResult;
typedef uint32_t EUserHasLicenseForAppResult;
typedef uint32_t EUniverse;
typedef uint32_t ENotificationPosition;
typedef uint32_t ESteamAPICallFailure;
typedef uint32_t EGamepadTextInputMode;
typedef uint32_t EGamepadTextInputLineMode;
typedef uint32_t ELeaderboardSortMethod;
typedef uint32_t ELeaderboardDisplayType;
typedef uint32_t ELeaderboardDataRequest;
typedef uint32_t ELeaderboardUploadScoreMethod;
typedef uint32_t EFriendRelationship;
typedef uint32_t EOverlayToStoreFlag;
typedef uint32_t EChatEntryType;
typedef uint32_t EResult;
typedef uint32_t EPersonaState;
typedef uint32_t ERemoteStoragePlatform;
typedef uint32_t EUGCReadAction;
typedef uint32_t ERemoteStoragePublishedFileVisibility;
typedef uint32_t EWorkshopVideoProvider;
typedef uint32_t EWorkshopFileType;
typedef uint32_t EWorkshopFileAction;
typedef uint32_t EWorkshopEnumerationType;
struct CSteamID {
  CSteamID() {}
  uint64_t _;
};
static_assert(!std::is_pod<CSteamID>::value);
typedef uint64_t CGameID;
typedef uint64_t SteamLeaderboard_t;
typedef uint64_t SteamLeaderboardEntries_t;
typedef uint64_t UGCHandle_t;
typedef void *   SteamAPIWarningMessageHook_t;
typedef void *   SteamAPI_CheckCallbackRegistered_t;
typedef uint32_t AppId_t;
typedef uint32_t DepotId_t;
typedef uint64_t SteamAPICall_t;

struct LeaderboardEntry_t {
  CSteamID m_steamIDUser; // user with the entry - use
                          // SteamFriends()->GetFriendPersonaName() &
                          // SteamFriends()->GetFriendAvatar() to get more info
  int32_t m_nGlobalRank;  // [1..N], where N is the number of users with an entry
                          // in the leaderboard
  int32_t     m_nScore;   // score as set in the leaderboard
  int32_t     m_cDetails; // number of int32_t details available for this entry
  UGCHandle_t m_hUGC;     // handle for UGC attached to the entry
};

struct UserStatsReceived_t {
  uint64_t m_nGameID;
  EResult  m_eResult;
  CSteamID m_steamIDUser;
};

struct callback {
  struct obj_t {};
  typedef void (obj_t::*fct_t)(void *);
  void call(void *data);

  void *   vptr;
  uint64_t pad;
  obj_t *  obj;
  fct_t    fct;
};

void callback::call(void *data) {
  (obj->*fct)(data);
}

callback *RequestCurrentStatsCallback = NULL;

struct ISteamClient;
struct ISteamUser;
struct ISteamGameServer;
struct ISteamFriends;
struct ISteamUtils;
struct ISteamMatchmaking;
struct ISteamMatchmakingServers;
struct ISteamUserStats;
struct ISteamGameServerStats;
struct ISteamApps;
struct ISteamNetworking;
struct ISteamRemoteStorage;
struct ISteamScreenshots;
struct ISteamHTTP;
struct ISteamController;
struct ISteamUGC;
struct ISteamAppList;
struct ISteamMusic;
struct ISteamMusicRemote;
struct ISteamHTMLSurface;
struct ISteamInventory;
struct ISteamVideo;
struct ISteamParentalSettings;

static struct CSteamAPIContext {
  ISteamClient *            SteamClient() const;
  ISteamUser *              SteamUser() const;
  ISteamFriends *           SteamFriends() const;
  ISteamUtils *             SteamUtils() const;
  ISteamMatchmaking *       SteamMatchmaking() const;
  ISteamUserStats *         SteamUserStats() const;
  ISteamApps *              SteamApps() const;
  ISteamMatchmakingServers *SteamMatchmakingServers() const;
  ISteamNetworking *        SteamNetworking() const;
  ISteamRemoteStorage *     SteamRemoteStorage() const;
  ISteamScreenshots *       SteamScreenshots() const;
  ISteamHTTP *              SteamHTTP() const;
  ISteamController *        SteamController() const;
  ISteamUGC *               SteamUGC() const;
  ISteamAppList *           SteamAppList() const;
  ISteamMusic *             SteamMusic() const;
  ISteamMusicRemote *       SteamMusicRemote() const;
  ISteamHTMLSurface *       SteamHTMLSurface() const;
  ISteamInventory *         SteamInventory() const;
  ISteamVideo *             SteamVideo() const;
  ISteamParentalSettings *  SteamParentalSettings() const;
  ISteamGameServer *        SteamGameServer() const;
  ISteamGameServerStats *   SteamGameServerStats() const;
} SteamContext;

extern "C" ISteamClient *            SteamClient() { return SteamContext.SteamClient(); }
extern "C" ISteamUser *              SteamUser() { return SteamContext.SteamUser(); }
extern "C" ISteamFriends *           SteamFriends() { return SteamContext.SteamFriends(); }
extern "C" ISteamUtils *             SteamUtils() { return SteamContext.SteamUtils(); }
extern "C" ISteamMatchmaking *       SteamMatchmaking() { return SteamContext.SteamMatchmaking(); }
extern "C" ISteamUserStats *         SteamUserStats() { return SteamContext.SteamUserStats(); }
extern "C" ISteamApps *              SteamApps() { return SteamContext.SteamApps(); }
extern "C" ISteamMatchmakingServers *SteamMatchmakingServers() { return SteamContext.SteamMatchmakingServers(); }
extern "C" ISteamNetworking *        SteamNetworking() { return SteamContext.SteamNetworking(); }
extern "C" ISteamRemoteStorage *     SteamRemoteStorage() { return SteamContext.SteamRemoteStorage(); }
extern "C" ISteamScreenshots *       SteamScreenshots() { return SteamContext.SteamScreenshots(); }
extern "C" ISteamHTTP *              SteamHTTP() { return SteamContext.SteamHTTP(); }
extern "C" ISteamController *        SteamController() { return SteamContext.SteamController(); }
extern "C" ISteamUGC *               SteamUGC() { return SteamContext.SteamUGC(); }
extern "C" ISteamAppList *           SteamAppList() { return SteamContext.SteamAppList(); }
extern "C" ISteamMusic *             SteamMusic() { return SteamContext.SteamMusic(); }
extern "C" ISteamMusicRemote *       SteamMusicRemote() { return SteamContext.SteamMusicRemote(); }
extern "C" ISteamHTMLSurface *       SteamHTMLSurface() { return SteamContext.SteamHTMLSurface(); }
extern "C" ISteamInventory *         SteamInventory() { return SteamContext.SteamInventory(); }
extern "C" ISteamVideo *             SteamVideo() { return SteamContext.SteamVideo(); }
extern "C" ISteamParentalSettings *  SteamParentalSettings() { return SteamContext.SteamParentalSettings(); }
extern "C" ISteamGameServer *        SteamGameServer() { return SteamContext.SteamGameServer(); }
extern "C" ISteamGameServerStats *   SteamGameServerStats() { return SteamContext.SteamGameServerStats(); }

struct ISteamClient {
  virtual HSteamPipe CreateSteamPipe() {
    debug("ISteamClient::CreateSteamPipe()");
    return true;
  }
  virtual bool BReleaseSteamPipe(HSteamPipe hSteamPipe) {
    debug("ISteamClient::BReleaseSteamPipe()");
    return true;
  }
  virtual HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe) {
    debug("ISteamClient::ConnectToGlobalUser()");
    return true;
  }
  virtual HSteamUser CreateLocalUser(HSteamPipe *phSteamPipe, EAccountType eAccountType) {
    debug("ISteamClient::CreateLocalUser()");
    return true;
  }
  virtual void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser) {
    debug("ISteamClient::ReleaseUser()");
  }
  virtual ISteamUser *GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamUser(%s)", pchVersion);
    return SteamContext.SteamUser();
  }
  virtual ISteamGameServer *GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamGameServer(%s)", pchVersion);
    return SteamContext.SteamGameServer();
  }
  virtual void SetLocalIPBinding(uint32_t unIP, uint16_t usPort) {
    debug("ISteamClient::SetLocalIPBinding()");
  }
  virtual ISteamFriends *GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamFriends(%s)", pchVersion);
    return SteamContext.SteamFriends();
  }
  virtual ISteamUtils *GetISteamUtils(HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamUtils(%s)", pchVersion);
    return SteamContext.SteamUtils();
  }
  virtual ISteamMatchmaking *GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamMatchmaking(%s)", pchVersion);
    return SteamContext.SteamMatchmaking();
  }
  virtual ISteamMatchmakingServers *GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamMatchmakingServers(%s)", pchVersion);
    return SteamContext.SteamMatchmakingServers();
  }
  virtual void *GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamGenericInterface(%s)", pchVersion);
    return NULL;
  }
  virtual ISteamUserStats *GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamUserStats(%s)", pchVersion);
    return SteamContext.SteamUserStats();
  }
  virtual ISteamGameServerStats *GetISteamGameServerStats(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamGameServerStats(%s)", pchVersion);
    return SteamContext.SteamGameServerStats();
  }
  virtual ISteamApps *GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamApps(%s)", pchVersion);
    return SteamContext.SteamApps();
  }
  virtual ISteamNetworking *GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamNetworking(%s)", pchVersion);
    return SteamContext.SteamNetworking();
  }
  virtual ISteamRemoteStorage *GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamRemoteStorage(%s)", pchVersion);
    return SteamContext.SteamRemoteStorage();
  }
  virtual ISteamScreenshots *GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamScreenshots(%s)", pchVersion);
    return SteamContext.SteamScreenshots();
  }
  virtual void RunFrame() {
    debug("ISteamClient::RunFrame()");
  }
  virtual uint32_t GetIPCCallCount() {
    debug("ISteamClient::GetIPCCallCount()");
    return true;
  }
  virtual void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) {
    debug("ISteamClient::SetWarningMessageHook()");
  }
  virtual bool BShutdownIfAllPipesClosed() {
    debug("ISteamClient::BShutdownIfAllPipesClosed()");
    return true;
  }
  virtual ISteamHTTP *GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamHTTP(%s)", pchVersion);
    return SteamContext.SteamHTTP();
  }
  virtual void *DEPRECATED_GetISteamUnifiedMessages(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::DEPRECATED_GetISteamUnifiedMessages(%s)", pchVersion);
    return NULL;
  }
  virtual ISteamController *GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamController(%s)", pchVersion);
    return SteamContext.SteamController();
  }
  virtual ISteamUGC *GetISteamUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamUGC(%s)", pchVersion);
    return SteamContext.SteamUGC();
  }
  virtual ISteamAppList *GetISteamAppList(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamAppList(%s)", pchVersion);
    return SteamContext.SteamAppList();
  }
  virtual ISteamMusic *GetISteamMusic(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamMusic(%s)", pchVersion);
    return SteamContext.SteamMusic();
  }
  virtual ISteamMusicRemote *GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamMusicRemote(%s)", pchVersion);
    return SteamContext.SteamMusicRemote();
  }
  virtual ISteamHTMLSurface *GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamHTMLSurface(%s)", pchVersion);
    return SteamContext.SteamHTMLSurface();
  }
  virtual void DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess(void (*)()) {
    debug("ISteamClient::DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess()");
  }
  virtual void DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess(void (*)()) {
    debug("ISteamClient::DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess()");
  }
  virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess(SteamAPI_CheckCallbackRegistered_t func) {
    debug("ISteamClient::Set_SteamAPI_CCheckCallbackRegisteredInProcess()");
  }
  virtual ISteamInventory *GetISteamInventory(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamInventory(%s)", pchVersion);
    return SteamContext.SteamInventory();
  }
  virtual ISteamVideo *GetISteamVideo(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamVideo(%s)", pchVersion);
    return SteamContext.SteamVideo();
  }
  virtual ISteamParentalSettings *GetISteamParentalSettings(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
    debug("ISteamClient::GetISteamParentalSettings(%s)", pchVersion);
    return SteamContext.SteamParentalSettings();
  }
};

struct ISteamUser {
  virtual HSteamUser GetHSteamUser() {
    debug("ISteamUser::GetHSteamUser()");
    return true;
  }
  virtual bool BLoggedOn() {
    debug("ISteamUser::BLoggedOn()");
    return true;
  }
  virtual CSteamID GetSteamID() {
    debug("ISteamUser::GetSteamID()");
    return {};
  }
  virtual int InitiateGameConnection(void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer, bool bSecure) {
    debug("ISteamUser::InitiateGameConnection()");
    return true;
  }
  virtual void TerminateGameConnection(uint32_t unIPServer, uint16_t usPortServer) {
    debug("ISteamUser::TerminateGameConnection()");
  }
  virtual void TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo = "") {
    debug("ISteamUser::TrackAppUsageEvent()");
  }
  virtual bool GetUserDataFolder(char *pchBuffer, int cubBuffer) {
    debug("ISteamUser::GetUserDataFolder()");
    return true;
  }
  virtual void StartVoiceRecording() {
    debug("ISteamUser::StartVoiceRecording()");
  }
  virtual void StopVoiceRecording() {
    debug("ISteamUser::StopVoiceRecording()");
  }
  virtual EVoiceResult GetAvailableVoice(uint32_t *pcbCompressed, uint32_t *pcbUncompressed_Deprecated = 0, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated = 0) {
    debug("ISteamUser::GetAvailableVoice()");
    return true;
  }
  virtual EVoiceResult GetVoice(bool bWantCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten, bool bWantUncompressed_Deprecated = false, void *pUncompressedDestBuffer_Deprecated = 0, uint32_t cbUncompressedDestBufferSize_Deprecated = 0, uint32_t *nUncompressBytesWritten_Deprecated = 0, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated = 0) {
    debug("ISteamUser::GetVoice()");
    return true;
  }
  virtual EVoiceResult DecompressVoice(const void *pCompressed, uint32_t cbCompressed, void *pDestBuffer, uint32_t cbDestBufferSize, uint32_t *nBytesWritten, uint32_t nDesiredSampleRate) {
    debug("ISteamUser::DecompressVoice()");
    return true;
  }
  virtual uint32_t GetVoiceOptimalSampleRate() {
    debug("ISteamUser::GetVoiceOptimalSampleRate()");
    return true;
  }
  virtual HAuthTicket GetAuthSessionTicket(void *pTicket, int cbMaxTicket, uint32_t *pcbTicket) {
    debug("ISteamUser::GetAuthSessionTicket()");
    return true;
  }
  virtual EBeginAuthSessionResult BeginAuthSession(const void *pAuthTicket, int cbAuthTicket, CSteamID steamID) {
    debug("ISteamUser::BeginAuthSession()");
    return true;
  }
  virtual void EndAuthSession(CSteamID steamID) {
    debug("ISteamUser::EndAuthSession()");
  }
  virtual void CancelAuthTicket(HAuthTicket hAuthTicket) {
    debug("ISteamUser::CancelAuthTicket()");
  }
  virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID) {
    debug("ISteamUser::UserHasLicenseForApp()");
    return true;
  }
  virtual bool BIsBehindNAT() {
    debug("ISteamUser::BIsBehindNAT()");
    return true;
  }
  virtual void AdvertiseGame(CSteamID steamIDGameServer, uint32_t unIPServer, uint16_t usPortServer) {
    debug("ISteamUser::AdvertiseGame()");
  }
  virtual SteamAPICall_t RequestEncryptedAppTicket(void *pDataToInclude, int cbDataToInclude) {
    debug("ISteamUser::RequestEncryptedAppTicket()");
    return true;
  }
  virtual bool GetEncryptedAppTicket(void *pTicket, int cbMaxTicket, uint32_t *pcbTicket) {
    debug("ISteamUser::GetEncryptedAppTicket()");
    return true;
  }
  virtual int GetGameBadgeLevel(int nSeries, bool bFoil) {
    debug("ISteamUser::GetGameBadgeLevel()");
    return true;
  }
  virtual int GetPlayerSteamLevel() {
    debug("ISteamUser::GetPlayerSteamLevel()");
    return true;
  }
  virtual SteamAPICall_t RequestStoreAuthURL(const char *pchRedirectURL) {
    debug("ISteamUser::RequestStoreAuthURL()");
    return true;
  }
  virtual bool BIsPhoneVerified() {
    debug("ISteamUser::BIsPhoneVerified()");
    return true;
  }
  virtual bool BIsTwoFactorEnabled() {
    debug("ISteamUser::BIsTwoFactorEnabled()");
    return true;
  }
  virtual bool BIsPhoneIdentifying() {
    debug("ISteamUser::BIsPhoneIdentifying()");
    return true;
  }
  virtual bool BIsPhoneRequiringVerification() {
    debug("ISteamUser::BIsPhoneRequiringVerification()");
    return true;
  }
};

struct ISteamUtils {
  virtual uint32_t GetSecondsSinceAppActive() {
    debug("ISteamUtils::GetSecondsSinceAppActive()");
    return true;
  }
  virtual uint32_t GetSecondsSinceComputerActive() {
    debug("ISteamUtils::GetSecondsSinceComputerActive()");
    return true;
  }
  virtual EUniverse GetConnectedUniverse() {
    debug("ISteamUtils::GetConnectedUniverse()");
    return true;
  }
  virtual uint32_t GetServerRealTime() {
    debug("ISteamUtils::GetServerRealTime()");
    return true;
  }
  virtual const char *GetIPCountry() {
    debug("ISteamUtils::GetIPCountry()");
    return "";
  }
  virtual bool GetImageSize(int iImage, uint32_t *pnWidth, uint32_t *pnHeight) {
    debug("ISteamUtils::GetImageSize()");
    return true;
  }
  virtual bool GetImageRGBA(int iImage, uint8_t *pubDest, int nDestBufferSize) {
    debug("ISteamUtils::GetImageRGBA()");
    return true;
  }
  virtual bool GetCSERIPPort(uint32_t *unIP, uint16_t *usPort) {
    debug("ISteamUtils::GetCSERIPPort()");
    return true;
  }
  virtual uint8_t GetCurrentBatteryPower() {
    debug("ISteamUtils::GetCurrentBatteryPower()");
    return true;
  }
  virtual uint32_t GetAppID() {
    debug("ISteamUtils::GetAppID()");
    return true;
  }
  virtual void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition) {
    debug("ISteamUtils::SetOverlayNotificationPosition()");
  }
  virtual bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool *pbFailed) {
    debug("ISteamUtils::IsAPICallCompleted()");
    return true;
  }
  virtual ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall) {
    debug("ISteamUtils::GetAPICallFailureReason()");
    return true;
  }
  virtual bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed) {
    debug("ISteamUtils::GetAPICallResult()");
    return true;
  }
  virtual void RunFrame() {
    debug("ISteamUtils::RunFrame()");
  }
  virtual uint32_t GetIPCCallCount() {
    debug("ISteamUtils::GetIPCCallCount()");
    return true;
  }
  virtual void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction) {
    debug("ISteamUtils::SetWarningMessageHook()");
  }
  virtual bool IsOverlayEnabled() {
    debug("ISteamUtils::IsOverlayEnabled()");
    return true;
  }
  virtual bool BOverlayNeedsPresent() {
    debug("ISteamUtils::BOverlayNeedsPresent()");
    return true;
  }
  virtual SteamAPICall_t CheckFileSignature(const char *szFileName) {
    debug("ISteamUtils::CheckFileSignature()");
    return true;
  }
  virtual bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText) {
    debug("ISteamUtils::ShowGamepadTextInput()");
    return true;
  }
  virtual uint32_t GetEnteredGamepadTextLength() {
    debug("ISteamUtils::GetEnteredGamepadTextLength()");
    return true;
  }
  virtual bool GetEnteredGamepadTextInput(char *pchText, uint32_t cchText) {
    debug("ISteamUtils::GetEnteredGamepadTextInput()");
    return true;
  }
  virtual const char *GetSteamUILanguage() {
    debug("ISteamUtils::GetSteamUILanguage()");
    return "";
  }
  virtual bool IsSteamRunningInVR() {
    debug("ISteamUtils::IsSteamRunningInVR()");
    return true;
  }
  virtual void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset) {
    debug("ISteamUtils::SetOverlayNotificationInset()");
  }
  virtual bool IsSteamInBigPictureMode() {
    debug("ISteamUtils::IsSteamInBigPictureMode()");
    return true;
  }
  virtual void StartVRDashboard() {
    debug("ISteamUtils::StartVRDashboard()");
  }
  virtual bool IsVRHeadsetStreamingEnabled() {
    debug("ISteamUtils::IsVRHeadsetStreamingEnabled()");
    return true;
  }
  virtual void SetVRHeadsetStreamingEnabled(bool bEnabled) {
    debug("ISteamUtils::SetVRHeadsetStreamingEnabled()");
  }
};

struct ISteamUserStats {
  virtual bool RequestCurrentStats() {
    debug("ISteamUserStats::RequestCurrentStats()");
    UserStatsReceived_t stats;
    stats.m_nGameID     = 1;
    stats.m_eResult     = 1;
    stats.m_steamIDUser = {};
    if (RequestCurrentStatsCallback)
      RequestCurrentStatsCallback->call(&stats);
    return true;
  }
  virtual bool GetStat(const char *pchName, int32_t *pData) {
    debug("ISteamUserStats::GetStat(%s)", pchName);
    *pData = 10;
    return true;
  }
  virtual bool GetStat(const char *pchName, float *pData) {
    debug("ISteamUserStats::GetStatf(%s)", pchName);
    *pData = 10.f;
    return true;
  }
  virtual bool SetStat(const char *pchName, int32_t nData) {
    debug("ISteamUserStats::SetStat(%s, %d)", pchName, nData);
    return true;
  }
  virtual bool SetStat(const char *pchName, float fData) {
    debug("ISteamUserStats::SetStatf(%s, %f)", pchName, fData);
    return true;
  }
  virtual bool UpdateAvgRateStat(const char *pchName, float flCountThisSession, double dSessionLength) {
    debug("ISteamUserStats::UpdateAvgRateStat(%s)", pchName);
    return true;
  }
  virtual bool GetAchievement(const char *pchName, bool *pbAchieved) {
    debug("ISteamUserStats::GetAchievement(%s)", pchName);
    *pbAchieved = true;
    return true;
  }
  virtual bool SetAchievement(const char *pchName) {
    debug("ISteamUserStats::SetAchievement(%s)", pchName);
    return true;
  }
  virtual bool ClearAchievement(const char *pchName) {
    debug("ISteamUserStats::ClearAchievement(%s)", pchName);
    return true;
  }
  virtual bool GetAchievementAndUnlockTime(const char *pchName, bool *pbAchieved, uint32_t *punUnlockTime) {
    debug("ISteamUserStats::GetAchievementAndUnlockTime(%s)", pchName);
    *pbAchieved = true;
    return true;
  }
  virtual bool StoreStats() {
    debug("ISteamUserStats::StoreStats()");
    return true;
  }
  virtual int GetAchievementIcon(const char *pchName) {
    debug("ISteamUserStats::GetAchievementIcon(%s)", pchName);
    return true;
  }
  virtual const char *GetAchievementDisplayAttribute(const char *pchName, const char *pchKey) {
    debug("ISteamUserStats::GetAchievementDisplayAttribute(%s)", pchName);
    return "";
  }
  virtual bool IndicateAchievementProgress(const char *pchName, uint32_t nCurProgress, uint32_t nMaxProgress) {
    debug("ISteamUserStats::IndicateAchievementProgress(%s)", pchName);
    return true;
  }
  virtual uint32_t GetNumAchievements() {
    debug("ISteamUserStats::GetNumAchievements()");
    return true;
  }
  virtual const char *GetAchievementName(uint32_t iAchievement) {
    debug("ISteamUserStats::GetAchievementName()");
    return "";
  }
  virtual SteamAPICall_t RequestUserStats(CSteamID steamIDUser) {
    debug("ISteamUserStats::RequestUserStats()");
    return true;
  }
  virtual bool GetUserStat(CSteamID steamIDUser, const char *pchName, int32_t *pData) {
    debug("ISteamUserStats::GetUserStat(%s)", pchName);
    return true;
  }
  virtual bool GetUserStat(CSteamID steamIDUser, const char *pchName, float *pData) {
    debug("ISteamUserStats::GetUserStat(%s)", pchName);
    return true;
  }
  virtual bool GetUserAchievement(CSteamID steamIDUser, const char *pchName, bool *pbAchieved) {
    debug("ISteamUserStats::GetUserAchievement(%s)", pchName);
    return true;
  }
  virtual bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char *pchName, bool *pbAchieved, uint32_t *punUnlockTime) {
    debug("ISteamUserStats::GetUserAchievementAndUnlockTime(%s)", pchName);
    return true;
  }
  virtual bool ResetAllStats(bool bAchievementsToo) {
    debug("ISteamUserStats::ResetAllStats()");
    return true;
  }
  virtual SteamAPICall_t FindOrCreateLeaderboard(const char *pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType) {
    debug("ISteamUserStats::FindOrCreateLeaderboard()");
    return true;
  }
  virtual SteamAPICall_t FindLeaderboard(const char *pchLeaderboardName) {
    debug("ISteamUserStats::FindLeaderboard()");
    return true;
  }
  virtual const char *GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard) {
    debug("ISteamUserStats::GetLeaderboardName()");
    return "";
  }
  virtual int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard) {
    debug("ISteamUserStats::GetLeaderboardEntryCount()");
    return true;
  }
  virtual ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard) {
    debug("ISteamUserStats::GetLeaderboardSortMethod()");
    return true;
  }
  virtual ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard) {
    debug("ISteamUserStats::GetLeaderboardDisplayType()");
    return true;
  }
  virtual SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd) {
    debug("ISteamUserStats::DownloadLeaderboardEntries()");
    return true;
  }
  virtual SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID *prgUsers, int cUsers) {
    debug("ISteamUserStats::DownloadLeaderboardEntriesForUsers()");
    return true;
  }
  virtual bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t *pLeaderboardEntry, int32_t *pDetails, int cDetailsMax) {
    debug("ISteamUserStats::GetDownloadedLeaderboardEntry()");
    return true;
  }
  virtual SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32_t nScore, const int32_t *pScoreDetails, int cScoreDetailsCount) {
    debug("ISteamUserStats::UploadLeaderboardScore()");
    return true;
  }
  virtual SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC) {
    debug("ISteamUserStats::AttachLeaderboardUGC()");
    return true;
  }
  virtual SteamAPICall_t GetNumberOfCurrentPlayers() {
    debug("ISteamUserStats::GetNumberOfCurrentPlayers()");
    return true;
  }
  virtual SteamAPICall_t RequestGlobalAchievementPercentages() {
    debug("ISteamUserStats::RequestGlobalAchievementPercentages()");
    return true;
  }
  virtual int GetMostAchievedAchievementInfo(char *pchName, uint32_t unNameBufLen, float *pflPercent, bool *pbAchieved) {
    debug("ISteamUserStats::GetMostAchievedAchievementInfo()");
    return true;
  }
  virtual int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char *pchName, uint32_t unNameBufLen, float *pflPercent, bool *pbAchieved) {
    debug("ISteamUserStats::GetNextMostAchievedAchievementInfo()");
    return true;
  }
  virtual bool GetAchievementAchievedPercent(const char *pchName, float *pflPercent) {
    debug("ISteamUserStats::GetAchievementAchievedPercent(%s)", pchName);
    return true;
  }
  virtual SteamAPICall_t RequestGlobalStats(int nHistoryDays) {
    debug("ISteamUserStats::RequestGlobalStats()");
    return true;
  }
  virtual bool GetGlobalStat(const char *pchStatName, int64_t *pData) {
    debug("ISteamUserStats::GetGlobalStat()");
    return true;
  }
  virtual bool GetGlobalStat(const char *pchStatName, double *pData) {
    debug("ISteamUserStats::GetGlobalStat()");
    return true;
  }
  virtual int32_t GetGlobalStatHistory(const char *pchStatName, int64_t *pData, uint32_t cubData) {
    debug("ISteamUserStats::GetGlobalStatHistory()");
    return true;
  }
  virtual int32_t GetGlobalStatHistory(const char *pchStatName, double *pData, uint32_t cubData) {
    debug("ISteamUserStats::GetGlobalStatHistory()");
    return true;
  }
};

struct ISteamApps {
  virtual bool BIsSubscribed() {
    debug("ISteamApps::BIsSubscribed()");
    return true;
  }
  virtual bool BIsLowViolence() {
    debug("ISteamApps::BIsLowViolence()");
    return true;
  }
  virtual bool BIsCybercafe() {
    debug("ISteamApps::BIsCybercafe()");
    return true;
  }
  virtual bool BIsVACBanned() {
    debug("ISteamApps::BIsVACBanned()");
    return true;
  }
  virtual const char *GetCurrentGameLanguage() {
    debug("ISteamApps::GetCurrentGameLanguage()");
    return "";
  }
  virtual const char *GetAvailableGameLanguages() {
    debug("ISteamApps::GetAvailableGameLanguages()");
    return "";
  }
  virtual bool BIsSubscribedApp(AppId_t appID) {
    debug("ISteamApps::BIsSubscribedApp()");
    return true;
  }
  virtual bool BIsDlcInstalled(AppId_t appID) {
    debug("ISteamApps::BIsDlcInstalled()");
    return true;
  }
  virtual uint32_t GetEarliestPurchaseUnixTime(AppId_t nAppID) {
    debug("ISteamApps::GetEarliestPurchaseUnixTime()");
    return true;
  }
  virtual bool BIsSubscribedFromFreeWeekend() {
    debug("ISteamApps::BIsSubscribedFromFreeWeekend()");
    return true;
  }
  virtual int GetDLCCount() {
    debug("ISteamApps::GetDLCCount()");
    return true;
  }
  virtual bool BGetDLCDataByIndex(int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize) {
    debug("ISteamApps::BGetDLCDataByIndex()");
    return true;
  }
  virtual void InstallDLC(AppId_t nAppID) {
    debug("ISteamApps::InstallDLC()");
  }
  virtual void UninstallDLC(AppId_t nAppID) {
    debug("ISteamApps::UninstallDLC()");
  }
  virtual void RequestAppProofOfPurchaseKey(AppId_t nAppID) {
    debug("ISteamApps::RequestAppProofOfPurchaseKey()");
  }
  virtual bool GetCurrentBetaName(char *pchName, int cchNameBufferSize) {
    debug("ISteamApps::GetCurrentBetaName()");
    return true;
  }
  virtual bool MarkContentCorrupt(bool bMissingFilesOnly) {
    debug("ISteamApps::MarkContentCorrupt()");
    return true;
  }
  virtual uint32_t GetInstalledDepots(AppId_t appID, DepotId_t *pvecDepots, uint32_t cMaxDepots) {
    debug("ISteamApps::GetInstalledDepots()");
    return true;
  }
  virtual uint32_t GetAppInstallDir(AppId_t appID, char *pchFolder, uint32_t cchFolderBufferSize) {
    debug("ISteamApps::GetAppInstallDir()");
    return true;
  }
  virtual bool BIsAppInstalled(AppId_t appID) {
    debug("ISteamApps::BIsAppInstalled()");
    return true;
  }
  virtual uint64_t GetAppOwner() {
    debug("ISteamApps::GetAppOwner()");
    return true;
  }
  virtual const char *GetLaunchQueryParam(const char *pchKey) {
    debug("ISteamApps::GetLaunchQueryParam()");
    return "";
  }
  virtual bool GetDlcDownloadProgress(AppId_t nAppID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal) {
    debug("ISteamApps::GetDlcDownloadProgress()");
    return true;
  }
  virtual int GetAppBuildId() {
    debug("ISteamApps::GetAppBuildId()");
    return true;
  }
  virtual void RequestAllProofOfPurchaseKeys() {
    debug("ISteamApps::RequestAllProofOfPurchaseKeys()");
  }
  virtual SteamAPICall_t GetFileDetails(const char *pszFileName) {
    debug("ISteamApps::GetFileDetails()");
    return true;
  }
};

struct ISteamFriends {
  virtual const char *GetPersonaName() {
    debug("ISteamFriends::GetPersonaName()");
    return "";
  }
  virtual SteamAPICall_t SetPersonaName(const char *pchPersonaName) {
    debug("ISteamFriends::SetPersonaName()");
    return true;
  }
  virtual EPersonaState GetPersonaState() {
    debug("ISteamFriends::GetPersonaState()");
    return true;
  }
  virtual int GetFriendCount(int iFriendFlags) {
    debug("ISteamFriends::GetFriendCount()");
    return true;
  }
  virtual uint64_t GetFriendByIndex(int iFriend, int iFriendFlags) {
    debug("ISteamFriends::GetFriendByIndex()");
    return true;
  }
  virtual EFriendRelationship GetFriendRelationship(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendRelationship()");
    return true;
  }
  virtual EPersonaState GetFriendPersonaState(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendPersonaState()");
    return true;
  }
  virtual const char *GetFriendPersonaName(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendPersonaName()");
    return "";
  }
  virtual bool GetFriendGamePlayed(class CSteamID steamIDFriend, struct FriendGameInfo_t *pFriendGameInfo) {
    debug("ISteamFriends::GetFriendGamePlayed()");
    return true;
  }
  virtual const char *GetFriendPersonaNameHistory(class CSteamID steamIDFriend, int iPersonaName) {
    debug("ISteamFriends::GetFriendPersonaNameHistory()");
    return "";
  }
  virtual int GetFriendSteamLevel(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendSteamLevel()");
    return true;
  }
  virtual const char *GetPlayerNickname(class CSteamID steamIDPlayer) {
    debug("ISteamFriends::GetPlayerNickname()");
    return "";
  }
  virtual int GetFriendsGroupCount() {
    debug("ISteamFriends::GetFriendsGroupCount()");
    return true;
  }
  virtual FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG) {
    debug("ISteamFriends::GetFriendsGroupIDByIndex()");
    return true;
  }
  virtual const char *GetFriendsGroupName(FriendsGroupID_t friendsGroupID) {
    debug("ISteamFriends::GetFriendsGroupName()");
    return "";
  }
  virtual int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID) {
    debug("ISteamFriends::GetFriendsGroupMembersCount()");
    return true;
  }
  virtual void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, class CSteamID *pOutSteamIDMembers, int nMembersCount) {
    debug("ISteamFriends::GetFriendsGroupMembersList()");
  }
  virtual bool HasFriend(class CSteamID steamIDFriend, int iFriendFlags) {
    debug("ISteamFriends::HasFriend()");
    return true;
  }
  virtual int GetClanCount() {
    debug("ISteamFriends::GetClanCount()");
    return true;
  }
  virtual uint64_t GetClanByIndex(int iClan) {
    debug("ISteamFriends::GetClanByIndex()");
    return true;
  }
  virtual const char *GetClanName(class CSteamID steamIDClan) {
    debug("ISteamFriends::GetClanName()");
    return "";
  }
  virtual const char *GetClanTag(class CSteamID steamIDClan) {
    debug("ISteamFriends::GetClanTag()");
    return "";
  }
  virtual bool GetClanActivityCounts(class CSteamID steamIDClan, int *pnOnline, int *pnInGame, int *pnChatting) {
    debug("ISteamFriends::GetClanActivityCounts()");
    return true;
  }
  virtual SteamAPICall_t DownloadClanActivityCounts(class CSteamID *psteamIDClans, int cClansToRequest) {
    debug("ISteamFriends::DownloadClanActivityCounts()");
    return true;
  }
  virtual int GetFriendCountFromSource(class CSteamID steamIDSource) {
    debug("ISteamFriends::GetFriendCountFromSource()");
    return true;
  }
  virtual uint64_t GetFriendFromSourceByIndex(class CSteamID steamIDSource, int iFriend) {
    debug("ISteamFriends::GetFriendFromSourceByIndex()");
    return true;
  }
  virtual bool IsUserInSource(class CSteamID steamIDUser, class CSteamID steamIDSource) {
    debug("ISteamFriends::IsUserInSource()");
    return true;
  }
  virtual void SetInGameVoiceSpeaking(class CSteamID steamIDUser, bool bSpeaking) {
    debug("ISteamFriends::SetInGameVoiceSpeaking()");
  }
  virtual void ActivateGameOverlay(const char *pchDialog) {
    debug("ISteamFriends::ActivateGameOverlay()");
  }
  virtual void ActivateGameOverlayToUser(const char *pchDialog, class CSteamID steamID) {
    debug("ISteamFriends::ActivateGameOverlayToUser()");
  }
  virtual void ActivateGameOverlayToWebPage(const char *pchURL) {
    debug("ISteamFriends::ActivateGameOverlayToWebPage()");
  }
  virtual void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag) {
    debug("ISteamFriends::ActivateGameOverlayToStore()");
  }
  virtual void SetPlayedWith(class CSteamID steamIDUserPlayedWith) {
    debug("ISteamFriends::SetPlayedWith()");
  }
  virtual void ActivateGameOverlayInviteDialog(class CSteamID steamIDLobby) {
    debug("ISteamFriends::ActivateGameOverlayInviteDialog()");
  }
  virtual int GetSmallFriendAvatar(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetSmallFriendAvatar()");
    return true;
  }
  virtual int GetMediumFriendAvatar(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetMediumFriendAvatar()");
    return true;
  }
  virtual int GetLargeFriendAvatar(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetLargeFriendAvatar()");
    return true;
  }
  virtual bool RequestUserInformation(class CSteamID steamIDUser, bool bRequireNameOnly) {
    debug("ISteamFriends::RequestUserInformation()");
    return true;
  }
  virtual SteamAPICall_t RequestClanOfficerList(class CSteamID steamIDClan) {
    debug("ISteamFriends::RequestClanOfficerList()");
    return true;
  }
  virtual uint64_t GetClanOwner(class CSteamID steamIDClan) {
    debug("ISteamFriends::GetClanOwner()");
    return true;
  }
  virtual int GetClanOfficerCount(class CSteamID steamIDClan) {
    debug("ISteamFriends::GetClanOfficerCount()");
    return true;
  }
  virtual uint64_t GetClanOfficerByIndex(class CSteamID steamIDClan, int iOfficer) {
    debug("ISteamFriends::GetClanOfficerByIndex()");
    return true;
  }
  virtual uint32_t GetUserRestrictions() {
    debug("ISteamFriends::GetUserRestrictions()");
    return true;
  }
  virtual bool SetRichPresence(const char *pchKey, const char *pchValue) {
    debug("ISteamFriends::SetRichPresence()");
    return true;
  }
  virtual void ClearRichPresence() {
    debug("ISteamFriends::ClearRichPresence()");
  }
  virtual const char *GetFriendRichPresence(class CSteamID steamIDFriend, const char *pchKey) {
    debug("ISteamFriends::GetFriendRichPresence()");
    return "";
  }
  virtual int GetFriendRichPresenceKeyCount(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendRichPresenceKeyCount()");
    return true;
  }
  virtual const char *GetFriendRichPresenceKeyByIndex(class CSteamID steamIDFriend, int iKey) {
    debug("ISteamFriends::GetFriendRichPresenceKeyByIndex()");
    return "";
  }
  virtual void RequestFriendRichPresence(class CSteamID steamIDFriend) {
    debug("ISteamFriends::RequestFriendRichPresence()");
  }
  virtual bool InviteUserToGame(class CSteamID steamIDFriend, const char *pchConnectString) {
    debug("ISteamFriends::InviteUserToGame()");
    return true;
  }
  virtual int GetCoplayFriendCount() {
    debug("ISteamFriends::GetCoplayFriendCount()");
    return true;
  }
  virtual uint64_t GetCoplayFriend(int iCoplayFriend) {
    debug("ISteamFriends::GetCoplayFriend()");
    return true;
  }
  virtual int GetFriendCoplayTime(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendCoplayTime()");
    return true;
  }
  virtual AppId_t GetFriendCoplayGame(class CSteamID steamIDFriend) {
    debug("ISteamFriends::GetFriendCoplayGame()");
    return true;
  }
  virtual SteamAPICall_t JoinClanChatRoom(class CSteamID steamIDClan) {
    debug("ISteamFriends::JoinClanChatRoom()");
    return true;
  }
  virtual bool LeaveClanChatRoom(class CSteamID steamIDClan) {
    debug("ISteamFriends::LeaveClanChatRoom()");
    return true;
  }
  virtual int GetClanChatMemberCount(class CSteamID steamIDClan) {
    debug("ISteamFriends::GetClanChatMemberCount()");
    return true;
  }
  virtual uint64_t GetChatMemberByIndex(class CSteamID steamIDClan, int iUser) {
    debug("ISteamFriends::GetChatMemberByIndex()");
    return true;
  }
  virtual bool SendClanChatMessage(class CSteamID steamIDClanChat, const char *pchText) {
    debug("ISteamFriends::SendClanChatMessage()");
    return true;
  }
  virtual int GetClanChatMessage(class CSteamID steamIDClanChat, int iMessage, void *prgchText, int cchTextMax, EChatEntryType *peChatEntryType, class CSteamID *psteamidChatter) {
    debug("ISteamFriends::GetClanChatMessage()");
    return true;
  }
  virtual bool IsClanChatAdmin(class CSteamID steamIDClanChat, class CSteamID steamIDUser) {
    debug("ISteamFriends::IsClanChatAdmin()");
    return true;
  }
  virtual bool IsClanChatWindowOpenInSteam(class CSteamID steamIDClanChat) {
    debug("ISteamFriends::IsClanChatWindowOpenInSteam()");
    return true;
  }
  virtual bool OpenClanChatWindowInSteam(class CSteamID steamIDClanChat) {
    debug("ISteamFriends::OpenClanChatWindowInSteam()");
    return true;
  }
  virtual bool CloseClanChatWindowInSteam(class CSteamID steamIDClanChat) {
    debug("ISteamFriends::CloseClanChatWindowInSteam()");
    return true;
  }
  virtual bool SetListenForFriendsMessages(bool bInterceptEnabled) {
    debug("ISteamFriends::SetListenForFriendsMessages()");
    return true;
  }
  virtual bool ReplyToFriendMessage(class CSteamID steamIDFriend, const char *pchMsgToSend) {
    debug("ISteamFriends::ReplyToFriendMessage()");
    return true;
  }
  virtual int GetFriendMessage(class CSteamID steamIDFriend, int iMessageID, void *pvData, int cubData, EChatEntryType *peChatEntryType) {
    debug("ISteamFriends::GetFriendMessage()");
    return true;
  }
  virtual SteamAPICall_t GetFollowerCount(class CSteamID steamID) {
    debug("ISteamFriends::GetFollowerCount()");
    return true;
  }
  virtual SteamAPICall_t IsFollowing(class CSteamID steamID) {
    debug("ISteamFriends::IsFollowing()");
    return true;
  }
  virtual SteamAPICall_t EnumerateFollowingList(uint32_t unStartIndex) {
    debug("ISteamFriends::EnumerateFollowingList()");
    return true;
  }
  virtual bool IsClanPublic(class CSteamID steamIDClan) {
    debug("ISteamFriends::IsClanPublic()");
    return true;
  }
  virtual bool IsClanOfficialGameGroup(class CSteamID steamIDClan) {
    debug("ISteamFriends::IsClanOfficialGameGroup()");
    return true;
  }
};

struct ISteamRemoteStorage {
  virtual bool FileWrite(const char *pchFile, const void *pvData, int32_t cubData) {
    debug("ISteamRemoteStorage::FileWrite()");
    return true;
  }
  virtual int32_t FileRead(const char *pchFile, void *pvData, int32_t cubDataToRead) {
    debug("ISteamRemoteStorage::FileRead()");
    return true;
  }
  virtual SteamAPICall_t FileWriteAsync(const char *pchFile, const void *pvData, uint32_t cubData) {
    debug("ISteamRemoteStorage::FileWriteAsync()");
    return true;
  }
  virtual SteamAPICall_t FileReadAsync(const char *pchFile, uint32_t nOffset, uint32_t cubToRead) {
    debug("ISteamRemoteStorage::FileReadAsync()");
    return true;
  }
  virtual bool FileReadAsyncComplete(SteamAPICall_t hReadCall, void *pvBuffer, uint32_t cubToRead) {
    debug("ISteamRemoteStorage::FileReadAsyncComplete()");
    return true;
  }
  virtual bool FileForget(const char *pchFile) {
    debug("ISteamRemoteStorage::FileForget()");
    return true;
  }
  virtual bool FileDelete(const char *pchFile) {
    debug("ISteamRemoteStorage::FileDelete()");
    return true;
  }
  virtual SteamAPICall_t FileShare(const char *pchFile) {
    debug("ISteamRemoteStorage::FileShare()");
    return true;
  }
  virtual bool SetSyncPlatforms(const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform) {
    debug("ISteamRemoteStorage::SetSyncPlatforms()");
    return true;
  }
  virtual UGCFileWriteStreamHandle_t FileWriteStreamOpen(const char *pchFile) {
    debug("ISteamRemoteStorage::FileWriteStreamOpen()");
    return true;
  }
  virtual bool FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32_t cubData) {
    debug("ISteamRemoteStorage::FileWriteStreamWriteChunk()");
    return true;
  }
  virtual bool FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle) {
    debug("ISteamRemoteStorage::FileWriteStreamClose()");
    return true;
  }
  virtual bool FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle) {
    debug("ISteamRemoteStorage::FileWriteStreamCancel()");
    return true;
  }
  virtual bool FileExists(const char *pchFile) {
    debug("ISteamRemoteStorage::FileExists()");
    return true;
  }
  virtual bool FilePersisted(const char *pchFile) {
    debug("ISteamRemoteStorage::FilePersisted()");
    return true;
  }
  virtual int32_t GetFileSize(const char *pchFile) {
    debug("ISteamRemoteStorage::GetFileSize()");
    return true;
  }
  virtual int64_t GetFileTimestamp(const char *pchFile) {
    debug("ISteamRemoteStorage::GetFileTimestamp()");
    return true;
  }
  virtual ERemoteStoragePlatform GetSyncPlatforms(const char *pchFile) {
    debug("ISteamRemoteStorage::GetSyncPlatforms()");
    return true;
  }
  virtual int32_t GetFileCount() {
    debug("ISteamRemoteStorage::GetFileCount()");
    return true;
  }
  virtual const char *GetFileNameAndSize(int iFile, int32_t *pnFileSizeInBytes) {
    debug("ISteamRemoteStorage::GetFileNameAndSize()");
    return "";
  }
  virtual bool GetQuota(uint64_t *pnTotalBytes, uint64_t *puAvailableBytes) {
    debug("ISteamRemoteStorage::GetQuota()");
    return true;
  }
  virtual bool IsCloudEnabledForAccount() {
    debug("ISteamRemoteStorage::IsCloudEnabledForAccount()");
    return true;
  }
  virtual bool IsCloudEnabledForApp() {
    debug("ISteamRemoteStorage::IsCloudEnabledForApp()");
    return true;
  }
  virtual void SetCloudEnabledForApp(bool bEnabled) {
    debug("ISteamRemoteStorage::SetCloudEnabledForApp()");
  }
  virtual SteamAPICall_t UGCDownload(UGCHandle_t hContent, uint32_t unPriority) {
    debug("ISteamRemoteStorage::UGCDownload()");
    return true;
  }
  virtual bool GetUGCDownloadProgress(UGCHandle_t hContent, int32_t *pnBytesDownloaded, int32_t *pnBytesExpected) {
    debug("ISteamRemoteStorage::GetUGCDownloadProgress()");
    return true;
  }
  virtual bool GetUGCDetails(UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32_t *pnFileSizeInBytes, class CSteamID *pSteamIDOwner) {
    debug("ISteamRemoteStorage::GetUGCDetails()");
    return true;
  }
  virtual int32_t UGCRead(UGCHandle_t hContent, void *pvData, int32_t cubDataToRead, uint32_t cOffset, EUGCReadAction eAction) {
    debug("ISteamRemoteStorage::UGCRead()");
    return true;
  }
  virtual int32_t GetCachedUGCCount() {
    debug("ISteamRemoteStorage::GetCachedUGCCount()");
    return true;
  }
  virtual UGCHandle_t GetCachedUGCHandle(int32_t iCachedContent) {
    debug("ISteamRemoteStorage::GetCachedUGCHandle()");
    return true;
  }
  virtual SteamAPICall_t PublishWorkshopFile(const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, struct SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType) {
    debug("ISteamRemoteStorage::PublishWorkshopFile()");
    return true;
  }
  virtual PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId) {
    debug("ISteamRemoteStorage::CreatePublishedFileUpdateRequest()");
    return true;
  }
  virtual bool UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, const char *pchFile) {
    debug("ISteamRemoteStorage::UpdatePublishedFileFile()");
    return true;
  }
  virtual bool UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile) {
    debug("ISteamRemoteStorage::UpdatePublishedFilePreviewFile()");
    return true;
  }
  virtual bool UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, const char *pchTitle) {
    debug("ISteamRemoteStorage::UpdatePublishedFileTitle()");
    return true;
  }
  virtual bool UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, const char *pchDescription) {
    debug("ISteamRemoteStorage::UpdatePublishedFileDescription()");
    return true;
  }
  virtual bool UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility) {
    debug("ISteamRemoteStorage::UpdatePublishedFileVisibility()");
    return true;
  }
  virtual bool UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, struct SteamParamStringArray_t *pTags) {
    debug("ISteamRemoteStorage::UpdatePublishedFileTags()");
    return true;
  }
  virtual SteamAPICall_t CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle) {
    debug("ISteamRemoteStorage::CommitPublishedFileUpdate()");
    return true;
  }
  virtual SteamAPICall_t GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32_t unMaxSecondsOld) {
    debug("ISteamRemoteStorage::GetPublishedFileDetails()");
    return true;
  }
  virtual SteamAPICall_t DeletePublishedFile(PublishedFileId_t unPublishedFileId) {
    debug("ISteamRemoteStorage::DeletePublishedFile()");
    return true;
  }
  virtual SteamAPICall_t EnumerateUserPublishedFiles(uint32_t unStartIndex) {
    debug("ISteamRemoteStorage::EnumerateUserPublishedFiles()");
    return true;
  }
  virtual SteamAPICall_t SubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    debug("ISteamRemoteStorage::SubscribePublishedFile()");
    return true;
  }
  virtual SteamAPICall_t EnumerateUserSubscribedFiles(uint32_t unStartIndex) {
    debug("ISteamRemoteStorage::EnumerateUserSubscribedFiles()");
    return true;
  }
  virtual SteamAPICall_t UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId) {
    debug("ISteamRemoteStorage::UnsubscribePublishedFile()");
    return true;
  }
  virtual bool UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription) {
    debug("ISteamRemoteStorage::UpdatePublishedFileSetChangeDescription()");
    return true;
  }
  virtual SteamAPICall_t GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    debug("ISteamRemoteStorage::GetPublishedItemVoteDetails()");
    return true;
  }
  virtual SteamAPICall_t UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp) {
    debug("ISteamRemoteStorage::UpdateUserPublishedItemVote()");
    return true;
  }
  virtual SteamAPICall_t GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId) {
    debug("ISteamRemoteStorage::GetUserPublishedItemVoteDetails()");
    return true;
  }
  virtual SteamAPICall_t EnumerateUserSharedWorkshopFiles(class CSteamID steamId, uint32_t unStartIndex, struct SteamParamStringArray_t *pRequiredTags, struct SteamParamStringArray_t *pExcludedTags) {
    debug("ISteamRemoteStorage::EnumerateUserSharedWorkshopFiles()");
    return true;
  }
  virtual SteamAPICall_t PublishVideo(EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, struct SteamParamStringArray_t *pTags) {
    debug("ISteamRemoteStorage::PublishVideo()");
    return true;
  }
  virtual SteamAPICall_t SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction) {
    debug("ISteamRemoteStorage::SetUserPublishedFileAction()");
    return true;
  }
  virtual SteamAPICall_t EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32_t unStartIndex) {
    debug("ISteamRemoteStorage::EnumeratePublishedFilesByUserAction()");
    return true;
  }
  virtual SteamAPICall_t EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eEnumerationType, uint32_t unStartIndex, uint32_t unCount, uint32_t unDays, struct SteamParamStringArray_t *pTags, struct SteamParamStringArray_t *pUserTags) {
    debug("ISteamRemoteStorage::EnumeratePublishedWorkshopFiles()");
    return true;
  }
  virtual SteamAPICall_t UGCDownloadToLocation(UGCHandle_t hContent, const char *pchLocation, uint32_t unPriority) {
    debug("ISteamRemoteStorage::UGCDownloadToLocation()");
    return true;
  }
};

struct ISteamAppList {};
struct ISteamController {};
struct ISteamGameServer {};
struct ISteamGameServerStats {};
struct ISteamHTMLSurface {};
struct ISteamHTTP {};
struct ISteamInventory {};
struct ISteamMatchmaking {};
struct ISteamMatchmakingServers {};
struct ISteamMusic {};
struct ISteamMusicRemote {};
struct ISteamNetworking {};
struct ISteamParentalSettings {};
struct ISteamScreenshots {};
struct ISteamUGC {};
struct ISteamVideo {};

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

extern "C" void SteamInternal_ContextInit() {}

extern "C" bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID) {
  debug("\nSteamAPI_RestartAppIfNecessary");
  return false;
}

extern "C" bool SteamAPI_Init() {
  debug("SteamAPI_Init");
  return true;
}

extern "C" bool SteamAPI_IsSteamRunning() {
  debug("SteamAPI_IsSteamRunning");
  return false;
}

extern "C" void SteamAPI_Shutdown() { debug("SteamAPI_Shutdown"); }

extern "C" void SteamAPI_RegisterCallback(callback *pCallback, int iCallback) {
  debug("SteamAPI_RegisterCallback(%p, %d)", pCallback, iCallback);
  if (iCallback == 1101)
    RequestCurrentStatsCallback = pCallback;
}

extern "C" void SteamAPI_UnregisterCallback(callback *pCallback) {
  debug("SteamAPI_UnregisterCallback(%p)", pCallback);
  if (RequestCurrentStatsCallback == pCallback)
    RequestCurrentStatsCallback = NULL;
}

extern "C" void SteamAPI_RunCallbacks(uint32_t hSteamPipe,
                                      bool     bGameServerCallbacks) {
}

extern "C" uint32_t SteamAPI_GetHSteamPipe() { return 0; }
extern "C" uint32_t SteamAPI_GetHSteamUser() { return 0; }

#ifndef _WIN32
static void __init() __attribute__((constructor));
static void __init() { stdlog = dup(2); }
#endif
