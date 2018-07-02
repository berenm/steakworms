#include "steakworms.hpp"

bool ISteamNetworking::SendP2PPacket(CSteamID    steamIDRemote,
                                     const void *pubData, uint32 cubData,
                                     EP2PSend eP2PSendType, int nChannel) {
  debug("ISteamNetworking::SendP2PPacket()");
  return true;
}

bool ISteamNetworking::IsP2PPacketAvailable(uint32 *pcubMsgSize, int nChannel) {
  debug("ISteamNetworking::IsP2PPacketAvailable()");
  return true;
}

bool ISteamNetworking::ReadP2PPacket(void *pubDest, uint32 cubDest,
                                     uint32 *  pcubMsgSize,
                                     CSteamID *psteamIDRemote, int nChannel) {
  debug("ISteamNetworking::ReadP2PPacket()");
  return true;
}

bool ISteamNetworking::AcceptP2PSessionWithUser(CSteamID steamIDRemote) {
  debug("ISteamNetworking::AcceptP2PSessionWithUser()");
  return true;
}

bool ISteamNetworking::CloseP2PSessionWithUser(CSteamID steamIDRemote) {
  debug("ISteamNetworking::CloseP2PSessionWithUser()");
  return true;
}

bool ISteamNetworking::CloseP2PChannelWithUser(CSteamID steamIDRemote,
                                               int      nChannel) {
  debug("ISteamNetworking::CloseP2PChannelWithUser()");
  return true;
}

bool ISteamNetworking::GetP2PSessionState(
    CSteamID steamIDRemote, struct P2PSessionState_t *pConnectionState) {
  debug("ISteamNetworking::GetP2PSessionState()");
  return true;
}

bool ISteamNetworking::AllowP2PPacketRelay(bool bAllow) {
  debug("ISteamNetworking::AllowP2PPacketRelay()");
  return true;
}

SNetListenSocket_t
ISteamNetworking::CreateListenSocket(int nVirtualP2PPort, uint32 nIP,
                                     uint16 nPort,
                                     bool   bAllowUseOfPacketRelay) {
  debug("ISteamNetworking::CreateListenSocket()");
  return {};
}

SNetSocket_t
ISteamNetworking::CreateP2PConnectionSocket(CSteamID steamIDTarget,
                                            int nVirtualPort, int nTimeoutSec,
                                            bool bAllowUseOfPacketRelay) {
  debug("ISteamNetworking::CreateP2PConnectionSocket()");
  return {};
}

SNetSocket_t ISteamNetworking::CreateConnectionSocket(uint32 nIP, uint16 nPort,
                                                      int nTimeoutSec) {
  debug("ISteamNetworking::CreateConnectionSocket()");
  return {};
}

bool ISteamNetworking::DestroySocket(SNetSocket_t hSocket,
                                     bool         bNotifyRemoteEnd) {
  debug("ISteamNetworking::DestroySocket()");
  return true;
}

bool ISteamNetworking::DestroyListenSocket(SNetListenSocket_t hSocket,
                                           bool bNotifyRemoteEnd) {
  debug("ISteamNetworking::DestroyListenSocket()");
  return true;
}

bool ISteamNetworking::SendDataOnSocket(SNetSocket_t hSocket, void *pubData,
                                        uint32 cubData, bool bReliable) {
  debug("ISteamNetworking::SendDataOnSocket()");
  return true;
}

bool ISteamNetworking::IsDataAvailableOnSocket(SNetSocket_t hSocket,
                                               uint32 *     pcubMsgSize) {
  debug("ISteamNetworking::IsDataAvailableOnSocket()");
  return true;
}

bool ISteamNetworking::RetrieveDataFromSocket(SNetSocket_t hSocket,
                                              void *pubDest, uint32 cubDest,
                                              uint32 *pcubMsgSize) {
  debug("ISteamNetworking::RetrieveDataFromSocket()");
  return true;
}

bool ISteamNetworking::IsDataAvailable(SNetListenSocket_t hListenSocket,
                                       uint32 *           pcubMsgSize,
                                       SNetSocket_t *     phSocket) {
  debug("ISteamNetworking::IsDataAvailable()");
  return true;
}

bool ISteamNetworking::RetrieveData(SNetListenSocket_t hListenSocket,
                                    void *pubDest, uint32 cubDest,
                                    uint32 *      pcubMsgSize,
                                    SNetSocket_t *phSocket) {
  debug("ISteamNetworking::RetrieveData()");
  return true;
}

bool ISteamNetworking::GetSocketInfo(SNetSocket_t hSocket,
                                     CSteamID *   pSteamIDRemote,
                                     int *peSocketStatus, uint32 *punIPRemote,
                                     uint16 *punPortRemote) {
  debug("ISteamNetworking::GetSocketInfo()");
  return true;
}

bool ISteamNetworking::GetListenSocketInfo(SNetListenSocket_t hListenSocket,
                                           uint32 *pnIP, uint16 *pnPort) {
  debug("ISteamNetworking::GetListenSocketInfo()");
  return true;
}

ESNetSocketConnectionType
ISteamNetworking::GetSocketConnectionType(SNetSocket_t hSocket) {
  debug("ISteamNetworking::GetSocketConnectionType()");
  return {};
}

int ISteamNetworking::GetMaxPacketSize(SNetSocket_t hSocket) {
  debug("ISteamNetworking::GetMaxPacketSize()");
  return 0;
}
