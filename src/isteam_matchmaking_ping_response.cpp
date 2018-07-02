#include "steakworms.hpp"

void ISteamMatchmakingPingResponse::ServerResponded(
    class gameserveritem_t &server) {
  debug("ISteamMatchmakingPingResponse::ServerResponded()");
}

void ISteamMatchmakingPingResponse::ServerFailedToRespond() {
  debug("ISteamMatchmakingPingResponse::ServerFailedToRespond()");
}
