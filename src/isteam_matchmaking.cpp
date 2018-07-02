#include "steakworms.hpp"

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
