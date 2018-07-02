#include "steakworms.hpp"

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
