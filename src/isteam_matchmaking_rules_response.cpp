#include "steakworms.hpp"

void ISteamMatchmakingRulesResponse::RulesResponded(const char *pchRule,
                                                    const char *pchValue) {
  debug("ISteamMatchmakingRulesResponse::RulesResponded()");
}

void ISteamMatchmakingRulesResponse::RulesFailedToRespond() {
  debug("ISteamMatchmakingRulesResponse::RulesFailedToRespond()");
}

void ISteamMatchmakingRulesResponse::RulesRefreshComplete() {
  debug("ISteamMatchmakingRulesResponse::RulesRefreshComplete()");
}
