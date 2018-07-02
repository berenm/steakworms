#include "steakworms.hpp"

HServerListRequest ISteamMatchmakingServers::RequestInternetServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestInternetServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestLANServerList(
    AppId_t                                    iApp,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestLANServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestFriendsServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestFriendsServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestFavoritesServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestFavoritesServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestHistoryServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestHistoryServerList()");
  return {};
}

HServerListRequest ISteamMatchmakingServers::RequestSpectatorServerList(
    AppId_t iApp, struct MatchMakingKeyValuePair_t **ppchFilters,
    uint32                                     nFilters,
    class ISteamMatchmakingServerListResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::RequestSpectatorServerList()");
  return {};
}

void ISteamMatchmakingServers::ReleaseRequest(
    HServerListRequest hServerListRequest) {
  debug("ISteamMatchmakingServers::ReleaseRequest()");
}

gameserveritem_t *
ISteamMatchmakingServers::GetServerDetails(HServerListRequest hRequest,
                                           int                iServer) {
  debug("ISteamMatchmakingServers::GetServerDetails()");
  return nullptr;
}

void ISteamMatchmakingServers::CancelQuery(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::CancelQuery()");
}

void ISteamMatchmakingServers::RefreshQuery(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::RefreshQuery()");
}

bool ISteamMatchmakingServers::IsRefreshing(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::IsRefreshing()");
  return true;
}

int ISteamMatchmakingServers::GetServerCount(HServerListRequest hRequest) {
  debug("ISteamMatchmakingServers::GetServerCount()");
  return 0;
}

void ISteamMatchmakingServers::RefreshServer(HServerListRequest hRequest,
                                             int                iServer) {
  debug("ISteamMatchmakingServers::RefreshServer()");
}

HServerQuery ISteamMatchmakingServers::PingServer(
    uint32 unIP, uint16 usPort,
    class ISteamMatchmakingPingResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::PingServer()");
  return {};
}

HServerQuery ISteamMatchmakingServers::PlayerDetails(
    uint32 unIP, uint16 usPort,
    class ISteamMatchmakingPlayersResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::PlayerDetails()");
  return {};
}

HServerQuery ISteamMatchmakingServers::ServerRules(
    uint32 unIP, uint16 usPort,
    class ISteamMatchmakingRulesResponse *pRequestServersResponse) {
  debug("ISteamMatchmakingServers::ServerRules()");
  return {};
}

void ISteamMatchmakingServers::CancelServerQuery(HServerQuery hServerQuery) {
  debug("ISteamMatchmakingServers::CancelServerQuery()");
}
