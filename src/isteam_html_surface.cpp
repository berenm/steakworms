#include "steakworms.hpp"

void ISteamHTMLSurface::DestructISteamHTMLSurface() {
  debug("ISteamHTMLSurface::DestructISteamHTMLSurface()");
}

bool ISteamHTMLSurface::Init() {
  debug("ISteamHTMLSurface::Init()");
  return true;
}

bool ISteamHTMLSurface::Shutdown() {
  debug("ISteamHTMLSurface::Shutdown()");
  return true;
}

SteamAPICall_t ISteamHTMLSurface::CreateBrowser(const char *pchUserAgent,
                                                const char *pchUserCSS) {
  debug("ISteamHTMLSurface::CreateBrowser()");
  return {};
}

void ISteamHTMLSurface::RemoveBrowser(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::RemoveBrowser()");
}

void ISteamHTMLSurface::LoadURL(HHTMLBrowser unBrowserHandle,
                                const char *pchURL, const char *pchPostData) {
  debug("ISteamHTMLSurface::LoadURL()");
}

void ISteamHTMLSurface::SetSize(HHTMLBrowser unBrowserHandle, uint32 unWidth,
                                uint32 unHeight) {
  debug("ISteamHTMLSurface::SetSize()");
}

void ISteamHTMLSurface::StopLoad(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::StopLoad()");
}

void ISteamHTMLSurface::Reload(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::Reload()");
}

void ISteamHTMLSurface::GoBack(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::GoBack()");
}

void ISteamHTMLSurface::GoForward(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::GoForward()");
}

void ISteamHTMLSurface::AddHeader(HHTMLBrowser unBrowserHandle,
                                  const char *pchKey, const char *pchValue) {
  debug("ISteamHTMLSurface::AddHeader()");
}

void ISteamHTMLSurface::ExecuteJavascript(HHTMLBrowser unBrowserHandle,
                                          const char * pchScript) {
  debug("ISteamHTMLSurface::ExecuteJavascript()");
}

void ISteamHTMLSurface::MouseUp(
    HHTMLBrowser                        unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
  debug("ISteamHTMLSurface::MouseUp()");
}

void ISteamHTMLSurface::MouseDown(
    HHTMLBrowser                        unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
  debug("ISteamHTMLSurface::MouseDown()");
}

void ISteamHTMLSurface::MouseDoubleClick(
    HHTMLBrowser                        unBrowserHandle,
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton) {
  debug("ISteamHTMLSurface::MouseDoubleClick()");
}

void ISteamHTMLSurface::MouseMove(HHTMLBrowser unBrowserHandle, int x, int y) {
  debug("ISteamHTMLSurface::MouseMove()");
}

void ISteamHTMLSurface::MouseWheel(HHTMLBrowser unBrowserHandle, int32 nDelta) {
  debug("ISteamHTMLSurface::MouseWheel()");
}

void ISteamHTMLSurface::KeyDown(
    HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
  debug("ISteamHTMLSurface::KeyDown()");
}

void ISteamHTMLSurface::KeyUp(
    HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
  debug("ISteamHTMLSurface::KeyUp()");
}

void ISteamHTMLSurface::KeyChar(
    HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar,
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers) {
  debug("ISteamHTMLSurface::KeyChar()");
}

void ISteamHTMLSurface::SetHorizontalScroll(HHTMLBrowser unBrowserHandle,
                                            uint32       nAbsolutePixelScroll) {
  debug("ISteamHTMLSurface::SetHorizontalScroll()");
}

void ISteamHTMLSurface::SetVerticalScroll(HHTMLBrowser unBrowserHandle,
                                          uint32       nAbsolutePixelScroll) {
  debug("ISteamHTMLSurface::SetVerticalScroll()");
}

void ISteamHTMLSurface::SetKeyFocus(HHTMLBrowser unBrowserHandle,
                                    bool         bHasKeyFocus) {
  debug("ISteamHTMLSurface::SetKeyFocus()");
}

void ISteamHTMLSurface::ViewSource(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::ViewSource()");
}

void ISteamHTMLSurface::CopyToClipboard(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::CopyToClipboard()");
}

void ISteamHTMLSurface::PasteFromClipboard(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::PasteFromClipboard()");
}

void ISteamHTMLSurface::Find(HHTMLBrowser unBrowserHandle,
                             const char *pchSearchStr, bool bCurrentlyInFind,
                             bool bReverse) {
  debug("ISteamHTMLSurface::Find()");
}

void ISteamHTMLSurface::StopFind(HHTMLBrowser unBrowserHandle) {
  debug("ISteamHTMLSurface::StopFind()");
}

void ISteamHTMLSurface::GetLinkAtPosition(HHTMLBrowser unBrowserHandle, int x,
                                          int y) {
  debug("ISteamHTMLSurface::GetLinkAtPosition()");
}

void ISteamHTMLSurface::SetCookie(const char *pchHostname, const char *pchKey,
                                  const char *pchValue, const char *pchPath,
                                  RTime32 nExpires, bool bSecure,
                                  bool bHTTPOnly) {
  debug("ISteamHTMLSurface::SetCookie()");
}

void ISteamHTMLSurface::SetPageScaleFactor(HHTMLBrowser unBrowserHandle,
                                           float flZoom, int nPointX,
                                           int nPointY) {
  debug("ISteamHTMLSurface::SetPageScaleFactor()");
}

void ISteamHTMLSurface::SetBackgroundMode(HHTMLBrowser unBrowserHandle,
                                          bool         bBackgroundMode) {
  debug("ISteamHTMLSurface::SetBackgroundMode()");
}

void ISteamHTMLSurface::SetDPIScalingFactor(HHTMLBrowser unBrowserHandle,
                                            float        flDPIScaling) {
  debug("ISteamHTMLSurface::SetDPIScalingFactor()");
}

void ISteamHTMLSurface::AllowStartRequest(HHTMLBrowser unBrowserHandle,
                                          bool         bAllowed) {
  debug("ISteamHTMLSurface::AllowStartRequest()");
}

void ISteamHTMLSurface::JSDialogResponse(HHTMLBrowser unBrowserHandle,
                                         bool         bResult) {
  debug("ISteamHTMLSurface::JSDialogResponse()");
}
