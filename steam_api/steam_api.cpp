#include <cstdint>

#include <windef.h>

extern "C" {
extern void SteamAPI_RestartAppIfNecessary();
extern void SteamAPI_Init();

extern void SteamClient();
extern void SteamUser();
extern void SteamGameServer();
extern void SteamFriends();
extern void SteamUtils();
extern void SteamMatchmaking();
extern void SteamMatchmakingServers();
extern void SteamUserStats();
extern void SteamGameServerStats();
extern void SteamApps();
extern void SteamNetworking();
extern void SteamRemoteStorage();
extern void SteamScreenshots();
extern void SteamHTTP();
extern void SteamController();
extern void SteamUGC();
extern void SteamAppList();
extern void SteamMusic();
extern void SteamMusicRemote();
extern void SteamHTMLSurface();
extern void SteamInventory();
extern void SteamVideo();
extern void SteamParentalSettings();

void _SteamAPI_RestartAppIfNecessary() { SteamAPI_RestartAppIfNecessary(); }
void _SteamAPI_Init() { SteamAPI_Init(); }

void _SteamClient() { SteamClient(); }
void _SteamUser() { SteamUser(); }
void _SteamGameServer() { SteamGameServer(); }
void _SteamFriends() { SteamFriends(); }
void _SteamUtils() { SteamUtils(); }
void _SteamMatchmaking() { SteamMatchmaking(); }
void _SteamMatchmakingServers() { SteamMatchmakingServers(); }
void _SteamUserStats() { SteamUserStats(); }
void _SteamGameServerStats() { SteamGameServerStats(); }
void _SteamApps() { SteamApps(); }
void _SteamNetworking() { SteamNetworking(); }
void _SteamRemoteStorage() { SteamRemoteStorage(); }
void _SteamScreenshots() { SteamScreenshots(); }
void _SteamHTTP() { SteamHTTP(); }
void _SteamController() { SteamController(); }
void _SteamUGC() { SteamUGC(); }
void _SteamAppList() { SteamAppList(); }
void _SteamMusic() { SteamMusic(); }
void _SteamMusicRemote() { SteamMusicRemote(); }
void _SteamHTMLSurface() { SteamHTMLSurface(); }
void _SteamInventory() { SteamInventory(); }
void _SteamVideo() { SteamVideo(); }
void _SteamParentalSettings() { SteamParentalSettings(); }
}
