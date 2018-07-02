#include "steakworms.hpp"

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
  return SteamAPI_Context()->SteamUser();
}

ISteamGameServer *ISteamClient::GetISteamGameServer(HSteamUser  hSteamUser,
                                                    HSteamPipe  hSteamPipe,
                                                    const char *pchVersion) {
  debug("ISteamClient::GetISteamGameServer(%s)", pchVersion);
  return SteamAPI_Context()->SteamGameServer();
}

void ISteamClient::SetLocalIPBinding(uint32_t unIP, uint16_t usPort) {
  debug("ISteamClient::SetLocalIPBinding()");
}

ISteamFriends *ISteamClient::GetISteamFriends(HSteamUser  hSteamUser,
                                              HSteamPipe  hSteamPipe,
                                              const char *pchVersion) {
  debug("ISteamClient::GetISteamFriends(%s)", pchVersion);
  return SteamAPI_Context()->SteamFriends();
}

ISteamUtils *ISteamClient::GetISteamUtils(HSteamPipe  hSteamPipe,
                                          const char *pchVersion) {
  debug("ISteamClient::GetISteamUtils(%s)", pchVersion);
  return SteamAPI_Context()->SteamUtils();
}

ISteamMatchmaking *ISteamClient::GetISteamMatchmaking(HSteamUser  hSteamUser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamMatchmaking(%s)", pchVersion);
  return SteamAPI_Context()->SteamMatchmaking();
}

ISteamMatchmakingServers *ISteamClient::GetISteamMatchmakingServers(
    HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamMatchmakingServers(%s)", pchVersion);
  return SteamAPI_Context()->SteamMatchmakingServers();
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
  return SteamAPI_Context()->SteamUserStats();
}

ISteamGameServerStats *ISteamClient::GetISteamGameServerStats(
    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamGameServerStats(%s)", pchVersion);
  return SteamAPI_Context()->SteamGameServerStats();
}

ISteamApps *ISteamClient::GetISteamApps(HSteamUser  hSteamUser,
                                        HSteamPipe  hSteamPipe,
                                        const char *pchVersion) {
  debug("ISteamClient::GetISteamApps(%s)", pchVersion);
  return SteamAPI_Context()->SteamApps();
}

ISteamNetworking *ISteamClient::GetISteamNetworking(HSteamUser  hSteamUser,
                                                    HSteamPipe  hSteamPipe,
                                                    const char *pchVersion) {
  debug("ISteamClient::GetISteamNetworking(%s)", pchVersion);
  return SteamAPI_Context()->SteamNetworking();
}

ISteamRemoteStorage *ISteamClient::GetISteamRemoteStorage(
    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamRemoteStorage(%s)", pchVersion);
  return SteamAPI_Context()->SteamRemoteStorage();
}

ISteamScreenshots *ISteamClient::GetISteamScreenshots(HSteamUser  hSteamuser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamScreenshots(%s)", pchVersion);
  return SteamAPI_Context()->SteamScreenshots();
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
  return SteamAPI_Context()->SteamHTTP();
}

ISteamController *ISteamClient::GetISteamController(HSteamUser  hSteamUser,
                                                    HSteamPipe  hSteamPipe,
                                                    const char *pchVersion) {
  debug("ISteamClient::GetISteamController(%s)", pchVersion);
  return SteamAPI_Context()->SteamController();
}

ISteamUGC *ISteamClient::GetISteamUGC(HSteamUser  hSteamUser,
                                      HSteamPipe  hSteamPipe,
                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamUGC(%s)", pchVersion);
  return SteamAPI_Context()->SteamUGC();
}

ISteamAppList *ISteamClient::GetISteamAppList(HSteamUser  hSteamUser,
                                              HSteamPipe  hSteamPipe,
                                              const char *pchVersion) {
  debug("ISteamClient::GetISteamAppList(%s)", pchVersion);
  return SteamAPI_Context()->SteamAppList();
}

ISteamMusic *ISteamClient::GetISteamMusic(HSteamUser  hSteamuser,
                                          HSteamPipe  hSteamPipe,
                                          const char *pchVersion) {
  debug("ISteamClient::GetISteamMusic(%s)", pchVersion);
  return SteamAPI_Context()->SteamMusic();
}

ISteamMusicRemote *ISteamClient::GetISteamMusicRemote(HSteamUser  hSteamuser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamMusicRemote(%s)", pchVersion);
  return SteamAPI_Context()->SteamMusicRemote();
}

ISteamHTMLSurface *ISteamClient::GetISteamHTMLSurface(HSteamUser  hSteamuser,
                                                      HSteamPipe  hSteamPipe,
                                                      const char *pchVersion) {
  debug("ISteamClient::GetISteamHTMLSurface(%s)", pchVersion);
  return SteamAPI_Context()->SteamHTMLSurface();
}

ISteamInventory *ISteamClient::GetISteamInventory(HSteamUser  hSteamuser,
                                                  HSteamPipe  hSteamPipe,
                                                  const char *pchVersion) {
  debug("ISteamClient::GetISteamInventory(%s)", pchVersion);
  return SteamAPI_Context()->SteamInventory();
}

ISteamVideo *ISteamClient::GetISteamVideo(HSteamUser  hSteamuser,
                                          HSteamPipe  hSteamPipe,
                                          const char *pchVersion) {
  debug("ISteamClient::GetISteamVideo(%s)", pchVersion);
  return SteamAPI_Context()->SteamVideo();
}

ISteamParentalSettings *ISteamClient::GetISteamParentalSettings(
    HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) {
  debug("ISteamClient::GetISteamParentalSettings(%s)", pchVersion);
  return SteamAPI_Context()->SteamParentalSettings();
}
