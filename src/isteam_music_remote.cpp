#include "steakworms.hpp"

bool ISteamMusicRemote::RegisterSteamMusicRemote(const char *pchName) {
  debug("ISteamMusicRemote::RegisterSteamMusicRemote()");
  return true;
}

bool ISteamMusicRemote::DeregisterSteamMusicRemote() {
  debug("ISteamMusicRemote::DeregisterSteamMusicRemote()");
  return true;
}

bool ISteamMusicRemote::BIsCurrentMusicRemote() {
  debug("ISteamMusicRemote::BIsCurrentMusicRemote()");
  return true;
}

bool ISteamMusicRemote::BActivationSuccess(bool bValue) {
  debug("ISteamMusicRemote::BActivationSuccess()");
  return true;
}

bool ISteamMusicRemote::SetDisplayName(const char *pchDisplayName) {
  debug("ISteamMusicRemote::SetDisplayName()");
  return true;
}

bool ISteamMusicRemote::SetPNGIcon_64x64(void * pvBuffer,
                                         uint32 cbBufferLength) {
  debug("ISteamMusicRemote::SetPNGIcon_64x64()");
  return true;
}

bool ISteamMusicRemote::EnablePlayPrevious(bool bValue) {
  debug("ISteamMusicRemote::EnablePlayPrevious()");
  return true;
}

bool ISteamMusicRemote::EnablePlayNext(bool bValue) {
  debug("ISteamMusicRemote::EnablePlayNext()");
  return true;
}

bool ISteamMusicRemote::EnableShuffled(bool bValue) {
  debug("ISteamMusicRemote::EnableShuffled()");
  return true;
}

bool ISteamMusicRemote::EnableLooped(bool bValue) {
  debug("ISteamMusicRemote::EnableLooped()");
  return true;
}

bool ISteamMusicRemote::EnableQueue(bool bValue) {
  debug("ISteamMusicRemote::EnableQueue()");
  return true;
}

bool ISteamMusicRemote::EnablePlaylists(bool bValue) {
  debug("ISteamMusicRemote::EnablePlaylists()");
  return true;
}

bool ISteamMusicRemote::UpdatePlaybackStatus(AudioPlayback_Status nStatus) {
  debug("ISteamMusicRemote::UpdatePlaybackStatus()");
  return true;
}

bool ISteamMusicRemote::UpdateShuffled(bool bValue) {
  debug("ISteamMusicRemote::UpdateShuffled()");
  return true;
}

bool ISteamMusicRemote::UpdateLooped(bool bValue) {
  debug("ISteamMusicRemote::UpdateLooped()");
  return true;
}

bool ISteamMusicRemote::UpdateVolume(float flValue) {
  debug("ISteamMusicRemote::UpdateVolume()");
  return true;
}

bool ISteamMusicRemote::CurrentEntryWillChange() {
  debug("ISteamMusicRemote::CurrentEntryWillChange()");
  return true;
}

bool ISteamMusicRemote::CurrentEntryIsAvailable(bool bAvailable) {
  debug("ISteamMusicRemote::CurrentEntryIsAvailable()");
  return true;
}

bool ISteamMusicRemote::UpdateCurrentEntryText(const char *pchText) {
  debug("ISteamMusicRemote::UpdateCurrentEntryText()");
  return true;
}

bool ISteamMusicRemote::UpdateCurrentEntryElapsedSeconds(int nValue) {
  debug("ISteamMusicRemote::UpdateCurrentEntryElapsedSeconds()");
  return true;
}

bool ISteamMusicRemote::UpdateCurrentEntryCoverArt(void * pvBuffer,
                                                   uint32 cbBufferLength) {
  debug("ISteamMusicRemote::UpdateCurrentEntryCoverArt()");
  return true;
}

bool ISteamMusicRemote::CurrentEntryDidChange() {
  debug("ISteamMusicRemote::CurrentEntryDidChange()");
  return true;
}

bool ISteamMusicRemote::QueueWillChange() {
  debug("ISteamMusicRemote::QueueWillChange()");
  return true;
}

bool ISteamMusicRemote::ResetQueueEntries() {
  debug("ISteamMusicRemote::ResetQueueEntries()");
  return true;
}

bool ISteamMusicRemote::SetQueueEntry(int nID, int nPosition,
                                      const char *pchEntryText) {
  debug("ISteamMusicRemote::SetQueueEntry()");
  return true;
}

bool ISteamMusicRemote::SetCurrentQueueEntry(int nID) {
  debug("ISteamMusicRemote::SetCurrentQueueEntry()");
  return true;
}

bool ISteamMusicRemote::QueueDidChange() {
  debug("ISteamMusicRemote::QueueDidChange()");
  return true;
}

bool ISteamMusicRemote::PlaylistWillChange() {
  debug("ISteamMusicRemote::PlaylistWillChange()");
  return true;
}

bool ISteamMusicRemote::ResetPlaylistEntries() {
  debug("ISteamMusicRemote::ResetPlaylistEntries()");
  return true;
}

bool ISteamMusicRemote::SetPlaylistEntry(int nID, int nPosition,
                                         const char *pchEntryText) {
  debug("ISteamMusicRemote::SetPlaylistEntry()");
  return true;
}

bool ISteamMusicRemote::SetCurrentPlaylistEntry(int nID) {
  debug("ISteamMusicRemote::SetCurrentPlaylistEntry()");
  return true;
}

bool ISteamMusicRemote::PlaylistDidChange() {
  debug("ISteamMusicRemote::PlaylistDidChange()");
  return true;
}
