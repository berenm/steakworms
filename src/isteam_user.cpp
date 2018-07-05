#include <cassert>
#include <cinttypes>
#include <cstring>

#include "steakworms.hpp"
#undef EXTERN_ABI

namespace svabi {
#define EXTERN_ABI [[gnu::sysv_abi]]
#include "isteam_user.ipp"
#undef EXTERN_ABI

bool ISteamUser_AckGuestPass(void *_this, const char *a) {
  debug("ISteamUser_AckGuestPass(%p, %s)", _this, a);
  return false;
}

bool ISteamUser_BConnected(void *_this) {
  debug("ISteamUser_BConnected(%p)", _this);
  return false;
}

bool ISteamUser_BIsBehindNAT(void *_this) {
  debug("ISteamUser_BIsBehindNAT(%p)", _this);
  return false;
}

bool ISteamUser_BLoggedOn(void *_this) {
  debug("ISteamUser_BLoggedOn(%p)", _this);
  return false;
}

bool ISteamUser_GetEncryptedAppTicket(void *_this, void *a, int b, uint32 *c) {
  debug("ISteamUser_GetEncryptedAppTicket(%p, %p, %d, %p)", _this, a, b, c);
  return false;
}

bool ISteamUser_GetGuestPassToGiveInfo(void *_this, uint32 a, GID_t *b, PackageId_t *c, RTime32 *d, RTime32 *e, RTime32 *f, RTime32 *g, char *h, int i) {
  debug("ISteamUser_GetGuestPassToGiveInfo(%p)", _this);
  return false;
}

bool ISteamUser_GetGuestPassToRedeemInfo(void *_this, uint32 a, GID_t *b, PackageId_t *c, RTime32 *d, RTime32 *e, RTime32 *f, RTime32 *g) {
  debug("ISteamUser_GetGuestPassToRedeemInfo(%p)", _this);
  return false;
}

bool ISteamUser_GetGuestPassToRedeemSenderAddress(void *_this, uint32 a, char *b, int c) {
  debug("ISteamUser_GetGuestPassToRedeemSenderAddress(%p)", _this);
  return false;
}

bool ISteamUser_GetGuestPassToRedeemSenderName(void *_this, uint32 a, char *b, int c) {
  debug("ISteamUser_GetGuestPassToRedeemSenderName(%p, %d, %s, %d)", _this, a, b, c);
  return false;
}

bool ISteamUser_GetRegistryInt(void *_this, ERegistrySubTree a, const char *b, int *c) {
  debug("ISteamUser_GetRegistryInt(%p, %d, %s,%p)", _this, a, b, c);
  return false;
}

bool ISteamUser_GetRegistryString(void *_this, ERegistrySubTree a, const char *b, char *c, int d) {
  debug("ISteamUser_GetRegistryString(%p, %d, %s, %s, %d)", _this, a, b, c, d);
  return false;
}

bool ISteamUser_GetUserDataFolder(void *_this, char *a, int b) {
  debug("ISteamUser_GetUserDataFolder(%p,%s,%d)", _this, a, b);
  return false;
}

bool ISteamUser_IsPrimaryChatDestination(void *_this) {
  debug("ISteamUser_IsPrimaryChatDestination(%p)", _this);
  return false;
}

bool ISteamUser_IsVACBanned(void *_this, EVACBan a) {
  debug("ISteamUser_IsVACBanned(%p,%d)", _this, a);
  return false;
}

bool ISteamUser_RedeemGuestPass(void *_this, const char *a) {
  debug("ISteamUser_RedeemGuestPass(%p, %s)", _this, a);
  return false;
}

bool ISteamUser_RequireShowVACBannedMessage(void *_this, EVACBan a) {
  debug("ISteamUser_RequireShowVACBannedMessage(%p, %d)", _this, a);
  return false;
}

bool ISteamUser_SendGuestPassByAccountID(void *_this, uint32 a, GID_t b, bool c) {
  debug("ISteamUser_SendGuestPassByAccountID(%p, %d, %" PRIu64 ", %d)", _this, a, b, c);
  return false;
}

bool ISteamUser_SendGuestPassByEmail(void *_this, const char *a, GID_t b, bool c) {
  debug("ISteamUser_SendGuestPassByEmail(%p, %s, %" PRIu64 ", %d)", _this, a, b, c);
  return false;
}

bool ISteamUser_SetEmail(void *_this, const char *a) {
  debug("ISteamUser_SetEmail(%p, %s)", _this, a);
  return false;
}

bool ISteamUser_SetLanguage(void *_this, const char *a) {
  debug("ISteamUser_SetLanguage(%p, %s)", _this, a);
  return false;
}

bool ISteamUser_SetRegistryInt(void *_this, ERegistrySubTree a, const char *b, int c) {
  debug("ISteamUser_SetRegistryInt(%p, %d, %s, %d)", _this, a, b, c);
  return false;
}

bool ISteamUser_SetRegistryString(void *_this, ERegistrySubTree a, const char *b, const char *c) {
  debug("ISteamUser_SetRegistryString(%p, %d, %s, %s)", _this, a, b, c);
  return false;
}

CSteamID ISteamUser_GetSteamID(void *_this) {
  debug("ISteamUser_GetSteamID(%p)", _this);
  return {};
}

EBeginAuthSessionResult ISteamUser_BeginAuthSession(void *_this, const void *a, int b, CSteamID c) {
  debug("ISteamUser_BeginAuthSession(%p, %p, %d, %" PRIu64 ")", _this, a, b, c);
  return {};
}

ELogonState ISteamUser_GetLogonState(void *_this) {
  debug("ISteamUser_GetLogonState(%p)", _this);
  return {};
}

EUserHasLicenseForAppResult ISteamUser_UserHasLicenseForApp(void *_this, CSteamID a, AppId_t b) {
  debug("ISteamUser_UserHasLicenseForApp(%p, %" PRIu64 ", %d)", _this, a, b);
  return {};
}

EVoiceResult ISteamUser_DecompressVoice(void *_this, const void *a, uint32 b, void *c, uint32 d, uint32 *e, uint32 f) {
  debug("ISteamUser_DecompressVoice(%p, %p, %d, %p, %d, %p, %d)", _this, a, b, c, d, e, f);
  return {};
}

EVoiceResult ISteamUser_DecompressVoice0(void *_this, void *a, uint32 b, void *c, uint32 d, uint32 *e) {
  debug("ISteamUser_DecompressVoice0(%p, %p, %d, %p, %d, %p)", _this, a, b, c, d, e);
  return {};
}

EVoiceResult ISteamUser_DecompressVoice1(void *_this, void *a, uint32 b, void *c, uint32 d, uint32 *e, uint32 f) {
  debug("ISteamUser_DecompressVoice1(%p, %p, %d, %p, %d, %p, %d)", _this, a, b, c, d, e, f);
  return {};
}

EVoiceResult ISteamUser_GetAvailableVoice(void *_this, uint32 *a, uint32 *b, uint32 c) {
  debug("ISteamUser_GetAvailableVoice(%p, %p, %p, %d)", _this, a, b, c);
  return {};
}

EVoiceResult ISteamUser_GetAvailableVoice0(void *_this, uint32 *a, uint32 *b) {
  debug("ISteamUser_GetAvailableVoice0(%p, %p, %p)", _this, a, b);
  return {};
}

EVoiceResult ISteamUser_GetCompressedVoice(void *_this, void *a, uint32 b, uint32 *c) {
  debug("ISteamUser_GetCompressedVoice(%p, %p, %d, %p)", _this, a, b, c);
  return {};
}

EVoiceResult ISteamUser_GetVoice(void *_this, bool a, void *b, uint32 c, uint32 *d, bool e, void *f, uint32 g, uint32 *h, uint32 i) {
  debug("ISteamUser_GetVoice(%p, %d, %p, %d, %p, %d, %p, %d, %p, %d)", _this, a, b, c, d, e, f, g, h, i);
  return {};
}

EVoiceResult ISteamUser_GetVoice0(void *_this, bool a, void *b, uint32 c, uint32 *d, bool e, void *f, uint32 g, uint32 *h) {
  debug("ISteamUser_GetVoice0(%p, %d, %p, %d, %p, %d, %p, %d, %p)", _this, a, b, c, d, e, f, g, h);
  return {};
}

HAuthTicket ISteamUser_GetAuthSessionTicket(void *_this, void *a, int b, uint32 *c) {
  debug("ISteamUser_GetAuthSessionTicket(%p, %p, %d, %p)", _this, a, b, c);
  return {};
}

HSteamUser ISteamUser_GetHSteamUser(void *_this) {
  debug("ISteamUser_GetHSteamUser(%p)", _this);
  return {};
}

int ISteamUser_GetGameBadgeLevel(void *_this, int a, bool b) {
  debug("ISteamUser_GetGameBadgeLevel(%p, %d, %d)", _this, a, b);
  return 0;
}

int ISteamUser_GetPlayerSteamLevel(void *_this) {
  debug("ISteamUser_GetPlayerSteamLevel(%p)", _this);
  return 0;
}

int ISteamUser_GetSteamGameConnectToken(void *_this, void *a, int b) {
  debug("ISteamUser_GetSteamGameConnectToken(%p, %p, %d)", _this, a, b);
  return 0;
}

int ISteamUser_InitiateGameConnection(void *_this, void *a, int b, CSteamID c, CGameID d, uint32 e, uint16 f, bool g) {
  debug("ISteamUser_InitiateGameConnection(%p, %p, %d, %" PRIu64 ", %p, %d, %d, %d)", _this, a, b, c, &d, e, f, g);
  return 0;
}

int ISteamUser_InitiateGameConnection(void *_this, void *a, int b, CSteamID c, CGameID d, uint32 e, uint16 f, bool g, void *h, int i) {
  debug("ISteamUser_InitiateGameConnection(%p, %p, %d, %" PRIu64 ", %p, %d, %d, %d, %p, %d)", _this, a, b, c, &d, e, f, g, h, i);
  return 0;
}

int ISteamUser_InitiateGameConnection(void *_this, void *a, int b, CSteamID c, int d, uint32 e, uint16 f, bool g) {
  debug("ISteamUser_InitiateGameConnection(%p, %p, %d, %" PRIu64 ", %d, %d, %d, %d)", _this, a, b, c, d, e, f, g);
  return 0;
}

int ISteamUser_InitiateGameConnection(void *_this, void *a, int b, CSteamID c, uint32 d, uint16 e, bool f) {
  debug("ISteamUser_InitiateGameConnection(%p, %p, %d, %" PRIu64 ", %d, %d, %d)", _this, a, b, c, d, e, f);
  return 0;
}

int ISteamUser_NClientGameIDAdd(void *_this, int a) {
  debug("ISteamUser_NClientGameIDAdd(%p, %d)", _this, a);
  return 0;
}

SteamAPICall_t ISteamUser_RequestEncryptedAppTicket(void *_this, void *a, int b) {
  debug("ISteamUser_RequestEncryptedAppTicket(%p, %p, %d)", _this, a, b);
  return {};
}

uint32 ISteamUser_GetGuestPassLastUpdateTime(void *_this) {
  debug("ISteamUser_GetGuestPassLastUpdateTime(%p)", _this);
  return 0;
}

uint32 ISteamUser_GetGuestPassToGiveCount(void *_this) {
  debug("ISteamUser_GetGuestPassToGiveCount(%p)", _this);
  return 0;
}

uint32 ISteamUser_GetGuestPassToRedeemCount(void *_this) {
  debug("ISteamUser_GetGuestPassToRedeemCount(%p)", _this);
  return 0;
}

uint32 ISteamUser_GetVoiceOptimalSampleRate(void *_this) {
  debug("ISteamUser_GetVoiceOptimalSampleRate(%p)", _this);
  return 0;
}

void ISteamUser_AcknowledgeMessageByGID(void *_this, const char *a) {
  debug("ISteamUser_AcknowledgeMessageByGID(%p, %s)", _this, a);
}

void ISteamUser_AcknowledgeVACBanning(void *_this, EVACBan a) {
  debug("ISteamUser_AcknowledgeVACBanning(%p, %d)", _this, a);
}

void ISteamUser_AddServerNetAddress(void *_this, uint32 a, uint16 b) {
  debug("ISteamUser_AddServerNetAddress(%p, %d, %d)", _this, a, b);
}

void ISteamUser_AdvertiseGame(void *_this, CSteamID a, uint32 b, uint16 c) {
  debug("ISteamUser_AdvertiseGame(%p, %" PRIu64 ", %d, %d)", _this, a, b, c);
}

void ISteamUser_CancelAuthTicket(void *_this, HAuthTicket a) {
  debug("ISteamUser_CancelAuthTicket(%p, %d)", _this, a);
}

void ISteamUser_EndAuthSession(void *_this, CSteamID a) {
  debug("ISteamUser_EndAuthSession(%p, %" PRIu64 ")", _this, a);
}

void ISteamUser_LogOff(void *_this) {
  debug("ISteamUser_LogOff(%p)", _this);
}

void ISteamUser_LogOn(void *_this, CSteamID a) {
  debug("ISteamUser_LogOn(%p, %" PRIu64 ")", _this, a);
}

void ISteamUser_RefreshSteam2Login(void *_this) {
  debug("ISteamUser_RefreshSteam2Login(%p)", _this);
}

void ISteamUser_RemoveClientGame(void *_this, int a) {
  debug("ISteamUser_RemoveClientGame(%p, %d)", _this, a);
}

void ISteamUser_RequestLegacyCDKey(void *_this, AppId_t a) {
  debug("ISteamUser_RequestLegacyCDKey(%p, %d)", _this, a);
}

void ISteamUser_SetAccountCreationTime(void *_this, RTime32 a) {
  debug("ISteamUser_SetAccountCreationTime(%p, %d)", _this, a);
}

void ISteamUser_SetAccountName(void *_this, const char *a) {
  debug("ISteamUser_SetAccountName(%p, %s)", _this, a);
}

void ISteamUser_SetClientGameServer(void *_this, int a, uint32 b, uint16 c) {
  debug("ISteamUser_SetClientGameServer(%p, %d, %d, %d)", _this, a, b, c);
}

void ISteamUser_SetPassword(void *_this, const char *a) {
  debug("ISteamUser_SetPassword(%p, %s)", _this, a);
}

void ISteamUser_SetSelfAsPrimaryChatDestination(void *_this) {
  debug("ISteamUser_SetSelfAsPrimaryChatDestination(%p)", _this);
}

void ISteamUser_SetSteam2Ticket(void *_this, uint8 *a, int b) {
  debug("ISteamUser_SetSteam2Ticket(%p, %p,%d)", _this, a, b);
}

void ISteamUser_StartVoiceRecording(void *_this) {
  debug("ISteamUser_StartVoiceRecording(%p)", _this);
}

void ISteamUser_StopVoiceRecording(void *_this) {
  debug("ISteamUser_StopVoiceRecording(%p)", _this);
}

void ISteamUser_TerminateGameConnection(void *_this, uint32 ip, uint16 port) {
  debug("ISteamUser_TerminateGameConnection(%p, %d, %d)", _this, ip, port);
}

void ISteamUser_TrackAppUsageEvent(void *_this, CGameID a, EAppUsageEvent b, const char *c) {
  debug("ISteamUser_TrackAppUsageEvent(%p)", _this);
}
} // namespace svabi
