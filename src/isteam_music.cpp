#include "steakworms.hpp"

bool ISteamMusic::BIsEnabled() {
  debug("ISteamMusic::BIsEnabled()");
  return true;
}

bool ISteamMusic::BIsPlaying() {
  debug("ISteamMusic::BIsPlaying()");
  return true;
}

AudioPlayback_Status ISteamMusic::GetPlaybackStatus() {
  debug("ISteamMusic::GetPlaybackStatus()");
  return {};
}

void ISteamMusic::Play() { debug("ISteamMusic::Play()"); }

void ISteamMusic::Pause() { debug("ISteamMusic::Pause()"); }

void ISteamMusic::PlayPrevious() { debug("ISteamMusic::PlayPrevious()"); }

void ISteamMusic::PlayNext() { debug("ISteamMusic::PlayNext()"); }

void ISteamMusic::SetVolume(float flVolume) {
  debug("ISteamMusic::SetVolume()");
}

float ISteamMusic::GetVolume() {
  debug("ISteamMusic::GetVolume()");
  return 0.f;
}
