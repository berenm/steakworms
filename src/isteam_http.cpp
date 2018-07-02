#include "steakworms.hpp"

HTTPRequestHandle ISteamHTTP::CreateHTTPRequest(EHTTPMethod eHTTPRequestMethod,
                                                const char *pchAbsoluteURL) {
  debug("ISteamHTTP::CreateHTTPRequest()");
  return {};
}

bool ISteamHTTP::SetHTTPRequestContextValue(HTTPRequestHandle hRequest,
                                            uint64            ulContextValue) {
  debug("ISteamHTTP::SetHTTPRequestContextValue()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestNetworkActivityTimeout(
    HTTPRequestHandle hRequest, uint32 unTimeoutSeconds) {
  debug("ISteamHTTP::SetHTTPRequestNetworkActivityTimeout()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestHeaderValue(HTTPRequestHandle hRequest,
                                           const char *      pchHeaderName,
                                           const char *      pchHeaderValue) {
  debug("ISteamHTTP::SetHTTPRequestHeaderValue()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestGetOrPostParameter(HTTPRequestHandle hRequest,
                                                  const char *pchParamName,
                                                  const char *pchParamValue) {
  debug("ISteamHTTP::SetHTTPRequestGetOrPostParameter()");
  return true;
}

bool ISteamHTTP::SendHTTPRequest(HTTPRequestHandle hRequest,
                                 SteamAPICall_t *  pCallHandle) {
  debug("ISteamHTTP::SendHTTPRequest()");
  return true;
}

bool ISteamHTTP::SendHTTPRequestAndStreamResponse(HTTPRequestHandle hRequest,
                                                  SteamAPICall_t *pCallHandle) {
  debug("ISteamHTTP::SendHTTPRequestAndStreamResponse()");
  return true;
}

bool ISteamHTTP::DeferHTTPRequest(HTTPRequestHandle hRequest) {
  debug("ISteamHTTP::DeferHTTPRequest()");
  return true;
}

bool ISteamHTTP::PrioritizeHTTPRequest(HTTPRequestHandle hRequest) {
  debug("ISteamHTTP::PrioritizeHTTPRequest()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseHeaderSize(HTTPRequestHandle hRequest,
                                           const char *      pchHeaderName,
                                           uint32 *unResponseHeaderSize) {
  debug("ISteamHTTP::GetHTTPResponseHeaderSize()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseHeaderValue(HTTPRequestHandle hRequest,
                                            const char *      pchHeaderName,
                                            uint8 *pHeaderValueBuffer,
                                            uint32 unBufferSize) {
  debug("ISteamHTTP::GetHTTPResponseHeaderValue()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseBodySize(HTTPRequestHandle hRequest,
                                         uint32 *          unBodySize) {
  debug("ISteamHTTP::GetHTTPResponseBodySize()");
  return true;
}

bool ISteamHTTP::GetHTTPResponseBodyData(HTTPRequestHandle hRequest,
                                         uint8 *           pBodyDataBuffer,
                                         uint32            unBufferSize) {
  debug("ISteamHTTP::GetHTTPResponseBodyData()");
  return true;
}

bool ISteamHTTP::GetHTTPStreamingResponseBodyData(HTTPRequestHandle hRequest,
                                                  uint32            cOffset,
                                                  uint8 *pBodyDataBuffer,
                                                  uint32 unBufferSize) {
  debug("ISteamHTTP::GetHTTPStreamingResponseBodyData()");
  return true;
}

bool ISteamHTTP::ReleaseHTTPRequest(HTTPRequestHandle hRequest) {
  debug("ISteamHTTP::ReleaseHTTPRequest()");
  return true;
}

bool ISteamHTTP::GetHTTPDownloadProgressPct(HTTPRequestHandle hRequest,
                                            float *           pflPercentOut) {
  debug("ISteamHTTP::GetHTTPDownloadProgressPct()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestRawPostBody(HTTPRequestHandle hRequest,
                                           const char *      pchContentType,
                                           uint8 *pubBody, uint32 unBodyLen) {
  debug("ISteamHTTP::SetHTTPRequestRawPostBody()");
  return true;
}

HTTPCookieContainerHandle
ISteamHTTP::CreateCookieContainer(bool bAllowResponsesToModify) {
  debug("ISteamHTTP::CreateCookieContainer()");
  return {};
}

bool ISteamHTTP::ReleaseCookieContainer(
    HTTPCookieContainerHandle hCookieContainer) {
  debug("ISteamHTTP::ReleaseCookieContainer()");
  return true;
}

bool ISteamHTTP::SetCookie(HTTPCookieContainerHandle hCookieContainer,
                           const char *pchHost, const char *pchUrl,
                           const char *pchCookie) {
  debug("ISteamHTTP::SetCookie()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestCookieContainer(
    HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer) {
  debug("ISteamHTTP::SetHTTPRequestCookieContainer()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestUserAgentInfo(HTTPRequestHandle hRequest,
                                             const char *pchUserAgentInfo) {
  debug("ISteamHTTP::SetHTTPRequestUserAgentInfo()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestRequiresVerifiedCertificate(
    HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate) {
  debug("ISteamHTTP::SetHTTPRequestRequiresVerifiedCertificate()");
  return true;
}

bool ISteamHTTP::SetHTTPRequestAbsoluteTimeoutMS(HTTPRequestHandle hRequest,
                                                 uint32 unMilliseconds) {
  debug("ISteamHTTP::SetHTTPRequestAbsoluteTimeoutMS()");
  return true;
}

bool ISteamHTTP::GetHTTPRequestWasTimedOut(HTTPRequestHandle hRequest,
                                           bool *            pbWasTimedOut) {
  debug("ISteamHTTP::GetHTTPRequestWasTimedOut()");
  return true;
}
