#include "steakworms.hpp"

void ISteamMatchmakingServerListResponse::ServerResponded(
    HServerListRequest hRequest, int iServer) {
  debug("ISteamMatchmakingServerListResponse::ServerResponded()");
}

void ISteamMatchmakingServerListResponse::ServerFailedToRespond(
    HServerListRequest hRequest, int iServer) {
  debug("ISteamMatchmakingServerListResponse::ServerFailedToRespond()");
}

void ISteamMatchmakingServerListResponse::RefreshComplete(
    HServerListRequest hRequest, EMatchMakingServerResponse response) {
  debug("ISteamMatchmakingServerListResponse::RefreshComplete()");
}
