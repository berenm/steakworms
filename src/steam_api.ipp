struct ValvePackingSentinel_t;

struct CallbackMsg_t;

struct SteamServerConnectFailure_t;

struct SteamServersDisconnected_t;

struct ClientGameServerDeny_t;

struct ValidateAuthTicketResponse_t;

struct MicroTxnAuthorizationResponse_t;

struct EncryptedAppTicketResponse_t;

struct GetAuthSessionTicketResponse_t;

struct GameWebCallback_t;

struct StoreAuthURLResponse_t;

struct FriendGameInfo_t;

struct FriendSessionStateInfo_t;

struct PersonaStateChange_t;

struct GameOverlayActivated_t;

struct GameServerChangeRequested_t;

struct GameLobbyJoinRequested_t;

struct AvatarImageLoaded_t;

struct ClanOfficerListResponse_t;

struct FriendRichPresenceUpdate_t;

struct GameRichPresenceJoinRequested_t;

struct GameConnectedClanChatMsg_t;

struct GameConnectedChatJoin_t;

struct GameConnectedChatLeave_t;

struct DownloadClanActivityCountsResult_t;

struct JoinClanChatRoomCompletionResult_t;

struct GameConnectedFriendChatMsg_t;

struct FriendsGetFollowerCount_t;

struct FriendsIsFollowing_t;

struct FriendsEnumerateFollowingList_t;

struct SetPersonaNameResponse_t;

struct LowBatteryPower_t;

struct SteamAPICallCompleted_t;

struct CheckFileSignature_t;

struct GamepadTextInputDismissed_t;

struct MatchMakingKeyValuePair_t;

struct servernetadr_t;

struct gameserveritem_t;

struct FavoritesListChanged_t;

struct LobbyInvite_t;

struct LobbyEnter_t;

struct LobbyDataUpdate_t;

struct LobbyChatUpdate_t;

struct LobbyChatMsg_t;

struct LobbyGameCreated_t;

struct LobbyMatchList_t;

struct LobbyKicked_t;

struct LobbyCreated_t;

struct PSNGameBootInviteResult_t;

struct FavoritesListAccountsUpdated_t;

struct SteamParamStringArray_t;

struct RemoteStorageAppSyncedClient_t;

struct RemoteStorageAppSyncedServer_t;

struct RemoteStorageAppSyncProgress_t;

struct RemoteStorageAppSyncStatusCheck_t;

struct RemoteStorageFileShareResult_t;

struct RemoteStoragePublishFileResult_t;

struct RemoteStorageDeletePublishedFileResult_t;

struct RemoteStorageEnumerateUserPublishedFilesResult_t;

struct RemoteStorageSubscribePublishedFileResult_t;

struct RemoteStorageEnumerateUserSubscribedFilesResult_t;

struct RemoteStorageUnsubscribePublishedFileResult_t;

struct RemoteStorageUpdatePublishedFileResult_t;

struct RemoteStorageDownloadUGCResult_t;

struct RemoteStorageGetPublishedFileDetailsResult_t;

struct RemoteStorageEnumerateWorkshopFilesResult_t;

struct RemoteStorageGetPublishedItemVoteDetailsResult_t;

struct RemoteStoragePublishedFileSubscribed_t;

struct RemoteStoragePublishedFileUnsubscribed_t;

struct RemoteStoragePublishedFileDeleted_t;

struct RemoteStorageUpdateUserPublishedItemVoteResult_t;

struct RemoteStorageUserVoteDetails_t;

struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t;

struct RemoteStorageSetUserPublishedFileActionResult_t;

struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t;

struct RemoteStoragePublishFileProgress_t;

struct RemoteStoragePublishedFileUpdated_t;

struct RemoteStorageFileWriteAsyncComplete_t;

struct RemoteStorageFileReadAsyncComplete_t;

struct LeaderboardEntry_t;

struct UserStatsReceived_t;

struct UserStatsStored_t;

struct UserAchievementStored_t;

struct LeaderboardFindResult_t;

struct LeaderboardScoresDownloaded_t;

struct LeaderboardScoreUploaded_t;

struct NumberOfCurrentPlayers_t;

struct UserStatsUnloaded_t;

struct UserAchievementIconFetched_t;

struct GlobalAchievementPercentagesReady_t;

struct LeaderboardUGCSet_t;

struct PS3TrophiesInstalled_t;

struct GlobalStatsReceived_t;

struct DlcInstalled_t;

struct RegisterActivationCodeResponse_t;

struct AppProofOfPurchaseKeyResponse_t;

struct FileDetailsResult_t;

struct P2PSessionState_t;

struct P2PSessionRequest_t;

struct P2PSessionConnectFail_t;

struct SocketStatusCallback_t;

struct ScreenshotReady_t;

struct VolumeHasChanged_t;

struct MusicPlayerWantsShuffled_t;

struct MusicPlayerWantsLooped_t;

struct MusicPlayerWantsVolume_t;

struct MusicPlayerSelectsQueueEntry_t;

struct MusicPlayerSelectsPlaylistEntry_t;

struct MusicPlayerWantsPlayingRepeatStatus_t;

struct HTTPRequestCompleted_t;

struct HTTPRequestHeadersReceived_t;

struct HTTPRequestDataReceived_t;

struct ControllerAnalogActionData_t;

struct ControllerDigitalActionData_t;

struct ControllerMotionData_t;

struct SteamUGCDetails_t;

struct SteamUGCQueryCompleted_t;

struct SteamUGCRequestUGCDetailsResult_t;

struct CreateItemResult_t;

struct SubmitItemUpdateResult_t;

struct DownloadItemResult_t;

struct UserFavoriteItemsListChanged_t;

struct SetUserItemVoteResult_t;

struct GetUserItemVoteResult_t;

struct StartPlaytimeTrackingResult_t;

struct StopPlaytimeTrackingResult_t;

struct AddUGCDependencyResult_t;

struct RemoveUGCDependencyResult_t;

struct AddAppDependencyResult_t;

struct RemoveAppDependencyResult_t;

struct GetAppDependenciesResult_t;

struct DeleteItemResult_t;

struct SteamAppInstalled_t;

struct SteamAppUninstalled_t;

struct HTML_BrowserReady_t;

struct HTML_NeedsPaint_t;

struct HTML_StartRequest_t;

struct HTML_CloseBrowser_t;

struct HTML_URLChanged_t;

struct HTML_FinishedRequest_t;

struct HTML_OpenLinkInNewTab_t;

struct HTML_ChangedTitle_t;

struct HTML_SearchResults_t;

struct HTML_CanGoBackAndForward_t;

struct HTML_HorizontalScroll_t;

struct HTML_VerticalScroll_t;

struct HTML_LinkAtPosition_t;

struct HTML_JSAlert_t;

struct HTML_JSConfirm_t;

struct HTML_FileOpenDialog_t;

struct HTML_NewWindow_t;

struct HTML_SetCursor_t;

struct HTML_StatusText_t;

struct HTML_ShowToolTip_t;

struct HTML_UpdateToolTip_t;

struct HTML_HideToolTip_t;

struct HTML_BrowserRestarted_t;

struct SteamItemDetails_t;

struct SteamInventoryResultReady_t;

struct SteamInventoryFullUpdate_t;

struct SteamInventoryEligiblePromoItemDefIDs_t;

struct SteamInventoryStartPurchaseResult_t;

struct SteamInventoryRequestPricesResult_t;

struct BroadcastUploadStop_t;

struct GetVideoURLResult_t;

struct GetOPFSettingsResult_t;

struct GSClientApprove_t;

struct GSClientDeny_t;

struct GSClientKick_t;

struct GSClientAchievementStatus_t;

struct GSPolicyResponse_t;

struct GSGameplayStats_t;

struct GSClientGroupStatus_t;

struct GSReputation_t;

struct AssociateWithClanResult_t;

struct ComputeNewPlayerCompatibilityResult_t;

struct GSStatsReceived_t;

struct GSStatsStored_t;

struct GSStatsUnloaded_t;

struct ItemInstalled_t;

struct SteamInventoryDefinitionUpdate_t;

struct SteamParentalSettingsChanged_t;

struct SteamServersConnected_t;

struct NewLaunchQueryParameters_t;

struct GCMessageAvailable_t;

struct GCMessageFailed_t;

struct ScreenshotRequested_t;

struct LicensesUpdated_t;

struct SteamShutdown_t;

struct IPCountry_t;

struct IPCFailure_t;

struct PlaybackStatusHasChanged_t;

struct MusicPlayerRemoteWillActivate_t;

struct MusicPlayerRemoteWillDeactivate_t;

struct MusicPlayerRemoteToFront_t;

struct MusicPlayerWillQuit_t;

struct MusicPlayerWantsPlay_t;

struct MusicPlayerWantsPause_t;

struct MusicPlayerWantsPlayPrevious_t;

struct MusicPlayerWantsPlayNext_t;

struct BroadcastUploadStart_t;

struct ISteamHTMLSurface;

struct ISteamClient;

struct ISteamUser;

struct ISteamFriends;

struct ISteamUtils;

struct ISteamMatchmaking;

struct ISteamMatchmakingServerListResponse;

struct ISteamMatchmakingPingResponse;

struct ISteamMatchmakingPlayersResponse;

struct ISteamMatchmakingRulesResponse;

struct ISteamMatchmakingServers;

struct ISteamRemoteStorage;

struct ISteamUserStats;

struct ISteamApps;

struct ISteamNetworking;

struct ISteamScreenshots;

struct ISteamMusic;

struct ISteamMusicRemote;

struct ISteamHTTP;

struct ISteamController;

struct ISteamUGC;

struct ISteamAppList;

struct ISteamInventory;

struct ISteamVideo;

struct ISteamParentalSettings;

struct ISteamGameServer;

struct ISteamGameServerStats;

struct SteamApi;

typedef uint8   Salt_t [8];
typedef uint64 GID_t;
typedef uint64 JobID_t;
typedef GID_t TxnID_t;
typedef uint32 PackageId_t;
typedef uint32 BundleId_t;
typedef uint32 AppId_t;
typedef uint64 AssetClassId_t;
typedef uint32 PhysicalItemId_t;
typedef uint32 DepotId_t;
typedef uint32 RTime32;
typedef uint32 CellID_t;
typedef uint64 SteamAPICall_t;
typedef uint32 AccountID_t;
typedef uint32 PartnerId_t;
typedef uint64 ManifestId_t;
typedef uint64 SiteId_t;
typedef uint32 HAuthTicket;
typedef void * BREAKPAD_HANDLE;
typedef struct ValvePackingSentinel_t ValvePackingSentinel_t;
typedef char   compile_time_assert_type [1];
typedef int32 HSteamPipe;
typedef int32 HSteamUser;
typedef int16 FriendsGroupID_t;
typedef void * HServerListRequest;
typedef int HServerQuery;
typedef uint64 UGCHandle_t;
typedef uint64 PublishedFileUpdateHandle_t;
typedef uint64 PublishedFileId_t;
typedef uint64 UGCFileWriteStreamHandle_t;
typedef uint64 SteamLeaderboard_t;
typedef uint64 SteamLeaderboardEntries_t;
typedef uint32 SNetSocket_t;
typedef uint32 SNetListenSocket_t;
typedef uint32 ScreenshotHandle;
typedef uint32 HTTPRequestHandle;
typedef uint32 HTTPCookieContainerHandle;
typedef uint64 ControllerHandle_t;
typedef uint64 ControllerActionSetHandle_t;
typedef uint64 ControllerDigitalActionHandle_t;
typedef uint64 ControllerAnalogActionHandle_t;
typedef uint64 UGCQueryHandle_t;
typedef uint64 UGCUpdateHandle_t;
typedef uint32 HHTMLBrowser;
typedef uint64 SteamItemInstanceID_t;
typedef int32 SteamItemDef_t;
typedef int32 SteamInventoryResult_t;
typedef uint64 SteamInventoryUpdateHandle_t;
const int k_iSteamUserCallbacks = 100;
const int k_iSteamGameServerCallbacks = 200;
const int k_iSteamFriendsCallbacks = 300;
const int k_iSteamBillingCallbacks = 400;
const int k_iSteamMatchmakingCallbacks = 500;
const int k_iSteamContentServerCallbacks = 600;
const int k_iSteamUtilsCallbacks = 700;
const int k_iClientFriendsCallbacks = 800;
const int k_iClientUserCallbacks = 900;
const int k_iSteamAppsCallbacks = 1000;
const int k_iSteamUserStatsCallbacks = 1100;
const int k_iSteamNetworkingCallbacks = 1200;
const int k_iClientRemoteStorageCallbacks = 1300;
const int k_iClientDepotBuilderCallbacks = 1400;
const int k_iSteamGameServerItemsCallbacks = 1500;
const int k_iClientUtilsCallbacks = 1600;
const int k_iSteamGameCoordinatorCallbacks = 1700;
const int k_iSteamGameServerStatsCallbacks = 1800;
const int k_iSteam2AsyncCallbacks = 1900;
const int k_iSteamGameStatsCallbacks = 2000;
const int k_iClientHTTPCallbacks = 2100;
const int k_iClientScreenshotsCallbacks = 2200;
const int k_iSteamScreenshotsCallbacks = 2300;
const int k_iClientAudioCallbacks = 2400;
const int k_iClientUnifiedMessagesCallbacks = 2500;
const int k_iSteamStreamLauncherCallbacks = 2600;
const int k_iClientControllerCallbacks = 2700;
const int k_iSteamControllerCallbacks = 2800;
const int k_iClientParentalSettingsCallbacks = 2900;
const int k_iClientDeviceAuthCallbacks = 3000;
const int k_iClientNetworkDeviceManagerCallbacks = 3100;
const int k_iClientMusicCallbacks = 3200;
const int k_iClientRemoteClientManagerCallbacks = 3300;
const int k_iClientUGCCallbacks = 3400;
const int k_iSteamStreamClientCallbacks = 3500;
const int k_IClientProductBuilderCallbacks = 3600;
const int k_iClientShortcutsCallbacks = 3700;
const int k_iClientRemoteControlManagerCallbacks = 3800;
const int k_iSteamAppListCallbacks = 3900;
const int k_iSteamMusicCallbacks = 4000;
const int k_iSteamMusicRemoteCallbacks = 4100;
const int k_iClientVRCallbacks = 4200;
const int k_iClientGameNotificationCallbacks = 4300;
const int k_iSteamGameNotificationCallbacks = 4400;
const int k_iSteamHTMLSurfaceCallbacks = 4500;
const int k_iClientVideoCallbacks = 4600;
const int k_iClientInventoryCallbacks = 4700;
const int k_iClientBluetoothManagerCallbacks = 4800;
const int k_iClientSharedConnectionCallbacks = 4900;
const int k_ISteamParentalSettingsCallbacks = 5000;
const int k_iClientShaderCallbacks = 5100;
const int k_cchPersonaNameMax = 128;
const int k_cwchPersonaNameMax = 32;
const int k_cchMaxRichPresenceKeys = 20;
const int k_cchMaxRichPresenceKeyLength = 64;
const int k_cchMaxRichPresenceValueLength = 256;
const int k_cchStatNameMax = 128;
const int k_cchLeaderboardNameMax = 128;
const int k_cLeaderboardDetailsMax = 64;
const SteamItemInstanceID_t k_SteamItemInstanceIDInvalid = -1;
const SteamInventoryResult_t k_SteamInventoryResultInvalid = -1;
enum EUniverse {
  k_EUniverseInvalid = 0,
  k_EUniversePublic = 1,
  k_EUniverseBeta = 2,
  k_EUniverseInternal = 3,
  k_EUniverseDev = 4,
  k_EUniverseMax = 5,
};
enum EResult {
  k_EResultOK = 1,
  k_EResultFail = 2,
  k_EResultNoConnection = 3,
  k_EResultInvalidPassword = 5,
  k_EResultLoggedInElsewhere = 6,
  k_EResultInvalidProtocolVer = 7,
  k_EResultInvalidParam = 8,
  k_EResultFileNotFound = 9,
  k_EResultBusy = 10,
  k_EResultInvalidState = 11,
  k_EResultInvalidName = 12,
  k_EResultInvalidEmail = 13,
  k_EResultDuplicateName = 14,
  k_EResultAccessDenied = 15,
  k_EResultTimeout = 16,
  k_EResultBanned = 17,
  k_EResultAccountNotFound = 18,
  k_EResultInvalidSteamID = 19,
  k_EResultServiceUnavailable = 20,
  k_EResultNotLoggedOn = 21,
  k_EResultPending = 22,
  k_EResultEncryptionFailure = 23,
  k_EResultInsufficientPrivilege = 24,
  k_EResultLimitExceeded = 25,
  k_EResultRevoked = 26,
  k_EResultExpired = 27,
  k_EResultAlreadyRedeemed = 28,
  k_EResultDuplicateRequest = 29,
  k_EResultAlreadyOwned = 30,
  k_EResultIPNotFound = 31,
  k_EResultPersistFailed = 32,
  k_EResultLockingFailed = 33,
  k_EResultLogonSessionReplaced = 34,
  k_EResultConnectFailed = 35,
  k_EResultHandshakeFailed = 36,
  k_EResultIOFailure = 37,
  k_EResultRemoteDisconnect = 38,
  k_EResultShoppingCartNotFound = 39,
  k_EResultBlocked = 40,
  k_EResultIgnored = 41,
  k_EResultNoMatch = 42,
  k_EResultAccountDisabled = 43,
  k_EResultServiceReadOnly = 44,
  k_EResultAccountNotFeatured = 45,
  k_EResultAdministratorOK = 46,
  k_EResultContentVersion = 47,
  k_EResultTryAnotherCM = 48,
  k_EResultPasswordRequiredToKickSession = 49,
  k_EResultAlreadyLoggedInElsewhere = 50,
  k_EResultSuspended = 51,
  k_EResultCancelled = 52,
  k_EResultDataCorruption = 53,
  k_EResultDiskFull = 54,
  k_EResultRemoteCallFailed = 55,
  k_EResultPasswordUnset = 56,
  k_EResultExternalAccountUnlinked = 57,
  k_EResultPSNTicketInvalid = 58,
  k_EResultExternalAccountAlreadyLinked = 59,
  k_EResultRemoteFileConflict = 60,
  k_EResultIllegalPassword = 61,
  k_EResultSameAsPreviousValue = 62,
  k_EResultAccountLogonDenied = 63,
  k_EResultCannotUseOldPassword = 64,
  k_EResultInvalidLoginAuthCode = 65,
  k_EResultAccountLogonDeniedNoMail = 66,
  k_EResultHardwareNotCapableOfIPT = 67,
  k_EResultIPTInitError = 68,
  k_EResultParentalControlRestricted = 69,
  k_EResultFacebookQueryError = 70,
  k_EResultExpiredLoginAuthCode = 71,
  k_EResultIPLoginRestrictionFailed = 72,
  k_EResultAccountLockedDown = 73,
  k_EResultAccountLogonDeniedVerifiedEmailRequired = 74,
  k_EResultNoMatchingURL = 75,
  k_EResultBadResponse = 76,
  k_EResultRequirePasswordReEntry = 77,
  k_EResultValueOutOfRange = 78,
  k_EResultUnexpectedError = 79,
  k_EResultDisabled = 80,
  k_EResultInvalidCEGSubmission = 81,
  k_EResultRestrictedDevice = 82,
  k_EResultRegionLocked = 83,
  k_EResultRateLimitExceeded = 84,
  k_EResultAccountLoginDeniedNeedTwoFactor = 85,
  k_EResultItemDeleted = 86,
  k_EResultAccountLoginDeniedThrottle = 87,
  k_EResultTwoFactorCodeMismatch = 88,
  k_EResultTwoFactorActivationCodeMismatch = 89,
  k_EResultAccountAssociatedToMultiplePartners = 90,
  k_EResultNotModified = 91,
  k_EResultNoMobileDevice = 92,
  k_EResultTimeNotSynced = 93,
  k_EResultSmsCodeFailed = 94,
  k_EResultAccountLimitExceeded = 95,
  k_EResultAccountActivityLimitExceeded = 96,
  k_EResultPhoneActivityLimitExceeded = 97,
  k_EResultRefundToWallet = 98,
  k_EResultEmailSendFailure = 99,
  k_EResultNotSettled = 100,
  k_EResultNeedCaptcha = 101,
  k_EResultGSLTDenied = 102,
  k_EResultGSOwnerDenied = 103,
  k_EResultInvalidItemType = 104,
  k_EResultIPBanned = 105,
  k_EResultGSLTExpired = 106,
  k_EResultInsufficientFunds = 107,
  k_EResultTooManyPending = 108,
  k_EResultNoSiteLicensesFound = 109,
  k_EResultWGNetworkSendExceeded = 110,
  k_EResultAccountNotFriends = 111,
  k_EResultLimitedUserAccount = 112,
};
enum EVoiceResult {
  k_EVoiceResultOK = 0,
  k_EVoiceResultNotInitialized = 1,
  k_EVoiceResultNotRecording = 2,
  k_EVoiceResultNoData = 3,
  k_EVoiceResultBufferTooSmall = 4,
  k_EVoiceResultDataCorrupted = 5,
  k_EVoiceResultRestricted = 6,
  k_EVoiceResultUnsupportedCodec = 7,
  k_EVoiceResultReceiverOutOfDate = 8,
  k_EVoiceResultReceiverDidNotAnswer = 9,
};
enum EDenyReason {
  k_EDenyInvalid = 0,
  k_EDenyInvalidVersion = 1,
  k_EDenyGeneric = 2,
  k_EDenyNotLoggedOn = 3,
  k_EDenyNoLicense = 4,
  k_EDenyCheater = 5,
  k_EDenyLoggedInElseWhere = 6,
  k_EDenyUnknownText = 7,
  k_EDenyIncompatibleAnticheat = 8,
  k_EDenyMemoryCorruption = 9,
  k_EDenyIncompatibleSoftware = 10,
  k_EDenySteamConnectionLost = 11,
  k_EDenySteamConnectionError = 12,
  k_EDenySteamResponseTimedOut = 13,
  k_EDenySteamValidationStalled = 14,
  k_EDenySteamOwnerLeftGuestUser = 15,
};
enum EBeginAuthSessionResult {
  k_EBeginAuthSessionResultOK = 0,
  k_EBeginAuthSessionResultInvalidTicket = 1,
  k_EBeginAuthSessionResultDuplicateRequest = 2,
  k_EBeginAuthSessionResultInvalidVersion = 3,
  k_EBeginAuthSessionResultGameMismatch = 4,
  k_EBeginAuthSessionResultExpiredTicket = 5,
};
enum EAuthSessionResponse {
  k_EAuthSessionResponseOK = 0,
  k_EAuthSessionResponseUserNotConnectedToSteam = 1,
  k_EAuthSessionResponseNoLicenseOrExpired = 2,
  k_EAuthSessionResponseVACBanned = 3,
  k_EAuthSessionResponseLoggedInElseWhere = 4,
  k_EAuthSessionResponseVACCheckTimedOut = 5,
  k_EAuthSessionResponseAuthTicketCanceled = 6,
  k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed = 7,
  k_EAuthSessionResponseAuthTicketInvalid = 8,
  k_EAuthSessionResponsePublisherIssuedBan = 9,
};
enum EUserHasLicenseForAppResult {
  k_EUserHasLicenseResultHasLicense = 0,
  k_EUserHasLicenseResultDoesNotHaveLicense = 1,
  k_EUserHasLicenseResultNoAuth = 2,
};
enum EAccountType {
  k_EAccountTypeInvalid = 0,
  k_EAccountTypeIndividual = 1,
  k_EAccountTypeMultiseat = 2,
  k_EAccountTypeGameServer = 3,
  k_EAccountTypeAnonGameServer = 4,
  k_EAccountTypePending = 5,
  k_EAccountTypeContentServer = 6,
  k_EAccountTypeClan = 7,
  k_EAccountTypeChat = 8,
  k_EAccountTypeConsoleUser = 9,
  k_EAccountTypeAnonUser = 10,
  k_EAccountTypeMax = 11,
};
enum EAppReleaseState {
  k_EAppReleaseState_Unknown = 0,
  k_EAppReleaseState_Unavailable = 1,
  k_EAppReleaseState_Prerelease = 2,
  k_EAppReleaseState_PreloadOnly = 3,
  k_EAppReleaseState_Released = 4,
};
enum EAppOwnershipFlags {
  k_EAppOwnershipFlags_None = 0,
  k_EAppOwnershipFlags_OwnsLicense = 1,
  k_EAppOwnershipFlags_FreeLicense = 2,
  k_EAppOwnershipFlags_RegionRestricted = 4,
  k_EAppOwnershipFlags_LowViolence = 8,
  k_EAppOwnershipFlags_InvalidPlatform = 16,
  k_EAppOwnershipFlags_SharedLicense = 32,
  k_EAppOwnershipFlags_FreeWeekend = 64,
  k_EAppOwnershipFlags_RetailLicense = 128,
  k_EAppOwnershipFlags_LicenseLocked = 256,
  k_EAppOwnershipFlags_LicensePending = 512,
  k_EAppOwnershipFlags_LicenseExpired = 1024,
  k_EAppOwnershipFlags_LicensePermanent = 2048,
  k_EAppOwnershipFlags_LicenseRecurring = 4096,
  k_EAppOwnershipFlags_LicenseCanceled = 8192,
  k_EAppOwnershipFlags_AutoGrant = 16384,
  k_EAppOwnershipFlags_PendingGift = 32768,
  k_EAppOwnershipFlags_RentalNotActivated = 65536,
  k_EAppOwnershipFlags_Rental = 131072,
  k_EAppOwnershipFlags_SiteLicense = 262144,
};
enum EAppType {
  k_EAppType_Invalid = 0,
  k_EAppType_Game = 1,
  k_EAppType_Application = 2,
  k_EAppType_Tool = 4,
  k_EAppType_Demo = 8,
  k_EAppType_Media_DEPRECATED = 16,
  k_EAppType_DLC = 32,
  k_EAppType_Guide = 64,
  k_EAppType_Driver = 128,
  k_EAppType_Config = 256,
  k_EAppType_Hardware = 512,
  k_EAppType_Franchise = 1024,
  k_EAppType_Video = 2048,
  k_EAppType_Plugin = 4096,
  k_EAppType_Music = 8192,
  k_EAppType_Series = 16384,
  k_EAppType_Comic = 32768,
  k_EAppType_Shortcut = 1073741824,
  k_EAppType_DepotOnly = -2147483648,
};
enum ESteamUserStatType {
  k_ESteamUserStatTypeINVALID = 0,
  k_ESteamUserStatTypeINT = 1,
  k_ESteamUserStatTypeFLOAT = 2,
  k_ESteamUserStatTypeAVGRATE = 3,
  k_ESteamUserStatTypeACHIEVEMENTS = 4,
  k_ESteamUserStatTypeGROUPACHIEVEMENTS = 5,
  k_ESteamUserStatTypeMAX = 6,
};
enum EChatEntryType {
  k_EChatEntryTypeInvalid = 0,
  k_EChatEntryTypeChatMsg = 1,
  k_EChatEntryTypeTyping = 2,
  k_EChatEntryTypeInviteGame = 3,
  k_EChatEntryTypeEmote = 4,
  k_EChatEntryTypeLeftConversation = 6,
  k_EChatEntryTypeEntered = 7,
  k_EChatEntryTypeWasKicked = 8,
  k_EChatEntryTypeWasBanned = 9,
  k_EChatEntryTypeDisconnected = 10,
  k_EChatEntryTypeHistoricalChat = 11,
  k_EChatEntryTypeLinkBlocked = 14,
};
enum EChatRoomEnterResponse {
  k_EChatRoomEnterResponseSuccess = 1,
  k_EChatRoomEnterResponseDoesntExist = 2,
  k_EChatRoomEnterResponseNotAllowed = 3,
  k_EChatRoomEnterResponseFull = 4,
  k_EChatRoomEnterResponseError = 5,
  k_EChatRoomEnterResponseBanned = 6,
  k_EChatRoomEnterResponseLimited = 7,
  k_EChatRoomEnterResponseClanDisabled = 8,
  k_EChatRoomEnterResponseCommunityBan = 9,
  k_EChatRoomEnterResponseMemberBlockedYou = 10,
  k_EChatRoomEnterResponseYouBlockedMember = 11,
  k_EChatRoomEnterResponseRatelimitExceeded = 15,
};
enum EChatSteamIDInstanceFlags {
  k_EChatAccountInstanceMask = 4095,
  k_EChatInstanceFlagClan = 524288,
  k_EChatInstanceFlagLobby = 262144,
  k_EChatInstanceFlagMMSLobby = 131072,
};
enum EMarketingMessageFlags {
  k_EMarketingMessageFlagsNone = 0,
  k_EMarketingMessageFlagsHighPriority = 1,
  k_EMarketingMessageFlagsPlatformWindows = 2,
  k_EMarketingMessageFlagsPlatformMac = 4,
  k_EMarketingMessageFlagsPlatformLinux = 8,
  k_EMarketingMessageFlagsPlatformRestrictions = 14,
};
enum ENotificationPosition {
  k_EPositionTopLeft = 0,
  k_EPositionTopRight = 1,
  k_EPositionBottomLeft = 2,
  k_EPositionBottomRight = 3,
};
enum EBroadcastUploadResult {
  k_EBroadcastUploadResultNone = 0,
  k_EBroadcastUploadResultOK = 1,
  k_EBroadcastUploadResultInitFailed = 2,
  k_EBroadcastUploadResultFrameFailed = 3,
  k_EBroadcastUploadResultTimeout = 4,
  k_EBroadcastUploadResultBandwidthExceeded = 5,
  k_EBroadcastUploadResultLowFPS = 6,
  k_EBroadcastUploadResultMissingKeyFrames = 7,
  k_EBroadcastUploadResultNoConnection = 8,
  k_EBroadcastUploadResultRelayFailed = 9,
  k_EBroadcastUploadResultSettingsChanged = 10,
  k_EBroadcastUploadResultMissingAudio = 11,
  k_EBroadcastUploadResultTooFarBehind = 12,
  k_EBroadcastUploadResultTranscodeBehind = 13,
};
enum ELaunchOptionType {
  k_ELaunchOptionType_None = 0,
  k_ELaunchOptionType_Default = 1,
  k_ELaunchOptionType_SafeMode = 2,
  k_ELaunchOptionType_Multiplayer = 3,
  k_ELaunchOptionType_Config = 4,
  k_ELaunchOptionType_OpenVR = 5,
  k_ELaunchOptionType_Server = 6,
  k_ELaunchOptionType_Editor = 7,
  k_ELaunchOptionType_Manual = 8,
  k_ELaunchOptionType_Benchmark = 9,
  k_ELaunchOptionType_Option1 = 10,
  k_ELaunchOptionType_Option2 = 11,
  k_ELaunchOptionType_Option3 = 12,
  k_ELaunchOptionType_OculusVR = 13,
  k_ELaunchOptionType_OpenVROverlay = 14,
  k_ELaunchOptionType_OSVR = 15,
  k_ELaunchOptionType_Dialog = 1000,
};
enum EVRHMDType {
  k_eEVRHMDType_None = -1,
  k_eEVRHMDType_Unknown = 0,
  k_eEVRHMDType_HTC_Dev = 1,
  k_eEVRHMDType_HTC_VivePre = 2,
  k_eEVRHMDType_HTC_Vive = 3,
  k_eEVRHMDType_HTC_Unknown = 20,
  k_eEVRHMDType_Oculus_DK1 = 21,
  k_eEVRHMDType_Oculus_DK2 = 22,
  k_eEVRHMDType_Oculus_Rift = 23,
  k_eEVRHMDType_Oculus_Unknown = 40,
  k_eEVRHMDType_Acer_Unknown = 50,
  k_eEVRHMDType_Acer_WindowsMR = 51,
  k_eEVRHMDType_Dell_Unknown = 60,
  k_eEVRHMDType_Dell_Visor = 61,
  k_eEVRHMDType_Lenovo_Unknown = 70,
  k_eEVRHMDType_Lenovo_Explorer = 71,
  k_eEVRHMDType_HP_Unknown = 80,
  k_eEVRHMDType_HP_WindowsMR = 81,
  k_eEVRHMDType_Samsung_Unknown = 90,
  k_eEVRHMDType_Samsung_Odyssey = 91,
  k_eEVRHMDType_Unannounced_Unknown = 100,
  k_eEVRHMDType_Unannounced_WindowsMR = 101,
};
enum EFriendRelationship {
  k_EFriendRelationshipNone = 0,
  k_EFriendRelationshipBlocked = 1,
  k_EFriendRelationshipRequestRecipient = 2,
  k_EFriendRelationshipFriend = 3,
  k_EFriendRelationshipRequestInitiator = 4,
  k_EFriendRelationshipIgnored = 5,
  k_EFriendRelationshipIgnoredFriend = 6,
  k_EFriendRelationshipSuggested_DEPRECATED = 7,
  k_EFriendRelationshipMax = 8,
};
enum EPersonaState {
  k_EPersonaStateOffline = 0,
  k_EPersonaStateOnline = 1,
  k_EPersonaStateBusy = 2,
  k_EPersonaStateAway = 3,
  k_EPersonaStateSnooze = 4,
  k_EPersonaStateLookingToTrade = 5,
  k_EPersonaStateLookingToPlay = 6,
  k_EPersonaStateMax = 7,
};
enum EFriendFlags {
  k_EFriendFlagNone = 0,
  k_EFriendFlagBlocked = 1,
  k_EFriendFlagFriendshipRequested = 2,
  k_EFriendFlagImmediate = 4,
  k_EFriendFlagClanMember = 8,
  k_EFriendFlagOnGameServer = 16,
  k_EFriendFlagRequestingFriendship = 128,
  k_EFriendFlagRequestingInfo = 256,
  k_EFriendFlagIgnored = 512,
  k_EFriendFlagIgnoredFriend = 1024,
  k_EFriendFlagChatMember = 4096,
  k_EFriendFlagAll = 65535,
};
enum EUserRestriction {
  k_nUserRestrictionNone = 0,
  k_nUserRestrictionUnknown = 1,
  k_nUserRestrictionAnyChat = 2,
  k_nUserRestrictionVoiceChat = 4,
  k_nUserRestrictionGroupChat = 8,
  k_nUserRestrictionRating = 16,
  k_nUserRestrictionGameInvites = 32,
  k_nUserRestrictionTrading = 64,
};
enum EOverlayToStoreFlag {
  k_EOverlayToStoreFlag_None = 0,
  k_EOverlayToStoreFlag_AddToCart = 1,
  k_EOverlayToStoreFlag_AddToCartAndShow = 2,
};
enum EPersonaChange {
  k_EPersonaChangeName = 1,
  k_EPersonaChangeStatus = 2,
  k_EPersonaChangeComeOnline = 4,
  k_EPersonaChangeGoneOffline = 8,
  k_EPersonaChangeGamePlayed = 16,
  k_EPersonaChangeGameServer = 32,
  k_EPersonaChangeAvatar = 64,
  k_EPersonaChangeJoinedSource = 128,
  k_EPersonaChangeLeftSource = 256,
  k_EPersonaChangeRelationshipChanged = 512,
  k_EPersonaChangeNameFirstSet = 1024,
  k_EPersonaChangeFacebookInfo = 2048,
  k_EPersonaChangeNickname = 4096,
  k_EPersonaChangeSteamLevel = 8192,
};
enum ESteamAPICallFailure {
  k_ESteamAPICallFailureNone = -1,
  k_ESteamAPICallFailureSteamGone = 0,
  k_ESteamAPICallFailureNetworkFailure = 1,
  k_ESteamAPICallFailureInvalidHandle = 2,
  k_ESteamAPICallFailureMismatchedCallback = 3,
};
enum EGamepadTextInputMode {
  k_EGamepadTextInputModeNormal = 0,
  k_EGamepadTextInputModePassword = 1,
};
enum EGamepadTextInputLineMode {
  k_EGamepadTextInputLineModeSingleLine = 0,
  k_EGamepadTextInputLineModeMultipleLines = 1,
};
enum ECheckFileSignature {
  k_ECheckFileSignatureInvalidSignature = 0,
  k_ECheckFileSignatureValidSignature = 1,
  k_ECheckFileSignatureFileNotFound = 2,
  k_ECheckFileSignatureNoSignaturesFoundForThisApp = 3,
  k_ECheckFileSignatureNoSignaturesFoundForThisFile = 4,
};
enum EMatchMakingServerResponse {
  eServerResponded = 0,
  eServerFailedToRespond = 1,
  eNoServersListedOnMasterServer = 2,
};
enum ELobbyType {
  k_ELobbyTypePrivate = 0,
  k_ELobbyTypeFriendsOnly = 1,
  k_ELobbyTypePublic = 2,
  k_ELobbyTypeInvisible = 3,
};
enum ELobbyComparison {
  k_ELobbyComparisonEqualToOrLessThan = -2,
  k_ELobbyComparisonLessThan = -1,
  k_ELobbyComparisonEqual = 0,
  k_ELobbyComparisonGreaterThan = 1,
  k_ELobbyComparisonEqualToOrGreaterThan = 2,
  k_ELobbyComparisonNotEqual = 3,
};
enum ELobbyDistanceFilter {
  k_ELobbyDistanceFilterClose = 0,
  k_ELobbyDistanceFilterDefault = 1,
  k_ELobbyDistanceFilterFar = 2,
  k_ELobbyDistanceFilterWorldwide = 3,
};
enum EChatMemberStateChange {
  k_EChatMemberStateChangeEntered = 1,
  k_EChatMemberStateChangeLeft = 2,
  k_EChatMemberStateChangeDisconnected = 4,
  k_EChatMemberStateChangeKicked = 8,
  k_EChatMemberStateChangeBanned = 16,
};
enum ERemoteStoragePlatform {
  k_ERemoteStoragePlatformNone = 0,
  k_ERemoteStoragePlatformWindows = 1,
  k_ERemoteStoragePlatformOSX = 2,
  k_ERemoteStoragePlatformPS3 = 4,
  k_ERemoteStoragePlatformLinux = 8,
  k_ERemoteStoragePlatformReserved2 = 16,
  k_ERemoteStoragePlatformAll = -1,
};
enum ERemoteStoragePublishedFileVisibility {
  k_ERemoteStoragePublishedFileVisibilityPublic = 0,
  k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 1,
  k_ERemoteStoragePublishedFileVisibilityPrivate = 2,
};
enum EWorkshopFileType {
  k_EWorkshopFileTypeFirst = 0,
  k_EWorkshopFileTypeCommunity = 0,
  k_EWorkshopFileTypeMicrotransaction = 1,
  k_EWorkshopFileTypeCollection = 2,
  k_EWorkshopFileTypeArt = 3,
  k_EWorkshopFileTypeVideo = 4,
  k_EWorkshopFileTypeScreenshot = 5,
  k_EWorkshopFileTypeGame = 6,
  k_EWorkshopFileTypeSoftware = 7,
  k_EWorkshopFileTypeConcept = 8,
  k_EWorkshopFileTypeWebGuide = 9,
  k_EWorkshopFileTypeIntegratedGuide = 10,
  k_EWorkshopFileTypeMerch = 11,
  k_EWorkshopFileTypeControllerBinding = 12,
  k_EWorkshopFileTypeSteamworksAccessInvite = 13,
  k_EWorkshopFileTypeSteamVideo = 14,
  k_EWorkshopFileTypeGameManagedItem = 15,
  k_EWorkshopFileTypeMax = 16,
};
enum EWorkshopVote {
  k_EWorkshopVoteUnvoted = 0,
  k_EWorkshopVoteFor = 1,
  k_EWorkshopVoteAgainst = 2,
  k_EWorkshopVoteLater = 3,
};
enum EWorkshopFileAction {
  k_EWorkshopFileActionPlayed = 0,
  k_EWorkshopFileActionCompleted = 1,
};
enum EWorkshopEnumerationType {
  k_EWorkshopEnumerationTypeRankedByVote = 0,
  k_EWorkshopEnumerationTypeRecent = 1,
  k_EWorkshopEnumerationTypeTrending = 2,
  k_EWorkshopEnumerationTypeFavoritesOfFriends = 3,
  k_EWorkshopEnumerationTypeVotedByFriends = 4,
  k_EWorkshopEnumerationTypeContentByFriends = 5,
  k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 6,
};
enum EWorkshopVideoProvider {
  k_EWorkshopVideoProviderNone = 0,
  k_EWorkshopVideoProviderYoutube = 1,
};
enum EUGCReadAction {
  k_EUGCRead_ContinueReadingUntilFinished = 0,
  k_EUGCRead_ContinueReading = 1,
  k_EUGCRead_Close = 2,
};
enum ELeaderboardDataRequest {
  k_ELeaderboardDataRequestGlobal = 0,
  k_ELeaderboardDataRequestGlobalAroundUser = 1,
  k_ELeaderboardDataRequestFriends = 2,
  k_ELeaderboardDataRequestUsers = 3,
};
enum ELeaderboardSortMethod {
  k_ELeaderboardSortMethodNone = 0,
  k_ELeaderboardSortMethodAscending = 1,
  k_ELeaderboardSortMethodDescending = 2,
};
enum ELeaderboardDisplayType {
  k_ELeaderboardDisplayTypeNone = 0,
  k_ELeaderboardDisplayTypeNumeric = 1,
  k_ELeaderboardDisplayTypeTimeSeconds = 2,
  k_ELeaderboardDisplayTypeTimeMilliSeconds = 3,
};
enum ELeaderboardUploadScoreMethod {
  k_ELeaderboardUploadScoreMethodNone = 0,
  k_ELeaderboardUploadScoreMethodKeepBest = 1,
  k_ELeaderboardUploadScoreMethodForceUpdate = 2,
};
enum ERegisterActivationCodeResult {
  k_ERegisterActivationCodeResultOK = 0,
  k_ERegisterActivationCodeResultFail = 1,
  k_ERegisterActivationCodeResultAlreadyRegistered = 2,
  k_ERegisterActivationCodeResultTimeout = 3,
  k_ERegisterActivationCodeAlreadyOwned = 4,
};
enum EP2PSessionError {
  k_EP2PSessionErrorNone = 0,
  k_EP2PSessionErrorNotRunningApp = 1,
  k_EP2PSessionErrorNoRightsToApp = 2,
  k_EP2PSessionErrorDestinationNotLoggedIn = 3,
  k_EP2PSessionErrorTimeout = 4,
  k_EP2PSessionErrorMax = 5,
};
enum EP2PSend {
  k_EP2PSendUnreliable = 0,
  k_EP2PSendUnreliableNoDelay = 1,
  k_EP2PSendReliable = 2,
  k_EP2PSendReliableWithBuffering = 3,
};
enum ESNetSocketState {
  k_ESNetSocketStateInvalid = 0,
  k_ESNetSocketStateConnected = 1,
  k_ESNetSocketStateInitiated = 10,
  k_ESNetSocketStateLocalCandidatesFound = 11,
  k_ESNetSocketStateReceivedRemoteCandidates = 12,
  k_ESNetSocketStateChallengeHandshake = 15,
  k_ESNetSocketStateDisconnecting = 21,
  k_ESNetSocketStateLocalDisconnect = 22,
  k_ESNetSocketStateTimeoutDuringConnect = 23,
  k_ESNetSocketStateRemoteEndDisconnected = 24,
  k_ESNetSocketStateConnectionBroken = 25,
};
enum ESNetSocketConnectionType {
  k_ESNetSocketConnectionTypeNotConnected = 0,
  k_ESNetSocketConnectionTypeUDP = 1,
  k_ESNetSocketConnectionTypeUDPRelay = 2,
};
enum EVRScreenshotType {
  k_EVRScreenshotType_None = 0,
  k_EVRScreenshotType_Mono = 1,
  k_EVRScreenshotType_Stereo = 2,
  k_EVRScreenshotType_MonoCubemap = 3,
  k_EVRScreenshotType_MonoPanorama = 4,
  k_EVRScreenshotType_StereoPanorama = 5,
};
enum AudioPlayback_Status {
  AudioPlayback_Undefined = 0,
  AudioPlayback_Playing = 1,
  AudioPlayback_Paused = 2,
  AudioPlayback_Idle = 3,
};
enum EHTTPMethod {
  k_EHTTPMethodInvalid = 0,
  k_EHTTPMethodGET = 1,
  k_EHTTPMethodHEAD = 2,
  k_EHTTPMethodPOST = 3,
  k_EHTTPMethodPUT = 4,
  k_EHTTPMethodDELETE = 5,
  k_EHTTPMethodOPTIONS = 6,
  k_EHTTPMethodPATCH = 7,
};
enum EHTTPStatusCode {
  k_EHTTPStatusCodeInvalid = 0,
  k_EHTTPStatusCode100Continue = 100,
  k_EHTTPStatusCode101SwitchingProtocols = 101,
  k_EHTTPStatusCode200OK = 200,
  k_EHTTPStatusCode201Created = 201,
  k_EHTTPStatusCode202Accepted = 202,
  k_EHTTPStatusCode203NonAuthoritative = 203,
  k_EHTTPStatusCode204NoContent = 204,
  k_EHTTPStatusCode205ResetContent = 205,
  k_EHTTPStatusCode206PartialContent = 206,
  k_EHTTPStatusCode300MultipleChoices = 300,
  k_EHTTPStatusCode301MovedPermanently = 301,
  k_EHTTPStatusCode302Found = 302,
  k_EHTTPStatusCode303SeeOther = 303,
  k_EHTTPStatusCode304NotModified = 304,
  k_EHTTPStatusCode305UseProxy = 305,
  k_EHTTPStatusCode307TemporaryRedirect = 307,
  k_EHTTPStatusCode400BadRequest = 400,
  k_EHTTPStatusCode401Unauthorized = 401,
  k_EHTTPStatusCode402PaymentRequired = 402,
  k_EHTTPStatusCode403Forbidden = 403,
  k_EHTTPStatusCode404NotFound = 404,
  k_EHTTPStatusCode405MethodNotAllowed = 405,
  k_EHTTPStatusCode406NotAcceptable = 406,
  k_EHTTPStatusCode407ProxyAuthRequired = 407,
  k_EHTTPStatusCode408RequestTimeout = 408,
  k_EHTTPStatusCode409Conflict = 409,
  k_EHTTPStatusCode410Gone = 410,
  k_EHTTPStatusCode411LengthRequired = 411,
  k_EHTTPStatusCode412PreconditionFailed = 412,
  k_EHTTPStatusCode413RequestEntityTooLarge = 413,
  k_EHTTPStatusCode414RequestURITooLong = 414,
  k_EHTTPStatusCode415UnsupportedMediaType = 415,
  k_EHTTPStatusCode416RequestedRangeNotSatisfiable = 416,
  k_EHTTPStatusCode417ExpectationFailed = 417,
  k_EHTTPStatusCode4xxUnknown = 418,
  k_EHTTPStatusCode429TooManyRequests = 429,
  k_EHTTPStatusCode500InternalServerError = 500,
  k_EHTTPStatusCode501NotImplemented = 501,
  k_EHTTPStatusCode502BadGateway = 502,
  k_EHTTPStatusCode503ServiceUnavailable = 503,
  k_EHTTPStatusCode504GatewayTimeout = 504,
  k_EHTTPStatusCode505HTTPVersionNotSupported = 505,
  k_EHTTPStatusCode5xxUnknown = 599,
};
enum ESteamControllerPad {
  k_ESteamControllerPad_Left = 0,
  k_ESteamControllerPad_Right = 1,
};
enum EControllerSource {
  k_EControllerSource_None = 0,
  k_EControllerSource_LeftTrackpad = 1,
  k_EControllerSource_RightTrackpad = 2,
  k_EControllerSource_Joystick = 3,
  k_EControllerSource_ABXY = 4,
  k_EControllerSource_Switch = 5,
  k_EControllerSource_LeftTrigger = 6,
  k_EControllerSource_RightTrigger = 7,
  k_EControllerSource_Gyro = 8,
  k_EControllerSource_CenterTrackpad = 9,
  k_EControllerSource_RightJoystick = 10,
  k_EControllerSource_DPad = 11,
  k_EControllerSource_Key = 12,
  k_EControllerSource_Mouse = 13,
  k_EControllerSource_Count = 14,
};
enum EControllerSourceMode {
  k_EControllerSourceMode_None = 0,
  k_EControllerSourceMode_Dpad = 1,
  k_EControllerSourceMode_Buttons = 2,
  k_EControllerSourceMode_FourButtons = 3,
  k_EControllerSourceMode_AbsoluteMouse = 4,
  k_EControllerSourceMode_RelativeMouse = 5,
  k_EControllerSourceMode_JoystickMove = 6,
  k_EControllerSourceMode_JoystickMouse = 7,
  k_EControllerSourceMode_JoystickCamera = 8,
  k_EControllerSourceMode_ScrollWheel = 9,
  k_EControllerSourceMode_Trigger = 10,
  k_EControllerSourceMode_TouchMenu = 11,
  k_EControllerSourceMode_MouseJoystick = 12,
  k_EControllerSourceMode_MouseRegion = 13,
  k_EControllerSourceMode_RadialMenu = 14,
  k_EControllerSourceMode_SingleButton = 15,
  k_EControllerSourceMode_Switches = 16,
};
enum EControllerActionOrigin {
  k_EControllerActionOrigin_None = 0,
  k_EControllerActionOrigin_A = 1,
  k_EControllerActionOrigin_B = 2,
  k_EControllerActionOrigin_X = 3,
  k_EControllerActionOrigin_Y = 4,
  k_EControllerActionOrigin_LeftBumper = 5,
  k_EControllerActionOrigin_RightBumper = 6,
  k_EControllerActionOrigin_LeftGrip = 7,
  k_EControllerActionOrigin_RightGrip = 8,
  k_EControllerActionOrigin_Start = 9,
  k_EControllerActionOrigin_Back = 10,
  k_EControllerActionOrigin_LeftPad_Touch = 11,
  k_EControllerActionOrigin_LeftPad_Swipe = 12,
  k_EControllerActionOrigin_LeftPad_Click = 13,
  k_EControllerActionOrigin_LeftPad_DPadNorth = 14,
  k_EControllerActionOrigin_LeftPad_DPadSouth = 15,
  k_EControllerActionOrigin_LeftPad_DPadWest = 16,
  k_EControllerActionOrigin_LeftPad_DPadEast = 17,
  k_EControllerActionOrigin_RightPad_Touch = 18,
  k_EControllerActionOrigin_RightPad_Swipe = 19,
  k_EControllerActionOrigin_RightPad_Click = 20,
  k_EControllerActionOrigin_RightPad_DPadNorth = 21,
  k_EControllerActionOrigin_RightPad_DPadSouth = 22,
  k_EControllerActionOrigin_RightPad_DPadWest = 23,
  k_EControllerActionOrigin_RightPad_DPadEast = 24,
  k_EControllerActionOrigin_LeftTrigger_Pull = 25,
  k_EControllerActionOrigin_LeftTrigger_Click = 26,
  k_EControllerActionOrigin_RightTrigger_Pull = 27,
  k_EControllerActionOrigin_RightTrigger_Click = 28,
  k_EControllerActionOrigin_LeftStick_Move = 29,
  k_EControllerActionOrigin_LeftStick_Click = 30,
  k_EControllerActionOrigin_LeftStick_DPadNorth = 31,
  k_EControllerActionOrigin_LeftStick_DPadSouth = 32,
  k_EControllerActionOrigin_LeftStick_DPadWest = 33,
  k_EControllerActionOrigin_LeftStick_DPadEast = 34,
  k_EControllerActionOrigin_Gyro_Move = 35,
  k_EControllerActionOrigin_Gyro_Pitch = 36,
  k_EControllerActionOrigin_Gyro_Yaw = 37,
  k_EControllerActionOrigin_Gyro_Roll = 38,
  k_EControllerActionOrigin_PS4_X = 39,
  k_EControllerActionOrigin_PS4_Circle = 40,
  k_EControllerActionOrigin_PS4_Triangle = 41,
  k_EControllerActionOrigin_PS4_Square = 42,
  k_EControllerActionOrigin_PS4_LeftBumper = 43,
  k_EControllerActionOrigin_PS4_RightBumper = 44,
  k_EControllerActionOrigin_PS4_Options = 45,
  k_EControllerActionOrigin_PS4_Share = 46,
  k_EControllerActionOrigin_PS4_LeftPad_Touch = 47,
  k_EControllerActionOrigin_PS4_LeftPad_Swipe = 48,
  k_EControllerActionOrigin_PS4_LeftPad_Click = 49,
  k_EControllerActionOrigin_PS4_LeftPad_DPadNorth = 50,
  k_EControllerActionOrigin_PS4_LeftPad_DPadSouth = 51,
  k_EControllerActionOrigin_PS4_LeftPad_DPadWest = 52,
  k_EControllerActionOrigin_PS4_LeftPad_DPadEast = 53,
  k_EControllerActionOrigin_PS4_RightPad_Touch = 54,
  k_EControllerActionOrigin_PS4_RightPad_Swipe = 55,
  k_EControllerActionOrigin_PS4_RightPad_Click = 56,
  k_EControllerActionOrigin_PS4_RightPad_DPadNorth = 57,
  k_EControllerActionOrigin_PS4_RightPad_DPadSouth = 58,
  k_EControllerActionOrigin_PS4_RightPad_DPadWest = 59,
  k_EControllerActionOrigin_PS4_RightPad_DPadEast = 60,
  k_EControllerActionOrigin_PS4_CenterPad_Touch = 61,
  k_EControllerActionOrigin_PS4_CenterPad_Swipe = 62,
  k_EControllerActionOrigin_PS4_CenterPad_Click = 63,
  k_EControllerActionOrigin_PS4_CenterPad_DPadNorth = 64,
  k_EControllerActionOrigin_PS4_CenterPad_DPadSouth = 65,
  k_EControllerActionOrigin_PS4_CenterPad_DPadWest = 66,
  k_EControllerActionOrigin_PS4_CenterPad_DPadEast = 67,
  k_EControllerActionOrigin_PS4_LeftTrigger_Pull = 68,
  k_EControllerActionOrigin_PS4_LeftTrigger_Click = 69,
  k_EControllerActionOrigin_PS4_RightTrigger_Pull = 70,
  k_EControllerActionOrigin_PS4_RightTrigger_Click = 71,
  k_EControllerActionOrigin_PS4_LeftStick_Move = 72,
  k_EControllerActionOrigin_PS4_LeftStick_Click = 73,
  k_EControllerActionOrigin_PS4_LeftStick_DPadNorth = 74,
  k_EControllerActionOrigin_PS4_LeftStick_DPadSouth = 75,
  k_EControllerActionOrigin_PS4_LeftStick_DPadWest = 76,
  k_EControllerActionOrigin_PS4_LeftStick_DPadEast = 77,
  k_EControllerActionOrigin_PS4_RightStick_Move = 78,
  k_EControllerActionOrigin_PS4_RightStick_Click = 79,
  k_EControllerActionOrigin_PS4_RightStick_DPadNorth = 80,
  k_EControllerActionOrigin_PS4_RightStick_DPadSouth = 81,
  k_EControllerActionOrigin_PS4_RightStick_DPadWest = 82,
  k_EControllerActionOrigin_PS4_RightStick_DPadEast = 83,
  k_EControllerActionOrigin_PS4_DPad_North = 84,
  k_EControllerActionOrigin_PS4_DPad_South = 85,
  k_EControllerActionOrigin_PS4_DPad_West = 86,
  k_EControllerActionOrigin_PS4_DPad_East = 87,
  k_EControllerActionOrigin_PS4_Gyro_Move = 88,
  k_EControllerActionOrigin_PS4_Gyro_Pitch = 89,
  k_EControllerActionOrigin_PS4_Gyro_Yaw = 90,
  k_EControllerActionOrigin_PS4_Gyro_Roll = 91,
  k_EControllerActionOrigin_XBoxOne_A = 92,
  k_EControllerActionOrigin_XBoxOne_B = 93,
  k_EControllerActionOrigin_XBoxOne_X = 94,
  k_EControllerActionOrigin_XBoxOne_Y = 95,
  k_EControllerActionOrigin_XBoxOne_LeftBumper = 96,
  k_EControllerActionOrigin_XBoxOne_RightBumper = 97,
  k_EControllerActionOrigin_XBoxOne_Menu = 98,
  k_EControllerActionOrigin_XBoxOne_View = 99,
  k_EControllerActionOrigin_XBoxOne_LeftTrigger_Pull = 100,
  k_EControllerActionOrigin_XBoxOne_LeftTrigger_Click = 101,
  k_EControllerActionOrigin_XBoxOne_RightTrigger_Pull = 102,
  k_EControllerActionOrigin_XBoxOne_RightTrigger_Click = 103,
  k_EControllerActionOrigin_XBoxOne_LeftStick_Move = 104,
  k_EControllerActionOrigin_XBoxOne_LeftStick_Click = 105,
  k_EControllerActionOrigin_XBoxOne_LeftStick_DPadNorth = 106,
  k_EControllerActionOrigin_XBoxOne_LeftStick_DPadSouth = 107,
  k_EControllerActionOrigin_XBoxOne_LeftStick_DPadWest = 108,
  k_EControllerActionOrigin_XBoxOne_LeftStick_DPadEast = 109,
  k_EControllerActionOrigin_XBoxOne_RightStick_Move = 110,
  k_EControllerActionOrigin_XBoxOne_RightStick_Click = 111,
  k_EControllerActionOrigin_XBoxOne_RightStick_DPadNorth = 112,
  k_EControllerActionOrigin_XBoxOne_RightStick_DPadSouth = 113,
  k_EControllerActionOrigin_XBoxOne_RightStick_DPadWest = 114,
  k_EControllerActionOrigin_XBoxOne_RightStick_DPadEast = 115,
  k_EControllerActionOrigin_XBoxOne_DPad_North = 116,
  k_EControllerActionOrigin_XBoxOne_DPad_South = 117,
  k_EControllerActionOrigin_XBoxOne_DPad_West = 118,
  k_EControllerActionOrigin_XBoxOne_DPad_East = 119,
  k_EControllerActionOrigin_XBox360_A = 120,
  k_EControllerActionOrigin_XBox360_B = 121,
  k_EControllerActionOrigin_XBox360_X = 122,
  k_EControllerActionOrigin_XBox360_Y = 123,
  k_EControllerActionOrigin_XBox360_LeftBumper = 124,
  k_EControllerActionOrigin_XBox360_RightBumper = 125,
  k_EControllerActionOrigin_XBox360_Start = 126,
  k_EControllerActionOrigin_XBox360_Back = 127,
  k_EControllerActionOrigin_XBox360_LeftTrigger_Pull = 128,
  k_EControllerActionOrigin_XBox360_LeftTrigger_Click = 129,
  k_EControllerActionOrigin_XBox360_RightTrigger_Pull = 130,
  k_EControllerActionOrigin_XBox360_RightTrigger_Click = 131,
  k_EControllerActionOrigin_XBox360_LeftStick_Move = 132,
  k_EControllerActionOrigin_XBox360_LeftStick_Click = 133,
  k_EControllerActionOrigin_XBox360_LeftStick_DPadNorth = 134,
  k_EControllerActionOrigin_XBox360_LeftStick_DPadSouth = 135,
  k_EControllerActionOrigin_XBox360_LeftStick_DPadWest = 136,
  k_EControllerActionOrigin_XBox360_LeftStick_DPadEast = 137,
  k_EControllerActionOrigin_XBox360_RightStick_Move = 138,
  k_EControllerActionOrigin_XBox360_RightStick_Click = 139,
  k_EControllerActionOrigin_XBox360_RightStick_DPadNorth = 140,
  k_EControllerActionOrigin_XBox360_RightStick_DPadSouth = 141,
  k_EControllerActionOrigin_XBox360_RightStick_DPadWest = 142,
  k_EControllerActionOrigin_XBox360_RightStick_DPadEast = 143,
  k_EControllerActionOrigin_XBox360_DPad_North = 144,
  k_EControllerActionOrigin_XBox360_DPad_South = 145,
  k_EControllerActionOrigin_XBox360_DPad_West = 146,
  k_EControllerActionOrigin_XBox360_DPad_East = 147,
  k_EControllerActionOrigin_SteamV2_A = 148,
  k_EControllerActionOrigin_SteamV2_B = 149,
  k_EControllerActionOrigin_SteamV2_X = 150,
  k_EControllerActionOrigin_SteamV2_Y = 151,
  k_EControllerActionOrigin_SteamV2_LeftBumper = 152,
  k_EControllerActionOrigin_SteamV2_RightBumper = 153,
  k_EControllerActionOrigin_SteamV2_LeftGrip = 154,
  k_EControllerActionOrigin_SteamV2_RightGrip = 155,
  k_EControllerActionOrigin_SteamV2_LeftGrip_Upper = 156,
  k_EControllerActionOrigin_SteamV2_RightGrip_Upper = 157,
  k_EControllerActionOrigin_SteamV2_LeftBumper_Pressure = 158,
  k_EControllerActionOrigin_SteamV2_RightBumper_Pressure = 159,
  k_EControllerActionOrigin_SteamV2_LeftGrip_Pressure = 160,
  k_EControllerActionOrigin_SteamV2_RightGrip_Pressure = 161,
  k_EControllerActionOrigin_SteamV2_LeftGrip_Upper_Pressure = 162,
  k_EControllerActionOrigin_SteamV2_RightGrip_Upper_Pressure = 163,
  k_EControllerActionOrigin_SteamV2_Start = 164,
  k_EControllerActionOrigin_SteamV2_Back = 165,
  k_EControllerActionOrigin_SteamV2_LeftPad_Touch = 166,
  k_EControllerActionOrigin_SteamV2_LeftPad_Swipe = 167,
  k_EControllerActionOrigin_SteamV2_LeftPad_Click = 168,
  k_EControllerActionOrigin_SteamV2_LeftPad_Pressure = 169,
  k_EControllerActionOrigin_SteamV2_LeftPad_DPadNorth = 170,
  k_EControllerActionOrigin_SteamV2_LeftPad_DPadSouth = 171,
  k_EControllerActionOrigin_SteamV2_LeftPad_DPadWest = 172,
  k_EControllerActionOrigin_SteamV2_LeftPad_DPadEast = 173,
  k_EControllerActionOrigin_SteamV2_RightPad_Touch = 174,
  k_EControllerActionOrigin_SteamV2_RightPad_Swipe = 175,
  k_EControllerActionOrigin_SteamV2_RightPad_Click = 176,
  k_EControllerActionOrigin_SteamV2_RightPad_Pressure = 177,
  k_EControllerActionOrigin_SteamV2_RightPad_DPadNorth = 178,
  k_EControllerActionOrigin_SteamV2_RightPad_DPadSouth = 179,
  k_EControllerActionOrigin_SteamV2_RightPad_DPadWest = 180,
  k_EControllerActionOrigin_SteamV2_RightPad_DPadEast = 181,
  k_EControllerActionOrigin_SteamV2_LeftTrigger_Pull = 182,
  k_EControllerActionOrigin_SteamV2_LeftTrigger_Click = 183,
  k_EControllerActionOrigin_SteamV2_RightTrigger_Pull = 184,
  k_EControllerActionOrigin_SteamV2_RightTrigger_Click = 185,
  k_EControllerActionOrigin_SteamV2_LeftStick_Move = 186,
  k_EControllerActionOrigin_SteamV2_LeftStick_Click = 187,
  k_EControllerActionOrigin_SteamV2_LeftStick_DPadNorth = 188,
  k_EControllerActionOrigin_SteamV2_LeftStick_DPadSouth = 189,
  k_EControllerActionOrigin_SteamV2_LeftStick_DPadWest = 190,
  k_EControllerActionOrigin_SteamV2_LeftStick_DPadEast = 191,
  k_EControllerActionOrigin_SteamV2_Gyro_Move = 192,
  k_EControllerActionOrigin_SteamV2_Gyro_Pitch = 193,
  k_EControllerActionOrigin_SteamV2_Gyro_Yaw = 194,
  k_EControllerActionOrigin_SteamV2_Gyro_Roll = 195,
  k_EControllerActionOrigin_Count = 196,
};
enum ESteamControllerLEDFlag {
  k_ESteamControllerLEDFlag_SetColor = 0,
  k_ESteamControllerLEDFlag_RestoreUserDefault = 1,
};
enum ESteamInputType {
  k_ESteamInputType_Unknown = 0,
  k_ESteamInputType_SteamController = 1,
  k_ESteamInputType_XBox360Controller = 2,
  k_ESteamInputType_XBoxOneController = 3,
  k_ESteamInputType_GenericXInput = 4,
  k_ESteamInputType_PS4Controller = 5,
};
enum EUGCMatchingUGCType {
  k_EUGCMatchingUGCType_Items = 0,
  k_EUGCMatchingUGCType_Items_Mtx = 1,
  k_EUGCMatchingUGCType_Items_ReadyToUse = 2,
  k_EUGCMatchingUGCType_Collections = 3,
  k_EUGCMatchingUGCType_Artwork = 4,
  k_EUGCMatchingUGCType_Videos = 5,
  k_EUGCMatchingUGCType_Screenshots = 6,
  k_EUGCMatchingUGCType_AllGuides = 7,
  k_EUGCMatchingUGCType_WebGuides = 8,
  k_EUGCMatchingUGCType_IntegratedGuides = 9,
  k_EUGCMatchingUGCType_UsableInGame = 10,
  k_EUGCMatchingUGCType_ControllerBindings = 11,
  k_EUGCMatchingUGCType_GameManagedItems = 12,
  k_EUGCMatchingUGCType_All = -1,
};
enum EUserUGCList {
  k_EUserUGCList_Published = 0,
  k_EUserUGCList_VotedOn = 1,
  k_EUserUGCList_VotedUp = 2,
  k_EUserUGCList_VotedDown = 3,
  k_EUserUGCList_WillVoteLater = 4,
  k_EUserUGCList_Favorited = 5,
  k_EUserUGCList_Subscribed = 6,
  k_EUserUGCList_UsedOrPlayed = 7,
  k_EUserUGCList_Followed = 8,
};
enum EUserUGCListSortOrder {
  k_EUserUGCListSortOrder_CreationOrderDesc = 0,
  k_EUserUGCListSortOrder_CreationOrderAsc = 1,
  k_EUserUGCListSortOrder_TitleAsc = 2,
  k_EUserUGCListSortOrder_LastUpdatedDesc = 3,
  k_EUserUGCListSortOrder_SubscriptionDateDesc = 4,
  k_EUserUGCListSortOrder_VoteScoreDesc = 5,
  k_EUserUGCListSortOrder_ForModeration = 6,
};
enum EUGCQuery {
  k_EUGCQuery_RankedByVote = 0,
  k_EUGCQuery_RankedByPublicationDate = 1,
  k_EUGCQuery_AcceptedForGameRankedByAcceptanceDate = 2,
  k_EUGCQuery_RankedByTrend = 3,
  k_EUGCQuery_FavoritedByFriendsRankedByPublicationDate = 4,
  k_EUGCQuery_CreatedByFriendsRankedByPublicationDate = 5,
  k_EUGCQuery_RankedByNumTimesReported = 6,
  k_EUGCQuery_CreatedByFollowedUsersRankedByPublicationDate = 7,
  k_EUGCQuery_NotYetRated = 8,
  k_EUGCQuery_RankedByTotalVotesAsc = 9,
  k_EUGCQuery_RankedByVotesUp = 10,
  k_EUGCQuery_RankedByTextSearch = 11,
  k_EUGCQuery_RankedByTotalUniqueSubscriptions = 12,
  k_EUGCQuery_RankedByPlaytimeTrend = 13,
  k_EUGCQuery_RankedByTotalPlaytime = 14,
  k_EUGCQuery_RankedByAveragePlaytimeTrend = 15,
  k_EUGCQuery_RankedByLifetimeAveragePlaytime = 16,
  k_EUGCQuery_RankedByPlaytimeSessionsTrend = 17,
  k_EUGCQuery_RankedByLifetimePlaytimeSessions = 18,
};
enum EItemUpdateStatus {
  k_EItemUpdateStatusInvalid = 0,
  k_EItemUpdateStatusPreparingConfig = 1,
  k_EItemUpdateStatusPreparingContent = 2,
  k_EItemUpdateStatusUploadingContent = 3,
  k_EItemUpdateStatusUploadingPreviewFile = 4,
  k_EItemUpdateStatusCommittingChanges = 5,
};
enum EItemState {
  k_EItemStateNone = 0,
  k_EItemStateSubscribed = 1,
  k_EItemStateLegacyItem = 2,
  k_EItemStateInstalled = 4,
  k_EItemStateNeedsUpdate = 8,
  k_EItemStateDownloading = 16,
  k_EItemStateDownloadPending = 32,
};
enum EItemStatistic {
  k_EItemStatistic_NumSubscriptions = 0,
  k_EItemStatistic_NumFavorites = 1,
  k_EItemStatistic_NumFollowers = 2,
  k_EItemStatistic_NumUniqueSubscriptions = 3,
  k_EItemStatistic_NumUniqueFavorites = 4,
  k_EItemStatistic_NumUniqueFollowers = 5,
  k_EItemStatistic_NumUniqueWebsiteViews = 6,
  k_EItemStatistic_ReportScore = 7,
  k_EItemStatistic_NumSecondsPlayed = 8,
  k_EItemStatistic_NumPlaytimeSessions = 9,
  k_EItemStatistic_NumComments = 10,
  k_EItemStatistic_NumSecondsPlayedDuringTimePeriod = 11,
  k_EItemStatistic_NumPlaytimeSessionsDuringTimePeriod = 12,
};
enum EItemPreviewType {
  k_EItemPreviewType_Image = 0,
  k_EItemPreviewType_YouTubeVideo = 1,
  k_EItemPreviewType_Sketchfab = 2,
  k_EItemPreviewType_EnvironmentMap_HorizontalCross = 3,
  k_EItemPreviewType_EnvironmentMap_LatLong = 4,
  k_EItemPreviewType_ReservedMax = 255,
};
enum ESteamItemFlags {
  k_ESteamItemNoTrade = 1,
  k_ESteamItemRemoved = 256,
  k_ESteamItemConsumed = 512,
};
enum EParentalFeature {
  k_EFeatureInvalid = 0,
  k_EFeatureStore = 1,
  k_EFeatureCommunity = 2,
  k_EFeatureProfile = 3,
  k_EFeatureFriends = 4,
  k_EFeatureNews = 5,
  k_EFeatureTrading = 6,
  k_EFeatureSettings = 7,
  k_EFeatureConsole = 8,
  k_EFeatureBrowser = 9,
  k_EFeatureParentalSetup = 10,
  k_EFeatureLibrary = 11,
  k_EFeatureTest = 12,
  k_EFeatureMax = 13,
};
struct ValvePackingSentinel_t {
  uint32 m_u32;
  uint64 m_u64;
  uint16 m_u16;
  double m_d;
};
struct CallbackMsg_t {
  HSteamUser m_hSteamUser;
  int m_iCallback;
  uint8 * m_pubParam;
  int m_cubParam;
};
struct SteamServerConnectFailure_t {
  EResult m_eResult;
  bool m_bStillRetrying;
};
struct SteamServersDisconnected_t {
  EResult m_eResult;
};
struct ClientGameServerDeny_t {
  uint32 m_uAppID;
  uint32 m_unGameServerIP;
  uint16 m_usGameServerPort;
  uint16 m_bSecure;
  uint32 m_uReason;
};
struct ValidateAuthTicketResponse_t {
  CSteamID m_SteamID;
  EAuthSessionResponse m_eAuthSessionResponse;
  CSteamID m_OwnerSteamID;
};
struct MicroTxnAuthorizationResponse_t {
  uint32 m_unAppID;
  uint64 m_ulOrderID;
  uint8 m_bAuthorized;
};
struct EncryptedAppTicketResponse_t {
  EResult m_eResult;
};
struct GetAuthSessionTicketResponse_t {
  HAuthTicket m_hAuthTicket;
  EResult m_eResult;
};
struct GameWebCallback_t {
  char   m_szURL [256];
};
struct StoreAuthURLResponse_t {
  char   m_szURL [512];
};
struct FriendGameInfo_t {
  CGameID m_gameID;
  uint32 m_unGameIP;
  uint16 m_usGamePort;
  uint16 m_usQueryPort;
  CSteamID m_steamIDLobby;
};
struct FriendSessionStateInfo_t {
  uint32 m_uiOnlineSessionInstances;
  uint8 m_uiPublishedToFriendsSessionInstance;
};
struct PersonaStateChange_t {
  uint64 m_ulSteamID;
  int m_nChangeFlags;
};
struct GameOverlayActivated_t {
  uint8 m_bActive;
};
struct GameServerChangeRequested_t {
  char   m_rgchServer [64];
  char   m_rgchPassword [64];
};
struct GameLobbyJoinRequested_t {
  CSteamID m_steamIDLobby;
  CSteamID m_steamIDFriend;
};
struct AvatarImageLoaded_t {
  CSteamID m_steamID;
  int m_iImage;
  int m_iWide;
  int m_iTall;
};
struct ClanOfficerListResponse_t {
  CSteamID m_steamIDClan;
  int m_cOfficers;
  uint8 m_bSuccess;
};
struct FriendRichPresenceUpdate_t {
  CSteamID m_steamIDFriend;
  AppId_t m_nAppID;
};
struct GameRichPresenceJoinRequested_t {
  CSteamID m_steamIDFriend;
  char   m_rgchConnect [256];
};
struct GameConnectedClanChatMsg_t {
  CSteamID m_steamIDClanChat;
  CSteamID m_steamIDUser;
  int m_iMessageID;
};
struct GameConnectedChatJoin_t {
  CSteamID m_steamIDClanChat;
  CSteamID m_steamIDUser;
};
struct GameConnectedChatLeave_t {
  CSteamID m_steamIDClanChat;
  CSteamID m_steamIDUser;
  bool m_bKicked;
  bool m_bDropped;
};
struct DownloadClanActivityCountsResult_t {
  bool m_bSuccess;
};
struct JoinClanChatRoomCompletionResult_t {
  CSteamID m_steamIDClanChat;
  EChatRoomEnterResponse m_eChatRoomEnterResponse;
};
struct GameConnectedFriendChatMsg_t {
  CSteamID m_steamIDUser;
  int m_iMessageID;
};
struct FriendsGetFollowerCount_t {
  EResult m_eResult;
  CSteamID m_steamID;
  int m_nCount;
};
struct FriendsIsFollowing_t {
  EResult m_eResult;
  CSteamID m_steamID;
  bool m_bIsFollowing;
};
struct FriendsEnumerateFollowingList_t {
  EResult m_eResult;
  CSteamID   m_rgSteamID [50];
  int32 m_nResultsReturned;
  int32 m_nTotalResultCount;
};
struct SetPersonaNameResponse_t {
  bool m_bSuccess;
  bool m_bLocalSuccess;
  EResult m_result;
};
struct LowBatteryPower_t {
  uint8 m_nMinutesBatteryLeft;
};
struct SteamAPICallCompleted_t {
  SteamAPICall_t m_hAsyncCall;
  int m_iCallback;
  uint32 m_cubParam;
};
struct CheckFileSignature_t {
  ECheckFileSignature m_eCheckFileSignature;
};
struct GamepadTextInputDismissed_t {
  bool m_bSubmitted;
  uint32 m_unSubmittedText;
};
struct MatchMakingKeyValuePair_t {
  char   m_szKey [256];
  char   m_szValue [256];
};
struct servernetadr_t {
  uint16 m_usConnectionPort;
  uint16 m_usQueryPort;
  uint32 m_unIP;
};
struct gameserveritem_t {
  servernetadr_t m_NetAdr;
  int m_nPing;
  bool m_bHadSuccessfulResponse;
  bool m_bDoNotRefresh;
  char   m_szGameDir [32];
  char   m_szMap [32];
  char   m_szGameDescription [64];
  uint32 m_nAppID;
  int m_nPlayers;
  int m_nMaxPlayers;
  int m_nBotPlayers;
  bool m_bPassword;
  bool m_bSecure;
  uint32 m_ulTimeLastPlayed;
  int m_nServerVersion;
  char   m_szServerName [64];
  char   m_szGameTags [128];
  CSteamID m_steamID;
};
struct FavoritesListChanged_t {
  uint32 m_nIP;
  uint32 m_nQueryPort;
  uint32 m_nConnPort;
  uint32 m_nAppID;
  uint32 m_nFlags;
  bool m_bAdd;
  AccountID_t m_unAccountId;
};
struct LobbyInvite_t {
  uint64 m_ulSteamIDUser;
  uint64 m_ulSteamIDLobby;
  uint64 m_ulGameID;
};
struct LobbyEnter_t {
  uint64 m_ulSteamIDLobby;
  uint32 m_rgfChatPermissions;
  bool m_bLocked;
  uint32 m_EChatRoomEnterResponse;
};
struct LobbyDataUpdate_t {
  uint64 m_ulSteamIDLobby;
  uint64 m_ulSteamIDMember;
  uint8 m_bSuccess;
};
struct LobbyChatUpdate_t {
  uint64 m_ulSteamIDLobby;
  uint64 m_ulSteamIDUserChanged;
  uint64 m_ulSteamIDMakingChange;
  uint32 m_rgfChatMemberStateChange;
};
struct LobbyChatMsg_t {
  uint64 m_ulSteamIDLobby;
  uint64 m_ulSteamIDUser;
  uint8 m_eChatEntryType;
  uint32 m_iChatID;
};
struct LobbyGameCreated_t {
  uint64 m_ulSteamIDLobby;
  uint64 m_ulSteamIDGameServer;
  uint32 m_unIP;
  uint16 m_usPort;
};
struct LobbyMatchList_t {
  uint32 m_nLobbiesMatching;
};
struct LobbyKicked_t {
  uint64 m_ulSteamIDLobby;
  uint64 m_ulSteamIDAdmin;
  uint8 m_bKickedDueToDisconnect;
};
struct LobbyCreated_t {
  EResult m_eResult;
  uint64 m_ulSteamIDLobby;
};
struct PSNGameBootInviteResult_t {
  bool m_bGameBootInviteExists;
  CSteamID m_steamIDLobby;
};
struct FavoritesListAccountsUpdated_t {
  EResult m_eResult;
};
struct SteamParamStringArray_t {
  const char ** m_ppStrings;
  int32 m_nNumStrings;
};
struct RemoteStorageAppSyncedClient_t {
  AppId_t m_nAppID;
  EResult m_eResult;
  int m_unNumDownloads;
};
struct RemoteStorageAppSyncedServer_t {
  AppId_t m_nAppID;
  EResult m_eResult;
  int m_unNumUploads;
};
struct RemoteStorageAppSyncProgress_t {
  char   m_rgchCurrentFile [260];
  AppId_t m_nAppID;
  uint32 m_uBytesTransferredThisChunk;
  double m_dAppPercentComplete;
  bool m_bUploading;
};
struct RemoteStorageAppSyncStatusCheck_t {
  AppId_t m_nAppID;
  EResult m_eResult;
};
struct RemoteStorageFileShareResult_t {
  EResult m_eResult;
  UGCHandle_t m_hFile;
  char   m_rgchFilename [260];
};
struct RemoteStoragePublishFileResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
};
struct RemoteStorageDeletePublishedFileResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
};
struct RemoteStorageEnumerateUserPublishedFilesResult_t {
  EResult m_eResult;
  int32 m_nResultsReturned;
  int32 m_nTotalResultCount;
  PublishedFileId_t   m_rgPublishedFileId [50];
};
struct RemoteStorageSubscribePublishedFileResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
};
struct RemoteStorageEnumerateUserSubscribedFilesResult_t {
  EResult m_eResult;
  int32 m_nResultsReturned;
  int32 m_nTotalResultCount;
  PublishedFileId_t   m_rgPublishedFileId [50];
  uint32   m_rgRTimeSubscribed [50];
};
struct RemoteStorageUnsubscribePublishedFileResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
};
struct RemoteStorageUpdatePublishedFileResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
};
struct RemoteStorageDownloadUGCResult_t {
  EResult m_eResult;
  UGCHandle_t m_hFile;
  AppId_t m_nAppID;
  int32 m_nSizeInBytes;
  char   m_pchFileName [260];
  uint64 m_ulSteamIDOwner;
};
struct RemoteStorageGetPublishedFileDetailsResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nCreatorAppID;
  AppId_t m_nConsumerAppID;
  char   m_rgchTitle [129];
  char   m_rgchDescription [8000];
  UGCHandle_t m_hFile;
  UGCHandle_t m_hPreviewFile;
  uint64 m_ulSteamIDOwner;
  uint32 m_rtimeCreated;
  uint32 m_rtimeUpdated;
  ERemoteStoragePublishedFileVisibility m_eVisibility;
  bool m_bBanned;
  char   m_rgchTags [1025];
  bool m_bTagsTruncated;
  char   m_pchFileName [260];
  int32 m_nFileSize;
  int32 m_nPreviewFileSize;
  char   m_rgchURL [256];
  EWorkshopFileType m_eFileType;
  bool m_bAcceptedForUse;
};
struct RemoteStorageEnumerateWorkshopFilesResult_t {
  EResult m_eResult;
  int32 m_nResultsReturned;
  int32 m_nTotalResultCount;
  PublishedFileId_t   m_rgPublishedFileId [50];
  float   m_rgScore [50];
  AppId_t m_nAppId;
  uint32 m_unStartIndex;
};
struct RemoteStorageGetPublishedItemVoteDetailsResult_t {
  EResult m_eResult;
  PublishedFileId_t m_unPublishedFileId;
  int32 m_nVotesFor;
  int32 m_nVotesAgainst;
  int32 m_nReports;
  float m_fScore;
};
struct RemoteStoragePublishedFileSubscribed_t {
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nAppID;
};
struct RemoteStoragePublishedFileUnsubscribed_t {
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nAppID;
};
struct RemoteStoragePublishedFileDeleted_t {
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nAppID;
};
struct RemoteStorageUpdateUserPublishedItemVoteResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
};
struct RemoteStorageUserVoteDetails_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  EWorkshopVote m_eVote;
};
struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t {
  EResult m_eResult;
  int32 m_nResultsReturned;
  int32 m_nTotalResultCount;
  PublishedFileId_t   m_rgPublishedFileId [50];
};
struct RemoteStorageSetUserPublishedFileActionResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  EWorkshopFileAction m_eAction;
};
struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t {
  EResult m_eResult;
  EWorkshopFileAction m_eAction;
  int32 m_nResultsReturned;
  int32 m_nTotalResultCount;
  PublishedFileId_t   m_rgPublishedFileId [50];
  uint32   m_rgRTimeUpdated [50];
};
struct RemoteStoragePublishFileProgress_t {
  double m_dPercentFile;
  bool m_bPreview;
};
struct RemoteStoragePublishedFileUpdated_t {
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nAppID;
  uint64 m_ulUnused;
};
struct RemoteStorageFileWriteAsyncComplete_t {
  EResult m_eResult;
};
struct RemoteStorageFileReadAsyncComplete_t {
  SteamAPICall_t m_hFileReadAsync;
  EResult m_eResult;
  uint32 m_nOffset;
  uint32 m_cubRead;
};
struct LeaderboardEntry_t {
  CSteamID m_steamIDUser;
  int32 m_nGlobalRank;
  int32 m_nScore;
  int32 m_cDetails;
  UGCHandle_t m_hUGC;
};
struct UserStatsReceived_t {
  uint64 m_nGameID;
  EResult m_eResult;
  CSteamID m_steamIDUser;
};
struct UserStatsStored_t {
  uint64 m_nGameID;
  EResult m_eResult;
};
struct UserAchievementStored_t {
  uint64 m_nGameID;
  bool m_bGroupAchievement;
  char   m_rgchAchievementName [128];
  uint32 m_nCurProgress;
  uint32 m_nMaxProgress;
};
struct LeaderboardFindResult_t {
  SteamLeaderboard_t m_hSteamLeaderboard;
  uint8 m_bLeaderboardFound;
};
struct LeaderboardScoresDownloaded_t {
  SteamLeaderboard_t m_hSteamLeaderboard;
  SteamLeaderboardEntries_t m_hSteamLeaderboardEntries;
  int m_cEntryCount;
};
struct LeaderboardScoreUploaded_t {
  uint8 m_bSuccess;
  SteamLeaderboard_t m_hSteamLeaderboard;
  int32 m_nScore;
  uint8 m_bScoreChanged;
  int m_nGlobalRankNew;
  int m_nGlobalRankPrevious;
};
struct NumberOfCurrentPlayers_t {
  uint8 m_bSuccess;
  int32 m_cPlayers;
};
struct UserStatsUnloaded_t {
  CSteamID m_steamIDUser;
};
struct UserAchievementIconFetched_t {
  CGameID m_nGameID;
  char   m_rgchAchievementName [128];
  bool m_bAchieved;
  int m_nIconHandle;
};
struct GlobalAchievementPercentagesReady_t {
  uint64 m_nGameID;
  EResult m_eResult;
};
struct LeaderboardUGCSet_t {
  EResult m_eResult;
  SteamLeaderboard_t m_hSteamLeaderboard;
};
struct PS3TrophiesInstalled_t {
  uint64 m_nGameID;
  EResult m_eResult;
  uint64 m_ulRequiredDiskSpace;
};
struct GlobalStatsReceived_t {
  uint64 m_nGameID;
  EResult m_eResult;
};
struct DlcInstalled_t {
  AppId_t m_nAppID;
};
struct RegisterActivationCodeResponse_t {
  ERegisterActivationCodeResult m_eResult;
  uint32 m_unPackageRegistered;
};
struct AppProofOfPurchaseKeyResponse_t {
  EResult m_eResult;
  uint32 m_nAppID;
  uint32 m_cchKeyLength;
  char   m_rgchKey [240];
};
struct FileDetailsResult_t {
  EResult m_eResult;
  uint64 m_ulFileSize;
  uint8   m_FileSHA [20];
  uint32 m_unFlags;
};
struct P2PSessionState_t {
  uint8 m_bConnectionActive;
  uint8 m_bConnecting;
  uint8 m_eP2PSessionError;
  uint8 m_bUsingRelay;
  int32 m_nBytesQueuedForSend;
  int32 m_nPacketsQueuedForSend;
  uint32 m_nRemoteIP;
  uint16 m_nRemotePort;
};
struct P2PSessionRequest_t {
  CSteamID m_steamIDRemote;
};
struct P2PSessionConnectFail_t {
  CSteamID m_steamIDRemote;
  uint8 m_eP2PSessionError;
};
struct SocketStatusCallback_t {
  SNetSocket_t m_hSocket;
  SNetListenSocket_t m_hListenSocket;
  CSteamID m_steamIDRemote;
  int m_eSNetSocketState;
};
struct ScreenshotReady_t {
  ScreenshotHandle m_hLocal;
  EResult m_eResult;
};
struct VolumeHasChanged_t {
  typedef struct VolumeHasChanged_t SteamCallback_t;
  float m_flNewVolume;
};
struct MusicPlayerWantsShuffled_t {
  typedef struct MusicPlayerWantsShuffled_t SteamCallback_t;
  bool m_bShuffled;
};
struct MusicPlayerWantsLooped_t {
  typedef struct MusicPlayerWantsLooped_t SteamCallback_t;
  bool m_bLooped;
};
struct MusicPlayerWantsVolume_t {
  typedef struct MusicPlayerWantsVolume_t SteamCallback_t;
  float m_flNewVolume;
};
struct MusicPlayerSelectsQueueEntry_t {
  typedef struct MusicPlayerSelectsQueueEntry_t SteamCallback_t;
  int nID;
};
struct MusicPlayerSelectsPlaylistEntry_t {
  typedef struct MusicPlayerSelectsPlaylistEntry_t SteamCallback_t;
  int nID;
};
struct MusicPlayerWantsPlayingRepeatStatus_t {
  typedef struct MusicPlayerWantsPlayingRepeatStatus_t SteamCallback_t;
  int m_nPlayingRepeatStatus;
};
struct HTTPRequestCompleted_t {
  HTTPRequestHandle m_hRequest;
  uint64 m_ulContextValue;
  bool m_bRequestSuccessful;
  EHTTPStatusCode m_eStatusCode;
  uint32 m_unBodySize;
};
struct HTTPRequestHeadersReceived_t {
  HTTPRequestHandle m_hRequest;
  uint64 m_ulContextValue;
};
struct HTTPRequestDataReceived_t {
  HTTPRequestHandle m_hRequest;
  uint64 m_ulContextValue;
  uint32 m_cOffset;
  uint32 m_cBytesReceived;
};
struct ControllerAnalogActionData_t {
  EControllerSourceMode eMode;
  float x;
  float y;
  bool bActive;
};
struct ControllerDigitalActionData_t {
  bool bState;
  bool bActive;
};
struct ControllerMotionData_t {
  float rotQuatX;
  float rotQuatY;
  float rotQuatZ;
  float rotQuatW;
  float posAccelX;
  float posAccelY;
  float posAccelZ;
  float rotVelX;
  float rotVelY;
  float rotVelZ;
};
struct SteamUGCDetails_t {
  PublishedFileId_t m_nPublishedFileId;
  EResult m_eResult;
  EWorkshopFileType m_eFileType;
  AppId_t m_nCreatorAppID;
  AppId_t m_nConsumerAppID;
  char   m_rgchTitle [129];
  char   m_rgchDescription [8000];
  uint64 m_ulSteamIDOwner;
  uint32 m_rtimeCreated;
  uint32 m_rtimeUpdated;
  uint32 m_rtimeAddedToUserList;
  ERemoteStoragePublishedFileVisibility m_eVisibility;
  bool m_bBanned;
  bool m_bAcceptedForUse;
  bool m_bTagsTruncated;
  char   m_rgchTags [1025];
  UGCHandle_t m_hFile;
  UGCHandle_t m_hPreviewFile;
  char   m_pchFileName [260];
  int32 m_nFileSize;
  int32 m_nPreviewFileSize;
  char   m_rgchURL [256];
  uint32 m_unVotesUp;
  uint32 m_unVotesDown;
  float m_flScore;
  uint32 m_unNumChildren;
};
struct SteamUGCQueryCompleted_t {
  UGCQueryHandle_t m_handle;
  EResult m_eResult;
  uint32 m_unNumResultsReturned;
  uint32 m_unTotalMatchingResults;
  bool m_bCachedData;
};
struct SteamUGCRequestUGCDetailsResult_t {
  SteamUGCDetails_t m_details;
  bool m_bCachedData;
};
struct CreateItemResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
};
struct SubmitItemUpdateResult_t {
  EResult m_eResult;
  bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
  PublishedFileId_t m_nPublishedFileId;
};
struct DownloadItemResult_t {
  AppId_t m_unAppID;
  PublishedFileId_t m_nPublishedFileId;
  EResult m_eResult;
};
struct UserFavoriteItemsListChanged_t {
  PublishedFileId_t m_nPublishedFileId;
  EResult m_eResult;
  bool m_bWasAddRequest;
};
struct SetUserItemVoteResult_t {
  PublishedFileId_t m_nPublishedFileId;
  EResult m_eResult;
  bool m_bVoteUp;
};
struct GetUserItemVoteResult_t {
  PublishedFileId_t m_nPublishedFileId;
  EResult m_eResult;
  bool m_bVotedUp;
  bool m_bVotedDown;
  bool m_bVoteSkipped;
};
struct StartPlaytimeTrackingResult_t {
  EResult m_eResult;
};
struct StopPlaytimeTrackingResult_t {
  EResult m_eResult;
};
struct AddUGCDependencyResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  PublishedFileId_t m_nChildPublishedFileId;
};
struct RemoveUGCDependencyResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  PublishedFileId_t m_nChildPublishedFileId;
};
struct AddAppDependencyResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nAppID;
};
struct RemoveAppDependencyResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  AppId_t m_nAppID;
};
struct GetAppDependenciesResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
  AppId_t   m_rgAppIDs [32];
  uint32 m_nNumAppDependencies;
  uint32 m_nTotalNumAppDependencies;
};
struct DeleteItemResult_t {
  EResult m_eResult;
  PublishedFileId_t m_nPublishedFileId;
};
struct SteamAppInstalled_t {
  typedef struct SteamAppInstalled_t SteamCallback_t;
  AppId_t m_nAppID;
};
struct SteamAppUninstalled_t {
  typedef struct SteamAppUninstalled_t SteamCallback_t;
  AppId_t m_nAppID;
};
struct HTML_BrowserReady_t {
  typedef struct HTML_BrowserReady_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
};
struct HTML_NeedsPaint_t {
  typedef struct HTML_NeedsPaint_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pBGRA;
  uint32 unWide;
  uint32 unTall;
  uint32 unUpdateX;
  uint32 unUpdateY;
  uint32 unUpdateWide;
  uint32 unUpdateTall;
  uint32 unScrollX;
  uint32 unScrollY;
  float flPageScale;
  uint32 unPageSerial;
};
struct HTML_StartRequest_t {
  typedef struct HTML_StartRequest_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchURL;
  const char * pchTarget;
  const char * pchPostData;
  bool bIsRedirect;
};
struct HTML_CloseBrowser_t {
  typedef struct HTML_CloseBrowser_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
};
struct HTML_URLChanged_t {
  typedef struct HTML_URLChanged_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchURL;
  const char * pchPostData;
  bool bIsRedirect;
  const char * pchPageTitle;
  bool bNewNavigation;
};
struct HTML_FinishedRequest_t {
  typedef struct HTML_FinishedRequest_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchURL;
  const char * pchPageTitle;
};
struct HTML_OpenLinkInNewTab_t {
  typedef struct HTML_OpenLinkInNewTab_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchURL;
};
struct HTML_ChangedTitle_t {
  typedef struct HTML_ChangedTitle_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchTitle;
};
struct HTML_SearchResults_t {
  typedef struct HTML_SearchResults_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  uint32 unResults;
  uint32 unCurrentMatch;
};
struct HTML_CanGoBackAndForward_t {
  typedef struct HTML_CanGoBackAndForward_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  bool bCanGoBack;
  bool bCanGoForward;
};
struct HTML_HorizontalScroll_t {
  typedef struct HTML_HorizontalScroll_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  uint32 unScrollMax;
  uint32 unScrollCurrent;
  float flPageScale;
  bool bVisible;
  uint32 unPageSize;
};
struct HTML_VerticalScroll_t {
  typedef struct HTML_VerticalScroll_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  uint32 unScrollMax;
  uint32 unScrollCurrent;
  float flPageScale;
  bool bVisible;
  uint32 unPageSize;
};
struct HTML_LinkAtPosition_t {
  typedef struct HTML_LinkAtPosition_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  uint32 x;
  uint32 y;
  const char * pchURL;
  bool bInput;
  bool bLiveLink;
};
struct HTML_JSAlert_t {
  typedef struct HTML_JSAlert_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchMessage;
};
struct HTML_JSConfirm_t {
  typedef struct HTML_JSConfirm_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchMessage;
};
struct HTML_FileOpenDialog_t {
  typedef struct HTML_FileOpenDialog_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchTitle;
  const char * pchInitialFile;
};
struct HTML_NewWindow_t {
  typedef struct HTML_NewWindow_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchURL;
  uint32 unX;
  uint32 unY;
  uint32 unWide;
  uint32 unTall;
  HHTMLBrowser unNewWindow_BrowserHandle;
};
struct HTML_SetCursor_t {
  typedef struct HTML_SetCursor_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  uint32 eMouseCursor;
};
struct HTML_StatusText_t {
  typedef struct HTML_StatusText_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchMsg;
};
struct HTML_ShowToolTip_t {
  typedef struct HTML_ShowToolTip_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchMsg;
};
struct HTML_UpdateToolTip_t {
  typedef struct HTML_UpdateToolTip_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  const char * pchMsg;
};
struct HTML_HideToolTip_t {
  typedef struct HTML_HideToolTip_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
};
struct HTML_BrowserRestarted_t {
  typedef struct HTML_BrowserRestarted_t SteamCallback_t;
  HHTMLBrowser unBrowserHandle;
  HHTMLBrowser unOldBrowserHandle;
};
struct SteamItemDetails_t {
  SteamItemInstanceID_t m_itemId;
  SteamItemDef_t m_iDefinition;
  uint16 m_unQuantity;
  uint16 m_unFlags;
};
struct SteamInventoryResultReady_t {
  SteamInventoryResult_t m_handle;
  EResult m_result;
};
struct SteamInventoryFullUpdate_t {
  SteamInventoryResult_t m_handle;
};
struct SteamInventoryEligiblePromoItemDefIDs_t {
  EResult m_result;
  CSteamID m_steamID;
  int m_numEligiblePromoItemDefs;
  bool m_bCachedData;
};
struct SteamInventoryStartPurchaseResult_t {
  EResult m_result;
  uint64 m_ulOrderID;
  uint64 m_ulTransID;
};
struct SteamInventoryRequestPricesResult_t {
  EResult m_result;
  char   m_rgchCurrency [4];
};
struct BroadcastUploadStop_t {
  typedef struct BroadcastUploadStop_t SteamCallback_t;
  EBroadcastUploadResult m_eResult;
};
struct GetVideoURLResult_t {
  typedef struct GetVideoURLResult_t SteamCallback_t;
  EResult m_eResult;
  AppId_t m_unVideoAppID;
  char   m_rgchURL [256];
};
struct GetOPFSettingsResult_t {
  typedef struct GetOPFSettingsResult_t SteamCallback_t;
  EResult m_eResult;
  AppId_t m_unVideoAppID;
};
struct GSClientApprove_t {
  CSteamID m_SteamID;
  CSteamID m_OwnerSteamID;
};
struct GSClientDeny_t {
  CSteamID m_SteamID;
  EDenyReason m_eDenyReason;
  char   m_rgchOptionalText [128];
};
struct GSClientKick_t {
  CSteamID m_SteamID;
  EDenyReason m_eDenyReason;
};
struct GSClientAchievementStatus_t {
  uint64 m_SteamID;
  char   m_pchAchievement [128];
  bool m_bUnlocked;
};
struct GSPolicyResponse_t {
  uint8 m_bSecure;
};
struct GSGameplayStats_t {
  EResult m_eResult;
  int32 m_nRank;
  uint32 m_unTotalConnects;
  uint32 m_unTotalMinutesPlayed;
};
struct GSClientGroupStatus_t {
  CSteamID m_SteamIDUser;
  CSteamID m_SteamIDGroup;
  bool m_bMember;
  bool m_bOfficer;
};
struct GSReputation_t {
  EResult m_eResult;
  uint32 m_unReputationScore;
  bool m_bBanned;
  uint32 m_unBannedIP;
  uint16 m_usBannedPort;
  uint64 m_ulBannedGameID;
  uint32 m_unBanExpires;
};
struct AssociateWithClanResult_t {
  EResult m_eResult;
};
struct ComputeNewPlayerCompatibilityResult_t {
  EResult m_eResult;
  int m_cPlayersThatDontLikeCandidate;
  int m_cPlayersThatCandidateDoesntLike;
  int m_cClanPlayersThatDontLikeCandidate;
  CSteamID m_SteamIDCandidate;
};
struct GSStatsReceived_t {
  EResult m_eResult;
  CSteamID m_steamIDUser;
};
struct GSStatsStored_t {
  EResult m_eResult;
  CSteamID m_steamIDUser;
};
struct GSStatsUnloaded_t {
  CSteamID m_steamIDUser;
};
struct ItemInstalled_t {
  AppId_t m_unAppID;
  PublishedFileId_t m_nPublishedFileId;
};
struct SteamInventoryDefinitionUpdate_t {
  
};
struct SteamParentalSettingsChanged_t {
  
};
struct SteamServersConnected_t {
  
};
struct NewLaunchQueryParameters_t {
  
};
struct GCMessageAvailable_t {
  uint32 m_nMessageSize;
};
struct GCMessageFailed_t {
  
};
struct ScreenshotRequested_t {
  
};
struct LicensesUpdated_t {
  
};
struct SteamShutdown_t {
  
};
struct IPCountry_t {
  
};
struct IPCFailure_t {
  enum EFailureType {
    k_EFailureFlushedCallbackQueue = 0,
    k_EFailurePipeFail = 1,
  };
  uint8 m_eFailureType;
};
struct PlaybackStatusHasChanged_t {
  typedef struct PlaybackStatusHasChanged_t SteamCallback_t;
};
struct MusicPlayerRemoteWillActivate_t {
  typedef struct MusicPlayerRemoteWillActivate_t SteamCallback_t;
};
struct MusicPlayerRemoteWillDeactivate_t {
  typedef struct MusicPlayerRemoteWillDeactivate_t SteamCallback_t;
};
struct MusicPlayerRemoteToFront_t {
  typedef struct MusicPlayerRemoteToFront_t SteamCallback_t;
};
struct MusicPlayerWillQuit_t {
  typedef struct MusicPlayerWillQuit_t SteamCallback_t;
};
struct MusicPlayerWantsPlay_t {
  typedef struct MusicPlayerWantsPlay_t SteamCallback_t;
};
struct MusicPlayerWantsPause_t {
  typedef struct MusicPlayerWantsPause_t SteamCallback_t;
};
struct MusicPlayerWantsPlayPrevious_t {
  typedef struct MusicPlayerWantsPlayPrevious_t SteamCallback_t;
};
struct MusicPlayerWantsPlayNext_t {
  typedef struct MusicPlayerWantsPlayNext_t SteamCallback_t;
};
struct BroadcastUploadStart_t {
  typedef struct BroadcastUploadStart_t SteamCallback_t;
};
struct ISteamHTMLSurface {
  enum EHTMLMouseButton {
    eHTMLMouseButton_Left = 0,
    eHTMLMouseButton_Right = 1,
    eHTMLMouseButton_Middle = 2,
  };
  enum EMouseCursor {
    dc_user = 0,
    dc_none = 1,
    dc_arrow = 2,
    dc_ibeam = 3,
    dc_hourglass = 4,
    dc_waitarrow = 5,
    dc_crosshair = 6,
    dc_up = 7,
    dc_sizenw = 8,
    dc_sizese = 9,
    dc_sizene = 10,
    dc_sizesw = 11,
    dc_sizew = 12,
    dc_sizee = 13,
    dc_sizen = 14,
    dc_sizes = 15,
    dc_sizewe = 16,
    dc_sizens = 17,
    dc_sizeall = 18,
    dc_no = 19,
    dc_hand = 20,
    dc_blank = 21,
    dc_middle_pan = 22,
    dc_north_pan = 23,
    dc_north_east_pan = 24,
    dc_east_pan = 25,
    dc_south_east_pan = 26,
    dc_south_pan = 27,
    dc_south_west_pan = 28,
    dc_west_pan = 29,
    dc_north_west_pan = 30,
    dc_alias = 31,
    dc_cell = 32,
    dc_colresize = 33,
    dc_copycur = 34,
    dc_verticaltext = 35,
    dc_rowresize = 36,
    dc_zoomin = 37,
    dc_zoomout = 38,
    dc_help = 39,
    dc_custom = 40,
    dc_last = 41,
  };
  enum EHTMLKeyModifiers {
    k_eHTMLKeyModifier_None = 0,
    k_eHTMLKeyModifier_AltDown = 1,
    k_eHTMLKeyModifier_CtrlDown = 2,
    k_eHTMLKeyModifier_ShiftDown = 4,
  };
  [[gnu::ms_abi]] virtual void DestructISteamHTMLSurface();
  [[gnu::ms_abi]] virtual bool Init();
  [[gnu::ms_abi]] virtual bool Shutdown();
  [[gnu::ms_abi]] virtual SteamAPICall_t CreateBrowser(const char * pchUserAgent, const char * pchUserCSS);
  [[gnu::ms_abi]] virtual void RemoveBrowser(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void LoadURL(HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData);
  [[gnu::ms_abi]] virtual void SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight);
  [[gnu::ms_abi]] virtual void StopLoad(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void Reload(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void GoBack(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void GoForward(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void AddHeader(HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue);
  [[gnu::ms_abi]] virtual void ExecuteJavascript(HHTMLBrowser unBrowserHandle, const char * pchScript);
  [[gnu::ms_abi]] virtual void MouseUp(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton);
  [[gnu::ms_abi]] virtual void MouseDown(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton);
  [[gnu::ms_abi]] virtual void MouseDoubleClick(HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton);
  [[gnu::ms_abi]] virtual void MouseMove(HHTMLBrowser unBrowserHandle, int x, int y);
  [[gnu::ms_abi]] virtual void MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta);
  [[gnu::ms_abi]] virtual void KeyDown(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers);
  [[gnu::ms_abi]] virtual void KeyUp(HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers);
  [[gnu::ms_abi]] virtual void KeyChar(HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers);
  [[gnu::ms_abi]] virtual void SetHorizontalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll);
  [[gnu::ms_abi]] virtual void SetVerticalScroll(HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll);
  [[gnu::ms_abi]] virtual void SetKeyFocus(HHTMLBrowser unBrowserHandle, bool bHasKeyFocus);
  [[gnu::ms_abi]] virtual void ViewSource(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void CopyToClipboard(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void PasteFromClipboard(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void Find(HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse);
  [[gnu::ms_abi]] virtual void StopFind(HHTMLBrowser unBrowserHandle);
  [[gnu::ms_abi]] virtual void GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x, int y);
  [[gnu::ms_abi]] virtual void SetCookie(const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly);
  [[gnu::ms_abi]] virtual void SetPageScaleFactor(HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY);
  [[gnu::ms_abi]] virtual void SetBackgroundMode(HHTMLBrowser unBrowserHandle, bool bBackgroundMode);
  [[gnu::ms_abi]] virtual void SetDPIScalingFactor(HHTMLBrowser unBrowserHandle, float flDPIScaling);
  [[gnu::ms_abi]] virtual void AllowStartRequest(HHTMLBrowser unBrowserHandle, bool bAllowed);
  [[gnu::ms_abi]] virtual void JSDialogResponse(HHTMLBrowser unBrowserHandle, bool bResult);
};
struct ISteamClient {
  [[gnu::ms_abi]] virtual HSteamPipe CreateSteamPipe();
  [[gnu::ms_abi]] virtual bool BReleaseSteamPipe(HSteamPipe hSteamPipe);
  [[gnu::ms_abi]] virtual HSteamUser ConnectToGlobalUser(HSteamPipe hSteamPipe);
  [[gnu::ms_abi]] virtual HSteamUser CreateLocalUser(HSteamPipe * phSteamPipe, EAccountType eAccountType);
  [[gnu::ms_abi]] virtual void ReleaseUser(HSteamPipe hSteamPipe, HSteamUser hUser);
  [[gnu::ms_abi]] virtual ISteamUser * GetISteamUser(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamGameServer * GetISteamGameServer(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual void SetLocalIPBinding(uint32 unIP, uint16 usPort);
  [[gnu::ms_abi]] virtual ISteamFriends * GetISteamFriends(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamUtils * GetISteamUtils(HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamMatchmaking * GetISteamMatchmaking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamMatchmakingServers * GetISteamMatchmakingServers(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual void * GetISteamGenericInterface(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamUserStats * GetISteamUserStats(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamGameServerStats * GetISteamGameServerStats(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamApps * GetISteamApps(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamNetworking * GetISteamNetworking(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamRemoteStorage * GetISteamRemoteStorage(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamScreenshots * GetISteamScreenshots(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual uint32 GetIPCCallCount();
  [[gnu::ms_abi]] virtual void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);
  [[gnu::ms_abi]] virtual bool BShutdownIfAllPipesClosed();
  [[gnu::ms_abi]] virtual ISteamHTTP * GetISteamHTTP(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamController * GetISteamController(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamUGC * GetISteamUGC(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamAppList * GetISteamAppList(HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamMusic * GetISteamMusic(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamMusicRemote * GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamHTMLSurface * GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamInventory * GetISteamInventory(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamVideo * GetISteamVideo(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
  [[gnu::ms_abi]] virtual ISteamParentalSettings * GetISteamParentalSettings(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion);
};
struct ISteamUser {
  [[gnu::ms_abi]] virtual HSteamUser GetHSteamUser();
  [[gnu::ms_abi]] virtual bool BLoggedOn();
  [[gnu::ms_abi]] virtual CSteamID GetSteamID();
  [[gnu::ms_abi]] virtual int InitiateGameConnection(void * pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure);
  [[gnu::ms_abi]] virtual void TerminateGameConnection(uint32 unIPServer, uint16 usPortServer);
  [[gnu::ms_abi]] virtual void TrackAppUsageEvent(CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo);
  [[gnu::ms_abi]] virtual bool GetUserDataFolder(char * pchBuffer, int cubBuffer);
  [[gnu::ms_abi]] virtual void StartVoiceRecording();
  [[gnu::ms_abi]] virtual void StopVoiceRecording();
  [[gnu::ms_abi]] virtual EVoiceResult GetAvailableVoice(uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated);
  [[gnu::ms_abi]] virtual EVoiceResult GetVoice(bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated);
  [[gnu::ms_abi]] virtual EVoiceResult DecompressVoice(const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate);
  [[gnu::ms_abi]] virtual uint32 GetVoiceOptimalSampleRate();
  [[gnu::ms_abi]] virtual HAuthTicket GetAuthSessionTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket);
  [[gnu::ms_abi]] virtual EBeginAuthSessionResult BeginAuthSession(const void * pAuthTicket, int cbAuthTicket, CSteamID steamID);
  [[gnu::ms_abi]] virtual void EndAuthSession(CSteamID steamID);
  [[gnu::ms_abi]] virtual void CancelAuthTicket(HAuthTicket hAuthTicket);
  [[gnu::ms_abi]] virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);
  [[gnu::ms_abi]] virtual bool BIsBehindNAT();
  [[gnu::ms_abi]] virtual void AdvertiseGame(CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestEncryptedAppTicket(void * pDataToInclude, int cbDataToInclude);
  [[gnu::ms_abi]] virtual bool GetEncryptedAppTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket);
  [[gnu::ms_abi]] virtual int GetGameBadgeLevel(int nSeries, bool bFoil);
  [[gnu::ms_abi]] virtual int GetPlayerSteamLevel();
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestStoreAuthURL(const char * pchRedirectURL);
  [[gnu::ms_abi]] virtual bool BIsPhoneVerified();
  [[gnu::ms_abi]] virtual bool BIsTwoFactorEnabled();
  [[gnu::ms_abi]] virtual bool BIsPhoneIdentifying();
  [[gnu::ms_abi]] virtual bool BIsPhoneRequiringVerification();
};
struct ISteamFriends {
  [[gnu::ms_abi]] virtual const char * GetPersonaName();
  [[gnu::ms_abi]] virtual SteamAPICall_t SetPersonaName(const char * pchPersonaName);
  [[gnu::ms_abi]] virtual EPersonaState GetPersonaState();
  [[gnu::ms_abi]] virtual int GetFriendCount(int iFriendFlags);
  [[gnu::ms_abi]] virtual CSteamID GetFriendByIndex(int iFriend, int iFriendFlags);
  [[gnu::ms_abi]] virtual EFriendRelationship GetFriendRelationship(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual EPersonaState GetFriendPersonaState(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual const char * GetFriendPersonaName(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual bool GetFriendGamePlayed(CSteamID steamIDFriend, FriendGameInfo_t * pFriendGameInfo);
  [[gnu::ms_abi]] virtual const char * GetFriendPersonaNameHistory(CSteamID steamIDFriend, int iPersonaName);
  [[gnu::ms_abi]] virtual int GetFriendSteamLevel(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual const char * GetPlayerNickname(CSteamID steamIDPlayer);
  [[gnu::ms_abi]] virtual int GetFriendsGroupCount();
  [[gnu::ms_abi]] virtual FriendsGroupID_t GetFriendsGroupIDByIndex(int iFG);
  [[gnu::ms_abi]] virtual const char * GetFriendsGroupName(FriendsGroupID_t friendsGroupID);
  [[gnu::ms_abi]] virtual int GetFriendsGroupMembersCount(FriendsGroupID_t friendsGroupID);
  [[gnu::ms_abi]] virtual void GetFriendsGroupMembersList(FriendsGroupID_t friendsGroupID, CSteamID * pOutSteamIDMembers, int nMembersCount);
  [[gnu::ms_abi]] virtual bool HasFriend(CSteamID steamIDFriend, int iFriendFlags);
  [[gnu::ms_abi]] virtual int GetClanCount();
  [[gnu::ms_abi]] virtual CSteamID GetClanByIndex(int iClan);
  [[gnu::ms_abi]] virtual const char * GetClanName(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual const char * GetClanTag(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual bool GetClanActivityCounts(CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting);
  [[gnu::ms_abi]] virtual SteamAPICall_t DownloadClanActivityCounts(CSteamID * psteamIDClans, int cClansToRequest);
  [[gnu::ms_abi]] virtual int GetFriendCountFromSource(CSteamID steamIDSource);
  [[gnu::ms_abi]] virtual CSteamID GetFriendFromSourceByIndex(CSteamID steamIDSource, int iFriend);
  [[gnu::ms_abi]] virtual bool IsUserInSource(CSteamID steamIDUser, CSteamID steamIDSource);
  [[gnu::ms_abi]] virtual void SetInGameVoiceSpeaking(CSteamID steamIDUser, bool bSpeaking);
  [[gnu::ms_abi]] virtual void ActivateGameOverlay(const char * pchDialog);
  [[gnu::ms_abi]] virtual void ActivateGameOverlayToUser(const char * pchDialog, CSteamID steamID);
  [[gnu::ms_abi]] virtual void ActivateGameOverlayToWebPage(const char * pchURL);
  [[gnu::ms_abi]] virtual void ActivateGameOverlayToStore(AppId_t nAppID, EOverlayToStoreFlag eFlag);
  [[gnu::ms_abi]] virtual void SetPlayedWith(CSteamID steamIDUserPlayedWith);
  [[gnu::ms_abi]] virtual void ActivateGameOverlayInviteDialog(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual int GetSmallFriendAvatar(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual int GetMediumFriendAvatar(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual int GetLargeFriendAvatar(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual bool RequestUserInformation(CSteamID steamIDUser, bool bRequireNameOnly);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestClanOfficerList(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual CSteamID GetClanOwner(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual int GetClanOfficerCount(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual CSteamID GetClanOfficerByIndex(CSteamID steamIDClan, int iOfficer);
  [[gnu::ms_abi]] virtual uint32 GetUserRestrictions();
  [[gnu::ms_abi]] virtual bool SetRichPresence(const char * pchKey, const char * pchValue);
  [[gnu::ms_abi]] virtual void ClearRichPresence();
  [[gnu::ms_abi]] virtual const char * GetFriendRichPresence(CSteamID steamIDFriend, const char * pchKey);
  [[gnu::ms_abi]] virtual int GetFriendRichPresenceKeyCount(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual const char * GetFriendRichPresenceKeyByIndex(CSteamID steamIDFriend, int iKey);
  [[gnu::ms_abi]] virtual void RequestFriendRichPresence(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual bool InviteUserToGame(CSteamID steamIDFriend, const char * pchConnectString);
  [[gnu::ms_abi]] virtual int GetCoplayFriendCount();
  [[gnu::ms_abi]] virtual CSteamID GetCoplayFriend(int iCoplayFriend);
  [[gnu::ms_abi]] virtual int GetFriendCoplayTime(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual AppId_t GetFriendCoplayGame(CSteamID steamIDFriend);
  [[gnu::ms_abi]] virtual SteamAPICall_t JoinClanChatRoom(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual bool LeaveClanChatRoom(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual int GetClanChatMemberCount(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual CSteamID GetChatMemberByIndex(CSteamID steamIDClan, int iUser);
  [[gnu::ms_abi]] virtual bool SendClanChatMessage(CSteamID steamIDClanChat, const char * pchText);
  [[gnu::ms_abi]] virtual int GetClanChatMessage(CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, CSteamID * psteamidChatter);
  [[gnu::ms_abi]] virtual bool IsClanChatAdmin(CSteamID steamIDClanChat, CSteamID steamIDUser);
  [[gnu::ms_abi]] virtual bool IsClanChatWindowOpenInSteam(CSteamID steamIDClanChat);
  [[gnu::ms_abi]] virtual bool OpenClanChatWindowInSteam(CSteamID steamIDClanChat);
  [[gnu::ms_abi]] virtual bool CloseClanChatWindowInSteam(CSteamID steamIDClanChat);
  [[gnu::ms_abi]] virtual bool SetListenForFriendsMessages(bool bInterceptEnabled);
  [[gnu::ms_abi]] virtual bool ReplyToFriendMessage(CSteamID steamIDFriend, const char * pchMsgToSend);
  [[gnu::ms_abi]] virtual int GetFriendMessage(CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetFollowerCount(CSteamID steamID);
  [[gnu::ms_abi]] virtual SteamAPICall_t IsFollowing(CSteamID steamID);
  [[gnu::ms_abi]] virtual SteamAPICall_t EnumerateFollowingList(uint32 unStartIndex);
  [[gnu::ms_abi]] virtual bool IsClanPublic(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual bool IsClanOfficialGameGroup(CSteamID steamIDClan);
};
struct ISteamUtils {
  [[gnu::ms_abi]] virtual uint32 GetSecondsSinceAppActive();
  [[gnu::ms_abi]] virtual uint32 GetSecondsSinceComputerActive();
  [[gnu::ms_abi]] virtual EUniverse GetConnectedUniverse();
  [[gnu::ms_abi]] virtual uint32 GetServerRealTime();
  [[gnu::ms_abi]] virtual const char * GetIPCountry();
  [[gnu::ms_abi]] virtual bool GetImageSize(int iImage, uint32 * pnWidth, uint32 * pnHeight);
  [[gnu::ms_abi]] virtual bool GetImageRGBA(int iImage, uint8 * pubDest, int nDestBufferSize);
  [[gnu::ms_abi]] virtual bool GetCSERIPPort(uint32 * unIP, uint16 * usPort);
  [[gnu::ms_abi]] virtual uint8 GetCurrentBatteryPower();
  [[gnu::ms_abi]] virtual uint32 GetAppID();
  [[gnu::ms_abi]] virtual void SetOverlayNotificationPosition(ENotificationPosition eNotificationPosition);
  [[gnu::ms_abi]] virtual bool IsAPICallCompleted(SteamAPICall_t hSteamAPICall, bool * pbFailed);
  [[gnu::ms_abi]] virtual ESteamAPICallFailure GetAPICallFailureReason(SteamAPICall_t hSteamAPICall);
  [[gnu::ms_abi]] virtual bool GetAPICallResult(SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed);
  [[gnu::ms_abi]] virtual uint32 GetIPCCallCount();
  [[gnu::ms_abi]] virtual void SetWarningMessageHook(SteamAPIWarningMessageHook_t pFunction);
  [[gnu::ms_abi]] virtual bool IsOverlayEnabled();
  [[gnu::ms_abi]] virtual bool BOverlayNeedsPresent();
  [[gnu::ms_abi]] virtual SteamAPICall_t CheckFileSignature(const char * szFileName);
  [[gnu::ms_abi]] virtual bool ShowGamepadTextInput(EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText);
  [[gnu::ms_abi]] virtual uint32 GetEnteredGamepadTextLength();
  [[gnu::ms_abi]] virtual bool GetEnteredGamepadTextInput(char * pchText, uint32 cchText);
  [[gnu::ms_abi]] virtual const char * GetSteamUILanguage();
  [[gnu::ms_abi]] virtual bool IsSteamRunningInVR();
  [[gnu::ms_abi]] virtual void SetOverlayNotificationInset(int nHorizontalInset, int nVerticalInset);
  [[gnu::ms_abi]] virtual bool IsSteamInBigPictureMode();
  [[gnu::ms_abi]] virtual void StartVRDashboard();
  [[gnu::ms_abi]] virtual bool IsVRHeadsetStreamingEnabled();
  [[gnu::ms_abi]] virtual void SetVRHeadsetStreamingEnabled(bool bEnabled);
};
struct ISteamMatchmaking {
  [[gnu::ms_abi]] virtual int GetFavoriteGameCount();
  [[gnu::ms_abi]] virtual bool GetFavoriteGame(int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer);
  [[gnu::ms_abi]] virtual int AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer);
  [[gnu::ms_abi]] virtual bool RemoveFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestLobbyList();
  [[gnu::ms_abi]] virtual void AddRequestLobbyListStringFilter(const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType);
  [[gnu::ms_abi]] virtual void AddRequestLobbyListNumericalFilter(const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType);
  [[gnu::ms_abi]] virtual void AddRequestLobbyListNearValueFilter(const char * pchKeyToMatch, int nValueToBeCloseTo);
  [[gnu::ms_abi]] virtual void AddRequestLobbyListFilterSlotsAvailable(int nSlotsAvailable);
  [[gnu::ms_abi]] virtual void AddRequestLobbyListDistanceFilter(ELobbyDistanceFilter eLobbyDistanceFilter);
  [[gnu::ms_abi]] virtual void AddRequestLobbyListResultCountFilter(int cMaxResults);
  [[gnu::ms_abi]] virtual void AddRequestLobbyListCompatibleMembersFilter(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual CSteamID GetLobbyByIndex(int iLobby);
  [[gnu::ms_abi]] virtual SteamAPICall_t CreateLobby(ELobbyType eLobbyType, int cMaxMembers);
  [[gnu::ms_abi]] virtual SteamAPICall_t JoinLobby(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual void LeaveLobby(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual bool InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee);
  [[gnu::ms_abi]] virtual int GetNumLobbyMembers(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual CSteamID GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember);
  [[gnu::ms_abi]] virtual const char * GetLobbyData(CSteamID steamIDLobby, const char * pchKey);
  [[gnu::ms_abi]] virtual bool SetLobbyData(CSteamID steamIDLobby, const char * pchKey, const char * pchValue);
  [[gnu::ms_abi]] virtual int GetLobbyDataCount(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual bool GetLobbyDataByIndex(CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize);
  [[gnu::ms_abi]] virtual bool DeleteLobbyData(CSteamID steamIDLobby, const char * pchKey);
  [[gnu::ms_abi]] virtual const char * GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char * pchKey);
  [[gnu::ms_abi]] virtual void SetLobbyMemberData(CSteamID steamIDLobby, const char * pchKey, const char * pchValue);
  [[gnu::ms_abi]] virtual bool SendLobbyChatMsg(CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody);
  [[gnu::ms_abi]] virtual int GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType);
  [[gnu::ms_abi]] virtual bool RequestLobbyData(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual void SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer);
  [[gnu::ms_abi]] virtual bool GetLobbyGameServer(CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, CSteamID * psteamIDGameServer);
  [[gnu::ms_abi]] virtual bool SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers);
  [[gnu::ms_abi]] virtual int GetLobbyMemberLimit(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual bool SetLobbyType(CSteamID steamIDLobby, ELobbyType eLobbyType);
  [[gnu::ms_abi]] virtual bool SetLobbyJoinable(CSteamID steamIDLobby, bool bLobbyJoinable);
  [[gnu::ms_abi]] virtual CSteamID GetLobbyOwner(CSteamID steamIDLobby);
  [[gnu::ms_abi]] virtual bool SetLobbyOwner(CSteamID steamIDLobby, CSteamID steamIDNewOwner);
  [[gnu::ms_abi]] virtual bool SetLinkedLobby(CSteamID steamIDLobby, CSteamID steamIDLobbyDependent);
};
struct ISteamMatchmakingServerListResponse {
  [[gnu::ms_abi]] virtual void ServerResponded(HServerListRequest hRequest, int iServer);
  [[gnu::ms_abi]] virtual void ServerFailedToRespond(HServerListRequest hRequest, int iServer);
  [[gnu::ms_abi]] virtual void RefreshComplete(HServerListRequest hRequest, EMatchMakingServerResponse response);
};
struct ISteamMatchmakingPingResponse {
  [[gnu::ms_abi]] virtual void ServerResponded(gameserveritem_t & server);
  [[gnu::ms_abi]] virtual void ServerFailedToRespond();
};
struct ISteamMatchmakingPlayersResponse {
  [[gnu::ms_abi]] virtual void AddPlayerToList(const char * pchName, int nScore, float flTimePlayed);
  [[gnu::ms_abi]] virtual void PlayersFailedToRespond();
  [[gnu::ms_abi]] virtual void PlayersRefreshComplete();
};
struct ISteamMatchmakingRulesResponse {
  [[gnu::ms_abi]] virtual void RulesResponded(const char * pchRule, const char * pchValue);
  [[gnu::ms_abi]] virtual void RulesFailedToRespond();
  [[gnu::ms_abi]] virtual void RulesRefreshComplete();
};
struct ISteamMatchmakingServers {
  [[gnu::ms_abi]] virtual HServerListRequest RequestInternetServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerListRequest RequestLANServerList(AppId_t iApp, ISteamMatchmakingServerListResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerListRequest RequestFriendsServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerListRequest RequestFavoritesServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerListRequest RequestHistoryServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerListRequest RequestSpectatorServerList(AppId_t iApp, MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, ISteamMatchmakingServerListResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual void ReleaseRequest(HServerListRequest hServerListRequest);
  [[gnu::ms_abi]] virtual gameserveritem_t * GetServerDetails(HServerListRequest hRequest, int iServer);
  [[gnu::ms_abi]] virtual void CancelQuery(HServerListRequest hRequest);
  [[gnu::ms_abi]] virtual void RefreshQuery(HServerListRequest hRequest);
  [[gnu::ms_abi]] virtual bool IsRefreshing(HServerListRequest hRequest);
  [[gnu::ms_abi]] virtual int GetServerCount(HServerListRequest hRequest);
  [[gnu::ms_abi]] virtual void RefreshServer(HServerListRequest hRequest, int iServer);
  [[gnu::ms_abi]] virtual HServerQuery PingServer(uint32 unIP, uint16 usPort, ISteamMatchmakingPingResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerQuery PlayerDetails(uint32 unIP, uint16 usPort, ISteamMatchmakingPlayersResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual HServerQuery ServerRules(uint32 unIP, uint16 usPort, ISteamMatchmakingRulesResponse * pRequestServersResponse);
  [[gnu::ms_abi]] virtual void CancelServerQuery(HServerQuery hServerQuery);
};
struct ISteamRemoteStorage {
  [[gnu::ms_abi]] virtual bool FileWrite(const char * pchFile, const void * pvData, int32 cubData);
  [[gnu::ms_abi]] virtual int32 FileRead(const char * pchFile, void * pvData, int32 cubDataToRead);
  [[gnu::ms_abi]] virtual SteamAPICall_t FileWriteAsync(const char * pchFile, const void * pvData, uint32 cubData);
  [[gnu::ms_abi]] virtual SteamAPICall_t FileReadAsync(const char * pchFile, uint32 nOffset, uint32 cubToRead);
  [[gnu::ms_abi]] virtual bool FileReadAsyncComplete(SteamAPICall_t hReadCall, void * pvBuffer, uint32 cubToRead);
  [[gnu::ms_abi]] virtual bool FileForget(const char * pchFile);
  [[gnu::ms_abi]] virtual bool FileDelete(const char * pchFile);
  [[gnu::ms_abi]] virtual SteamAPICall_t FileShare(const char * pchFile);
  [[gnu::ms_abi]] virtual bool SetSyncPlatforms(const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform);
  [[gnu::ms_abi]] virtual UGCFileWriteStreamHandle_t FileWriteStreamOpen(const char * pchFile);
  [[gnu::ms_abi]] virtual bool FileWriteStreamWriteChunk(UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData);
  [[gnu::ms_abi]] virtual bool FileWriteStreamClose(UGCFileWriteStreamHandle_t writeHandle);
  [[gnu::ms_abi]] virtual bool FileWriteStreamCancel(UGCFileWriteStreamHandle_t writeHandle);
  [[gnu::ms_abi]] virtual bool FileExists(const char * pchFile);
  [[gnu::ms_abi]] virtual bool FilePersisted(const char * pchFile);
  [[gnu::ms_abi]] virtual int32 GetFileSize(const char * pchFile);
  [[gnu::ms_abi]] virtual int64 GetFileTimestamp(const char * pchFile);
  [[gnu::ms_abi]] virtual ERemoteStoragePlatform GetSyncPlatforms(const char * pchFile);
  [[gnu::ms_abi]] virtual int32 GetFileCount();
  [[gnu::ms_abi]] virtual const char * GetFileNameAndSize(int iFile, int32 * pnFileSizeInBytes);
  [[gnu::ms_abi]] virtual bool GetQuota(uint64 * pnTotalBytes, uint64 * puAvailableBytes);
  [[gnu::ms_abi]] virtual bool IsCloudEnabledForAccount();
  [[gnu::ms_abi]] virtual bool IsCloudEnabledForApp();
  [[gnu::ms_abi]] virtual void SetCloudEnabledForApp(bool bEnabled);
  [[gnu::ms_abi]] virtual SteamAPICall_t UGCDownload(UGCHandle_t hContent, uint32 unPriority);
  [[gnu::ms_abi]] virtual bool GetUGCDownloadProgress(UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected);
  [[gnu::ms_abi]] virtual bool GetUGCDetails(UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, CSteamID * pSteamIDOwner);
  [[gnu::ms_abi]] virtual int32 UGCRead(UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction);
  [[gnu::ms_abi]] virtual int32 GetCachedUGCCount();
  [[gnu::ms_abi]] virtual UGCHandle_t GetCachedUGCHandle(int32 iCachedContent);
  [[gnu::ms_abi]] virtual SteamAPICall_t PublishWorkshopFile(const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType);
  [[gnu::ms_abi]] virtual PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest(PublishedFileId_t unPublishedFileId);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFileFile(PublishedFileUpdateHandle_t updateHandle, const char * pchFile);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFilePreviewFile(PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFileTitle(PublishedFileUpdateHandle_t updateHandle, const char * pchTitle);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFileDescription(PublishedFileUpdateHandle_t updateHandle, const char * pchDescription);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFileVisibility(PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFileTags(PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t * pTags);
  [[gnu::ms_abi]] virtual SteamAPICall_t CommitPublishedFileUpdate(PublishedFileUpdateHandle_t updateHandle);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetPublishedFileDetails(PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld);
  [[gnu::ms_abi]] virtual SteamAPICall_t DeletePublishedFile(PublishedFileId_t unPublishedFileId);
  [[gnu::ms_abi]] virtual SteamAPICall_t EnumerateUserPublishedFiles(uint32 unStartIndex);
  [[gnu::ms_abi]] virtual SteamAPICall_t SubscribePublishedFile(PublishedFileId_t unPublishedFileId);
  [[gnu::ms_abi]] virtual SteamAPICall_t EnumerateUserSubscribedFiles(uint32 unStartIndex);
  [[gnu::ms_abi]] virtual SteamAPICall_t UnsubscribePublishedFile(PublishedFileId_t unPublishedFileId);
  [[gnu::ms_abi]] virtual bool UpdatePublishedFileSetChangeDescription(PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId);
  [[gnu::ms_abi]] virtual SteamAPICall_t UpdateUserPublishedItemVote(PublishedFileId_t unPublishedFileId, bool bVoteUp);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetUserPublishedItemVoteDetails(PublishedFileId_t unPublishedFileId);
  [[gnu::ms_abi]] virtual SteamAPICall_t EnumerateUserSharedWorkshopFiles(CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t * pRequiredTags, SteamParamStringArray_t * pExcludedTags);
  [[gnu::ms_abi]] virtual SteamAPICall_t PublishVideo(EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t * pTags);
  [[gnu::ms_abi]] virtual SteamAPICall_t SetUserPublishedFileAction(PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction);
  [[gnu::ms_abi]] virtual SteamAPICall_t EnumeratePublishedFilesByUserAction(EWorkshopFileAction eAction, uint32 unStartIndex);
  [[gnu::ms_abi]] virtual SteamAPICall_t EnumeratePublishedWorkshopFiles(EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t * pTags, SteamParamStringArray_t * pUserTags);
  [[gnu::ms_abi]] virtual SteamAPICall_t UGCDownloadToLocation(UGCHandle_t hContent, const char * pchLocation, uint32 unPriority);
};
struct ISteamUserStats {
  [[gnu::ms_abi]] virtual bool RequestCurrentStats();
  [[gnu::ms_abi]] virtual bool GetStat(const char * pchName, int32 * pData);
  [[gnu::ms_abi]] virtual bool GetStat(const char * pchName, float * pData);
  [[gnu::ms_abi]] virtual bool SetStat(const char * pchName, int32 nData);
  [[gnu::ms_abi]] virtual bool SetStat(const char * pchName, float fData);
  [[gnu::ms_abi]] virtual bool UpdateAvgRateStat(const char * pchName, float flCountThisSession, double dSessionLength);
  [[gnu::ms_abi]] virtual bool GetAchievement(const char * pchName, bool * pbAchieved);
  [[gnu::ms_abi]] virtual bool SetAchievement(const char * pchName);
  [[gnu::ms_abi]] virtual bool ClearAchievement(const char * pchName);
  [[gnu::ms_abi]] virtual bool GetAchievementAndUnlockTime(const char * pchName, bool * pbAchieved, uint32 * punUnlockTime);
  [[gnu::ms_abi]] virtual bool StoreStats();
  [[gnu::ms_abi]] virtual int GetAchievementIcon(const char * pchName);
  [[gnu::ms_abi]] virtual const char * GetAchievementDisplayAttribute(const char * pchName, const char * pchKey);
  [[gnu::ms_abi]] virtual bool IndicateAchievementProgress(const char * pchName, uint32 nCurProgress, uint32 nMaxProgress);
  [[gnu::ms_abi]] virtual uint32 GetNumAchievements();
  [[gnu::ms_abi]] virtual const char * GetAchievementName(uint32 iAchievement);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestUserStats(CSteamID steamIDUser);
  [[gnu::ms_abi]] virtual bool GetUserStat(CSteamID steamIDUser, const char * pchName, int32 * pData);
  [[gnu::ms_abi]] virtual bool GetUserStat(CSteamID steamIDUser, const char * pchName, float * pData);
  [[gnu::ms_abi]] virtual bool GetUserAchievement(CSteamID steamIDUser, const char * pchName, bool * pbAchieved);
  [[gnu::ms_abi]] virtual bool GetUserAchievementAndUnlockTime(CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime);
  [[gnu::ms_abi]] virtual bool ResetAllStats(bool bAchievementsToo);
  [[gnu::ms_abi]] virtual SteamAPICall_t FindOrCreateLeaderboard(const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType);
  [[gnu::ms_abi]] virtual SteamAPICall_t FindLeaderboard(const char * pchLeaderboardName);
  [[gnu::ms_abi]] virtual const char * GetLeaderboardName(SteamLeaderboard_t hSteamLeaderboard);
  [[gnu::ms_abi]] virtual int GetLeaderboardEntryCount(SteamLeaderboard_t hSteamLeaderboard);
  [[gnu::ms_abi]] virtual ELeaderboardSortMethod GetLeaderboardSortMethod(SteamLeaderboard_t hSteamLeaderboard);
  [[gnu::ms_abi]] virtual ELeaderboardDisplayType GetLeaderboardDisplayType(SteamLeaderboard_t hSteamLeaderboard);
  [[gnu::ms_abi]] virtual SteamAPICall_t DownloadLeaderboardEntries(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd);
  [[gnu::ms_abi]] virtual SteamAPICall_t DownloadLeaderboardEntriesForUsers(SteamLeaderboard_t hSteamLeaderboard, CSteamID * prgUsers, int cUsers);
  [[gnu::ms_abi]] virtual bool GetDownloadedLeaderboardEntry(SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax);
  [[gnu::ms_abi]] virtual SteamAPICall_t UploadLeaderboardScore(SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount);
  [[gnu::ms_abi]] virtual SteamAPICall_t AttachLeaderboardUGC(SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetNumberOfCurrentPlayers();
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestGlobalAchievementPercentages();
  [[gnu::ms_abi]] virtual int GetMostAchievedAchievementInfo(char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved);
  [[gnu::ms_abi]] virtual int GetNextMostAchievedAchievementInfo(int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved);
  [[gnu::ms_abi]] virtual bool GetAchievementAchievedPercent(const char * pchName, float * pflPercent);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestGlobalStats(int nHistoryDays);
  [[gnu::ms_abi]] virtual bool GetGlobalStat(const char * pchStatName, int64 * pData);
  [[gnu::ms_abi]] virtual bool GetGlobalStat(const char * pchStatName, double * pData);
  [[gnu::ms_abi]] virtual int32 GetGlobalStatHistory(const char * pchStatName, int64 * pData, uint32 cubData);
  [[gnu::ms_abi]] virtual int32 GetGlobalStatHistory(const char * pchStatName, double * pData, uint32 cubData);
};
struct ISteamApps {
  [[gnu::ms_abi]] virtual bool BIsSubscribed();
  [[gnu::ms_abi]] virtual bool BIsLowViolence();
  [[gnu::ms_abi]] virtual bool BIsCybercafe();
  [[gnu::ms_abi]] virtual bool BIsVACBanned();
  [[gnu::ms_abi]] virtual const char * GetCurrentGameLanguage();
  [[gnu::ms_abi]] virtual const char * GetAvailableGameLanguages();
  [[gnu::ms_abi]] virtual bool BIsSubscribedApp(AppId_t appID);
  [[gnu::ms_abi]] virtual bool BIsDlcInstalled(AppId_t appID);
  [[gnu::ms_abi]] virtual uint32 GetEarliestPurchaseUnixTime(AppId_t nAppID);
  [[gnu::ms_abi]] virtual bool BIsSubscribedFromFreeWeekend();
  [[gnu::ms_abi]] virtual int GetDLCCount();
  [[gnu::ms_abi]] virtual bool BGetDLCDataByIndex(int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize);
  [[gnu::ms_abi]] virtual void InstallDLC(AppId_t nAppID);
  [[gnu::ms_abi]] virtual void UninstallDLC(AppId_t nAppID);
  [[gnu::ms_abi]] virtual void RequestAppProofOfPurchaseKey(AppId_t nAppID);
  [[gnu::ms_abi]] virtual bool GetCurrentBetaName(char * pchName, int cchNameBufferSize);
  [[gnu::ms_abi]] virtual bool MarkContentCorrupt(bool bMissingFilesOnly);
  [[gnu::ms_abi]] virtual uint32 GetInstalledDepots(AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots);
  [[gnu::ms_abi]] virtual uint32 GetAppInstallDir(AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize);
  [[gnu::ms_abi]] virtual bool BIsAppInstalled(AppId_t appID);
  [[gnu::ms_abi]] virtual CSteamID GetAppOwner();
  [[gnu::ms_abi]] virtual const char * GetLaunchQueryParam(const char * pchKey);
  [[gnu::ms_abi]] virtual bool GetDlcDownloadProgress(AppId_t nAppID, uint64 * punBytesDownloaded, uint64 * punBytesTotal);
  [[gnu::ms_abi]] virtual int GetAppBuildId();
  [[gnu::ms_abi]] virtual void RequestAllProofOfPurchaseKeys();
  [[gnu::ms_abi]] virtual SteamAPICall_t GetFileDetails(const char * pszFileName);
};
struct ISteamNetworking {
  [[gnu::ms_abi]] virtual bool SendP2PPacket(CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel);
  [[gnu::ms_abi]] virtual bool IsP2PPacketAvailable(uint32 * pcubMsgSize, int nChannel);
  [[gnu::ms_abi]] virtual bool ReadP2PPacket(void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, CSteamID * psteamIDRemote, int nChannel);
  [[gnu::ms_abi]] virtual bool AcceptP2PSessionWithUser(CSteamID steamIDRemote);
  [[gnu::ms_abi]] virtual bool CloseP2PSessionWithUser(CSteamID steamIDRemote);
  [[gnu::ms_abi]] virtual bool CloseP2PChannelWithUser(CSteamID steamIDRemote, int nChannel);
  [[gnu::ms_abi]] virtual bool GetP2PSessionState(CSteamID steamIDRemote, P2PSessionState_t * pConnectionState);
  [[gnu::ms_abi]] virtual bool AllowP2PPacketRelay(bool bAllow);
  [[gnu::ms_abi]] virtual SNetListenSocket_t CreateListenSocket(int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay);
  [[gnu::ms_abi]] virtual SNetSocket_t CreateP2PConnectionSocket(CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay);
  [[gnu::ms_abi]] virtual SNetSocket_t CreateConnectionSocket(uint32 nIP, uint16 nPort, int nTimeoutSec);
  [[gnu::ms_abi]] virtual bool DestroySocket(SNetSocket_t hSocket, bool bNotifyRemoteEnd);
  [[gnu::ms_abi]] virtual bool DestroyListenSocket(SNetListenSocket_t hSocket, bool bNotifyRemoteEnd);
  [[gnu::ms_abi]] virtual bool SendDataOnSocket(SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable);
  [[gnu::ms_abi]] virtual bool IsDataAvailableOnSocket(SNetSocket_t hSocket, uint32 * pcubMsgSize);
  [[gnu::ms_abi]] virtual bool RetrieveDataFromSocket(SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize);
  [[gnu::ms_abi]] virtual bool IsDataAvailable(SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket);
  [[gnu::ms_abi]] virtual bool RetrieveData(SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket);
  [[gnu::ms_abi]] virtual bool GetSocketInfo(SNetSocket_t hSocket, CSteamID * pSteamIDRemote, int * peSocketStatus, uint32 * punIPRemote, uint16 * punPortRemote);
  [[gnu::ms_abi]] virtual bool GetListenSocketInfo(SNetListenSocket_t hListenSocket, uint32 * pnIP, uint16 * pnPort);
  [[gnu::ms_abi]] virtual ESNetSocketConnectionType GetSocketConnectionType(SNetSocket_t hSocket);
  [[gnu::ms_abi]] virtual int GetMaxPacketSize(SNetSocket_t hSocket);
};
struct ISteamScreenshots {
  [[gnu::ms_abi]] virtual ScreenshotHandle WriteScreenshot(void * pubRGB, uint32 cubRGB, int nWidth, int nHeight);
  [[gnu::ms_abi]] virtual ScreenshotHandle AddScreenshotToLibrary(const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight);
  [[gnu::ms_abi]] virtual void TriggerScreenshot();
  [[gnu::ms_abi]] virtual void HookScreenshots(bool bHook);
  [[gnu::ms_abi]] virtual bool SetLocation(ScreenshotHandle hScreenshot, const char * pchLocation);
  [[gnu::ms_abi]] virtual bool TagUser(ScreenshotHandle hScreenshot, CSteamID steamID);
  [[gnu::ms_abi]] virtual bool TagPublishedFile(ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID);
  [[gnu::ms_abi]] virtual bool IsScreenshotsHooked();
  [[gnu::ms_abi]] virtual ScreenshotHandle AddVRScreenshotToLibrary(EVRScreenshotType eType, const char * pchFilename, const char * pchVRFilename);
};
struct ISteamMusic {
  [[gnu::ms_abi]] virtual bool BIsEnabled();
  [[gnu::ms_abi]] virtual bool BIsPlaying();
  [[gnu::ms_abi]] virtual AudioPlayback_Status GetPlaybackStatus();
  [[gnu::ms_abi]] virtual void Play();
  [[gnu::ms_abi]] virtual void Pause();
  [[gnu::ms_abi]] virtual void PlayPrevious();
  [[gnu::ms_abi]] virtual void PlayNext();
  [[gnu::ms_abi]] virtual void SetVolume(float flVolume);
  [[gnu::ms_abi]] virtual float GetVolume();
};
struct ISteamMusicRemote {
  [[gnu::ms_abi]] virtual bool RegisterSteamMusicRemote(const char * pchName);
  [[gnu::ms_abi]] virtual bool DeregisterSteamMusicRemote();
  [[gnu::ms_abi]] virtual bool BIsCurrentMusicRemote();
  [[gnu::ms_abi]] virtual bool BActivationSuccess(bool bValue);
  [[gnu::ms_abi]] virtual bool SetDisplayName(const char * pchDisplayName);
  [[gnu::ms_abi]] virtual bool SetPNGIcon_64x64(void * pvBuffer, uint32 cbBufferLength);
  [[gnu::ms_abi]] virtual bool EnablePlayPrevious(bool bValue);
  [[gnu::ms_abi]] virtual bool EnablePlayNext(bool bValue);
  [[gnu::ms_abi]] virtual bool EnableShuffled(bool bValue);
  [[gnu::ms_abi]] virtual bool EnableLooped(bool bValue);
  [[gnu::ms_abi]] virtual bool EnableQueue(bool bValue);
  [[gnu::ms_abi]] virtual bool EnablePlaylists(bool bValue);
  [[gnu::ms_abi]] virtual bool UpdatePlaybackStatus(AudioPlayback_Status nStatus);
  [[gnu::ms_abi]] virtual bool UpdateShuffled(bool bValue);
  [[gnu::ms_abi]] virtual bool UpdateLooped(bool bValue);
  [[gnu::ms_abi]] virtual bool UpdateVolume(float flValue);
  [[gnu::ms_abi]] virtual bool CurrentEntryWillChange();
  [[gnu::ms_abi]] virtual bool CurrentEntryIsAvailable(bool bAvailable);
  [[gnu::ms_abi]] virtual bool UpdateCurrentEntryText(const char * pchText);
  [[gnu::ms_abi]] virtual bool UpdateCurrentEntryElapsedSeconds(int nValue);
  [[gnu::ms_abi]] virtual bool UpdateCurrentEntryCoverArt(void * pvBuffer, uint32 cbBufferLength);
  [[gnu::ms_abi]] virtual bool CurrentEntryDidChange();
  [[gnu::ms_abi]] virtual bool QueueWillChange();
  [[gnu::ms_abi]] virtual bool ResetQueueEntries();
  [[gnu::ms_abi]] virtual bool SetQueueEntry(int nID, int nPosition, const char * pchEntryText);
  [[gnu::ms_abi]] virtual bool SetCurrentQueueEntry(int nID);
  [[gnu::ms_abi]] virtual bool QueueDidChange();
  [[gnu::ms_abi]] virtual bool PlaylistWillChange();
  [[gnu::ms_abi]] virtual bool ResetPlaylistEntries();
  [[gnu::ms_abi]] virtual bool SetPlaylistEntry(int nID, int nPosition, const char * pchEntryText);
  [[gnu::ms_abi]] virtual bool SetCurrentPlaylistEntry(int nID);
  [[gnu::ms_abi]] virtual bool PlaylistDidChange();
};
struct ISteamHTTP {
  [[gnu::ms_abi]] virtual HTTPRequestHandle CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod, const char * pchAbsoluteURL);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestContextValue(HTTPRequestHandle hRequest, uint64 ulContextValue);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestNetworkActivityTimeout(HTTPRequestHandle hRequest, uint32 unTimeoutSeconds);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest, const char * pchHeaderName, const char * pchHeaderValue);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest, const char * pchParamName, const char * pchParamValue);
  [[gnu::ms_abi]] virtual bool SendHTTPRequest(HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle);
  [[gnu::ms_abi]] virtual bool SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle);
  [[gnu::ms_abi]] virtual bool DeferHTTPRequest(HTTPRequestHandle hRequest);
  [[gnu::ms_abi]] virtual bool PrioritizeHTTPRequest(HTTPRequestHandle hRequest);
  [[gnu::ms_abi]] virtual bool GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest, const char * pchHeaderName, uint32 * unResponseHeaderSize);
  [[gnu::ms_abi]] virtual bool GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest, const char * pchHeaderName, uint8 * pHeaderValueBuffer, uint32 unBufferSize);
  [[gnu::ms_abi]] virtual bool GetHTTPResponseBodySize(HTTPRequestHandle hRequest, uint32 * unBodySize);
  [[gnu::ms_abi]] virtual bool GetHTTPResponseBodyData(HTTPRequestHandle hRequest, uint8 * pBodyDataBuffer, uint32 unBufferSize);
  [[gnu::ms_abi]] virtual bool GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest, uint32 cOffset, uint8 * pBodyDataBuffer, uint32 unBufferSize);
  [[gnu::ms_abi]] virtual bool ReleaseHTTPRequest(HTTPRequestHandle hRequest);
  [[gnu::ms_abi]] virtual bool GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest, float * pflPercentOut);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest, const char * pchContentType, uint8 * pubBody, uint32 unBodyLen);
  [[gnu::ms_abi]] virtual HTTPCookieContainerHandle CreateCookieContainer(bool bAllowResponsesToModify);
  [[gnu::ms_abi]] virtual bool ReleaseCookieContainer(HTTPCookieContainerHandle hCookieContainer);
  [[gnu::ms_abi]] virtual bool SetCookie(HTTPCookieContainerHandle hCookieContainer, const char * pchHost, const char * pchUrl, const char * pchCookie);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestCookieContainer(HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest, const char * pchUserAgentInfo);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestRequiresVerifiedCertificate(HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate);
  [[gnu::ms_abi]] virtual bool SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest, uint32 unMilliseconds);
  [[gnu::ms_abi]] virtual bool GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest, bool * pbWasTimedOut);
};
struct ISteamController {
  [[gnu::ms_abi]] virtual bool Init();
  [[gnu::ms_abi]] virtual bool Shutdown();
  [[gnu::ms_abi]] virtual void RunFrame();
  [[gnu::ms_abi]] virtual int GetConnectedControllers(ControllerHandle_t * handlesOut);
  [[gnu::ms_abi]] virtual bool ShowBindingPanel(ControllerHandle_t controllerHandle);
  [[gnu::ms_abi]] virtual ControllerActionSetHandle_t GetActionSetHandle(const char * pszActionSetName);
  [[gnu::ms_abi]] virtual void ActivateActionSet(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle);
  [[gnu::ms_abi]] virtual ControllerActionSetHandle_t GetCurrentActionSet(ControllerHandle_t controllerHandle);
  [[gnu::ms_abi]] virtual void ActivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle);
  [[gnu::ms_abi]] virtual void DeactivateActionSetLayer(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle);
  [[gnu::ms_abi]] virtual void DeactivateAllActionSetLayers(ControllerHandle_t controllerHandle);
  [[gnu::ms_abi]] virtual int GetActiveActionSetLayers(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut);
  [[gnu::ms_abi]] virtual ControllerDigitalActionHandle_t GetDigitalActionHandle(const char * pszActionName);
  [[gnu::ms_abi]] virtual ControllerDigitalActionData_t GetDigitalActionData(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle);
  [[gnu::ms_abi]] virtual int GetDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut);
  [[gnu::ms_abi]] virtual ControllerAnalogActionHandle_t GetAnalogActionHandle(const char * pszActionName);
  [[gnu::ms_abi]] virtual ControllerAnalogActionData_t GetAnalogActionData(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle);
  [[gnu::ms_abi]] virtual int GetAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut);
  [[gnu::ms_abi]] virtual void StopAnalogActionMomentum(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction);
  [[gnu::ms_abi]] virtual void TriggerHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec);
  [[gnu::ms_abi]] virtual void TriggerRepeatedHapticPulse(ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags);
  [[gnu::ms_abi]] virtual void TriggerVibration(ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed);
  [[gnu::ms_abi]] virtual void SetLEDColor(ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags);
  [[gnu::ms_abi]] virtual int GetGamepadIndexForController(ControllerHandle_t ulControllerHandle);
  [[gnu::ms_abi]] virtual ControllerHandle_t GetControllerForGamepadIndex(int nIndex);
  [[gnu::ms_abi]] virtual ControllerMotionData_t GetMotionData(ControllerHandle_t controllerHandle);
  [[gnu::ms_abi]] virtual bool ShowDigitalActionOrigins(ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle, float flScale, float flXPosition, float flYPosition);
  [[gnu::ms_abi]] virtual bool ShowAnalogActionOrigins(ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle, float flScale, float flXPosition, float flYPosition);
  [[gnu::ms_abi]] virtual const char * GetStringForActionOrigin(EControllerActionOrigin eOrigin);
  [[gnu::ms_abi]] virtual const char * GetGlyphForActionOrigin(EControllerActionOrigin eOrigin);
  [[gnu::ms_abi]] virtual ESteamInputType GetInputTypeForHandle(ControllerHandle_t controllerHandle);
};
struct ISteamUGC {
  [[gnu::ms_abi]] virtual UGCQueryHandle_t CreateQueryUserUGCRequest(AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage);
  [[gnu::ms_abi]] virtual UGCQueryHandle_t CreateQueryAllUGCRequest(EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage);
  [[gnu::ms_abi]] virtual UGCQueryHandle_t CreateQueryUGCDetailsRequest(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs);
  [[gnu::ms_abi]] virtual SteamAPICall_t SendQueryUGCRequest(UGCQueryHandle_t handle);
  [[gnu::ms_abi]] virtual bool GetQueryUGCResult(UGCQueryHandle_t handle, uint32 index, SteamUGCDetails_t * pDetails);
  [[gnu::ms_abi]] virtual bool GetQueryUGCPreviewURL(UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize);
  [[gnu::ms_abi]] virtual bool GetQueryUGCMetadata(UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize);
  [[gnu::ms_abi]] virtual bool GetQueryUGCChildren(UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries);
  [[gnu::ms_abi]] virtual bool GetQueryUGCStatistic(UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue);
  [[gnu::ms_abi]] virtual uint32 GetQueryUGCNumAdditionalPreviews(UGCQueryHandle_t handle, uint32 index);
  [[gnu::ms_abi]] virtual bool GetQueryUGCAdditionalPreview(UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType);
  [[gnu::ms_abi]] virtual uint32 GetQueryUGCNumKeyValueTags(UGCQueryHandle_t handle, uint32 index);
  [[gnu::ms_abi]] virtual bool GetQueryUGCKeyValueTag(UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize);
  [[gnu::ms_abi]] virtual bool ReleaseQueryUGCRequest(UGCQueryHandle_t handle);
  [[gnu::ms_abi]] virtual bool AddRequiredTag(UGCQueryHandle_t handle, const char * pTagName);
  [[gnu::ms_abi]] virtual bool AddExcludedTag(UGCQueryHandle_t handle, const char * pTagName);
  [[gnu::ms_abi]] virtual bool SetReturnOnlyIDs(UGCQueryHandle_t handle, bool bReturnOnlyIDs);
  [[gnu::ms_abi]] virtual bool SetReturnKeyValueTags(UGCQueryHandle_t handle, bool bReturnKeyValueTags);
  [[gnu::ms_abi]] virtual bool SetReturnLongDescription(UGCQueryHandle_t handle, bool bReturnLongDescription);
  [[gnu::ms_abi]] virtual bool SetReturnMetadata(UGCQueryHandle_t handle, bool bReturnMetadata);
  [[gnu::ms_abi]] virtual bool SetReturnChildren(UGCQueryHandle_t handle, bool bReturnChildren);
  [[gnu::ms_abi]] virtual bool SetReturnAdditionalPreviews(UGCQueryHandle_t handle, bool bReturnAdditionalPreviews);
  [[gnu::ms_abi]] virtual bool SetReturnTotalOnly(UGCQueryHandle_t handle, bool bReturnTotalOnly);
  [[gnu::ms_abi]] virtual bool SetReturnPlaytimeStats(UGCQueryHandle_t handle, uint32 unDays);
  [[gnu::ms_abi]] virtual bool SetLanguage(UGCQueryHandle_t handle, const char * pchLanguage);
  [[gnu::ms_abi]] virtual bool SetAllowCachedResponse(UGCQueryHandle_t handle, uint32 unMaxAgeSeconds);
  [[gnu::ms_abi]] virtual bool SetCloudFileNameFilter(UGCQueryHandle_t handle, const char * pMatchCloudFileName);
  [[gnu::ms_abi]] virtual bool SetMatchAnyTag(UGCQueryHandle_t handle, bool bMatchAnyTag);
  [[gnu::ms_abi]] virtual bool SetSearchText(UGCQueryHandle_t handle, const char * pSearchText);
  [[gnu::ms_abi]] virtual bool SetRankedByTrendDays(UGCQueryHandle_t handle, uint32 unDays);
  [[gnu::ms_abi]] virtual bool AddRequiredKeyValueTag(UGCQueryHandle_t handle, const char * pKey, const char * pValue);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestUGCDetails(PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds);
  [[gnu::ms_abi]] virtual SteamAPICall_t CreateItem(AppId_t nConsumerAppId, EWorkshopFileType eFileType);
  [[gnu::ms_abi]] virtual UGCUpdateHandle_t StartItemUpdate(AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual bool SetItemTitle(UGCUpdateHandle_t handle, const char * pchTitle);
  [[gnu::ms_abi]] virtual bool SetItemDescription(UGCUpdateHandle_t handle, const char * pchDescription);
  [[gnu::ms_abi]] virtual bool SetItemUpdateLanguage(UGCUpdateHandle_t handle, const char * pchLanguage);
  [[gnu::ms_abi]] virtual bool SetItemMetadata(UGCUpdateHandle_t handle, const char * pchMetaData);
  [[gnu::ms_abi]] virtual bool SetItemVisibility(UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility);
  [[gnu::ms_abi]] virtual bool SetItemTags(UGCUpdateHandle_t updateHandle, const SteamParamStringArray_t * pTags);
  [[gnu::ms_abi]] virtual bool SetItemContent(UGCUpdateHandle_t handle, const char * pszContentFolder);
  [[gnu::ms_abi]] virtual bool SetItemPreview(UGCUpdateHandle_t handle, const char * pszPreviewFile);
  [[gnu::ms_abi]] virtual bool RemoveItemKeyValueTags(UGCUpdateHandle_t handle, const char * pchKey);
  [[gnu::ms_abi]] virtual bool AddItemKeyValueTag(UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue);
  [[gnu::ms_abi]] virtual bool AddItemPreviewFile(UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type);
  [[gnu::ms_abi]] virtual bool AddItemPreviewVideo(UGCUpdateHandle_t handle, const char * pszVideoID);
  [[gnu::ms_abi]] virtual bool UpdateItemPreviewFile(UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile);
  [[gnu::ms_abi]] virtual bool UpdateItemPreviewVideo(UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID);
  [[gnu::ms_abi]] virtual bool RemoveItemPreview(UGCUpdateHandle_t handle, uint32 index);
  [[gnu::ms_abi]] virtual SteamAPICall_t SubmitItemUpdate(UGCUpdateHandle_t handle, const char * pchChangeNote);
  [[gnu::ms_abi]] virtual EItemUpdateStatus GetItemUpdateProgress(UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal);
  [[gnu::ms_abi]] virtual SteamAPICall_t SetUserItemVote(PublishedFileId_t nPublishedFileID, bool bVoteUp);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetUserItemVote(PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t AddItemToFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t RemoveItemFromFavorites(AppId_t nAppId, PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t SubscribeItem(PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t UnsubscribeItem(PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual uint32 GetNumSubscribedItems();
  [[gnu::ms_abi]] virtual uint32 GetSubscribedItems(PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries);
  [[gnu::ms_abi]] virtual uint32 GetItemState(PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual bool GetItemInstallInfo(PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp);
  [[gnu::ms_abi]] virtual bool GetItemDownloadInfo(PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal);
  [[gnu::ms_abi]] virtual bool DownloadItem(PublishedFileId_t nPublishedFileID, bool bHighPriority);
  [[gnu::ms_abi]] virtual bool BInitWorkshopForGameServer(DepotId_t unWorkshopDepotID, const char * pszFolder);
  [[gnu::ms_abi]] virtual void SuspendDownloads(bool bSuspend);
  [[gnu::ms_abi]] virtual SteamAPICall_t StartPlaytimeTracking(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs);
  [[gnu::ms_abi]] virtual SteamAPICall_t StopPlaytimeTracking(PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs);
  [[gnu::ms_abi]] virtual SteamAPICall_t StopPlaytimeTrackingForAllItems();
  [[gnu::ms_abi]] virtual SteamAPICall_t AddDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t RemoveDependency(PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t AddAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID);
  [[gnu::ms_abi]] virtual SteamAPICall_t RemoveAppDependency(PublishedFileId_t nPublishedFileID, AppId_t nAppID);
  [[gnu::ms_abi]] virtual SteamAPICall_t GetAppDependencies(PublishedFileId_t nPublishedFileID);
  [[gnu::ms_abi]] virtual SteamAPICall_t DeleteItem(PublishedFileId_t nPublishedFileID);
};
struct ISteamAppList {
  [[gnu::ms_abi]] virtual uint32 GetNumInstalledApps();
  [[gnu::ms_abi]] virtual uint32 GetInstalledApps(AppId_t * pvecAppID, uint32 unMaxAppIDs);
  [[gnu::ms_abi]] virtual int GetAppName(AppId_t nAppID, char * pchName, int cchNameMax);
  [[gnu::ms_abi]] virtual int GetAppInstallDir(AppId_t nAppID, char * pchDirectory, int cchNameMax);
  [[gnu::ms_abi]] virtual int GetAppBuildId(AppId_t nAppID);
};
struct ISteamInventory {
  [[gnu::ms_abi]] virtual EResult GetResultStatus(SteamInventoryResult_t resultHandle);
  [[gnu::ms_abi]] virtual bool GetResultItems(SteamInventoryResult_t resultHandle, SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize);
  [[gnu::ms_abi]] virtual bool GetResultItemProperty(SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut);
  [[gnu::ms_abi]] virtual uint32 GetResultTimestamp(SteamInventoryResult_t resultHandle);
  [[gnu::ms_abi]] virtual bool CheckResultSteamID(SteamInventoryResult_t resultHandle, CSteamID steamIDExpected);
  [[gnu::ms_abi]] virtual void DestroyResult(SteamInventoryResult_t resultHandle);
  [[gnu::ms_abi]] virtual bool GetAllItems(SteamInventoryResult_t * pResultHandle);
  [[gnu::ms_abi]] virtual bool GetItemsByID(SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs);
  [[gnu::ms_abi]] virtual bool SerializeResult(SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize);
  [[gnu::ms_abi]] virtual bool DeserializeResult(SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE);
  [[gnu::ms_abi]] virtual bool GenerateItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength);
  [[gnu::ms_abi]] virtual bool GrantPromoItems(SteamInventoryResult_t * pResultHandle);
  [[gnu::ms_abi]] virtual bool AddPromoItem(SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef);
  [[gnu::ms_abi]] virtual bool AddPromoItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength);
  [[gnu::ms_abi]] virtual bool ConsumeItem(SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity);
  [[gnu::ms_abi]] virtual bool ExchangeItems(SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength);
  [[gnu::ms_abi]] virtual bool TransferItemQuantity(SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest);
  [[gnu::ms_abi]] virtual void SendItemDropHeartbeat();
  [[gnu::ms_abi]] virtual bool TriggerItemDrop(SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition);
  [[gnu::ms_abi]] virtual bool TradeItems(SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength);
  [[gnu::ms_abi]] virtual bool LoadItemDefinitions();
  [[gnu::ms_abi]] virtual bool GetItemDefinitionIDs(SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize);
  [[gnu::ms_abi]] virtual bool GetItemDefinitionProperty(SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestEligiblePromoItemDefinitionsIDs(CSteamID steamID);
  [[gnu::ms_abi]] virtual bool GetEligiblePromoItemDefinitionIDs(CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize);
  [[gnu::ms_abi]] virtual SteamAPICall_t StartPurchase(const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength);
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestPrices();
  [[gnu::ms_abi]] virtual uint32 GetNumItemsWithPrices();
  [[gnu::ms_abi]] virtual bool GetItemsWithPrices(SteamItemDef_t * pArrayItemDefs, uint64 * pPrices, uint32 unArrayLength);
  [[gnu::ms_abi]] virtual bool GetItemPrice(SteamItemDef_t iDefinition, uint64 * pPrice);
  [[gnu::ms_abi]] virtual SteamInventoryUpdateHandle_t StartUpdateProperties();
  [[gnu::ms_abi]] virtual bool RemoveProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName);
  [[gnu::ms_abi]] virtual bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, const char * pchPropertyValue);
  [[gnu::ms_abi]] virtual bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, bool bValue);
  [[gnu::ms_abi]] virtual bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, int64 nValue);
  [[gnu::ms_abi]] virtual bool SetProperty(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, float flValue);
  [[gnu::ms_abi]] virtual bool SubmitUpdateProperties(SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle);
};
struct ISteamVideo {
  [[gnu::ms_abi]] virtual void GetVideoURL(AppId_t unVideoAppID);
  [[gnu::ms_abi]] virtual bool IsBroadcasting(int * pnNumViewers);
  [[gnu::ms_abi]] virtual void GetOPFSettings(AppId_t unVideoAppID);
  [[gnu::ms_abi]] virtual bool GetOPFStringForApp(AppId_t unVideoAppID, char * pchBuffer, int32 * pnBufferSize);
};
struct ISteamParentalSettings {
  [[gnu::ms_abi]] virtual bool BIsParentalLockEnabled();
  [[gnu::ms_abi]] virtual bool BIsParentalLockLocked();
  [[gnu::ms_abi]] virtual bool BIsAppBlocked(AppId_t nAppID);
  [[gnu::ms_abi]] virtual bool BIsAppInBlockList(AppId_t nAppID);
  [[gnu::ms_abi]] virtual bool BIsFeatureBlocked(EParentalFeature eFeature);
  [[gnu::ms_abi]] virtual bool BIsFeatureInBlockList(EParentalFeature eFeature);
};
struct ISteamGameServer {
  [[gnu::ms_abi]] virtual bool InitGameServer(uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString);
  [[gnu::ms_abi]] virtual void SetProduct(const char * pszProduct);
  [[gnu::ms_abi]] virtual void SetGameDescription(const char * pszGameDescription);
  [[gnu::ms_abi]] virtual void SetModDir(const char * pszModDir);
  [[gnu::ms_abi]] virtual void SetDedicatedServer(bool bDedicated);
  [[gnu::ms_abi]] virtual void LogOn(const char * pszToken);
  [[gnu::ms_abi]] virtual void LogOnAnonymous();
  [[gnu::ms_abi]] virtual void LogOff();
  [[gnu::ms_abi]] virtual bool BLoggedOn();
  [[gnu::ms_abi]] virtual bool BSecure();
  [[gnu::ms_abi]] virtual CSteamID GetSteamID();
  [[gnu::ms_abi]] virtual bool WasRestartRequested();
  [[gnu::ms_abi]] virtual void SetMaxPlayerCount(int cPlayersMax);
  [[gnu::ms_abi]] virtual void SetBotPlayerCount(int cBotplayers);
  [[gnu::ms_abi]] virtual void SetServerName(const char * pszServerName);
  [[gnu::ms_abi]] virtual void SetMapName(const char * pszMapName);
  [[gnu::ms_abi]] virtual void SetPasswordProtected(bool bPasswordProtected);
  [[gnu::ms_abi]] virtual void SetSpectatorPort(uint16 unSpectatorPort);
  [[gnu::ms_abi]] virtual void SetSpectatorServerName(const char * pszSpectatorServerName);
  [[gnu::ms_abi]] virtual void ClearAllKeyValues();
  [[gnu::ms_abi]] virtual void SetKeyValue(const char * pKey, const char * pValue);
  [[gnu::ms_abi]] virtual void SetGameTags(const char * pchGameTags);
  [[gnu::ms_abi]] virtual void SetGameData(const char * pchGameData);
  [[gnu::ms_abi]] virtual void SetRegion(const char * pszRegion);
  [[gnu::ms_abi]] virtual bool SendUserConnectAndAuthenticate(uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, CSteamID * pSteamIDUser);
  [[gnu::ms_abi]] virtual CSteamID CreateUnauthenticatedUserConnection();
  [[gnu::ms_abi]] virtual void SendUserDisconnect(CSteamID steamIDUser);
  [[gnu::ms_abi]] virtual bool BUpdateUserData(CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore);
  [[gnu::ms_abi]] virtual HAuthTicket GetAuthSessionTicket(void * pTicket, int cbMaxTicket, uint32 * pcbTicket);
  [[gnu::ms_abi]] virtual EBeginAuthSessionResult BeginAuthSession(const void * pAuthTicket, int cbAuthTicket, CSteamID steamID);
  [[gnu::ms_abi]] virtual void EndAuthSession(CSteamID steamID);
  [[gnu::ms_abi]] virtual void CancelAuthTicket(HAuthTicket hAuthTicket);
  [[gnu::ms_abi]] virtual EUserHasLicenseForAppResult UserHasLicenseForApp(CSteamID steamID, AppId_t appID);
  [[gnu::ms_abi]] virtual bool RequestUserGroupStatus(CSteamID steamIDUser, CSteamID steamIDGroup);
  [[gnu::ms_abi]] virtual void GetGameplayStats();
  [[gnu::ms_abi]] virtual SteamAPICall_t GetServerReputation();
  [[gnu::ms_abi]] virtual uint32 GetPublicIP();
  [[gnu::ms_abi]] virtual bool HandleIncomingPacket(const void * pData, int cbData, uint32 srcIP, uint16 srcPort);
  [[gnu::ms_abi]] virtual int GetNextOutgoingPacket(void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort);
  [[gnu::ms_abi]] virtual void EnableHeartbeats(bool bActive);
  [[gnu::ms_abi]] virtual void SetHeartbeatInterval(int iHeartbeatInterval);
  [[gnu::ms_abi]] virtual void ForceHeartbeat();
  [[gnu::ms_abi]] virtual SteamAPICall_t AssociateWithClan(CSteamID steamIDClan);
  [[gnu::ms_abi]] virtual SteamAPICall_t ComputeNewPlayerCompatibility(CSteamID steamIDNewPlayer);
};
struct ISteamGameServerStats {
  [[gnu::ms_abi]] virtual SteamAPICall_t RequestUserStats(CSteamID steamIDUser);
  [[gnu::ms_abi]] virtual bool GetUserStat(CSteamID steamIDUser, const char * pchName, int32 * pData);
  [[gnu::ms_abi]] virtual bool GetUserStat(CSteamID steamIDUser, const char * pchName, float * pData);
  [[gnu::ms_abi]] virtual bool GetUserAchievement(CSteamID steamIDUser, const char * pchName, bool * pbAchieved);
  [[gnu::ms_abi]] virtual bool SetUserStat(CSteamID steamIDUser, const char * pchName, int32 nData);
  [[gnu::ms_abi]] virtual bool SetUserStat(CSteamID steamIDUser, const char * pchName, float fData);
  [[gnu::ms_abi]] virtual bool UpdateUserAvgRateStat(CSteamID steamIDUser, const char * pchName, float flCountThisSession, double dSessionLength);
  [[gnu::ms_abi]] virtual bool SetUserAchievement(CSteamID steamIDUser, const char * pchName);
  [[gnu::ms_abi]] virtual bool ClearUserAchievement(CSteamID steamIDUser, const char * pchName);
  [[gnu::ms_abi]] virtual SteamAPICall_t StoreUserStats(CSteamID steamIDUser);
};
bool SteamAPI_Init();
void SteamAPI_RunCallbacks();
void SteamGameServer_RunCallbacks();
void SteamAPI_RegisterCallback(void * pCallback, int callback);
void SteamAPI_UnregisterCallback(void * pCallback);
void SteamAPI_RegisterCallResult(void * pCallback, SteamAPICall_t callback);
void SteamAPI_UnregisterCallResult(void * pCallback, SteamAPICall_t callback);
bool SteamInternal_GameServer_Init(uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort, int eServerMode, const char * pchVersionString);
void SteamAPI_Shutdown();
void SteamGameServer_Shutdown();
HSteamUser SteamAPI_GetHSteamUser();
HSteamPipe SteamAPI_GetHSteamPipe();
HSteamUser SteamGameServer_GetHSteamUser();
HSteamPipe SteamGameServer_GetHSteamPipe();
void * SteamInternal_CreateInterface(const char * version);
bool SteamAPI_RestartAppIfNecessary(uint32 unOwnAppID);
