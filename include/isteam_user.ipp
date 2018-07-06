EXTERN_ABI CSteamID *ISteamUtils_GetSteamID(void *_this, CSteamID *id);

template <size_t N, typename R, typename... As>
EXTERN_ABI static R ISteamUser_Unimplemented(void *_this, As...) {
  debug("ISteamUser_Unimplemented: %s->vtbl[%zu](%p, ...)", static_cast<isteam_object *>(_this)->clazz, N, _this);
  return static_cast<R>(0);
}

struct ISteamUser004Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                     = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI void (*LogOn)(void *, CSteamID)                                                         = ISteamUser_Unimplemented<1, void, CSteamID>;
  EXTERN_ABI void (*LogOff)(void *)                                                                  = ISteamUser_Unimplemented<2, void>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                               = ISteamUser_Unimplemented<3, bool>;
  EXTERN_ABI ELogonState (*GetLogonState)(void *)                                                    = ISteamUser_Unimplemented<4, ELogonState>;
  EXTERN_ABI bool (*BConnected)(void *)                                                              = ISteamUser_Unimplemented<5, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                            = ISteamUtils_GetSteamID;
  EXTERN_ABI bool (*IsVACBanned)(void *, EVACBan)                                                    = ISteamUser_Unimplemented<7, bool, EVACBan>;
  EXTERN_ABI bool (*RequireShowVACBannedMessage)(void *, EVACBan)                                    = ISteamUser_Unimplemented<8, bool, EVACBan>;
  EXTERN_ABI void (*AcknowledgeVACBanning)(void *, EVACBan)                                          = ISteamUser_Unimplemented<9, void, EVACBan>;
  EXTERN_ABI int (*NClientGameIDAdd)(void *, int)                                                    = ISteamUser_Unimplemented<10, int, int>;
  EXTERN_ABI void (*RemoveClientGame)(void *, int)                                                   = ISteamUser_Unimplemented<11, void, int>;
  EXTERN_ABI void (*SetClientGameServer)(void *, int, uint32, uint16)                                = ISteamUser_Unimplemented<12, void, int, uint32, uint16>;
  EXTERN_ABI void (*SetSteam2Ticket)(void *, uint8 *, int)                                           = ISteamUser_Unimplemented<13, void, uint8 *, int>;
  EXTERN_ABI void (*AddServerNetAddress)(void *, uint32, uint16)                                     = ISteamUser_Unimplemented<14, void, uint32, uint16>;
  EXTERN_ABI bool (*SetEmail)(void *, const char *)                                                  = ISteamUser_Unimplemented<15, bool, const char *>;
  EXTERN_ABI int (*GetSteamGameConnectToken)(void *, void *, int)                                    = ISteamUser_Unimplemented<16, int, void *, int>;
  EXTERN_ABI bool (*SetRegistryString)(void *, ERegistrySubTree, const char *, const char *)         = ISteamUser_Unimplemented<17, bool, ERegistrySubTree, const char *, const char *>;
  EXTERN_ABI bool (*GetRegistryString)(void *, ERegistrySubTree, const char *, char *, int)          = ISteamUser_Unimplemented<18, bool, ERegistrySubTree, const char *, char *, int>;
  EXTERN_ABI bool (*SetRegistryInt)(void *, ERegistrySubTree, const char *, int)                     = ISteamUser_Unimplemented<19, bool, ERegistrySubTree, const char *, int>;
  EXTERN_ABI bool (*GetRegistryInt)(void *, ERegistrySubTree, const char *, int *)                   = ISteamUser_Unimplemented<20, bool, ERegistrySubTree, const char *, int *>;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, int, uint32, uint16, bool) = ISteamUser_Unimplemented<21, int, void *, int, CSteamID, int, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                 = ISteamUser_Unimplemented<22, void, uint32, uint16>;
  EXTERN_ABI void (*SetSelfAsPrimaryChatDestination)(void *)                                         = ISteamUser_Unimplemented<23, void>;
  EXTERN_ABI bool (*IsPrimaryChatDestination)(void *)                                                = ISteamUser_Unimplemented<24, bool>;
  EXTERN_ABI void (*RequestLegacyCDKey)(void *, AppId_t)                                             = ISteamUser_Unimplemented<25, void, AppId_t>;
} const isteam_user_004_vtbl;

struct ISteamUser005Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                                             = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI void (*LogOn)(void *, CSteamID)                                                                                                 = ISteamUser_Unimplemented<1, void, CSteamID>;
  EXTERN_ABI void (*LogOff)(void *)                                                                                                          = ISteamUser_Unimplemented<2, void>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                                       = ISteamUser_Unimplemented<3, bool>;
  EXTERN_ABI ELogonState (*GetLogonState)(void *)                                                                                            = ISteamUser_Unimplemented<4, ELogonState>;
  EXTERN_ABI bool (*BConnected)(void *)                                                                                                      = ISteamUser_Unimplemented<5, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                                                    = ISteamUtils_GetSteamID;
  EXTERN_ABI bool (*IsVACBanned)(void *, EVACBan)                                                                                            = ISteamUser_Unimplemented<7, bool, EVACBan>;
  EXTERN_ABI bool (*RequireShowVACBannedMessage)(void *, EVACBan)                                                                            = ISteamUser_Unimplemented<8, bool, EVACBan>;
  EXTERN_ABI void (*AcknowledgeVACBanning)(void *, EVACBan)                                                                                  = ISteamUser_Unimplemented<9, void, EVACBan>;
  EXTERN_ABI void (*SetSteam2Ticket)(void *, uint8 *, int)                                                                                   = ISteamUser_Unimplemented<10, void, uint8 *, int>;
  EXTERN_ABI void (*AddServerNetAddress)(void *, uint32, uint16)                                                                             = ISteamUser_Unimplemented<11, void, uint32, uint16>;
  EXTERN_ABI bool (*SetEmail)(void *, const char *)                                                                                          = ISteamUser_Unimplemented<12, bool, const char *>;
  EXTERN_ABI bool (*SetRegistryString)(void *, ERegistrySubTree, const char *, const char *)                                                 = ISteamUser_Unimplemented<13, bool, ERegistrySubTree, const char *, const char *>;
  EXTERN_ABI bool (*GetRegistryString)(void *, ERegistrySubTree, const char *, char *, int)                                                  = ISteamUser_Unimplemented<14, bool, ERegistrySubTree, const char *, char *, int>;
  EXTERN_ABI bool (*SetRegistryInt)(void *, ERegistrySubTree, const char *, int)                                                             = ISteamUser_Unimplemented<15, bool, ERegistrySubTree, const char *, int>;
  EXTERN_ABI bool (*GetRegistryInt)(void *, ERegistrySubTree, const char *, int *)                                                           = ISteamUser_Unimplemented<16, bool, ERegistrySubTree, const char *, int *>;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool)                                     = ISteamUser_Unimplemented<17, int, void *, int, CSteamID, CGameID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                                         = ISteamUser_Unimplemented<18, void, uint32, uint16>;
  EXTERN_ABI void (*SetSelfAsPrimaryChatDestination)(void *)                                                                                 = ISteamUser_Unimplemented<19, void>;
  EXTERN_ABI bool (*IsPrimaryChatDestination)(void *)                                                                                        = ISteamUser_Unimplemented<20, bool>;
  EXTERN_ABI void (*RequestLegacyCDKey)(void *, AppId_t)                                                                                     = ISteamUser_Unimplemented<21, void, AppId_t>;
  EXTERN_ABI bool (*SendGuestPassByEmail)(void *, const char *, GID_t, bool)                                                                 = ISteamUser_Unimplemented<22, bool, const char *, GID_t, bool>;
  EXTERN_ABI bool (*SendGuestPassByAccountID)(void *, uint32, GID_t, bool)                                                                   = ISteamUser_Unimplemented<23, bool, uint32, GID_t, bool>;
  EXTERN_ABI bool (*AckGuestPass)(void *, const char *)                                                                                      = ISteamUser_Unimplemented<24, bool, const char *>;
  EXTERN_ABI bool (*RedeemGuestPass)(void *, const char *)                                                                                   = ISteamUser_Unimplemented<25, bool, const char *>;
  EXTERN_ABI uint32 (*GetGuestPassToGiveCount)(void *)                                                                                       = ISteamUser_Unimplemented<26, uint32>;
  EXTERN_ABI uint32 (*GetGuestPassToRedeemCount)(void *)                                                                                     = ISteamUser_Unimplemented<27, uint32>;
  EXTERN_ABI uint32 (*GetGuestPassLastUpdateTime)(void *)                                                                                    = ISteamUser_Unimplemented<28, uint32>;
  EXTERN_ABI bool (*GetGuestPassToGiveInfo)(void *, uint32, GID_t *, PackageId_t *, RTime32 *, RTime32 *, RTime32 *, RTime32 *, char *, int) = ISteamUser_Unimplemented<29, bool, uint32, GID_t *, PackageId_t *, RTime32 *, RTime32 *, RTime32 *, RTime32 *, char *, int>;
  EXTERN_ABI bool (*GetGuestPassToRedeemInfo)(void *, uint32, GID_t *, PackageId_t *, RTime32 *, RTime32 *, RTime32 *, RTime32 *)            = ISteamUser_Unimplemented<30, bool, uint32, GID_t *, PackageId_t *, RTime32 *, RTime32 *, RTime32 *, RTime32 *>;
  EXTERN_ABI bool (*GetGuestPassToRedeemSenderAddress)(void *, uint32, char *, int)                                                          = ISteamUser_Unimplemented<31, bool, uint32, char *, int>;
  EXTERN_ABI bool (*GetGuestPassToRedeemSenderName)(void *, uint32, char *, int)                                                             = ISteamUser_Unimplemented<32, bool, uint32, char *, int>;
  EXTERN_ABI void (*AcknowledgeMessageByGID)(void *, const char *)                                                                           = ISteamUser_Unimplemented<33, void, const char *>;
  EXTERN_ABI bool (*SetLanguage)(void *, const char *)                                                                                       = ISteamUser_Unimplemented<34, bool, const char *>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                                       = ISteamUser_Unimplemented<35, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI void (*SetAccountName)(void *, const char *)                                                                                    = ISteamUser_Unimplemented<36, void, const char *>;
  EXTERN_ABI void (*SetPassword)(void *, const char *)                                                                                       = ISteamUser_Unimplemented<37, void, const char *>;
  EXTERN_ABI void (*SetAccountCreationTime)(void *, RTime32)                                                                                 = ISteamUser_Unimplemented<38, void, RTime32>;
} const isteam_user_005_vtbl;

struct ISteamUser006Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                         = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI void (*LogOn)(void *, CSteamID)                                                             = ISteamUser_Unimplemented<1, void, CSteamID>;
  EXTERN_ABI void (*LogOff)(void *)                                                                      = ISteamUser_Unimplemented<2, void>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                   = ISteamUser_Unimplemented<3, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                = ISteamUtils_GetSteamID;
  EXTERN_ABI bool (*SetRegistryString)(void *, ERegistrySubTree, const char *, const char *)             = ISteamUser_Unimplemented<5, bool, ERegistrySubTree, const char *, const char *>;
  EXTERN_ABI bool (*GetRegistryString)(void *, ERegistrySubTree, const char *, char *, int)              = ISteamUser_Unimplemented<6, bool, ERegistrySubTree, const char *, char *, int>;
  EXTERN_ABI bool (*SetRegistryInt)(void *, ERegistrySubTree, const char *, int)                         = ISteamUser_Unimplemented<7, bool, ERegistrySubTree, const char *, int>;
  EXTERN_ABI bool (*GetRegistryInt)(void *, ERegistrySubTree, const char *, int *)                       = ISteamUser_Unimplemented<8, bool, ERegistrySubTree, const char *, int *>;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool) = ISteamUser_Unimplemented<9, int, void *, int, CSteamID, CGameID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                     = ISteamUser_Unimplemented<10, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                   = ISteamUser_Unimplemented<11, void, CGameID, EAppUsageEvent, const char *>;
} const isteam_user_006_vtbl;

struct ISteamUser007Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI void (*LogOn)(void *, CSteamID)                                                                          = ISteamUser_Unimplemented<1, void, CSteamID>;
  EXTERN_ABI void (*LogOff)(void *)                                                                                   = ISteamUser_Unimplemented<2, void>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<3, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI bool (*SetRegistryString)(void *, ERegistrySubTree, const char *, const char *)                          = ISteamUser_Unimplemented<5, bool, ERegistrySubTree, const char *, const char *>;
  EXTERN_ABI bool (*GetRegistryString)(void *, ERegistrySubTree, const char *, char *, int)                           = ISteamUser_Unimplemented<6, bool, ERegistrySubTree, const char *, char *, int>;
  EXTERN_ABI bool (*SetRegistryInt)(void *, ERegistrySubTree, const char *, int)                                      = ISteamUser_Unimplemented<7, bool, ERegistrySubTree, const char *, int>;
  EXTERN_ABI bool (*GetRegistryInt)(void *, ERegistrySubTree, const char *, int *)                                    = ISteamUser_Unimplemented<8, bool, ERegistrySubTree, const char *, int *>;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool, void *, int) = ISteamUser_Unimplemented<9, int, void *, int, CSteamID, CGameID, uint32, uint16, bool, void *, int>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<10, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<11, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI void (*RefreshSteam2Login)(void *)                                                                       = ISteamUser_Unimplemented<12, void>;
} const isteam_user_007_vtbl;

struct ISteamUser008Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool, void *, int) = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, CGameID, uint32, uint16, bool, void *, int>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI void (*RefreshSteam2Login)(void *)                                                                       = ISteamUser_Unimplemented<6, void>;
} const isteam_user_008_vtbl;

struct ISteamUser009Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                         = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                   = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, CGameID, uint32, uint16, bool) = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, CGameID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                     = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                   = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI void (*RefreshSteam2Login)(void *)                                                          = ISteamUser_Unimplemented<6, void>;
} const isteam_user_009_vtbl;

struct ISteamUser010Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                          = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                       = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool) = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                            = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)          = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
} const isteam_user_010_vtbl;

struct ISteamUser011Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                          = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                       = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool) = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                            = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)          = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                     = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                 = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetCompressedVoice)(void *, void *, uint32, uint32 *)               = ISteamUser_Unimplemented<9, EVoiceResult, void *, uint32, uint32 *>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, void *, uint32, void *, uint32, uint32 *)  = ISteamUser_Unimplemented<10, EVoiceResult, void *, uint32, void *, uint32, uint32 *>;
} const isteam_user_011_vtbl;

struct ISteamUser012Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                          = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                       = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool) = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                            = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)          = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                     = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                 = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetCompressedVoice)(void *, void *, uint32, uint32 *)               = ISteamUser_Unimplemented<9, EVoiceResult, void *, uint32, uint32 *>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, void *, uint32, void *, uint32, uint32 *)  = ISteamUser_Unimplemented<20, EVoiceResult, void *, uint32, void *, uint32, uint32 *>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                 = ISteamUser_Unimplemented<21, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)   = ISteamUser_Unimplemented<22, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                           = ISteamUser_Unimplemented<23, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                      = ISteamUser_Unimplemented<24, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)     = ISteamUser_Unimplemented<25, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
} const isteam_user_012_vtbl;

struct ISteamUser013Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                              = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                        = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                     = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)               = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                          = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                        = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                   = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                              = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                               = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *) = ISteamUser_Unimplemented<20, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, void *, uint32, void *, uint32, uint32 *)                = ISteamUser_Unimplemented<21, EVoiceResult, void *, uint32, void *, uint32, uint32 *>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                               = ISteamUser_Unimplemented<22, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                 = ISteamUser_Unimplemented<23, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                         = ISteamUser_Unimplemented<24, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                    = ISteamUser_Unimplemented<25, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                   = ISteamUser_Unimplemented<26, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                     = ISteamUser_Unimplemented<27, bool>;
} const isteam_user_013_vtbl;

struct ISteamUser014Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                              = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                        = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                     = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)               = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                          = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                        = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                   = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                              = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                               = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, void *, uint32, void *, uint32, uint32 *)                = ISteamUser_Unimplemented<11, EVoiceResult, void *, uint32, void *, uint32, uint32 *>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                               = ISteamUser_Unimplemented<12, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                 = ISteamUser_Unimplemented<13, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                         = ISteamUser_Unimplemented<14, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                    = ISteamUser_Unimplemented<15, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                   = ISteamUser_Unimplemented<16, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                     = ISteamUser_Unimplemented<17, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                          = ISteamUser_Unimplemented<18, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                 = ISteamUser_Unimplemented<19, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                     = ISteamUser_Unimplemented<20, bool, void *, int, uint32 *>;
} const isteam_user_014_vtbl;

struct ISteamUser015Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                              = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                        = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                     = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)               = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                          = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                        = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                   = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                              = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                               = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, void *, uint32, void *, uint32, uint32 *, uint32)        = ISteamUser_Unimplemented<11, EVoiceResult, void *, uint32, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI uint32 (*GetVoiceOptimalSampleRate)(void *)                                                      = ISteamUser_Unimplemented<12, uint32>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                               = ISteamUser_Unimplemented<13, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                 = ISteamUser_Unimplemented<14, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                         = ISteamUser_Unimplemented<15, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                    = ISteamUser_Unimplemented<16, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                   = ISteamUser_Unimplemented<17, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                     = ISteamUser_Unimplemented<18, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                          = ISteamUser_Unimplemented<19, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                 = ISteamUser_Unimplemented<20, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                     = ISteamUser_Unimplemented<21, bool, void *, int, uint32 *>;
} const isteam_user_015_vtbl;

struct ISteamUser016Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)                       = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                           = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                                      = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                                       = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *, uint32)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, const void *, uint32, void *, uint32, uint32 *, uint32)          = ISteamUser_Unimplemented<11, EVoiceResult, const void *, uint32, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI uint32 (*GetVoiceOptimalSampleRate)(void *)                                                              = ISteamUser_Unimplemented<12, uint32>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                                       = ISteamUser_Unimplemented<13, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                         = ISteamUser_Unimplemented<14, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                                 = ISteamUser_Unimplemented<15, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                            = ISteamUser_Unimplemented<16, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                           = ISteamUser_Unimplemented<17, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                             = ISteamUser_Unimplemented<18, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                                  = ISteamUser_Unimplemented<19, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                         = ISteamUser_Unimplemented<20, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                             = ISteamUser_Unimplemented<21, bool, void *, int, uint32 *>;
} const isteam_user_016_vtbl;

struct ISteamUser017Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)                       = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                           = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                                      = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                                       = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *, uint32)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, const void *, uint32, void *, uint32, uint32 *, uint32)          = ISteamUser_Unimplemented<11, EVoiceResult, const void *, uint32, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI uint32 (*GetVoiceOptimalSampleRate)(void *)                                                              = ISteamUser_Unimplemented<12, uint32>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                                       = ISteamUser_Unimplemented<13, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                         = ISteamUser_Unimplemented<14, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                                 = ISteamUser_Unimplemented<15, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                            = ISteamUser_Unimplemented<16, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                           = ISteamUser_Unimplemented<17, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                             = ISteamUser_Unimplemented<18, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                                  = ISteamUser_Unimplemented<19, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                         = ISteamUser_Unimplemented<20, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                             = ISteamUser_Unimplemented<21, bool, void *, int, uint32 *>;
  EXTERN_ABI int (*GetGameBadgeLevel)(void *, int, bool)                                                              = ISteamUser_Unimplemented<22, int, int, bool>;
  EXTERN_ABI int (*GetPlayerSteamLevel)(void *)                                                                       = ISteamUser_Unimplemented<23, int>;
} const isteam_user_017_vtbl;

struct ISteamUser018Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)                       = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                           = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                                      = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                                       = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *, uint32)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, const void *, uint32, void *, uint32, uint32 *, uint32)          = ISteamUser_Unimplemented<11, EVoiceResult, const void *, uint32, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI uint32 (*GetVoiceOptimalSampleRate)(void *)                                                              = ISteamUser_Unimplemented<12, uint32>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                                       = ISteamUser_Unimplemented<13, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                         = ISteamUser_Unimplemented<14, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                                 = ISteamUser_Unimplemented<15, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                            = ISteamUser_Unimplemented<16, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                           = ISteamUser_Unimplemented<17, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                             = ISteamUser_Unimplemented<18, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                                  = ISteamUser_Unimplemented<19, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                         = ISteamUser_Unimplemented<20, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                             = ISteamUser_Unimplemented<21, bool, void *, int, uint32 *>;
  EXTERN_ABI int (*GetGameBadgeLevel)(void *, int, bool)                                                              = ISteamUser_Unimplemented<22, int, int, bool>;
  EXTERN_ABI int (*GetPlayerSteamLevel)(void *)                                                                       = ISteamUser_Unimplemented<23, int>;
  EXTERN_ABI SteamAPICall_t (*RequestStoreAuthURL)(void *, char const *)                                              = ISteamUser_Unimplemented<24, SteamAPICall_t, char const *>;
} const isteam_user_018_vtbl;

struct ISteamUser019Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)                       = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                           = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                                      = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                                       = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *, uint32)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, const void *, uint32, void *, uint32, uint32 *, uint32)          = ISteamUser_Unimplemented<11, EVoiceResult, const void *, uint32, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI uint32 (*GetVoiceOptimalSampleRate)(void *)                                                              = ISteamUser_Unimplemented<12, uint32>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                                       = ISteamUser_Unimplemented<13, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                         = ISteamUser_Unimplemented<14, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                                 = ISteamUser_Unimplemented<15, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                            = ISteamUser_Unimplemented<16, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                           = ISteamUser_Unimplemented<17, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                             = ISteamUser_Unimplemented<18, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                                  = ISteamUser_Unimplemented<19, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                         = ISteamUser_Unimplemented<20, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                             = ISteamUser_Unimplemented<21, bool, void *, int, uint32 *>;
  EXTERN_ABI int (*GetGameBadgeLevel)(void *, int, bool)                                                              = ISteamUser_Unimplemented<22, int, int, bool>;
  EXTERN_ABI int (*GetPlayerSteamLevel)(void *)                                                                       = ISteamUser_Unimplemented<23, int>;
  EXTERN_ABI SteamAPICall_t (*RequestStoreAuthURL)(void *, char const *)                                              = ISteamUser_Unimplemented<24, SteamAPICall_t, char const *>;
  EXTERN_ABI bool (*BIsPhoneVerified)(void *)                                                                         = ISteamUser_Unimplemented<25, bool>;
  EXTERN_ABI bool (*BIsTwoFactorEnabled)(void *)                                                                      = ISteamUser_Unimplemented<26, bool>;
} const isteam_user_019_vtbl;

struct ISteamUser020Vtbl {
  EXTERN_ABI HSteamUser (*GetHSteamUser)(void *)                                                                      = ISteamUser_Unimplemented<0, HSteamUser>;
  EXTERN_ABI bool (*BLoggedOn)(void *)                                                                                = ISteamUser_Unimplemented<1, bool>;
  EXTERN_ABI decltype(&ISteamUtils_GetSteamID) GetSteamID                                                             = ISteamUtils_GetSteamID;
  EXTERN_ABI int (*InitiateGameConnection)(void *, void *, int, CSteamID, uint32, uint16, bool)                       = ISteamUser_Unimplemented<3, int, void *, int, CSteamID, uint32, uint16, bool>;
  EXTERN_ABI void (*TerminateGameConnection)(void *, uint32, uint16)                                                  = ISteamUser_Unimplemented<4, void, uint32, uint16>;
  EXTERN_ABI void (*TrackAppUsageEvent)(void *, CGameID, EAppUsageEvent, const char *)                                = ISteamUser_Unimplemented<5, void, CGameID, EAppUsageEvent, const char *>;
  EXTERN_ABI bool (*GetUserDataFolder)(void *, char *, int)                                                           = ISteamUser_Unimplemented<6, bool, char *, int>;
  EXTERN_ABI void (*StartVoiceRecording)(void *)                                                                      = ISteamUser_Unimplemented<7, void>;
  EXTERN_ABI void (*StopVoiceRecording)(void *)                                                                       = ISteamUser_Unimplemented<8, void>;
  EXTERN_ABI EVoiceResult (*GetAvailableVoice)(void *, uint32 *, uint32 *, uint32)                                    = ISteamUser_Unimplemented<9, EVoiceResult, uint32 *, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*GetVoice)(void *, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32) = ISteamUser_Unimplemented<10, EVoiceResult, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI EVoiceResult (*DecompressVoice)(void *, const void *, uint32, void *, uint32, uint32 *, uint32)          = ISteamUser_Unimplemented<11, EVoiceResult, const void *, uint32, void *, uint32, uint32 *, uint32>;
  EXTERN_ABI uint32 (*GetVoiceOptimalSampleRate)(void *)                                                              = ISteamUser_Unimplemented<12, uint32>;
  EXTERN_ABI HAuthTicket (*GetAuthSessionTicket)(void *, void *, int, uint32 *)                                       = ISteamUser_Unimplemented<13, HAuthTicket, void *, int, uint32 *>;
  EXTERN_ABI EBeginAuthSessionResult (*BeginAuthSession)(void *, const void *, int, CSteamID)                         = ISteamUser_Unimplemented<14, EBeginAuthSessionResult, const void *, int, CSteamID>;
  EXTERN_ABI void (*EndAuthSession)(void *, CSteamID)                                                                 = ISteamUser_Unimplemented<15, void, CSteamID>;
  EXTERN_ABI void (*CancelAuthTicket)(void *, HAuthTicket)                                                            = ISteamUser_Unimplemented<16, void, HAuthTicket>;
  EXTERN_ABI EUserHasLicenseForAppResult (*UserHasLicenseForApp)(void *, CSteamID, AppId_t)                           = ISteamUser_Unimplemented<17, EUserHasLicenseForAppResult, CSteamID, AppId_t>;
  EXTERN_ABI bool (*BIsBehindNAT)(void *)                                                                             = ISteamUser_Unimplemented<18, bool>;
  EXTERN_ABI void (*AdvertiseGame)(void *, CSteamID, uint32, uint16)                                                  = ISteamUser_Unimplemented<19, void, CSteamID, uint32, uint16>;
  EXTERN_ABI SteamAPICall_t (*RequestEncryptedAppTicket)(void *, void *, int)                                         = ISteamUser_Unimplemented<20, SteamAPICall_t, void *, int>;
  EXTERN_ABI bool (*GetEncryptedAppTicket)(void *, void *, int, uint32 *)                                             = ISteamUser_Unimplemented<21, bool, void *, int, uint32 *>;
  EXTERN_ABI int (*GetGameBadgeLevel)(void *, int, bool)                                                              = ISteamUser_Unimplemented<22, int, int, bool>;
  EXTERN_ABI int (*GetPlayerSteamLevel)(void *)                                                                       = ISteamUser_Unimplemented<23, int>;
  EXTERN_ABI SteamAPICall_t (*RequestStoreAuthURL)(void *, char const *)                                              = ISteamUser_Unimplemented<24, SteamAPICall_t, char const *>;
  EXTERN_ABI bool (*BIsPhoneVerified)(void *)                                                                         = ISteamUser_Unimplemented<25, bool>;
  EXTERN_ABI bool (*BIsTwoFactorEnabled)(void *)                                                                      = ISteamUser_Unimplemented<26, bool>;
  EXTERN_ABI bool (*BIsPhoneIdentifying)(void *)                                                                      = ISteamUser_Unimplemented<27, bool>;
  EXTERN_ABI bool (*BIsPhoneRequiringVerification)(void *)                                                            = ISteamUser_Unimplemented<28, bool>;
} const isteam_user_020_vtbl;
