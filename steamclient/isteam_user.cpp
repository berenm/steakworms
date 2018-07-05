#include <cassert>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::sysv_abi]]
namespace svabi {
#include "isteam_user.ipp"
} // namespace svabi

#undef EXTERN_ABI

#define EXTERN_ABI [[gnu::ms_abi, gnu::thiscall]]
namespace msabi {
#include "isteam_user.ipp"

bool ISteamUser_AckGuestPass(void *_this, const char *a) {
  debug("ISteamUser_AckGuestPass(%p, %s)", _this, a);
  return svabi::ISteamUser_AckGuestPass(_this, a);
}

bool ISteamUser_BConnected(void *_this) {
  debug("ISteamUser_BConnected(%p)", _this);
  return svabi::ISteamUser_BConnected(_this);
}

bool ISteamUser_BIsBehindNAT(void *_this) {
  debug("ISteamUser_BIsBehindNAT(%p)", _this);
  return svabi::ISteamUser_BIsBehindNAT(_this);
}

bool ISteamUser_BLoggedOn(void *_this) {
  debug("ISteamUser_BLoggedOn(%p)", _this);
  return svabi::ISteamUser_BLoggedOn(_this);
}

bool ISteamUser_GetEncryptedAppTicket(void *_this, void *a, int b, uint32 *c) {
  debug("ISteamUser_GetEncryptedAppTicket(%p, %p, %d, %p)", _this, a, b, c);
  return svabi::ISteamUser_GetEncryptedAppTicket(_this, a, b, c);
}

bool ISteamUser_GetGuestPassToGiveInfo(void *_this, uint32 a, GID_t *b, PackageId_t *c, RTime32 *d, RTime32 *e, RTime32 *f, RTime32 *g, char *h, int i) {
  debug("ISteamUser_GetGuestPassToGiveInfo(%p)", _this);
  return svabi::ISteamUser_GetGuestPassToGiveInfo(_this, a, b, c, d, e, f, g, h, i);
}

bool ISteamUser_GetGuestPassToRedeemInfo(void *_this, uint32 a, GID_t *b, PackageId_t *c, RTime32 *d, RTime32 *e, RTime32 *f, RTime32 *g) {
  debug("ISteamUser_GetGuestPassToRedeemInfo(%p)", _this);
  return svabi::ISteamUser_GetGuestPassToRedeemInfo(_this, a, b, c, d, e, f, g);
}

bool ISteamUser_GetGuestPassToRedeemSenderAddress(void *_this, uint32 a, char *b, int c) {
  debug("ISteamUser_GetGuestPassToRedeemSenderAddress(%p)", _this);
  return svabi::ISteamUser_GetGuestPassToRedeemSenderAddress(_this, a, b, c);
}

bool ISteamUser_GetGuestPassToRedeemSenderName(void *_this, uint32, char *, int) {
  debug("ISteamUser_GetGuestPassToRedeemSenderName(%p)", _this);
  return svabi::ISteamUser_GetGuestPassToRedeemSenderName(_this);
}

bool ISteamUser_GetRegistryInt(void *_this, ERegistrySubTree, const char *, int *) {
  debug("ISteamUser_GetRegistryInt(%p)", _this);
  return svabi::ISteamUser_GetRegistryInt(_this);
}

bool ISteamUser_GetRegistryString(void *_this, ERegistrySubTree, const char *, char *, int) {
  debug("ISteamUser_GetRegistryString(%p)", _this);
  return svabi::ISteamUser_GetRegistryString(_this);
}

bool ISteamUser_GetUserDataFolder(void *_this, char *, int) {
  debug("ISteamUser_GetUserDataFolder(%p)", _this);
  return svabi::ISteamUser_GetUserDataFolder(_this);
}

bool ISteamUser_IsPrimaryChatDestination(void *_this) {
  debug("ISteamUser_IsPrimaryChatDestination(%p)", _this);
  return svabi::ISteamUser_IsPrimaryChatDestination(_this);
}

bool ISteamUser_IsVACBanned(void *_this, EVACBan) {
  debug("ISteamUser_IsVACBanned(%p)", _this);
  return svabi::ISteamUser_IsVACBanned(_this);
}

bool ISteamUser_RedeemGuestPass(void *_this, const char *) {
  debug("ISteamUser_RedeemGuestPass(%p)", _this);
  return svabi::ISteamUser_RedeemGuestPass(_this);
}

bool ISteamUser_RequireShowVACBannedMessage(void *_this, EVACBan) {
  debug("ISteamUser_RequireShowVACBannedMessage(%p)", _this);
  return svabi::ISteamUser_RequireShowVACBannedMessage(_this);
}

bool ISteamUser_SendGuestPassByAccountID(void *_this, uint32, GID_t, bool) {
  debug("ISteamUser_SendGuestPassByAccountID(%p)", _this);
  return svabi::ISteamUser_SendGuestPassByAccountID(_this);
}

bool ISteamUser_SendGuestPassByEmail(void *_this, const char *, GID_t, bool) {
  debug("ISteamUser_SendGuestPassByEmail(%p)", _this);
  return svabi::ISteamUser_SendGuestPassByEmail(_this);
}

bool ISteamUser_SetEmail(void *_this, const char *) {
  debug("ISteamUser_SetEmail(%p)", _this);
  return svabi::ISteamUser_SetEmail(_this);
}

bool ISteamUser_SetLanguage(void *_this, const char *) {
  debug("ISteamUser_SetLanguage(%p)", _this);
  return svabi::ISteamUser_SetLanguage(_this);
}

bool ISteamUser_SetRegistryInt(void *_this, ERegistrySubTree, const char *, int) {
  debug("ISteamUser_SetRegistryInt(%p)", _this);
  return svabi::ISteamUser_SetRegistryInt(_this);
}

bool ISteamUser_SetRegistryString(void *_this, ERegistrySubTree, const char *, const char *) {
  debug("ISteamUser_SetRegistryString(%p)", _this);
  return svabi::ISteamUser_SetRegistryString(_this);
}

CSteamID ISteamUser_GetSteamID(void *_this) {
  debug("ISteamUser_GetSteamID(%p)", _this);
  return svabi::ISteamUser_GetSteamID(_this);
}

EBeginAuthSessionResult ISteamUser_BeginAuthSession(void *_this, const void *, int, CSteamID) {
  debug("ISteamUser_BeginAuthSession(%p)", _this);
  return svabi::ISteamUser_BeginAuthSession(_this);
}

ELogonState ISteamUser_GetLogonState(void *_this) {
  debug("ISteamUser_GetLogonState(%p)", _this);
  return svabi::ISteamUser_GetLogonState(_this);
}

EUserHasLicenseForAppResult ISteamUser_UserHasLicenseForApp(void *_this, CSteamID, AppId_t) {
  debug("ISteamUser_UserHasLicenseForApp(%p)", _this);
  return svabi::ISteamUser_UserHasLicenseForApp(_this);
}

EVoiceResult ISteamUser_DecompressVoice(void *_this, const void *, uint32, void *, uint32, uint32 *, uint32) {
  debug("ISteamUser_DecompressVoice(%p)", _this);
  return svabi::ISteamUser_DecompressVoice(_this);
}

EVoiceResult ISteamUser_DecompressVoice0(void *_this, void *, uint32, void *, uint32, uint32 *) {
  debug("ISteamUser_DecompressVoice0(%p)", _this);
  return svabi::ISteamUser_DecompressVoice0(_this);
}

EVoiceResult ISteamUser_DecompressVoice1(void *_this, void *, uint32, void *, uint32, uint32 *, uint32) {
  debug("ISteamUser_DecompressVoice1(%p)", _this);
  return svabi::ISteamUser_DecompressVoice1(_this);
}

EVoiceResult ISteamUser_GetAvailableVoice(void *_this, uint32 *, uint32 *, uint32) {
  debug("ISteamUser_GetAvailableVoice(%p)", _this);
  return svabi::ISteamUser_GetAvailableVoice(_this);
}

EVoiceResult ISteamUser_GetAvailableVoice0(void *_this, uint32 *, uint32 *) {
  debug("ISteamUser_GetAvailableVoice0(%p)", _this);
  return svabi::ISteamUser_GetAvailableVoice0(_this);
}

EVoiceResult ISteamUser_GetCompressedVoice(void *_this, void *, uint32, uint32 *) {
  debug("ISteamUser_GetCompressedVoice(%p)", _this);
  return svabi::ISteamUser_GetCompressedVoice(_this);
}

EVoiceResult ISteamUser_GetVoice(void *_this, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32) {
  debug("ISteamUser_GetVoice(%p)", _this);
  return svabi::ISteamUser_GetVoice(_this);
}

EVoiceResult ISteamUser_GetVoice0(void *_this, bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *) {
  debug("ISteamUser_GetVoice0(%p)", _this);
  return svabi::ISteamUser_GetVoice0(_this);
}

HAuthTicket ISteamUser_GetAuthSessionTicket(void *_this, void *, int, uint32 *) {
  debug("ISteamUser_GetAuthSessionTicket(%p)", _this);
  return svabi::ISteamUser_GetAuthSessionTicket(_this);
}

HSteamUser ISteamUser_GetHSteamUser(void *_this) {
  debug("ISteamUser_GetHSteamUser(%p)", _this);
  return svabi::ISteamUser_GetHSteamUser(_this);
}

int ISteamUser_GetGameBadgeLevel(void *_this, int nSeries, bool bFoil) {
  debug("ISteamUser_GetGameBadgeLevel(%p)", _this);
  return svabi::ISteamUser_GetGameBadgeLevel(_this);
}

int ISteamUser_GetPlayerSteamLevel(void *_this) {
  debug("ISteamUser_GetPlayerSteamLevel(%p)", _this);
  return svabi::ISteamUser_GetPlayerSteamLevel(_this);
}

int ISteamUser_GetSteamGameConnectToken(void *_this, void *, int) {
  debug("ISteamUser_GetSteamGameConnectToken(%p)", _this);
  return svabi::ISteamUser_GetSteamGameConnectToken(_this);
}

int ISteamUser_InitiateGameConnection(void *_this, void *, int, CSteamID, CGameID, uint32, uint16, bool) {
  debug("ISteamUser_InitiateGameConnection(%p)", _this);
  return svabi::ISteamUser_InitiateGameConnection(_this);
}

int ISteamUser_InitiateGameConnection(void *_this, void *, int, CSteamID, CGameID, uint32, uint16, bool, void *, int) {
  debug("ISteamUser_InitiateGameConnection(%p)", _this);
  return svabi::ISteamUser_InitiateGameConnection(_this);
}

int ISteamUser_InitiateGameConnection(void *_this, void *, int, CSteamID, int, uint32, uint16, bool) {
  debug("ISteamUser_InitiateGameConnection(%p)", _this);
  return svabi::ISteamUser_InitiateGameConnection(_this);
}

int ISteamUser_InitiateGameConnection(void *_this, void *, int, CSteamID, uint32, uint16, bool) {
  debug("ISteamUser_InitiateGameConnection(%p)", _this);
  return svabi::ISteamUser_InitiateGameConnection(_this);
}

int ISteamUser_NClientGameIDAdd(void *_this, int) {
  debug("ISteamUser_NClientGameIDAdd(%p)", _this);
  return svabi::ISteamUser_NClientGameIDAdd(_this);
}

SteamAPICall_t ISteamUser_RequestEncryptedAppTicket(void *_this, void *, int) {
  debug("ISteamUser_RequestEncryptedAppTicket(%p)", _this);
  return svabi::ISteamUser_RequestEncryptedAppTicket(_this);
}

uint32 ISteamUser_GetGuestPassLastUpdateTime(void *_this) {
  debug("ISteamUser_GetGuestPassLastUpdateTime(%p)", _this);
  return svabi::ISteamUser_GetGuestPassLastUpdateTime(_this);
}

uint32 ISteamUser_GetGuestPassToGiveCount(void *_this) {
  debug("ISteamUser_GetGuestPassToGiveCount(%p)", _this);
  return svabi::ISteamUser_GetGuestPassToGiveCount(_this);
}

uint32 ISteamUser_GetGuestPassToRedeemCount(void *_this) {
  debug("ISteamUser_GetGuestPassToRedeemCount(%p)", _this);
  return svabi::ISteamUser_GetGuestPassToRedeemCount(_this);
}

uint32 ISteamUser_GetVoiceOptimalSampleRate(void *_this) {
  debug("ISteamUser_GetVoiceOptimalSampleRate(%p)", _this);
  return svabi::ISteamUser_GetVoiceOptimalSampleRate(_this);
}

void ISteamUser_AcknowledgeMessageByGID(void *_this, const char *) {
  debug("ISteamUser_AcknowledgeMessageByGID(%p)", _this);
  return svabi::ISteamUser_AcknowledgeMessageByGID(_this);
}

void ISteamUser_AcknowledgeVACBanning(void *_this, EVACBan) {
  debug("ISteamUser_AcknowledgeVACBanning(%p)", _this);
  return svabi::ISteamUser_AcknowledgeVACBanning(_this);
}

void ISteamUser_AddServerNetAddress(void *_this, uint32, uint16) {
  debug("ISteamUser_AddServerNetAddress(%p)", _this);
  return svabi::ISteamUser_AddServerNetAddress(_this);
}

void ISteamUser_AdvertiseGame(void *_this, CSteamID, uint32, uint16) {
  debug("ISteamUser_AdvertiseGame(%p)", _this);
  return svabi::ISteamUser_AdvertiseGame(_this);
}

void ISteamUser_CancelAuthTicket(void *_this, HAuthTicket) {
  debug("ISteamUser_CancelAuthTicket(%p)", _this);
  return svabi::ISteamUser_CancelAuthTicket(_this);
}

void ISteamUser_EndAuthSession(void *_this, CSteamID) {
  debug("ISteamUser_EndAuthSession(%p)", _this);
  return svabi::ISteamUser_EndAuthSession(_this);
}

void ISteamUser_LogOff(void *_this) {
  debug("ISteamUser_LogOff(%p)", _this);
  return svabi::ISteamUser_LogOff(_this);
}

void ISteamUser_LogOn(void *_this, CSteamID) {
  debug("ISteamUser_LogOn(%p)", _this);
  return svabi::ISteamUser_LogOn(_this);
}

void ISteamUser_RefreshSteam2Login(void *_this) {
  debug("ISteamUser_RefreshSteam2Login(%p)", _this);
  return svabi::ISteamUser_RefreshSteam2Login(_this);
}

void ISteamUser_RemoveClientGame(void *_this, int) {
  debug("ISteamUser_RemoveClientGame(%p)", _this);
  return svabi::ISteamUser_RemoveClientGame(_this);
}

void ISteamUser_RequestLegacyCDKey(void *_this, AppId_t) {
  debug("ISteamUser_RequestLegacyCDKey(%p)", _this);
  return svabi::ISteamUser_RequestLegacyCDKey(_this);
}

void ISteamUser_SetAccountCreationTime(void *_this, RTime32) {
  debug("ISteamUser_SetAccountCreationTime(%p)", _this);
  return svabi::ISteamUser_SetAccountCreationTime(_this);
}

void ISteamUser_SetAccountName(void *_this, const char *) {
  debug("ISteamUser_SetAccountName(%p)", _this);
  return svabi::ISteamUser_SetAccountName(_this);
}

void ISteamUser_SetClientGameServer(void *_this, int, uint32, uint16) {
  debug("ISteamUser_SetClientGameServer(%p)", _this);
  return svabi::ISteamUser_SetClientGameServer(_this);
}

void ISteamUser_SetPassword(void *_this, const char *) {
  debug("ISteamUser_SetPassword(%p)", _this);
  return svabi::ISteamUser_SetPassword(_this);
}

void ISteamUser_SetSelfAsPrimaryChatDestination(void *_this) {
  debug("ISteamUser_SetSelfAsPrimaryChatDestination(%p)", _this);
  return svabi::ISteamUser_SetSelfAsPrimaryChatDestination(_this);
}

void ISteamUser_SetSteam2Ticket(void *_this, uint8 *, int) {
  debug("ISteamUser_SetSteam2Ticket(%p)", _this);
  return svabi::ISteamUser_SetSteam2Ticket(_this);
}

void ISteamUser_StartVoiceRecording(void *_this) {
  debug("ISteamUser_StartVoiceRecording(%p)", _this);
  return svabi::ISteamUser_StartVoiceRecording(_this);
}

void ISteamUser_StopVoiceRecording(void *_this) {
  debug("ISteamUser_StopVoiceRecording(%p)", _this);
  return svabi::ISteamUser_StopVoiceRecording(_this);
}

void ISteamUser_TerminateGameConnection(void *_this, uint32 ip, uint16 port) {
  debug("ISteamUser_TerminateGameConnection(%p, %d, %d)", _this, ip, port);
  return svabi::ISteamUser_TerminateGameConnection(_this, ip, port);
}

void ISteamUser_TrackAppUsageEvent(void *_this, CGameID a, EAppUsageEvent b, const char *c) {
  debug("ISteamUser_TrackAppUsageEvent(%p)", _this);
  return svabi::ISteamUser_TrackAppUsageEvent(_this, a, b, c);
}

} // namespace msabi
