#include "steakworms.hpp"

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
